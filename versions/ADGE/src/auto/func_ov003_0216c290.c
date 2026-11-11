#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a74();
extern void func_02026b9c();
extern void func_02035fcc();
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0216c290(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x208
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025a74
    ldr r1, =data_0215a064
    mov r0, r4
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x7a]
    add r1, r1, #0x3
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
