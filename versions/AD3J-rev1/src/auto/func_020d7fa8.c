#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_02084a14();
extern void func_02107c9c();
extern char data_02154c9c[];
extern char func_020d7aa0[];
extern char func_020d7ea4[];
extern char func_020d7f18[];
// clang-format off
asm void func_020d7fa8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r2, r2, lsl #0x10
    mov r4, r1
    mov r1, r2, asr #0x10
    mov r5, r0
    bl func_02107c9c
    ldr r1, =func_020d7ea4
    ldr r0, =func_020d7aa0
    str r1, [r5, #0x1f4]
    ldr r1, =func_020d7f18
    str r0, [r5, #0x1f8]
    mov r0, r4
    str r1, [r5, #0x1f0]
    mov r1, #0x8
    bl func_02003844
    str r0, [r5, #0x214]
    ldr r4, [r5, #0x214]
    cmp r4, #0x0
    beq L_020fc080
    mov r0, #0x0
    str r0, [r4, #0x0]
    ldrsh r1, [r5, #0x94]
    cmp r1, #0x6b
    beq L_020fc018
    cmp r1, #0x6c
    beq L_020fc03c
    cmp r1, #0x6d
    beq L_020fc060
    b L_020fc080
L_020fc018:
    ldr r1, =data_02154c9c
    add r2, r5, #0xbc
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    ldrne r0, [r1, #0x0]
    mov r1, #0x9
    bl func_02084a14
    str r0, [r4, #0x4]
    b L_020fc080
L_020fc03c:
    ldr r1, =data_02154c9c
    add r2, r5, #0xbc
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    ldrne r0, [r1, #0x0]
    mov r1, #0xa
    bl func_02084a14
    str r0, [r4, #0x4]
    b L_020fc080
L_020fc060:
    ldr r1, =data_02154c9c
    add r2, r5, #0xbc
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    ldrne r0, [r1, #0x0]
    mov r1, #0x8
    bl func_02084a14
    str r0, [r4, #0x4]
L_020fc080:
    ldr r1, =0x19a
    ldr r0, =0xbb8
    str r1, [r5, #0x124]
    ldr r1, =0xe6a
    str r0, [r5, #0xac]
    ldr r0, =0xdc6
    str r1, [r5, #0xf8]
    ldr r2, =0x1806
    str r0, [r5, #0xfc]
    str r2, [r5, #0x100]
    str r0, [r5, #0x104]
    add r1, r5, #0x160
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r5, #0x128]
    str r0, [r5, #0x12c]
    str r2, [r5, #0x108]
    str r2, [r5, #0x10c]
    mov r0, #0x29
    ldr r1, =0x6e3
    str r0, [r5, #0x110]
    ldr r0, =0x300c
    str r1, [r5, #0x114]
    str r0, [r5, #0x118]
    str r0, [r5, #0x11c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
