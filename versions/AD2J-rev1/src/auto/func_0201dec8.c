#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_02026b54();
extern void func_0202bd84();
extern char data_0214b484[];
// clang-format off
asm void func_0201dec8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, =0x111
    add r0, r4, #0x100
    strh r1, [r0, #0x50]
    ldrsh r0, [r0, #0x62]
    cmp r0, #0x11
    beq L_0201def4
    cmp r0, #0x12
    beq L_0201defc
    b L_0201df04
L_0201def4:
    mov r1, #0x12
    b L_0201df3c
L_0201defc:
    mov r1, #0x11
    b L_0201df3c
L_0201df04:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add r0, r0, #0x11
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    mov r1, r0, asr #0x10
L_0201df3c:
    add r0, r4, #0x100
    strh r1, [r0, #0x52]
    add r1, r4, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb1
    mov r1, #0x6
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_02025b58
    mov r0, r4
    bl func_0202bd84
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
