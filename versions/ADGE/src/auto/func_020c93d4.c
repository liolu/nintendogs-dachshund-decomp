#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020742fc();
extern void func_020743d8();
extern void func_02074610();
// clang-format off
asm void func_020c93d4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    movs r5, r1
    mov r4, r0
    beq L_020c9460
    ldr r0, [r4, #0x14]
    ldr r1, [r4, #0x18]
    bl func_020742fc
    ldr r1, [r4, #0x14]
    ldr r0, [r4, #0x18]
    ldr r2, [r1, #0x4]
    ldr r3, [r4, #0x1c]
    mov r1, r5
    bl func_02074610
    ldr r0, [r4, #0x14]
    ldr r1, [r4, #0x18]
    bl func_020743d8
    ldr r0, [r4, #0x18]
    mov r3, #0x0
    ldr r0, [r0, #0x8]
    add r1, r4, #0x1
    ldrh ip, [r0, #0x4]
    swpb r0, r3, [r4]
    mov ip, ip, lsl #0xc
    swpb r0, r3, [r1]
    mov r2, #0x1000
    mov r0, ip, asr #0xc
    strh r3, [r4, #0x2]
    strh r0, [r4, #0x4]
    strh r3, [r4, #0x6]
    str r2, [r4, #0x8]
    add sp, sp, #0x4
    str r3, [r4, #0xc]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020c9460:
    mov r2, #0x0
    swpb r0, r2, [r4]
    add r1, r4, #0x1
    swpb r0, r2, [r1]
    mov r0, #0x1000
    strh r2, [r4, #0x2]
    strh r2, [r4, #0x4]
    strh r2, [r4, #0x6]
    str r0, [r4, #0x8]
    str r2, [r4, #0xc]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
