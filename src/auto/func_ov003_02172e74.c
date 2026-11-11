#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c0d8();
extern void func_02022e04();
extern void func_02029248();
extern void func_0202c9f0();
extern void func_02044824();
extern char data_0214da84[];
// clang-format off
asm void func_ov003_02172e74(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x464]
    add r0, r0, #0x1
    str r0, [r4, #0x464]
    ldr r0, [r4, #0x464]
    cmp r0, #0x12c
    ble L_02172fb4
    ldrsb r0, [r4, #0x93]
    cmp r0, #0x0
    beq L_02172eb4
    cmp r0, #0x3
    beq L_02172f14
    cmp r0, #0x5
    beq L_02172f5c
    b L_02172fb4
L_02172eb4:
    ldr r1, =data_0214da84
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
    beq L_02172f04
    cmp r0, #0x1
    addeq r1, r4, #0x93
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_02172fb4
L_02172f04:
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_02172fb4
L_02172f14:
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
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x93
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_02172fb4
L_02172f5c:
    bl func_02044824
    cmp r0, #0x0
    beq L_02172f70
    add r1, r4, #0x3b4
    bl func_0200c0d8
L_02172f70:
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
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x93
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_02172fb4:
    mov r0, r4
    mov r1, #0x4b
    bl func_02022e04
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    mov r1, #0x0
    bl func_0202c9f0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02029248
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
