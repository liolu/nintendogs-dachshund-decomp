#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020230ec();
extern void func_0202405c();
extern char data_02134fa8[];
extern char data_02138ed4[];
extern char data_0214da84[];
// clang-format off
asm void func_02023828(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsh r2, [r4, #0xf6]
    cmp r2, #0x0
    blt L_02023844
    cmp r2, #0x14
    blt L_0202384c
L_02023844:
    mov r1, #0x0
    b L_0202385c
L_0202384c:
    ldr r1, [r4, #0x9e8]
    mov r0, #0x3c
    add r1, r1, #0x90
    smlabb r1, r2, r0, r1
L_0202385c:
    add r2, r4, #0xd2
    mov r0, #0x1
    swpb r0, r0, [r2]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_020238e4
    ldrh r3, [r1, #0x0]
    cmp r3, #0x0
    moveq r0, #0x0
    beq L_020238e4
    ldrh r0, [r1, #0x2]
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_020238e4
    cmp r3, #0x4f
    blo L_020238ac
    cmp r3, #0x63
    ldrlo r2, =data_02138ed4
    ldrlo r2, [r2, #0x13c]
    blo L_020238b4
L_020238ac:
    ldr r2, =data_02138ed4
    ldr r2, [r2, r3, lsl #0x2]
L_020238b4:
    ldrb r2, [r2, #0x2]
    ldr r3, [r4, #0x9e8]
    ldr ip, =data_02134fa8
    sub lr, r2, #0x1
    mov r2, #0x5
    mla r2, lr, r2, ip
    ldrb r3, [r3, #0x13]
    sub r3, r3, #0x1
    ldrb r2, [r3, r2]
    cmp r0, r2
    movlt r0, #0x1
    movge r0, #0x2
L_020238e4:
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldrh r0, [r1, #0x2]
    sub r0, r0, #0x1
    strh r0, [r1, #0x2]
    ldrh r0, [r1, #0x2]
    cmp r0, #0x0
    bne L_02023958
    mov r0, r4
    bl func_0202405c
    mov r0, r4
    bl func_020230ec
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xa5
    add r0, r4, #0x100
    strh r2, [r0, #0x12]
    mov r0, #0x5
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    mov r2, #0x3
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    add r1, r0, #0xf
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02023958:
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x12]
    mov r0, #0x6
    strh r0, [r4, #0xf0]
    add r1, r4, #0xa5
    swpb r0, r2, [r1]
    ldr r0, =data_0214da84
    mov r2, #0x4
    ldr r0, [r0, #0x0]
    add r1, r0, #0xf
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
