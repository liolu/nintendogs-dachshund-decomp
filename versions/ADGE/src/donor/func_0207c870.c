/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_GfdSetTexNrmSearchArray from https://github.com/RonyxDumb/mkds src/arm9/02015fa0_func_02015fa0.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_0207c870(int idx1st, int idx2nd, int idx3rd, int idx4th, int idx5th);
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
void func_0207c870(int idx1st, int idx2nd, int idx3rd, int idx4th, int idx5th) {
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    data_0213cd88[0] = &data_0213cd9c[idx1st];
    data_0213cd88[1] = &data_0213cd9c[idx2nd];
    data_0213cd88[2] = &data_0213cd9c[idx3rd];
    data_0213cd88[3] = &data_0213cd9c[idx4th];
    data_0213cd88[4] = &data_0213cd9c[idx5th];
}
