#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025494();
extern void func_02026420();
// clang-format off
asm void func_02059c5c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x17d
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026420
    mov r0, r4
    bl func_02025494
    mov r0, r4
    mov r1, #0x38
    mov r2, #0x1
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
