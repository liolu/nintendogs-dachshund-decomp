#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020d0668();
// clang-format off
asm void func_0202405c(void) {
    stmfd sp!, {r4, lr}
    add r2, r0, #0xd2
    mov r0, #0x1
    swpb r0, r0, [r2]
    mov r4, r1
    mov r2, #0x0
    strh r2, [r4, #0x2]
    strh r2, [r4, #0x0]
    mov r3, r2
L_02024080:
    add r1, r4, r2
    add r0, r2, #0x1
    add r1, r1, #0x28
    and r2, r0, #0xff
    cmp r2, #0x14
    swpb r0, r3, [r1]
    blo L_02024080
    mov r2, #0x0
L_020240a0:
    add r0, r3, #0x1
    add r1, r4, r3, lsl #0x1
    and r3, r0, #0xff
    strh r2, [r1, #0x12]
    cmp r3, #0xb
    blo L_020240a0
    add r0, r4, #0x8
    bl func_020d0668
    mov r0, #0x0
    strh r0, [r4, #0x4]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
