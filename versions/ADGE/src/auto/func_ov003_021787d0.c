#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025d60();
extern void func_02026c14();
extern void func_ov003_021794dc();
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_021787d0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    add r0, r4, #0x3b4
    add r3, sp, #0x10
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrh r1, [r4, #0xfc]
    mov r0, #0x0
    cmp r1, #0x3c
    blo L_02178838
    ldr r2, =data_0214da84
    ldr r1, =0x10dcd
    ldr ip, [r2, #0x0]
    mov r2, #0x1e
    ldr r3, [ip, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    str r3, [ip, #0x0]
    moveq r0, #0x1
L_02178838:
    mov r1, #0x1
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r3, #0x14
    str r3, [sp, #0x8]
    mvn r1, #0x0
    mov r0, r4
    mov r2, r1
    str r3, [sp, #0xc]
    mov r3, #0x0
    bl func_ov003_021794dc
    ldrsb r0, [r4, #0x97]
    cmp r0, #0x4
    beq L_02178958
    cmp r0, #0x5
    beq L_021788d0
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x14
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x97
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    mov r0, r4
    bl func_02025d60
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_021788d0:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r0, #0x0
    strne r0, [r4, #0x464]
    ldreq r0, [r4, #0x464]
    addeq r0, r0, #0x1
    streq r0, [r4, #0x464]
    ldr r0, [r4, #0x464]
    cmp r0, #0x64
    ble L_02178944
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0xc8
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x97
    moveq r0, #0x4
    swpeqb r0, r0, [r1]
L_02178944:
    mov r0, r4
    bl func_02025d60
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_02178958:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021789c8
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0xc8
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_021789bc
    cmp r0, #0x1
    addeq r1, r4, #0x97
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_021789c8
L_021789bc:
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
L_021789c8:
    add r0, sp, #0x10
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_02026c14
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
