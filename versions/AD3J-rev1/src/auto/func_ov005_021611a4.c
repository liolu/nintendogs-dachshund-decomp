#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025380();
extern void func_020266a0();
// clang-format off
asm void func_ov005_021611a4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020266a0
    mov r0, r4
    bl func_02025380
    mov r0, #0x1
    str r0, [r4, #0x488]
    mvn r0, #0x0
    str r0, [r4, #0x498]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
