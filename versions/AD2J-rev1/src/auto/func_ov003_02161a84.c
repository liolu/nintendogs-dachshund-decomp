#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280f8();
extern void func_02029204();
extern void func_0203e2b8();
extern void func_020e1550();
extern void func_020e17e0();
extern void func_020e2e24();
extern void func_020e2e40();
extern void func_ov003_02157ed4();
extern void func_ov003_02157f0c();
extern void func_ov003_02157f44();
extern void func_ov003_02165bc4();
// clang-format off
asm void func_ov003_02161a84(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x4a8]
    ldr r1, [r4, #0x2a0]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x2a0]
    ldr r1, [r4, #0x414]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x414]
    ldr r1, [r4, #0x420]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x420]
    ldr r0, [r4, #0x4ac]
    add r0, r0, #0x1
    str r0, [r4, #0x4ac]
    bl func_020e2e24
    cmp r0, #0x0
    beq L_02161ae4
    ldr r0, [r4, #0x4a8]
    bl func_020e17e0
L_02161ae4:
    mov r0, r4
    bl func_ov003_02165bc4
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x50
    bne L_02161b1c
    bl func_020e2e24
    cmp r0, #0x0
    beq L_02161b1c
    mov r0, r4
    bl func_020280f8
    mov r1, r0
    add r0, r4, #0x36c
    bl func_020e1550
L_02161b1c:
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x50
    bne L_02161b90
    bl func_020e2e40
    cmp r0, #0x0
    beq L_02161b90
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x4f
    bne L_02161b90
    mov r0, r4
    bl func_02029204
    ldrsb r0, [r4, #0xce]
    cmp r0, #0x1
    beq L_02161b6c
    cmp r0, #0x2
    beq L_02161b74
    cmp r0, #0x3
    beq L_02161b80
    b L_02161b84
L_02161b6c:
    bl func_ov003_02157f0c
    b L_02161b84
L_02161b74:
    mov r0, #0x1
    bl func_ov003_02157f44
    b L_02161b84
L_02161b80:
    bl func_ov003_02157ed4
L_02161b84:
    add r1, r4, #0xce
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02161b90:
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0xa0
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, =0x48a
    mov r0, r4
    bl func_0203e2b8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
