#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026484();
extern void func_02033e78();
extern void func_ov003_0216bfc4();
// clang-format off
asm void func_ov003_02163744(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x17e
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026484
    mov r0, r4
    bl func_02025538
    mov r0, r4
    bl func_02033e78
    mov r0, r4
    bl func_ov003_0216bfc4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
