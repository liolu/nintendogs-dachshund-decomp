#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_02068380();
extern void func_ov018_021588f8();
// clang-format off
asm void func_ov018_02159e54(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    mov r1, #0x3c
    bl func_02003844
    str r0, [r4, #0xac]
    ldr r1, [r4, #0xac]
    cmp r1, #0x0
    beq L_0215c314
    mov r0, #0x0
    str r0, [r1, #0x0]
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    ldr r0, [r4, #0xac]
    add r0, r0, #0xc
    bl func_02068380
L_0215c314:
    mov r0, r4
    bl func_ov018_021588f8
    cmp r0, #0x0
    ldrne r2, =0x19a
    ldrne r1, =0x1806
    strne r2, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r2, [r0, #0x2c]
    mov r0, r4
    bl func_ov018_021588f8
    cmp r0, #0x0
    beq L_0215c360
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215c360:
    add r0, r4, #0x48
    bl func_02068380
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
