/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020807a0 from projets/nintendogs-dachshund/src/donor/func_020807a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02080d98(void);
extern void func_02080e28(void);
// clang-format off
asm void func_02080d84(void)
{
    stmdb sp!, {lr}
    bl func_02080d98
    bl func_02080e28
    ldmia sp!, {lr}
    bx lr
}
// clang-format on
