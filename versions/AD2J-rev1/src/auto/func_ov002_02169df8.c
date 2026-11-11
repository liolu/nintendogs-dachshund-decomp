#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a2c();
extern void func_02026b54();
extern void func_02035e14();
extern char data_02153720[];
// clang-format off
asm void func_ov002_02169df8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x207
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_02025a2c
    ldr r1, =data_02153720
    mov r0, r4
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x7a]
    add r1, r1, #0x3
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
