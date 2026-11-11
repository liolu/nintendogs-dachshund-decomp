#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206b598();
extern char data_ov003_0216b858[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215d5f8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, =data_ov003_0216be20
    mvn r10, #0x0
    ldr r0, [r4, #0x0]
    mov r1, #0x0
    add r0, r0, #0x3000
    ldr r3, [r0, #0x6c4]
    ldr r2, [r3, #0x8]
    add r0, r3, r2, lsl #0x1
    ldrb r9, [r0, #0xa]
    ldrb r8, [r0, #0xb]
    sub r0, r2, #0x1
    str r0, [r3, #0x8]
    ldr r0, =data_ov003_0216b858
    mov r3, #0xa
L_0215fb5c:
    mov r5, r1, lsl #0x1
    add r2, r0, r1, lsl #0x1
    ldrsb r5, [r0, r5]
    ldrsb r2, [r2, #0x1]
    adds r5, r9, r5
    add r2, r8, r2
    bmi L_0215fc18
    cmp r5, #0x40
    bge L_0215fc18
    cmp r2, #0x0
    blt L_0215fc18
    cmp r2, #0x30
    bge L_0215fc18
    and r5, r5, #0xff
    cmp r5, #0x20
    bhs L_0215fbc0
    and r2, r2, #0xff
    cmp r2, #0x20
    addlo r2, r5, r2, lsl #0x5
    movlo r2, r2, lsl #0x1
    subhs r2, r2, #0x20
    addhs r2, r5, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1000
    b L_0215fbec
L_0215fbc0:
    and r6, r2, #0xff
    cmp r6, #0x20
    sublo r2, r5, #0x20
    addlo r2, r2, r6, lsl #0x5
    movlo r2, r2, lsl #0x1
    addlo r2, r2, #0x800
    subhs r5, r5, #0x20
    subhs r2, r6, #0x20
    addhs r2, r5, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1800
L_0215fbec:
    ldr r7, [r4, #0x0]
    mov r5, r2, asr #0x1
    add r2, r7, #0x3000
    ldr r2, [r2, #0x6c4]
    ldr r6, [r2, #0x8]
    add r2, r2, r5, lsl #0x1
    mla r5, r6, r3, r7
    add r5, r5, r1, lsl #0x1
    ldrh r5, [r5, #0x28]
    add r2, r2, #0x200
    strh r5, [r2, #0x64]
L_0215fc18:
    add r1, r1, #0x1
    cmp r1, #0x5
    blt L_0215fb5c
    sub r3, r8, #0x20
    sub r0, r9, #0x20
    add r1, r0, r8, lsl #0x5
    add r0, r0, r3, lsl #0x5
    add r2, r9, r3, lsl #0x5
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1800
    add r3, r9, r8, lsl #0x5
    mov r2, r2, lsl #0x1
    mov r1, r1, lsl #0x1
    str r0, [sp, #0x0]
    mov r0, #0x5
    mov r6, r3, lsl #0x1
    add r5, r2, #0x1000
    add r11, r1, #0x800
    mov r4, #0x1
    str r0, [sp, #0x4]
L_0215fc68:
    cmp r9, #0x20
    bhs L_0215fc80
    cmp r8, #0x20
    movlo r7, r6
    movhs r7, r5
    b L_0215fc8c
L_0215fc80:
    cmp r8, #0x20
    movlo r7, r11
    ldrhs r7, [sp, #0x0]
L_0215fc8c:
    bl func_0206b598
    ldr r1, =data_ov003_0216be20
    ldrh r3, [r0, r7]
    ldr r1, [r1, #0x0]
    add r0, r1, r4, lsl #0x1
    add r0, r0, #0xf00
    ldrh r2, [r0, #0x7a]
    ldr r0, =0x3ff
    and r1, r3, r0
    and r0, r2, r0
    cmp r0, r1
    moveq r0, r4, lsl #0x18
    ldreq r4, [sp, #0x4]
    moveq r10, r0, asr #0x18
    add r4, r4, #0x1
    cmp r4, #0x5
    blt L_0215fc68
    mvn r5, #0x0
    cmp r10, r5
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r3, =data_ov003_0216be20
    mov r7, #0x0
    mov r4, #0x5
    mov r2, #0x3
L_0215fcf4:
    ldr r0, [r3, #0x0]
    mla r6, r7, r2, r0
    add r0, r6, #0x1200
    ldrsb r1, [r0, #0xdc]
    cmp r10, r1
    bne L_0215fd30
    ldrsb r1, [r0, #0xda]
    cmp r9, r1
    bne L_0215fd30
    ldrsb r0, [r0, #0xdb]
    cmp r8, r0
    addeq r0, r6, #0x1000
    addeq r1, r0, #0x2dc
    swpeqb r0, r5, [r1]
    moveq r7, r4
L_0215fd30:
    add r7, r7, #0x1
    cmp r7, #0x5
    blt L_0215fcf4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
