#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202354c();
extern void func_020254f0();
extern void func_02026bcc();
extern void func_0202d5f0();
extern void func_02084980();
extern void func_020edc7c();
extern char data_02136d8c[];
extern char data_02136df8[];
extern char data_021386c4[];
extern char data_02154c9c[];
// clang-format off
asm void func_ov002_0215f738(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x4e
    strh r2, [r1, #0x50]
    mov r2, #0x7
    strh r2, [r1, #0x52]
    add r2, r4, #0xb0
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldr r1, =data_021386c4
    mov r0, r4
    ldr r1, [r1, #0x18]
    bl func_0202d5f0
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136df8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0xf
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136d8c
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x10
    bl func_02084980
    mov r0, #0x1e
    mov r1, #0x7f
    bl func_020edc7c
    mov r0, r4
    bl func_0202354c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
