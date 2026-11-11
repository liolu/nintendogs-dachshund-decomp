#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_02026580();
extern void func_ov003_021680fc();
// clang-format off
asm void func_ov003_0216922c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x10
    strh r2, [r1, #0x50]
    mov r2, #0x12
    strh r2, [r1, #0x54]
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026580
    mov r0, r4
    bl func_02025b58
    mov r0, r4
    bl func_ov003_021680fc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
