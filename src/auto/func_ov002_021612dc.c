#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_0202643c();
extern void func_02033d7c();
extern void func_ov002_02169b30();
// clang-format off
asm void func_ov002_021612dc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x17d
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202643c
    mov r0, r4
    bl func_020254f0
    mov r0, r4
    bl func_02033d7c
    mov r0, r4
    bl func_ov002_02169b30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
