#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_020a5fcc();
extern char data_0214da84[];
// clang-format off
asm void func_0202bdf0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    add r0, r8, #0x100
    ldrh r0, [r0, #0x12]
    mov r7, r1
    mov r6, r2
    cmp r0, #0x0
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldrsh r0, [r8, #0xf0]
    cmp r0, #0xb
    bgt L_0202be60
    cmp r0, #0x0
    addge pc, pc, r0, lsl #0x2
    b L_0202bfe4
L_0202be30:
    b L_0202bfe4
    b L_0202bfe4
    b L_0202bfe4
    b L_0202bfe4
    b L_0202be74
    b L_0202be74
    b L_0202be74
    b L_0202be74
    b L_0202be74
    b L_0202bfe4
    b L_0202be74
    b L_0202be74
L_0202be60:
    cmp r0, #0x6f
    bne L_0202bfe4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202be74:
    ldrsb r4, [r8, #0x88]
    mov r5, #0x1
    bl func_020a5d54
    cmp r4, r0
    beq L_0202be9c
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r4, r0
    movne r5, #0x0
L_0202be9c:
    cmp r5, #0x0
    beq L_0202bf68
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202bed4
L_0202beb0:
    b L_0202bed4
    b L_0202bee4
    b L_0202bf10
    b L_0202bed4
    b L_0202bf20
    b L_0202bf20
    b L_0202bf20
    b L_0202bf20
    b L_0202bf20
L_0202bed4:
    mov r1, r4
    mov r0, #0x5
    bl func_020a5a1c
    b L_0202bf2c
L_0202bee4:
    ldrh r0, [r8, #0xf2]
    cmp r0, #0x1c
    bne L_0202bf00
    mov r1, r4
    mov r0, #0xb
    bl func_020a5a1c
    b L_0202bf2c
L_0202bf00:
    mov r1, r4
    mov r0, #0x7
    bl func_020a5a1c
    b L_0202bf2c
L_0202bf10:
    mov r1, r4
    mov r0, #0x9
    bl func_020a5a1c
    b L_0202bf2c
L_0202bf20:
    mov r1, r4
    mov r0, #0xd
    bl func_020a5a1c
L_0202bf2c:
    ldr r0, =data_0214da84
    ldrsb r1, [r8, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r1, r0
    bne L_0202bf58
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202bf68
L_0202bf58:
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202bf68:
    cmp r6, #0x0
    beq L_0202bfd8
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202bfcc
L_0202bf7c:
    b L_0202bfcc
    b L_0202bfcc
    b L_0202bfcc
    b L_0202bfcc
    b L_0202bfcc
    b L_0202bfac
    b L_0202bfa0
    b L_0202bfc4
    b L_0202bfb8
L_0202bfa0:
    ldr r0, =0x243
    strh r0, [r8, #0xea]
    b L_0202bfcc
L_0202bfac:
    mov r0, #0x244
    strh r0, [r8, #0xea]
    b L_0202bfcc
L_0202bfb8:
    ldr r0, =0x247
    strh r0, [r8, #0xea]
    b L_0202bfcc
L_0202bfc4:
    mov r0, #0x248
    strh r0, [r8, #0xea]
L_0202bfcc:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202bfd8:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202bfe4:
    ldrsh r0, [r8, #0xf0]
    mov r1, #0x0
    cmp r0, #0xc
    ble L_0202bffc
    cmp r0, #0x6f
    movlt r1, #0x1
L_0202bffc:
    cmp r1, #0x0
    beq L_0202c080
    cmp r6, #0x0
    beq L_0202c074
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202c068
L_0202c018:
    b L_0202c068
    b L_0202c068
    b L_0202c068
    b L_0202c068
    b L_0202c068
    b L_0202c048
    b L_0202c03c
    b L_0202c060
    b L_0202c054
L_0202c03c:
    ldr r0, =0x243
    strh r0, [r8, #0xea]
    b L_0202c068
L_0202c048:
    mov r0, #0x244
    strh r0, [r8, #0xea]
    b L_0202c068
L_0202c054:
    ldr r0, =0x247
    strh r0, [r8, #0xea]
    b L_0202c068
L_0202c060:
    mov r0, #0x248
    strh r0, [r8, #0xea]
L_0202c068:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202c074:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202c080:
    add r2, r8, #0xa8
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r1, r8, #0x100
    strh r0, [r1, #0x12]
    mov r1, #0x6f
    strh r1, [r8, #0xf0]
    add r2, r8, #0xa5
    swpb r1, r0, [r2]
    add r2, r8, #0xa3
    swpb r1, r0, [r2]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
