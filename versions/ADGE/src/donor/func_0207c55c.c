/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_GfdGetFrmTexVramState from https://github.com/RonyxDumb/mkds src/arm9/02015fa0_func_02015fa0.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSGfdFrmTexVramState {
    u32 address[10];
} NNSGfdFrmTexVramState;
extern void func_0207c55c(NNSGfdFrmTexVramState *pState);
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
void func_0207c55c(NNSGfdFrmTexVramState *pState) {
    int i;
    ((void) 0);
    ((void) 0);

    for (i = 0; i < 5; i++) {
        pState->address[i * 2 + 0] = data_0213cd9c[i].head;
        pState->address[i * 2 + 1] = data_0213cd9c[i].tail;
    }
}
