/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207c748 from projets/nintendogs-dachshund/src/donor/func_0207c748.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_0207cd90(void);
typedef struct NNSGfdFrmTexRegionState {
    u32 head;
    u32 tail;
    BOOL bActive;
    const BOOL bHalfSize;
    const u16 index;
    const u16 pad16_;
    const u32 baseAddress;
} NNSGfdFrmTexRegionState;
typedef struct NNSGfdFrmTexVramMnager {
    u16 numSlot;
} NNSGfdFrmTexVramMnager;
extern NNSGfdFrmTexVramMnager data_0215329c;
extern NNSGfdFrmTexRegionState data_0213b5e4[5];
static inline void ResetRegionNormal_(NNSGfdFrmTexRegionState *pRegion) {
    ((void) 0);

    pRegion->head = 0x0;
    pRegion->tail = 0x20000;
}
static inline void ResetRegionHalf_(NNSGfdFrmTexRegionState *pRegion) {
    ((void) 0);

    pRegion->head = 0x0;
    pRegion->tail = 0x20000 / 2;
}
void func_0207cd90(void) {
    int i;
    u16 numSlot = data_0215329c.numSlot;

    const numRegion = (numSlot > 1) ? numSlot + 1 : numSlot + 0;

    ((void) 0);

    for (i = 0; i < 5; i++) {
        if (i < numRegion) {
            data_0213b5e4[i].bActive = 1;
        } else {
            data_0213b5e4[i].bActive = 0;
        }

        if (data_0213b5e4[i].bHalfSize) {
            ResetRegionHalf_(&data_0213b5e4[i]);
        } else {
            ResetRegionNormal_(&data_0213b5e4[i]);
        }
    }
}
