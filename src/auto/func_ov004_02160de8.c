#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020207ec();
extern void func_0202554c();
extern void func_0202649c();
// clang-format off
asm void func_ov004_02160de8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x1
    strh r2, [r1, #0x50]
    bl func_020207ec
    add r1, r4, #0xa9
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
