/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207c870 from projets/nintendogs-dachshund/src/donor/func_0207c870.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_0207ceb8(int idx1st, int idx2nd, int idx3rd, int idx4th, int idx5th);
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
extern NNSGfdFrmTexRegionState *data_0213b5d0[5];
void func_0207ceb8(int idx1st, int idx2nd, int idx3rd, int idx4th, int idx5th) {
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    data_0213b5d0[0] = &data_0213b5e4[idx1st];
    data_0213b5d0[1] = &data_0213b5e4[idx2nd];
    data_0213b5d0[2] = &data_0213b5e4[idx3rd];
    data_0213b5d0[3] = &data_0213b5e4[idx4th];
    data_0213b5d0[4] = &data_0213b5e4[idx5th];
}
