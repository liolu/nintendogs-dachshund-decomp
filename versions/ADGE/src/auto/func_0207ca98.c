/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072884 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_vramtransfer.c (license: none),
 * reused by tools/donor_match.py */
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
extern UnkVramTransferManager data_02153ddc;
BOOL func_0207cf90(UnkVramTransferManager *mgr);
BOOL func_0207cc08(UnkVramTransferManager *mgr);
UnkVramTransferTask *func_0207cbe8(UnkVramTransferManager *mgr);
BOOL func_0207ca98(u32 type, u32 dstAddr, const void *pSrc, u32 szByte) {
    UnkVramTransferManager *mgr = &data_02153ddc;
    UnkVramTransferTask *task;

    if (func_0207cf90(mgr)) {
        return 0;
    }
    task          = func_0207cbe8(mgr);
    task->type    = type;
    task->pSrc    = pSrc;
    task->dstAddr = dstAddr;
    task->szByte  = szByte;
    func_0207cc08(mgr);
    mgr->totalSize += task->szByte;
    return 1;
}
