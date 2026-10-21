#include "m2c.h"
/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_FndGetGroupIDForMBlockExpHeap from https://github.com/RonyxDumb/mkds src/arm9/020176c0_Mem_Exp_GetAllocatableSize.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
extern u16 func_0207d3ac(const void *memBlock);
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline const void *SubU32ToCPtr(const void *ptr, u32 val) {
    return (const void *) (NNSiGetUIntPtr(ptr) - val);
}
static inline const NNSiFndExpHeapMBlockHead *GetMBlockHeadCPtr(const void *memBlock) {
    return SubU32ToCPtr(memBlock, sizeof(NNSiFndExpHeapMBlockHead));
}
static inline u16 GetGroupIDForMBlock(const NNSiFndExpHeapMBlockHead *pMBHead) {
    return (u16) (((pMBHead->attribute) >> (0)) & ((1 << (8)) - 1));
}
u16 func_0207d3ac(const void *memBlock) {
    ((void) 0);
    return GetGroupIDForMBlock(GetMBlockHeadCPtr(memBlock));
}
