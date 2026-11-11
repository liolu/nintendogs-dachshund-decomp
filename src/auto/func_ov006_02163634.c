#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020253c8();
extern void func_020266e8();
// clang-format off
asm void func_ov006_02163634(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_020253c8
    mov r0, #0x1
    str r0, [r4, #0x464]
    mvn r0, #0x0
    str r0, [r4, #0x474]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
