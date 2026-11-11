#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214d750[];
extern char data_0214da84[];
extern char data_0215a04c[];
// clang-format off
asm void func_0203e6b8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0215a04c
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0xa
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r1, #0xc
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r9, #0x0
    ldr r2, =data_0214da84
    ldr r1, =data_0214d750
    mov r7, r9
    mov r6, r9
    mov lr, r9
    mov r3, #0x1
L_0203e708:
    cmp r9, #0x0
    blt L_0203e718
    cmp r9, #0x3
    blt L_0203e720
L_0203e718:
    mov r5, r7
    b L_0203e72c
L_0203e720:
    ldr r4, [r2, #0x0]
    add r4, r4, r9, lsl #0x2
    ldr r5, [r4, #0x54]
L_0203e72c:
    ldrsb r4, [r0, #0x88]
    cmp r9, r4
    beq L_0203e834
    cmp r5, #0x0
    beq L_0203e834
    ldr r4, [r0, #0x9e8]
    mov r10, r6
    add r8, r4, #0x650
L_0203e74c:
    cmp r8, #0x0
    beq L_0203e81c
    ldr r4, [r5, #0x9e8]
    ldr ip, [r8, #0x0]
    ldr r11, [r4, #0x640]
    add r4, r4, #0x640
    cmp ip, r11
    bne L_0203e81c
    ldr ip, [r8, #0x4]
    ldr r11, [r4, #0x4]
    cmp ip, r11
    bne L_0203e81c
    ldrh ip, [r8, #0x8]
    ldrh r11, [r4, #0x8]
    cmp ip, r11
    bne L_0203e81c
    ldrh r11, [r8, #0xa]
    ldrh r4, [r4, #0xa]
    cmp r11, r4
    bne L_0203e81c
    ldr r10, [r1, #0x0]
    add ip, r0, r9, lsl #0x1
    ldr r4, [r10, #0x1c]
    add r5, r8, #0x15
    swpb r4, r4, [r5]
    add r4, r10, #0x1c
    ldr r5, [r4, #0x4]
    add r11, r8, #0x14
    swpb r5, r5, [r11]
    add r5, r8, #0x13
    ldr r11, [r4, #0x8]
    add r4, r8, #0x12
    swpb r11, r11, [r5]
    add r5, r10, #0x2c
    ldr r11, [r10, #0x2c]
    add r10, r8, #0x11
    swpb r11, r11, [r4]
    add r11, r8, #0x10
    ldr r4, [r5, #0x4]
    add ip, ip, #0x100
    swpb r4, r4, [r10]
    add r4, r8, #0x16
    ldr r10, [r5, #0x8]
    add r5, r8, #0x17
    swpb r10, r10, [r11]
    add r10, r0, #0xd2
    swpb r11, lr, [r4]
    swpb r4, lr, [r5]
    ldrh r4, [ip, #0x32]
    strh r4, [r8, #0xe]
    swpb r4, r3, [r10]
    b L_0203e834
L_0203e81c:
    add r4, r10, #0x1
    mov r4, r4, lsl #0x10
    mov r10, r4, asr #0x10
    cmp r10, #0x10
    add r8, r8, #0x18
    blt L_0203e74c
L_0203e834:
    add r4, r9, #0x1
    mov r4, r4, lsl #0x10
    mov r9, r4, asr #0x10
    cmp r9, #0x3
    blt L_0203e708
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
