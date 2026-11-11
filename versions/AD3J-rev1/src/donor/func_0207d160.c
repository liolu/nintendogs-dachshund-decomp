/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020385e0 from projets/code-lyoko/src/donor/func_020385e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct {
    u32 type;
    const void *pSrc;
    u32 dstAddr;
    u32 szByte;
} UnkVramTransferTask;
typedef struct {
    UnkVramTransferTask *pTaskArray;
    u32 lengthOfArray;
    u16 idxFront;
    u16 idxRear;
    u16 numTasks;
    u32 totalSize;
} UnkVramTransferManager;
extern UnkVramTransferManager data_021532ac;
extern void func_0207d2b0(UnkVramTransferTask *task);
extern UnkVramTransferTask *func_0207d240(UnkVramTransferManager *mgr);
extern BOOL func_0207d1ec(UnkVramTransferManager *mgr);
void func_0207d160(void) {
    UnkVramTransferManager *mgr = &data_021532ac;
    UnkVramTransferTask *task   = func_0207d240(mgr);

    while (func_0207d1ec(mgr)) {
        func_0207d2b0(task);
        mgr->totalSize -= task->szByte;
        task = func_0207d240(mgr);
    }
}
