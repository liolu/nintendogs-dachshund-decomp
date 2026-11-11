#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e2c();
extern void func_02027e90();
extern void func_0202f960();
extern void func_020342ec();
extern void func_02034f40();
extern void func_02038180();
extern void func_02038358();
extern void func_0203e2b8();
extern void func_ov002_02193e98();
extern void func_ov002_02195f40();
extern char data_0214b484[];
extern char data_02153708[];
// clang-format off
asm void func_ov002_02193b94(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrsh r0, [r5, #0xfa]
    mov r4, r1
    cmp r0, #0x25
    bne L_02193bf8
    ldrb r0, [r5, #0xc9]
    ands r1, r0, #0x8
    bicne r0, r0, #0x8
    addne r1, r5, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02193be4
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x19
    bl func_02027e2c
L_02193be4:
    add r1, r5, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x5
    str r0, [r5, #0x188]
L_02193bf8:
    ldr r1, [r5, #0x4ac]
    mov r0, r5
    add r1, r1, #0x1
    str r1, [r5, #0x4ac]
    bl func_ov002_02193e98
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02193e64
    mov r0, r5
    bl func_02034f40
    movs r4, r0
    beq L_02193e04
    ldrsh r0, [r4, #0x96]
    cmp r0, #0x3
    beq L_02193c50
    cmp r0, #0xe
    beq L_02193c74
    b L_02193c98
L_02193c50:
    ldr r1, =0x43b
    mov r0, r5
    bl func_0203e2b8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02193c74:
    ldr r1, =0x427
    mov r0, r5
    bl func_0203e2b8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02193c98:
    mov r0, r5
    mov r1, #0x4
    bl func_02027e90
    ldr r1, =data_02153708
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0xa
    moveq r1, #0x1
    beq L_02193cc8
    cmp r1, #0x1
    moveq r1, #0x1
    movne r1, #0x0
L_02193cc8:
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_02193d34
    cmp r0, #0x3e8
    movlt r0, #0x0
    blt L_02193d34
    cmp r0, #0xfa0
    bge L_02193d30
    ldr r1, =data_0214b484
    ldr r2, =0x10dcd
    ldr r1, [r1, #0x0]
    sub ip, r0, #0x3e8
    ldr lr, [r1, #0x0]
    ldr r3, =0xbb8
    mul r0, lr, r2
    add lr, r0, #0x1
    mov r0, lr, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r2, r0, r3
    mov r0, r2, lsr #0x10
    mov r0, r0, lsl #0x10
    cmp ip, r0, lsr #0x10
    movlt r0, #0x1
    str lr, [r1, #0x0]
    movge r0, #0x0
    b L_02193d34
L_02193d30:
    mov r0, #0x1
L_02193d34:
    cmp r0, #0x0
    beq L_02193dc8
    mov r3, #0x0
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    str r3, [r5, #0x4ac]
    bl func_020342ec
    cmp r0, #0x0
    beq L_02193d90
    ldrb r0, [r5, #0xc9]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r5, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02193d90
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e2c
L_02193d90:
    mov r0, r5
    mov r1, #0x4
    bl func_02027e90
    mov r1, r0
    mov r0, r5
    bl func_02038358
    mov r2, r0
    ldr r1, =0x3ba
    mov r0, r5
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    b L_02193dec
L_02193dc8:
    mov r0, r5
    bl func_02038180
    mov r2, r0
    ldr r1, =0x3d1
    mov r0, r5
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
L_02193dec:
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02193e04:
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    bne L_02193e34
    ldr r1, =0x3f6
    mov r0, r5
    bl func_0203e2b8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02193e34:
    mov r0, r5
    bl func_ov002_02195f40
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02193e64:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
