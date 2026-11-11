/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02038730 from projets/code-lyoko/src/donor/func_02038730.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern void func_02080858(const void *addr, u32 size);
typedef struct {
    u32 type;
    const void *pSrc;
    u32 dstAddr;
    u32 szByte;
} UnkVramTransferTask;
typedef void (*UnkVramLoadFunc)(const void *pSrc, u32 dstAddr, u32 szByte);
extern const UnkVramLoadFunc data_02128ee0[36];
void func_0207d2b0(UnkVramTransferTask *task) {
    UnkVramLoadFunc func = data_02128ee0[task->type];
    func_02080858(task->pSrc, task->szByte);
    func(task->pSrc, task->dstAddr, task->szByte);
}
