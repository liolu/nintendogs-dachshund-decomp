#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026bcc();
// clang-format off
asm void func_ov002_0216b88c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x185
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    mov r2, #0x1
    strh r2, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    mov r0, #0x1000
    str r0, [r4, #0x488]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
