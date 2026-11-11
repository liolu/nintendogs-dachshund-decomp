#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025594();
extern void func_020264e4();
extern void func_0202a308();
extern void func_0202d804();
// clang-format off
asm void func_ov003_02167154(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0202a308
    cmp r0, #0x1
    beq L_02167174
    cmp r0, #0x2
    beq L_0216717c
    b L_02167184
L_02167174:
    ldr r2, =0x1e3
    b L_02167188
L_0216717c:
    mov r2, #0x1e4
    b L_02167188
L_02167184:
    mov r2, #0x0
L_02167188:
    add r1, r4, #0x100
    mov r0, r4
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x0
    bl func_0202d804
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
