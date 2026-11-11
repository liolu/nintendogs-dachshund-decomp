#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202554c();
extern void func_02026420();
extern void func_0202bd84();
// clang-format off
asm void func_ov002_02163e14(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xf6
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026420
    mov r0, r4
    bl func_0202554c
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x4a8]
    bl func_0202bd84
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
