#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e54();
extern void func_02027eb8();
extern void func_0202fa5c();
extern void func_02034430();
extern void func_020350fc();
extern void func_020383b0();
extern void func_02038588();
extern void func_0203e5e8();
extern void func_ov003_02196338();
extern void func_ov003_02198408();
extern char data_0214da84[];
extern char data_0215a04c[];
// clang-format off
asm void func_ov003_02196034(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrsh r0, [r5, #0xfa]
    mov r4, r1
    cmp r0, #0x25
    bne L_02196098
    ldrb r0, [r5, #0xb6]
    ands r1, r0, #0x8
    bicne r0, r0, #0x8
    addne r1, r5, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02196084
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x19
    bl func_02027e54
L_02196084:
    add r1, r5, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x5
    str r0, [r5, #0x948]
L_02196098:
    ldr r1, [r5, #0x488]
    mov r0, r5
    add r1, r1, #0x1
    str r1, [r5, #0x488]
    bl func_ov003_02196338
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02196304
    mov r0, r5
    bl func_020350fc
    movs r4, r0
    beq L_021962a4
    ldrsh r0, [r4, #0x96]
    cmp r0, #0x3
    beq L_021960f0
    cmp r0, #0xe
    beq L_02196114
    b L_02196138
L_021960f0:
    ldr r1, =0x43c
    mov r0, r5
    bl func_0203e5e8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02196114:
    ldr r1, =0x428
    mov r0, r5
    bl func_0203e5e8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02196138:
    mov r0, r5
    mov r1, #0x4
    bl func_02027eb8
    ldr r1, =data_0215a04c
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0xa
    moveq r1, #0x1
    beq L_02196168
    cmp r1, #0x1
    moveq r1, #0x1
    movne r1, #0x0
L_02196168:
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_021961d4
    cmp r0, #0x3e8
    movlt r0, #0x0
    blt L_021961d4
    cmp r0, #0xfa0
    bge L_021961d0
    ldr r1, =data_0214da84
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
    b L_021961d4
L_021961d0:
    mov r0, #0x1
L_021961d4:
    cmp r0, #0x0
    beq L_02196268
    mov r3, #0x0
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    str r3, [r5, #0x488]
    bl func_02034430
    cmp r0, #0x0
    beq L_02196230
    ldrb r0, [r5, #0xb6]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r5, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02196230
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e54
L_02196230:
    mov r0, r5
    mov r1, #0x4
    bl func_02027eb8
    mov r1, r0
    mov r0, r5
    bl func_02038588
    mov r2, r0
    ldr r1, =0x3ba
    mov r0, r5
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    b L_0219628c
L_02196268:
    mov r0, r5
    bl func_020383b0
    mov r2, r0
    ldr r1, =0x3d1
    mov r0, r5
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
L_0219628c:
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021962a4:
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    bne L_021962d4
    ldr r1, =0x3f7
    mov r0, r5
    bl func_0203e5e8
    mov r0, #0x0
    strh r0, [r5, #0xfa]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021962d4:
    mov r0, r5
    bl func_ov003_02198408
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02196304:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
