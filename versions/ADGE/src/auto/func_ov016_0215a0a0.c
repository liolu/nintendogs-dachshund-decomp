#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov016_0215b260[];
// clang-format off
asm void func_ov016_0215a0a0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r0, =data_ov016_0215b260
    mov r6, #0x0
    ldr r3, [r0, #0x0]
    ldr r1, [r3, #0xd08]
    ldr r5, [r3, #0xd04]
    add r1, r1, #0x1
    add r4, r5, #0x1
    add r2, r1, r1, lsr #0x1f
    add r1, r4, r4, lsr #0x1f
    mov r11, r2, asr #0x1
    cmp r11, #0x0
    mov r8, r1, asr #0x1
    ble L_0215a128
    mov r2, r6
    mov r4, r6
    ldr r9, =0xd0c
L_0215a0e8:
    mov r7, r4
    cmp r5, #0x0
    ble L_0215a11c
    mov r1, r6, lsl #0x4
L_0215a0f8:
    add r3, r1, r3
    add r3, r7, r3
    add r5, r3, r9
    swpb r3, r2, [r5]
    add r7, r7, #0x1
    ldr r3, [r0, #0x0]
    ldr r5, [r3, #0xd04]
    cmp r7, r5
    blt L_0215a0f8
L_0215a11c:
    add r6, r6, #0x1
    cmp r6, r11
    blt L_0215a0e8
L_0215a128:
    ldr r0, [r3, #0xd08]
    mov r4, #0x0
    cmp r0, #0x0
    ble L_0215a18c
    ldr r9, =data_ov016_0215b260
    mov r1, r4
    mov r2, r4
    ldr r5, =0xd8c
L_0215a148:
    mov r3, r2
    cmp r8, #0x0
    ble L_0215a178
    mov r0, r4, lsl #0x3
L_0215a158:
    ldr r6, [r9, #0x0]
    add r6, r0, r6
    add r6, r3, r6
    add r7, r6, r5
    add r3, r3, #0x1
    cmp r3, r8
    swpb r6, r1, [r7]
    blt L_0215a158
L_0215a178:
    ldr r3, [r9, #0x0]
    add r4, r4, #0x1
    ldr r0, [r3, #0xd08]
    cmp r4, r0
    blt L_0215a148
L_0215a18c:
    ldr r0, [r3, #0xd04]
    mov r6, #0x0
    cmp r0, #0x0
    ble L_0215a24c
    ldr r1, =data_ov016_0215b260
    mov r4, r6
    mov lr, r6
    mov r2, #0x1
    ldr r0, =0xd0c
L_0215a1b0:
    ldr r3, [r3, #0xd08]
    mov r9, lr
    mov r7, lr
    sub r10, r11, #0x1
    subs r5, r3, #0x1
    bmi L_0215a238
L_0215a1c8:
    ldr r3, [r1, #0x0]
    add r3, r6, r3
    add ip, r3, r5, lsl #0x4
    ldrb ip, [ip, #0xc04]
    cmp ip, #0x0
    bne L_0215a200
    cmp r7, #0x0
    beq L_0215a200
    add r3, r3, r10, lsl #0x4
    add r7, r3, r0
    swpb r3, r9, [r7]
    mov r9, r4
    mov r7, r4
    sub r10, r10, #0x1
L_0215a200:
    ldr r3, [r1, #0x0]
    add r3, r6, r3
    add ip, r3, r5, lsl #0x4
    ldrb ip, [ip, #0xc04]
    cmp ip, #0x1
    bne L_0215a230
    cmp r5, #0x0
    addeq r3, r3, r10, lsl #0x4
    add r9, r9, #0x1
    addeq ip, r3, r0
    swpeqb r3, r9, [ip]
    mov r7, r2
L_0215a230:
    subs r5, r5, #0x1
    bpl L_0215a1c8
L_0215a238:
    ldr r3, [r1, #0x0]
    add r6, r6, #0x1
    ldr r5, [r3, #0xd04]
    cmp r6, r5
    blt L_0215a1b0
L_0215a24c:
    ldr r0, [r3, #0xd08]
    mov r7, #0x0
    cmp r0, #0x0
    ble L_0215a318
    ldr r1, =data_ov016_0215b260
    ldr r0, =0xd8c
    mov ip, r7
    str r7, [sp, #0x0]
    mov r2, #0x1
L_0215a270:
    ldr r3, [r3, #0xd04]
    ldr r5, [sp, #0x0]
    sub r9, r8, #0x1
    mov r4, r5
    subs r6, r3, #0x1
    bmi L_0215a304
    mov lr, r7, lsl #0x3
L_0215a28c:
    ldr r3, [r1, #0x0]
    add r10, r3, r7, lsl #0x4
    add r10, r6, r10
    ldrb r10, [r10, #0xc04]
    cmp r10, #0x0
    bne L_0215a2c8
    cmp r4, #0x0
    beq L_0215a2c8
    add r3, lr, r3
    add r3, r9, r3
    add r4, r3, r0
    swpb r3, r5, [r4]
    mov r5, ip
    mov r4, ip
    sub r9, r9, #0x1
L_0215a2c8:
    ldr r3, [r1, #0x0]
    add r10, r3, r7, lsl #0x4
    add r10, r6, r10
    ldrb r10, [r10, #0xc04]
    cmp r10, #0x1
    bne L_0215a2fc
    cmp r6, #0x0
    addeq r3, r3, r7, lsl #0x3
    addeq r3, r9, r3
    add r5, r5, #0x1
    addeq r10, r3, r0
    swpeqb r3, r5, [r10]
    mov r4, r2
L_0215a2fc:
    subs r6, r6, #0x1
    bpl L_0215a28c
L_0215a304:
    ldr r3, [r1, #0x0]
    add r7, r7, #0x1
    ldr r4, [r3, #0xd08]
    cmp r7, r4
    blt L_0215a270
L_0215a318:
    cmp r11, #0x0
    mov r4, #0x0
    ble L_0215a390
    ldr r6, =data_ov016_0215b260
    mov r1, r4
L_0215a32c:
    ldr r0, [r3, #0xd04]
    mov r2, r1
    cmp r0, #0x0
    ble L_0215a384
    sub r0, r4, r11
    add r0, r0, #0x8
    mov r5, r0, lsl #0x5
    mov r0, r4, lsl #0x4
L_0215a34c:
    ldr r9, [r6, #0x0]
    add r3, r5, #0x8
    add r7, r0, r9
    add r7, r2, r7
    ldrb r7, [r7, #0xd0c]
    add r3, r9, r3, lsl #0x1
    add r2, r2, #0x1
    add r7, r7, #0x8
    strh r7, [r3, #0x4]
    ldr r3, [r6, #0x0]
    add r5, r5, #0x1
    ldr r7, [r3, #0xd04]
    cmp r2, r7
    blt L_0215a34c
L_0215a384:
    add r4, r4, #0x1
    cmp r4, r11
    blt L_0215a32c
L_0215a390:
    ldr r0, [r3, #0xd08]
    mov r2, #0x0
    cmp r0, #0x0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    ldr r4, =data_ov016_0215b260
    mov r0, r2
L_0215a3b0:
    mov r1, r0
    cmp r8, #0x0
    ble L_0215a3fc
    add r3, r2, #0x8
    mov r3, r3, lsl #0x5
    mov r7, r2, lsl #0x3
L_0215a3c8:
    ldr r9, [r4, #0x0]
    sub r5, r3, r8
    add r6, r7, r9
    add r6, r1, r6
    ldrb r6, [r6, #0xd8c]
    add r5, r5, #0x8
    add r1, r1, #0x1
    add r6, r6, #0x8
    add r5, r9, r5, lsl #0x1
    strh r6, [r5, #0x4]
    cmp r1, r8
    add r3, r3, #0x1
    blt L_0215a3c8
L_0215a3fc:
    ldr r1, [r4, #0x0]
    add r2, r2, #0x1
    ldr r1, [r1, #0xd08]
    cmp r2, r1
    blt L_0215a3b0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
