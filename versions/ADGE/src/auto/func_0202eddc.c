#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
extern char data_0215a04c[];
// clang-format off
asm void func_0202eddc(void) {
    ldr r2, =data_0215a04c
    ldr r2, [r2, #0x0]
    ldrh r2, [r2, #0x0]
    cmp r2, #0x11
    bne L_0202ee04
    ldr r2, [r0, #0x9e8]
    ldrb r2, [r2, #0x72]
    cmp r2, #0x4
    moveq r0, #0x0
    bxeq lr
L_0202ee04:
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_0202efe8
L_0202ee10:
    b L_0202ee34
    b L_0202ef2c
    b L_0202ef3c
    b L_0202ef4c
    b L_0202ef5c
    b L_0202efb8
    b L_0202efc0
    b L_0202efc8
    b L_0202efd8
L_0202ee34:
    mov r1, #0x224
    strh r1, [r0, #0xea]
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202ee54
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202ee94
L_0202ee54:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202ee94
    ldrsh r2, [r0, #0xea]
    cmp r2, #0xf
    blt L_0202ee78
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202ee94
L_0202ee78:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202ee90
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202ee94
L_0202ee90:
    mov r1, #0x0
L_0202ee94:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202eef4
    ldrsh r2, [r0, #0xea]
    ldr r1, =0x478
    cmp r2, r1
    blt L_0202eec0
    ldr r1, =0x47e
    cmp r2, r1
    movle r1, #0x0
    ble L_0202eef4
L_0202eec0:
    ldr r1, =0x4c7
    cmp r2, r1
    blt L_0202eedc
    ldr r1, =0x4ca
    cmp r2, r1
    movle r1, #0x0
    ble L_0202eef4
L_0202eedc:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202eef4
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202eef4:
    cmp r1, #0x0
    beq L_0202ef24
    add r2, r0, #0xa8
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0xb
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    mov r0, #0x4
    swpb r0, r0, [r1]
L_0202ef24:
    mov r0, #0x1
    bx lr
L_0202ef2c:
    ldr r1, =0x22f
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202ef3c:
    ldr r1, =0x233
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202ef4c:
    ldr r1, =0x236
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202ef5c:
    ldr r2, =data_0214da84
    ldr r1, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    str r2, [r3, #0x0]
    movs r1, r1, lsr #0x10
    beq L_0202ef98
    cmp r1, #0x1
    beq L_0202efa8
    b L_0202efe8
L_0202ef98:
    ldr r1, =0x23b
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202efa8:
    mov r1, #0x23c
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202efb8:
    mov r0, #0x0
    bx lr
L_0202efc0:
    mov r0, #0x0
    bx lr
L_0202efc8:
    ldr r1, =0x247
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202efd8:
    mov r1, #0x248
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202efe8:
    mov r0, #0x0
    bx lr
}
// clang-format on
