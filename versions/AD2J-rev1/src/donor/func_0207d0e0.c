/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02038560 from projets/code-lyoko/src/donor/func_02038560.c (same code in another game of this workspace), reused by
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
extern BOOL func_0207d5d8(UnkVramTransferManager *mgr);
extern BOOL func_0207d250(UnkVramTransferManager *mgr);
extern UnkVramTransferTask *func_0207d230(UnkVramTransferManager *mgr);
BOOL func_0207d0e0(u32 type, u32 dstAddr, const void *pSrc, u32 szByte) {
    UnkVramTransferManager *mgr = &data_021532ac;
    UnkVramTransferTask *task;

    if (func_0207d5d8(mgr)) {
        return 0;
    }
    task          = func_0207d230(mgr);
    task->type    = type;
    task->pSrc    = pSrc;
    task->dstAddr = dstAddr;
    task->szByte  = szByte;
    func_0207d250(mgr);
    mgr->totalSize += task->szByte;
    return 1;
}
