#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025d18();
extern void func_02026bcc();
extern void func_ov002_021770e8();
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_021763ac(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    add r0, r4, #0x3d8
    add r3, sp, #0x10
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x100
    ldrh r1, [r0, #0xa]
    mov r0, #0x0
    cmp r1, #0x3c
    blo L_02176418
    ldr r2, =data_0214b484
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
L_02176418:
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
    bl func_ov002_021770e8
    ldrsb r0, [r4, #0xb0]
    cmp r0, #0x4
    beq L_02176538
    cmp r0, #0x5
    beq L_021764b0
    ldr r1, =data_0214b484
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
    addeq r1, r4, #0xb0
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    mov r0, r4
    bl func_02025d18
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_021764b0:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r0, #0x0
    strne r0, [r4, #0x488]
    ldreq r0, [r4, #0x488]
    addeq r0, r0, #0x1
    streq r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x64
    ble L_02176524
    ldr r1, =data_0214b484
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
    addeq r1, r4, #0xb0
    moveq r0, #0x4
    swpeqb r0, r0, [r1]
L_02176524:
    mov r0, r4
    bl func_02025d18
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_02176538:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021765a8
    ldr r1, =data_0214b484
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
    beq L_0217659c
    cmp r0, #0x1
    addeq r1, r4, #0xb0
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_021765a8
L_0217659c:
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
L_021765a8:
    add r0, sp, #0x10
    add r3, r4, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_02026bcc
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
