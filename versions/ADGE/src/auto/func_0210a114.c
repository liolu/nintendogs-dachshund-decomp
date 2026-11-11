#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208ff8c();
// clang-format off
asm void func_0210a114(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldrb r3, [r1, #0x0]
    ldrsb r4, [r2, #0x0]
    cmp r0, #0x3
    mov ip, r3, lsl #0x18
    mov r5, ip, asr #0x18
    mov ip, #0x1f
    addls pc, pc, r0, lsl #0x2
    b L_0210a188
L_0210a13c:
    b L_0210a14c
    b L_0210a15c
    b L_0210a16c
    b L_0210a17c
L_0210a14c:
    add lr, r5, #0x1
    mov lr, lr, lsl #0x18
    mov r5, lr, asr #0x18
    b L_0210a188
L_0210a15c:
    add lr, r4, #0x1
    mov lr, lr, lsl #0x18
    mov r4, lr, asr #0x18
    b L_0210a188
L_0210a16c:
    sub lr, r5, #0x1
    mov lr, lr, lsl #0x18
    mov r5, lr, asr #0x18
    b L_0210a188
L_0210a17c:
    sub lr, r4, #0x1
    mov lr, lr, lsl #0x18
    mov r4, lr, asr #0x18
L_0210a188:
    cmp r5, #0x1
    movlt r5, #0xc
    cmp r5, #0xc
    movgt r5, #0x1
    cmp r5, #0x2
    moveq ip, #0x1d
    cmp r5, #0x4
    beq L_0210a1c0
    cmp r5, #0x6
    beq L_0210a1c0
    cmp r5, #0x9
    beq L_0210a1c0
    cmp r5, #0xb
    bne L_0210a1c4
L_0210a1c0:
    mov ip, #0x1e
L_0210a1c4:
    cmp r4, #0x1
    movlt r4, ip
    cmp r4, ip
    ble L_0210a1e4
    mov r3, r3, lsl #0x18
    cmp r5, r3, asr #0x18
    movne r4, ip
    moveq r4, #0x1
L_0210a1e4:
    swpb r3, r5, [r1]
    cmp r0, #0x1
    swpb r0, r4, [r2]
    bhi L_0210a208
    mov r0, #0x19
    bl func_0208ff8c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0210a208:
    mov r0, #0x1a
    bl func_0208ff8c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
