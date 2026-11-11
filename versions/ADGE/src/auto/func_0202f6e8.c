#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_0202f6e8(void) {
    ldrsh r1, [r0, #0xf0]
    cmp r1, #0x34
    bne L_0202f730
    ldr r1, =0x473
    add r2, r0, #0xa8
    mov r3, #0x0
    strh r1, [r0, #0xea]
    swpb r1, r3, [r2]
    add r2, r0, #0xa3
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0x6f
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    swpb r0, r3, [r1]
    swpb r1, r3, [r2]
    mov r0, #0x1
    bx lr
L_0202f730:
    cmp r1, #0x35
    bne L_0202f774
    ldr r1, =0x472
    add r2, r0, #0xa8
    mov r3, #0x0
    strh r1, [r0, #0xea]
    swpb r1, r3, [r2]
    add r2, r0, #0xa3
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0x6f
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    swpb r0, r3, [r1]
    swpb r1, r3, [r2]
    mov r0, #0x1
    bx lr
L_0202f774:
    ldr r2, =data_0214da84
    ldr r1, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x1e
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r2, [r3, #0x0]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0202f7fc
L_0202f7ac:
    b L_0202f7bc
    b L_0202f7cc
    b L_0202f7dc
    b L_0202f7ec
L_0202f7bc:
    mov r1, #0x470
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202f7cc:
    ldr r1, =0x471
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202f7dc:
    ldr r1, =0x472
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202f7ec:
    ldr r1, =0x473
    strh r1, [r0, #0xea]
    mov r0, #0x1
    bx lr
L_0202f7fc:
    mov r0, #0x0
    bx lr
}
// clang-format on
