#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c03c();
extern void func_02022dd0();
extern void func_02029204();
extern void func_0202c938();
extern void func_020444e8();
extern char data_0214b484[];
// clang-format off
asm void func_ov002_021709f4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x12c
    ble L_02170b34
    ldrsb r0, [r4, #0xac]
    cmp r0, #0x0
    beq L_02170a34
    cmp r0, #0x3
    beq L_02170a94
    cmp r0, #0x5
    beq L_02170adc
    b L_02170b34
L_02170a34:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3c
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
    beq L_02170a84
    cmp r0, #0x1
    addeq r1, r4, #0xac
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_02170b34
L_02170a84:
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_02170b34
L_02170a94:
    ldr r1, =data_0214b484
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
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0xac
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_02170b34
L_02170adc:
    bl func_020444e8
    cmp r0, #0x0
    beq L_02170af0
    add r1, r4, #0x3d8
    bl func_0200c03c
L_02170af0:
    ldr r1, =data_0214b484
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
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0xac
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_02170b34:
    mov r0, r4
    mov r1, #0x4b
    bl func_02022dd0
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    mov r1, #0x0
    bl func_0202c938
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02029204
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
