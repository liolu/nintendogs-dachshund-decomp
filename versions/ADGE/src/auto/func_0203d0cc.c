#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02029190();
extern void func_0203de80();
extern void func_020a5d54();
extern char data_0214da84[];
// clang-format off
asm void func_0203d0cc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r0, [r4, #0x8b]
    cmp r0, #0x3
    bne L_0203d0f8
    add r1, r4, #0xd2
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =0x2710
    ldr r0, [r4, #0x9e8]
    strh r1, [r0, #0x1a]
L_0203d0f8:
    mov r0, r4
    bl func_0203de80
    bl func_020a5d54
    ldrsb r1, [r4, #0x88]
    cmp r1, r0
    bne L_0203d2d0
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203d168
    cmp r0, #0x4
    beq L_0203d1b0
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d1f4
L_0203d168:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d1f4
L_0203d1b0:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203d1f4:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203d20c
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203d24c
L_0203d20c:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203d24c
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203d230
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203d24c
L_0203d230:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203d248
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203d24c
L_0203d248:
    mov r0, #0x0
L_0203d24c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203d2ac
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203d278
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d2ac
L_0203d278:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203d294
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d2ac
L_0203d294:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203d2ac
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203d2ac:
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x2
    bl func_02029190
    ldmfd sp!, {r4, lr}
    bx lr
L_0203d2d0:
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203d328
    cmp r0, #0x4
    beq L_0203d370
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d3b4
L_0203d328:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d3b4
L_0203d370:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203d3b4:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203d3cc
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203d40c
L_0203d3cc:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203d40c
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203d3f0
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203d40c
L_0203d3f0:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203d408
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203d40c
L_0203d408:
    mov r0, #0x0
L_0203d40c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203d46c
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203d438
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d46c
L_0203d438:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203d454
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d46c
L_0203d454:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203d46c
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203d46c:
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x1
    mov r0, r4
    mov r2, r1
    bl func_02029190
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
