#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_02114124();
extern void func_0211e684();
extern char func_0211e900[];
// clang-format off
asm void func_0211e554(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r1, #0x74
    mov r5, r2
    bl func_020038a8
    mov r4, r0
    bl func_02114124
    mov r1, #0x6
    ldr r0, =func_0211e900
    strh r1, [r4, #0x0]
    str r0, [r4, #0x10]
    mov r0, #0x0
    strh r0, [r4, #0x2]
    mov r0, #0xb4
    strh r0, [r4, #0x8]
    str r5, [r4, #0x1c]
    ldr r0, [r4, #0x1c]
    cmp r0, #0x0
    beq L_0211e5a8
    mov r1, r6
    bl func_0211e684
L_0211e5a8:
    mov r2, #0x0
    strh r2, [r4, #0x20]
    strh r2, [r4, #0x22]
    strh r2, [r4, #0x24]
    strh r2, [r4, #0x26]
    strh r2, [r4, #0x28]
    strh r2, [r4, #0x2a]
    strh r2, [r4, #0x2c]
    mov r5, r2
L_0211e5cc:
    add r0, r2, #0x1
    mov r0, r0, lsl #0x10
    add r1, r4, r2, lsl #0x2
    mov r2, r0, asr #0x10
    str r5, [r1, #0x30]
    cmp r2, #0x3
    blt L_0211e5cc
    strh r5, [r4, #0x3c]
    strh r5, [r4, #0x3e]
    mov ip, r4
    strh r5, [r4, #0x40]
    mov r3, #0xc8
    mov lr, #0x0
L_0211e600:
    mov r2, lr
    add r1, r4, r5, lsl #0x1
L_0211e608:
    add r0, r2, #0x1
    add r2, ip, r2, lsl #0x1
    mov r0, r0, lsl #0x10
    strh r3, [r2, #0x42]
    mov r2, r0, asr #0x10
    strh lr, [r1, #0x60]
    cmp r2, #0x5
    blt L_0211e608
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    cmp r5, #0x3
    add ip, ip, #0xa
    blt L_0211e600
    add r5, r4, #0x66
    mov ip, #0x0
L_0211e648:
    strh ip, [r5, #0x0]
    add r1, r5, #0x2
    add r0, lr, #0x1
    mov r3, r0, lsl #0x10
    add r2, r5, #0x3
    swpb r0, ip, [r1]
    mov lr, r3, asr #0x10
    cmp lr, #0x3
    swpb r0, ip, [r2]
    add r5, r5, #0x4
    blt L_0211e648
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
