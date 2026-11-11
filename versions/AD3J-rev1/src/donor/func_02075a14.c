/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dAnmObjInit from https://github.com/7ucina/acww-decomp src/autoload_2/unk_02104000.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef struct AnmObj {
    s32 frame;
    s32 ratio;
    void *resAnm;
    void *funcAnm;
    struct AnmObj *next;
    const void *resTex;
    u8 priority;
} AnmObj;
typedef struct ResAnmHeader {
    u8 category0;
    u8 revision;
    u16 category1;
} ResAnmHeader;
typedef struct AnmObjInitFunc {
    u8 category0;
    u8 dummy_;
    u16 category1;
    void (*func)(AnmObj *, void *, const void *);
} AnmObjInitFunc;
extern u32 data_0213b3dc;
extern AnmObjInitFunc data_0213b400[10];
void func_02075a14(AnmObj *pAnmObj, void *pResAnm, const void *pResMdl, const void *pResTex) {
    const ResAnmHeader *hdr;
    u32 i;
    pAnmObj->frame    = 0;
    pAnmObj->resAnm   = pResAnm;
    pAnmObj->next     = 0;
    pAnmObj->priority = 127;
    pAnmObj->ratio    = 0x1000;
    pAnmObj->resTex   = pResTex;
    hdr               = (const ResAnmHeader *) pResAnm;
    for (i = 0; i < data_0213b3dc; ++i) {
        if (data_0213b400[i].category0 == hdr->category0 && data_0213b400[i].category1 == hdr->category1) {
            (*data_0213b400[i].func)(pAnmObj, pResAnm, pResMdl);
            break;
        }
    }
}
extern AnmObjInitFunc data_0213b400[10];
extern u32 data_0213b3dc;
