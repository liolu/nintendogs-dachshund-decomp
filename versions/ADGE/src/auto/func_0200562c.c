#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_02005690();
// clang-format off
asm void func_0200562c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r1, #0xe0
    mov r6, r0
    bl func_020038a8
    mov r4, r0
    mov r1, r5
    bl func_02005690
    ldrh r0, [r4, #0xa]
    cmp r0, #0x1
    bne L_02005684
    mov r0, r6
    mov r1, #0x8
    bl func_020038a8
    mov r1, #0x5000
    strh r1, [r0, #0x0]
    add r2, r0, #0x2
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r0, #0x3
    swpb r1, r3, [r2]
    str r0, [r4, #0x74]
L_02005684:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
