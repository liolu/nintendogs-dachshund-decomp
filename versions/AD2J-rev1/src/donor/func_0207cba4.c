/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1f24 from projets/eyeshield-21/src/auto/func_020a1f24.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSGfdFrmTexVramState {
    u32 address[10];
} NNSGfdFrmTexVramState;
extern void func_0207cba4(NNSGfdFrmTexVramState *pState);
typedef struct NNSGfdFrmTexRegionState {
    u32 head;
    u32 tail;
    BOOL bActive;
    const BOOL bHalfSize;
    const u16 index;
    const u16 pad16_;
    const u32 baseAddress;
} NNSGfdFrmTexRegionState;
extern NNSGfdFrmTexRegionState data_0213b5e4[5];
void func_0207cba4(NNSGfdFrmTexVramState *pState) {
    int i;
    ((void) 0);
    ((void) 0);

    for (i = 0; i < 5; i++) {
        pState->address[i * 2 + 0] = data_0213b5e4[i].head;
        pState->address[i * 2 + 1] = data_0213b5e4[i].tail;
    }
}
