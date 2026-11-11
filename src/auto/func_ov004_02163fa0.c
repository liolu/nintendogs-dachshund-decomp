#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028120();
extern void func_02029248();
extern void func_0203e5e8();
extern void func_0210561c();
extern void func_021058ac();
extern void func_02106ef0();
extern void func_02106f0c();
extern void func_ov004_0215a354();
extern void func_ov004_0215a38c();
extern void func_ov004_0215a3c4();
extern void func_ov004_02168094();
// clang-format off
asm void func_ov004_02163fa0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x484]
    ldr r1, [r4, #0x2a0]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x2a0]
    ldr r1, [r4, #0x3f0]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x3f0]
    ldr r1, [r4, #0x3fc]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x3fc]
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    bl func_02106ef0
    cmp r0, #0x0
    beq L_02164000
    ldr r0, [r4, #0x484]
    bl func_021058ac
L_02164000:
    mov r0, r4
    bl func_ov004_02168094
    ldrh r0, [r4, #0xfc]
    cmp r0, #0x50
    bne L_02164034
    bl func_02106ef0
    cmp r0, #0x0
    beq L_02164034
    mov r0, r4
    bl func_02028120
    mov r1, r0
    add r0, r4, #0x354
    bl func_0210561c
L_02164034:
    ldrh r0, [r4, #0xfc]
    cmp r0, #0x50
    bne L_021640a4
    bl func_02106f0c
    cmp r0, #0x0
    beq L_021640a4
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x4f
    bne L_021640a4
    mov r0, r4
    bl func_02029248
    ldrsb r0, [r4, #0xb7]
    cmp r0, #0x1
    beq L_02164080
    cmp r0, #0x2
    beq L_02164088
    cmp r0, #0x3
    beq L_02164094
    b L_02164098
L_02164080:
    bl func_ov004_0215a38c
    b L_02164098
L_02164088:
    mov r0, #0x1
    bl func_ov004_0215a3c4
    b L_02164098
L_02164094:
    bl func_ov004_0215a354
L_02164098:
    add r1, r4, #0xb7
    mov r0, #0x0
    swpb r0, r0, [r1]
L_021640a4:
    ldrh r0, [r4, #0xfc]
    cmp r0, #0xa0
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, =0x48b
    mov r0, r4
    bl func_0203e5e8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
