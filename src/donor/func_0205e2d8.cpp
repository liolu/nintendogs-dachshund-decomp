/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020aaf0c from projets/pokemon-dash/src/donor/func_020aaf0c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern "C" {
typedef struct Pair {
    int x, y;
} Pair;
extern void func_0205e370(int a0, Pair p1, Pair p2, unsigned int flags);
// clang-format off
asm double func_0205e2d8(double a, int op) {
    stmdb sp!, {lr}
    sub sp, sp, #0x1c
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    str r2, [sp, #4]
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    sub r2, sp, #4
    str r1, [r2]
    str r0, [r2, #4]
    add r1, sp, #8
    ldmia r2, {r3}
    add r0, sp, #0x10
    ldmia r1, {r1, r2}
    bl func_0205e370
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    add sp, sp, #0x1c
    ldmia sp!, {lr}
    bx lr
}
// clang-format on
extern void func_0205e370(int a0, Pair p1, Pair p2, unsigned int flags);
}
