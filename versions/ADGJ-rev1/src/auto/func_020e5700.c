#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020039d0();
extern void func_02003b9c();
extern void func_020a5240();
extern void func_020b86c0();
extern void func_020bdb98();
extern void func_020bdca0();
extern void func_020bdd48();
extern void func_020e6018();
extern void func_020e6120();
extern void func_020f07bc();
extern char data_0214b024[];
extern char data_02153740[];
// clang-format off
asm void func_020e5700(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r6, r0
    ldr r1, [r6, #0x4]
    ldr r0, =0x914
    str r1, [r6, #0x0]
    ldr r1, [r6, #0x0]
    add r4, r6, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_020e5cd4
L_020e572c:
    b L_020e5744
    b L_020e579c
    b L_020e57d4
    b L_020e5990
    b L_020e5b48
    b L_020e5c64
L_020e5744:
    ldr r1, [r6, #0xc]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r6, #0xc]
    ldr r0, [r6, #0xc]
    cmp r0, #0x0
    movle r0, #0x0
    strle r0, [r6, #0xc]
    ldr r0, [r6, #0x10]
    movgt r2, #0x0
    add r0, r0, #0xb60
    str r0, [r6, #0x10]
    ldr r0, [r6, #0x10]
    cmp r0, #0x10000
    movge r0, #0x10000
    movlt r2, #0x0
    strge r0, [r6, #0x10]
    cmp r2, #0x0
    movne r0, #0x1
    strne r0, [r6, #0x4]
    b L_020e5cd4
L_020e579c:
    ldr r1, [r6, #0x14]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r6, #0x14]
    ldr r0, [r6, #0x14]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r2, #0x0
    strle r0, [r6, #0x14]
    cmp r2, #0x0
    movne r0, #0x2
    strne r0, [r6, #0x4]
    b L_020e5cd4
L_020e57d4:
    ldr r0, =data_02153740
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x4d0]
    cmp r0, #0x0
    beq L_020e5cd4
    ldr r1, =data_0214b024
    mov r0, #0x2
    ldrb r5, [r1, #0x0]
    ldrb r4, [r1, #0x1]
    mov r1, r5
    mov r2, r4
    bl func_020b86c0
    ldr r1, =data_0214b024
    ldrh r1, [r1, #0x2]
    ands r1, r1, #0x2
    beq L_020e5cd4
    cmp r0, #0x4
    bne L_020e5894
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov ip, #0x0
    str ip, [sp, #0x8]
    str ip, [sp, #0xc]
    str ip, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    add r0, r6, #0x28
    mov r1, #0x2
    mov r2, #0x1a
    mov r3, #0x1
    str ip, [sp, #0x18]
    bl func_020bdd48
    mov r1, r5, lsl #0x10
    mov r2, r4, lsl #0x10
    add r0, r6, #0x28
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020bdca0
    add r2, r6, #0x64
    mov r0, #0x0
    swpb r1, r0, [r2]
    mov r1, #0x3
    str r1, [r6, #0x4]
    bl func_020f07bc
    b L_020e5cd4
L_020e5894:
    cmp r0, #0x5
    bne L_020e5910
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    mov ip, #0xa
    str ip, [sp, #0x14]
    add r0, r6, #0x28
    mov r1, #0x2
    mov r2, #0x1b
    mov r3, #0x1
    str ip, [sp, #0x18]
    bl func_020bdd48
    mov r1, r5, lsl #0x10
    mov r2, r4, lsl #0x10
    add r0, r6, #0x28
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020bdca0
    add r2, r6, #0x64
    mov r0, #0x1
    swpb r1, r0, [r2]
    mov r1, #0x3
    str r1, [r6, #0x4]
    bl func_020f07bc
    b L_020e5cd4
L_020e5910:
    cmp r0, #0x3
    mov r1, #0x1
    addls pc, pc, r0, lsl #0x2
    b L_020e5950
L_020e5920:
    b L_020e5930
    b L_020e5938
    b L_020e5940
    b L_020e5948
L_020e5930:
    str r1, [r6, #0x18]
    b L_020e5954
L_020e5938:
    str r1, [r6, #0x20]
    b L_020e5954
L_020e5940:
    str r1, [r6, #0x1c]
    b L_020e5954
L_020e5948:
    str r1, [r6, #0x24]
    b L_020e5954
L_020e5950:
    mov r1, #0x0
L_020e5954:
    cmp r1, #0x0
    beq L_020e5cd4
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_020e6018
    mov r0, #0x1e
    str r0, [r6, #0x8]
    add r1, r6, #0x64
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x3
    str r0, [r6, #0x4]
    b L_020e5cd4
L_020e5990:
    ldrsb r1, [r6, #0x64]
    mvn r0, #0x0
    cmp r1, r0
    beq L_020e59cc
    add r0, r6, #0x28
    bl func_020bdb98
    cmp r0, #0x0
    beq L_020e5cd4
    mov r0, #0x14
    bl func_02003b9c
    mov r1, #0x5
    mov r0, #0x34
    str r1, [r6, #0x4]
    bl func_020f07bc
    b L_020e5cd4
L_020e59cc:
    ldr r0, [r6, #0x8]
    ldr r2, =data_0214b024
    sub r0, r0, #0x1
    str r0, [r6, #0x8]
    ldrh r0, [r2, #0x2]
    ands r0, r0, #0x1
    bne L_020e5a34
    ldr r0, [r6, #0x8]
    cmp r0, #0x18
    bgt L_020e5cd4
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_020e5a08:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_020e5a10:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_020e5a10
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_020e5a08
    b L_020e5cd4
L_020e5a34:
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    bgt L_020e5cd4
    ldr r0, =data_02153740
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x4d0]
    cmp r0, #0x0
    beq L_020e5b08
    ldrb r1, [r2, #0x0]
    ldrb r2, [r2, #0x1]
    mov r0, #0x2
    bl func_020b86c0
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_020e5ac4
L_020e5a74:
    b L_020e5a84
    b L_020e5a94
    b L_020e5aa4
    b L_020e5ab4
L_020e5a84:
    ldr r1, [r6, #0x18]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5ac8
L_020e5a94:
    ldr r1, [r6, #0x20]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5ac8
L_020e5aa4:
    ldr r1, [r6, #0x1c]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5ac8
L_020e5ab4:
    ldr r1, [r6, #0x24]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5ac8
L_020e5ac4:
    mov r1, #0x0
L_020e5ac8:
    cmp r1, #0x0
    beq L_020e5b08
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_020e6018
    mov r1, #0xa
    str r1, [r6, #0x8]
    mov r1, #0x4
    mov r0, r6
    str r1, [r6, #0x4]
    bl func_020e6120
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020e5b08:
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_020e5b1c:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_020e5b24:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_020e5b24
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_020e5b1c
    b L_020e5cd4
L_020e5b48:
    ldr r1, [r6, #0x8]
    ldr r0, =data_02153740
    sub r1, r1, #0x1
    str r1, [r6, #0x8]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x4d0]
    cmp r0, #0x0
    beq L_020e5c24
    ldr r2, =data_0214b024
    mov r0, #0x2
    ldrb r1, [r2, #0x0]
    ldrb r2, [r2, #0x1]
    bl func_020b86c0
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_020e5bdc
L_020e5b8c:
    b L_020e5b9c
    b L_020e5bac
    b L_020e5bbc
    b L_020e5bcc
L_020e5b9c:
    ldr r1, [r6, #0x18]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5be0
L_020e5bac:
    ldr r1, [r6, #0x20]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5be0
L_020e5bbc:
    ldr r1, [r6, #0x1c]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5be0
L_020e5bcc:
    ldr r1, [r6, #0x24]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020e5be0
L_020e5bdc:
    mov r1, #0x0
L_020e5be0:
    cmp r1, #0x0
    beq L_020e5c24
    ldr r1, [r6, #0x8]
    cmp r1, #0x0
    bgt L_020e5c10
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_020e6018
    mov r0, #0xa
    str r0, [r6, #0x8]
L_020e5c10:
    mov r0, r6
    bl func_020e6120
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020e5c24:
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_020e5c38:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_020e5c40:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_020e5c40
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_020e5c38
    b L_020e5cd4
L_020e5c64:
    mov r5, #0x1
    bl func_020039d0
    cmp r0, #0x0
    ldr r1, [r6, #0xc]
    ldr r0, =0x6aaa
    moveq r5, #0x0
    add r0, r1, r0
    str r0, [r6, #0xc]
    ldr r0, [r6, #0xc]
    cmp r0, #0x64000
    movge r0, #0x64000
    strge r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    ldr r0, =0x1111
    movlt r5, #0x0
    sub r0, r1, r0
    str r0, [r6, #0x10]
    ldr r0, [r6, #0x10]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r5, #0x0
    strle r0, [r6, #0x10]
    cmp r5, #0x0
    beq L_020e5cd4
    mvn r1, #0x0
    mov r0, #0x11
    str r1, [r4, #0x0]
    bl func_020a5240
L_020e5cd4:
    mov r0, r6
    bl func_020e6120
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
