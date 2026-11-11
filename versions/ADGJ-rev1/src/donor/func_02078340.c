/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206eb48 from projets/children-of-mana/src/auto/func_0206eb48.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 NNSGfdTexKey;
typedef NNSGfdTexKey (*NNSGfdFuncAllocTexVram)(u32 szByte, BOOL is4x4comp, u32 opt);
typedef int (*NNSGfdFuncFreeTexVram)(NNSGfdTexKey key);
extern NNSGfdFuncAllocTexVram data_0213b5b8;
extern NNSGfdFuncFreeTexVram data_0213b5bc;
inline NNSGfdTexKey NNS_GfdAllocTexVram(u32 szByte, BOOL is4x4comp, u32 opt) {
    return (*data_0213b5b8)(szByte, is4x4comp, opt);
}
inline int NNS_GfdFreeTexVram(NNSGfdTexKey memKey) {
    return (*data_0213b5bc)(memKey);
}
typedef u32 NNSGfdPlttKey;
typedef NNSGfdPlttKey (*NNSGfdFuncAllocPlttVram)(u32 szByte, BOOL is4pltt, u32 opt);
typedef int (*NNSGfdFuncFreePlttVram)(NNSGfdPlttKey plttKey);
extern NNSGfdFuncAllocPlttVram data_0213b5c0;
extern NNSGfdFuncFreePlttVram data_0213b5c4;
inline NNSGfdPlttKey NNS_GfdAllocPlttVram(u32 szByte, BOOL is4pltt, u32 opt) {
    return (*data_0213b5c0)(szByte, is4pltt, opt);
}
inline int NNS_GfdFreePlttVram(NNSGfdPlttKey plttKey) {
    return (*data_0213b5c4)(plttKey);
}
typedef enum {
    NNS_G3D_RESPLTT_LOADED   = 0x0001,
    NNS_G3D_RESPLTT_USEPLTT4 = 0x8000
} NNSG3dResPlttFlag;
typedef struct NNSG3dResFileHeader_ {
    union {
        char signature[4];
        u32 sigVal;
    };
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG3dResFileHeader;
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
typedef struct NNSG3dResDictTreeNode_ {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;
typedef struct NNSG3dResDict_ {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;

    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef struct NNSG3dResTexInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} NNSG3dResTexInfo;
typedef struct NNSG3dResTex4x4Info_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} NNSG3dResTex4x4Info;
typedef struct NNSG3dResPlttInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
typedef struct NNSG3dResMdlSet_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResDict dict;
} NNSG3dResMdlSet;
typedef u32 NNSG3dTexKey;
typedef u32 NNSG3dPlttKey;
extern u32 func_020756e0(const NNSG3dResTex *pTex);
extern u32 func_020756d4(const NNSG3dResTex *pTex);
extern void func_020756c0(NNSG3dResTex *pTex, NNSG3dTexKey texKey, NNSG3dTexKey tex4x4Key);
extern void func_020755e4(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern u32 func_020755d8(const NNSG3dResTex *pTex);
extern void func_020755d0(NNSG3dResTex *pTex, NNSG3dPlttKey plttKey);
extern void func_02075564(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern BOOL func_020751c8(NNSG3dResMdlSet *pMdlSet, const NNSG3dResTex *pTex);
extern BOOL func_02078340(void *pResData);
extern NNSG3dResMdlSet *func_02078be4(const NNSG3dResFileHeader *header);
extern NNSG3dResTex *func_02078ba4(const NNSG3dResFileHeader *header);
BOOL func_02078340(void *pResData) {
    u8 *binFile = (u8 *) pResData;
    BOOL failed = 0;

    switch (*(u32 *) &binFile[0]) {
        case '0XTB':
        case '0DMB': {
            NNSG3dResTex *tex;
            u32 szTex, szTex4x4, szPltt;
            BOOL sucTex    = 1;
            BOOL sucTex4x4 = 1;
            BOOL sucPltt   = 1;
            NNSG3dTexKey keyTex;
            NNSG3dTexKey keyTex4x4;
            NNSG3dPlttKey keyPltt;

            tex = func_02078ba4((NNSG3dResFileHeader *) pResData);
            if (tex) {
                szTex    = func_020756e0(tex);
                szTex4x4 = func_020756d4(tex);
                szPltt   = func_020755d8(tex);

                if (szTex > 0) {
                    keyTex = NNS_GfdAllocTexVram(szTex, 0, 0);
                    if (keyTex == (u32) 0x0) {
                        sucTex = 0;
                    }
                } else {
                    keyTex = 0;
                }

                if (szTex4x4 > 0) {
                    keyTex4x4 = NNS_GfdAllocTexVram(szTex4x4, 1, 0);
                    if (keyTex4x4 == (u32) 0x0) {
                        sucTex4x4 = 0;
                    }
                } else {
                    keyTex4x4 = 0;
                }

                if (szPltt > 0) {
                    keyPltt = NNS_GfdAllocPlttVram(szPltt, tex->tex4x4Info.flag & NNS_G3D_RESPLTT_USEPLTT4, 0);
                    if (keyPltt == (u32) 0x0) {
                        sucPltt = 0;
                    }
                } else {
                    keyPltt = 0;
                }

                if (!sucTex || !sucTex4x4 || !sucPltt) {
                    int status;

                    status = NNS_GfdFreePlttVram(keyPltt);
                    status = NNS_GfdFreeTexVram(keyTex4x4);
                    status = NNS_GfdFreeTexVram(keyTex);

                    return 0;
                }

                func_020756c0(tex, keyTex, keyTex4x4);
                func_020755d0(tex, keyPltt);

                func_020755e4(tex, 1);
                func_02075564(tex, 1);
            }

            if (*(u32 *) &binFile[0] == '0DMB') {
                NNSG3dResMdlSet *mdlSet = func_02078be4((NNSG3dResFileHeader *) pResData);

                if (tex) {
                    (void) func_020751c8(mdlSet, tex);
                }
            }
        }
            return 1;

        case '0ACB':
        case '0AVB':
        case '0AMB':
        case '0PTB':
        case '0ATB':
            return 1;

        default:
            return 0;
    }
}
