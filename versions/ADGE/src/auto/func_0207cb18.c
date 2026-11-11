/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072824 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_vramtransfer.c (license: none),
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
void func_0207cc68(UnkVramTransferTask *task);
UnkVramTransferTask *func_0207cbf8(UnkVramTransferManager *mgr);
BOOL func_0207cba4(UnkVramTransferManager *mgr);
void func_0207cb18(void) {
    UnkVramTransferManager *mgr = &data_02153ddc;
    UnkVramTransferTask *task   = func_0207cbf8(mgr);

    while (func_0207cba4(mgr)) {
        func_0207cc68(task);
        mgr->totalSize -= task->szByte;
        task = func_0207cbf8(mgr);
    }
}
