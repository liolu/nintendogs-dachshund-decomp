/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Mem_DestroyHeap from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_02036ab0.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
extern void func_0207dd30(void *heap);
extern void func_0207e52c(void *heap);
extern void *func_0207d894(void *heap);
extern void func_0207db24(void *heap, void *block);
void func_020036b4(void *heap) {
    void *parentHeap;

    switch (*(u32 *) heap) {
        case 0x45585048:
            func_0207dd30(heap);
            break;
        case 0x46524D48:
            func_0207e52c(heap);
            break;
    }

    parentHeap = func_0207d894(heap);
    if (parentHeap == 0) {
        return;
    }

    switch (*(u32 *) parentHeap) {
        case 0x45585048:
            func_0207db24(parentHeap, heap);
            break;
        case 0x46524D48:
            break;
    }
}
