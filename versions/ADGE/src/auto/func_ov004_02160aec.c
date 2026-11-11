#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ca98();
extern void func_ov004_0215fb1c();
extern void func_ov004_02160d3c();
extern char data_0214d624[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02160aec(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r4, =data_ov004_0216e3c0
    mov r5, #0x0
L_02160afc:
    ldr r2, [r4, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x6c4]
    ldr r0, [r1, #0x8]
    cmp r0, #0x0
    bne L_02160b38
    ldrb r0, [r2, #0x1c]
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrb r2, [r1, #0x1d]
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    b L_02160bb8
L_02160b38:
    bl func_ov004_0215fb1c
    cmp r5, #0x0
    bne L_02160bac
    ldr r2, [r4, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x6c4]
    ldr r0, [r1, #0x8]
    cmp r0, #0x0
    bne L_02160b80
    ldrb r0, [r2, #0x1c]
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrb r2, [r1, #0x1d]
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    b L_02160bac
L_02160b80:
    add r0, r1, r0, lsl #0x1
    ldrb r0, [r0, #0xa]
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r2, [r0, #0x6c4]
    ldr r0, [r2, #0x8]
    add r1, r2, #0x1
    add r0, r2, r0, lsl #0x1
    ldrb r0, [r0, #0xb]
    swpb r0, r0, [r1]
L_02160bac:
    add r5, r5, #0x1
    cmp r5, #0x1
    blt L_02160afc
L_02160bb8:
    ldr r0, =data_0214d624
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    bne L_02160c9c
    mov r0, #0x1
    bl func_ov004_02160d3c
    cmp r0, #0x0
    beq L_02160c9c
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_02160c0c
    cmp r0, #0x1
    beq L_02160c18
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_02160c20
L_02160c0c:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_02160c20
L_02160c18:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_02160c20:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_02160c44
    cmp r0, #0x1
    beq L_02160c50
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_02160c58
L_02160c44:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_02160c58
L_02160c50:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_02160c58:
    ldr r1, =data_ov004_0216e3c0
    mov r3, #0x0
    ldr r4, [r1, #0x0]
    mov r2, #0x1
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r4, #0x12]
    ldr r4, [r1, #0x0]
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r4, #0x14]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x8]
    ldr r1, [r1, #0x0]
    swpb r0, r2, [r1]
L_02160c9c:
    ldr r2, =data_ov004_0216e3c0
    ldr r4, =data_ov004_0216e3c0
    ldr r1, [r2, #0x0]
    mov r3, #0x2000
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r1, #0x1a
    ldrb r0, [r0, #0x0]
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r1, #0x1b
    ldrb r0, [r0, #0x1]
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2fc]
    cmp r1, #0x1
    movlt r1, #0x6
    strlt r1, [r0, #0x2f8]
    movge r1, #0x0
    strge r1, [r0, #0x2f8]
    ldr r2, [r4, #0x0]
    mov r0, #0x19
    add r2, r2, #0x1000
    ldr r5, [r2, #0x2fc]
    mov r1, #0x0
    add r5, r5, #0x1
    str r5, [r2, #0x2fc]
    ldr r2, [r4, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, #0x264
    bl func_0207ca98
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
