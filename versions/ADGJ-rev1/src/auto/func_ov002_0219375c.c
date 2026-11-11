#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e2c();
extern void func_02027e90();
extern void func_02029204();
extern void func_0202f8a4();
extern void func_020342ec();
extern void func_02034f40();
extern void func_02035e14();
extern void func_02038358();
extern void func_0203e2b8();
extern void func_0210bebc();
// clang-format off
asm void func_ov002_0219375c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_02034f40
    movs r4, r0
    beq L_0219385c
    ldrsh r1, [r4, #0x90]
    cmp r1, #0x0
    beq L_02193788
    cmp r1, #0x2
    bne L_02193790
L_02193788:
    mov r0, #0x1
    b L_021937b0
L_02193790:
    ldrsh r1, [r4, #0x94]
    cmp r1, #0x35
    bne L_021937ac
    bl func_0210bebc
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_021937b0
L_021937ac:
    mov r0, #0x0
L_021937b0:
    cmp r0, #0x0
    bne L_0219385c
    ldrsh r1, [r4, #0x88]
    mov r0, r5
    add r1, r1, #0x3
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_020342ec
    cmp r0, #0x0
    beq L_0219381c
    ldrb r0, [r5, #0xc9]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r5, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0219381c
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e2c
L_0219381c:
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
    mov r0, #0x0
    str r0, [r5, #0x4ac]
    b L_02193864
L_0219385c:
    mov r0, r5
    bl func_0202f8a4
L_02193864:
    mov r0, r5
    bl func_02029204
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
