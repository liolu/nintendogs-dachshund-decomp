#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020230b8();
extern void func_02024028();
extern char data_02133928[];
extern char data_021377bc[];
extern char data_0214b484[];
// clang-format off
asm void func_020237f4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsh r2, [r4, #0xf6]
    cmp r2, #0x0
    blt L_02023810
    cmp r2, #0x14
    blt L_02023818
L_02023810:
    mov r1, #0x0
    b L_02023828
L_02023818:
    ldr r1, [r4, #0x9e4]
    mov r0, #0x3c
    add r1, r1, #0x90
    smlabb r1, r2, r0, r1
L_02023828:
    add r2, r4, #0x8b
    mov r0, #0x1
    swpb r0, r0, [r2]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_020238b0
    ldrh r3, [r1, #0x0]
    cmp r3, #0x0
    moveq r0, #0x0
    beq L_020238b0
    ldrh r0, [r1, #0x2]
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_020238b0
    cmp r3, #0x4f
    blo L_02023878
    cmp r3, #0x63
    ldrlo r2, =data_021377bc
    ldrlo r2, [r2, #0x13c]
    blo L_02023880
L_02023878:
    ldr r2, =data_021377bc
    ldr r2, [r2, r3, lsl #0x2]
L_02023880:
    ldrb r2, [r2, #0x2]
    ldr r3, [r4, #0x9e4]
    ldr ip, =data_02133928
    sub lr, r2, #0x1
    mov r2, #0x5
    mla r2, lr, r2, ip
    ldrb r3, [r3, #0x13]
    sub r3, r3, #0x1
    ldrb r2, [r3, r2]
    cmp r0, r2
    movlt r0, #0x1
    movge r0, #0x2
L_020238b0:
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldrh r0, [r1, #0x2]
    sub r0, r0, #0x1
    strh r0, [r1, #0x2]
    ldrh r0, [r1, #0x2]
    cmp r0, #0x0
    bne L_02023924
    mov r0, r4
    bl func_02024028
    mov r0, r4
    bl func_020230b8
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xc4
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0x5
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    mov r2, #0x3
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r1, r0, #0x9
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02023924:
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0x6
    strh r0, [r4, #0xf0]
    add r1, r4, #0xc4
    swpb r0, r2, [r1]
    ldr r0, =data_0214b484
    mov r2, #0x4
    ldr r0, [r0, #0x0]
    add r1, r0, #0x9
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
