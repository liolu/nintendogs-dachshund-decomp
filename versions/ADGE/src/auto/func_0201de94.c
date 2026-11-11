#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026b9c();
extern void func_0202bdcc();
extern char data_0214da84[];
// clang-format off
asm void func_0201de94(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, =0x111
    add r0, r4, #0x100
    strh r1, [r0, #0x52]
    ldrsh r0, [r0, #0x64]
    cmp r0, #0x11
    beq L_0201dec0
    cmp r0, #0x12
    beq L_0201dec8
    b L_0201ded0
L_0201dec0:
    mov r1, #0x12
    b L_0201df08
L_0201dec8:
    mov r1, #0x11
    b L_0201df08
L_0201ded0:
    ldr r1, =data_0214da84
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
L_0201df08:
    add r0, r4, #0x100
    strh r1, [r0, #0x54]
    add r1, r4, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x98
    mov r1, #0x6
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025ba0
    mov r0, r4
    bl func_0202bdcc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
