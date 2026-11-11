#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027ed0();
extern void func_0202812c();
extern void func_02028714();
extern void func_0202c9f0();
extern void func_0202fa6c();
extern void func_020350fc();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_02041914();
extern void func_ov003_02196338();
extern char data_0214da84[];
// clang-format off
asm void func_02014ba0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    add r2, r5, #0x100
    ldrh r3, [r2, #0x6]
    mov r4, r1
    add r1, r3, #0x1
    strh r1, [r2, #0x6]
    bl func_020350fc
    movs r6, r0
    beq L_02014c30
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e5ac
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x4
    beq L_02014bf0
    cmp r0, #0x7
    beq L_02014c0c
    b L_02014c24
L_02014bf0:
    ldrsb r0, [r5, #0x8b]
    cmp r0, #0x5
    beq L_02014c24
    cmp r0, #0x4
    movne r0, #0x1
    strne r0, [r5, #0x948]
    b L_02014c24
L_02014c0c:
    ldrsb r0, [r5, #0x8b]
    cmp r0, #0x5
    beq L_02014c24
    cmp r0, #0x4
    movne r0, #0x8
    strne r0, [r5, #0x948]
L_02014c24:
    mov r0, r5
    bl func_ov003_02196338
    b L_02014c34
L_02014c30:
    mov r0, #0x0
L_02014c34:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02014c78
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_02028714
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02014c78
    mov r1, r4, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_0202c9f0
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_02014c78:
    cmp r0, #0x0
    beq L_02014cec
    mov r0, r5
    bl func_02041914
    cmp r0, #0x0
    beq L_02014cc0
    ldrb r0, [r5, #0xb8]
    add r1, r5, #0xb8
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r5, #0xb8]
    cmp r0, #0x2
    blo L_02014cc0
    mov r0, r5
    bl func_0202812c
    add r1, r5, #0xb8
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02014cc0:
    ldr r2, =0xfffff448
    mov r0, r5
    mov r1, #0x2
    bl func_02027ed0
    add r0, r5, #0x100
    mov r1, #0xa
    strh r1, [r0, #0x4]
    mov r1, #0x0
    strh r1, [r0, #0x6]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02014cec:
    add r2, r5, #0x100
    ldrh r1, [r2, #0x6]
    ldr r0, =0x8ca0
    cmp r1, r0
    bls L_02014d2c
    add r0, r4, #0x4c
    mov r1, r0, lsl #0x10
    mov r3, #0x3c
    strh r3, [r2, #0x4]
    mov r3, #0x0
    mov r0, r5
    mov r1, r1, asr #0x10
    strh r3, [r2, #0x6]
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02014d2c:
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x12c
    ldmlsfd sp!, {r4, r5, r6, lr}
    bxls lr
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
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
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r1, r4, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_0202fa6c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
