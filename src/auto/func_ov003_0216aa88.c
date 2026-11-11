#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023644();
extern void func_02025594();
extern void func_020264e4();
extern void func_0202d804();
// clang-format off
asm void func_ov003_0216aa88(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, =0x18b
    add r0, r4, #0x100
    strh r1, [r0, #0x52]
    ldrsh r1, [r4, #0xee]
    ldr r0, =0x1ce
    cmp r1, r0
    beq L_0216aab8
    ldr r0, =0x1cf
    cmp r1, r0
    bne L_0216aac0
L_0216aab8:
    mov r0, #0x0
    b L_0216aac4
L_0216aac0:
    mov r0, #0x9
L_0216aac4:
    add r1, r4, #0x93
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x98
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x7
    mov r2, #0x1
    bl func_02023644
    mov r0, r4
    mov r1, #0x7
    bl func_0202d804
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
