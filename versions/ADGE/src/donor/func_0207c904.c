/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* AnotherPaletteHandler from https://github.com/RonyxDumb/mkds src/arm9/020162d4_AnotherPaletteHandler.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
enum {
    NNS_GFD_ALLOC_FROM_HIGH = 0,
    NNS_GFD_ALLOC_FROM_LOW  = 1
};
typedef u32 NNSGfdPlttKey;
inline u32 NNSi_GfdGetPlttKeyRoundupSize(u32 size) {
    if (size == 0) {
        return (0x1 << 3);
    } else {
        return (((u32) (size) + ((0x1 << 3) - 1)) & ~((0x1 << 3) - 1));
    }
}
inline NNSGfdPlttKey NNS_GfdMakePlttKey(u32 addr, u32 size) {
    ((void) 0);
    ((void) 0);

    ((void) 0);
    ((void) 0);

    return ((size >> 3) << 16) | (0xFFFF & (addr >> 3));
}
extern NNSGfdPlttKey func_0207c904(u32 szByte, BOOL b4Pltt, u32 bAllocFromLo);
typedef struct NNSGfdFramPlttVramManager {
    u32 loAddr;
    u32 hiAddr;
    u32 szTotal;
} NNSGfdFrmPlttVramManager;
extern NNSGfdFrmPlttVramManager data_02153dd0;
static inline u32 GetUpperSideAlignmentSize_(u32 addr, BOOL b4Pltt) {
    if (b4Pltt) {
        return 0x07 & (0x08 - (addr & 0x07));
    } else {
        return 0x0F & (0x10 - (addr & 0x0F));
    }
}
static inline u32 GetLowerSideAlignmentSize_(u32 addr, BOOL b4Pltt) {
    if (b4Pltt) {
        return addr & 0x07;
    } else {
        return addr & 0x0F;
    }
}
static inline u32 GetCapacity_() {
    ((void) 0);
    return (u32) (data_02153dd0.hiAddr - data_02153dd0.loAddr);
}
static inline BOOL AllocFromLo_(u32 szByte, BOOL b4Pltt, u32 *pResAddr) {
    const u32 addr      = data_02153dd0.loAddr;
    const u32 alignment = GetUpperSideAlignmentSize_(addr, b4Pltt);
    const u32 increase  = szByte + alignment;

    ((void) 0);
    ((void) 0);

    if (GetCapacity_() >= increase) {
        const u32 tail = data_02153dd0.loAddr + increase;

        if (b4Pltt) {
            if (tail > 0x10000) {
                return 0;
            }
        }

        *pResAddr = data_02153dd0.loAddr + alignment;
        data_02153dd0.loAddr += increase;

        return 1;
    } else {
        return 0;
    }
}
static inline BOOL AllocFromHi_(u32 szByte, BOOL b4Pltt, u32 *pResAddr) {
    ((void) 0);
    ((void) 0);

    if (data_02153dd0.hiAddr >= szByte) {
        const u32 addr      = (u32) (data_02153dd0.hiAddr - szByte);
        const u32 alignment = GetLowerSideAlignmentSize_(addr, b4Pltt);
        const u32 increase  = szByte + alignment;

        if (GetCapacity_() >= increase) {
            const u32 tail = data_02153dd0.hiAddr;

            if (b4Pltt) {
                if (tail > 0x10000) {
                    return 0;
                }
            }

            data_02153dd0.hiAddr -= increase;
            *pResAddr = data_02153dd0.hiAddr;

            return 1;
        }
    }

    return 0;
}
NNSGfdPlttKey func_0207c904(u32 szByte, BOOL bPltt4, u32 allocFrom) {
    u32 addr    = 0x0;
    BOOL result = 0;

    ((void) 0);

    {
        szByte = NNSi_GfdGetPlttKeyRoundupSize(szByte);

        if (szByte >= (0xFFFF << 3)) {
            ((void) 0);
            return (u32) 0x0;
        }

        ((void) 0);
    }

    if (allocFrom == NNS_GFD_ALLOC_FROM_LOW) {
        result = AllocFromLo_(szByte, bPltt4, &addr);
    } else {
        result = AllocFromHi_(szByte, bPltt4, &addr);
    }

    if (result) {
        return NNS_GfdMakePlttKey(addr, szByte);
    }

NG_CASE:
    ((void) 0);
    return (u32) 0x0;
}
