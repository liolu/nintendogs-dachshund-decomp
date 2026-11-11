/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02015fa0 from https://github.com/RonyxDumb/mkds src/arm9/02015fa0_func_02015fa0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 NNSGfdTexKey;
inline u32 NNSi_GfdGetTexKeyRoundupSize(u32 size) {
    if (size == 0) {
        return (0x1 << 4);
    } else {

        return (((u32) (size) + ((0x1 << 4) - 1)) & ~((0x1 << 4) - 1));
    }
}
inline NNSGfdTexKey NNS_GfdMakeTexKey(u32 addr, u32 size, BOOL b4x4Comp) {
    ((void) 0);
    ((void) 0);

    ((void) 0);
    ((void) 0);

    return ((size >> 4) << 16) | ((0xFFFF & (addr >> 3))) | b4x4Comp << 31;
}
extern NNSGfdTexKey func_0207c5b4(u32 szByte, BOOL is4x4comp, u32 opt);
typedef struct NNSGfdFrmTexRegionState {
    u32 head;
    u32 tail;
    BOOL bActive;
    const BOOL bHalfSize;
    const u16 index;
    const u16 pad16_;
    const u32 baseAddress;
} NNSGfdFrmTexRegionState;
extern NNSGfdFrmTexRegionState data_0213cd9c[5];
extern NNSGfdFrmTexRegionState *data_0213cd88[5];
extern NNSGfdFrmTexRegionState *data_0213cd80[2];
static inline u32 GetReagionCapacity_(const NNSGfdFrmTexRegionState *pRegion) {
    ((void) 0);
    ((void) 0);

    return (u32) (pRegion->tail - pRegion->head);
}
static inline u32 AllocFromReagionHead_(NNSGfdFrmTexRegionState *pRegion, u32 szByte) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    {
        const u32 result = pRegion->head;

        pRegion->head += szByte;

        return result;
    }
}
static inline u32 AllocFromReagionTail_(NNSGfdFrmTexRegionState *pRegion, u32 szByte) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    {
        pRegion->tail -= szByte;
        return pRegion->tail;
    }
}
static inline NNSGfdFrmTexRegionState *Get4x4IdxRegion_(const NNSGfdFrmTexRegionState *pRegion) {
    ((void) 0);
    switch (pRegion->index) {
        case 0:
            return &data_0213cd9c[1];
        case 3:
            return &data_0213cd9c[2];
        default:
            ((void) 0);
            break;
    }
    return 0;
}
static inline BOOL DoAlloc4x4_(u32 szByte, u32 *addr) {
    ((void) 0);
    ((void) 0);

    {
        int i;
        NNSGfdFrmTexRegionState *pRegion    = 0;
        NNSGfdFrmTexRegionState *pPltRegion = 0;

        for (i = 0; i < 2; i++) {
            pRegion = data_0213cd80[i];

            if (pRegion->bActive && GetReagionCapacity_(pRegion) >= szByte) {
                pPltRegion = Get4x4IdxRegion_(pRegion);

                if (pPltRegion->bActive && GetReagionCapacity_(pPltRegion) >= szByte / 2) {
                    *addr = AllocFromReagionHead_(pRegion, szByte);
                    (void) AllocFromReagionHead_(pPltRegion, szByte / 2);

                    *addr += pRegion->baseAddress;

                    return 1;
                }
            }
        }

        ((void) 0);
        return 0;
    }
}
static inline BOOL DoAllocNrm_(u32 szByte, u32 *addr) {
    ((void) 0);
    ((void) 0);

    {
        int i;
        NNSGfdFrmTexRegionState *pRegion = 0;

        for (i = 0; i < 5; i++) {
            pRegion = data_0213cd88[i];
            if (pRegion->bActive) {
                if (GetReagionCapacity_(pRegion) >= szByte) {
                    *addr = AllocFromReagionTail_(pRegion, szByte);

                    *addr += pRegion->baseAddress;

                    return 1;
                }
            }
        }

        ((void) 0);
        return 0;
    }
}
NNSGfdTexKey func_0207c5b4(u32 szByte, BOOL is4x4comp, u32 opt) {

#pragma unused(opt)
    u32 addr;
    BOOL result;

    ((void) 0);

    {
        szByte = NNSi_GfdGetTexKeyRoundupSize(szByte);

        if (szByte >= (0x7FFF << 4)) {
            ((void) 0);
            return (u32) 0x0;
        }

        ((void) 0);
    }

    if (is4x4comp) {
        result = DoAlloc4x4_(szByte, &addr);
    } else {
        result = DoAllocNrm_(szByte, &addr);
    }

    if (result) {
        return NNS_GfdMakeTexKey(addr, szByte, is4x4comp);
    } else {
        ((void) 0);
        return (u32) 0x0;
    }
}
