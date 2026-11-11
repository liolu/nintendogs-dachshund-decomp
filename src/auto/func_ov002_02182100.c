#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e30();
extern void func_020351a0();
extern void func_0203e2b8();
extern void func_ov002_02187df0();
// clang-format off
asm void func_ov002_02182100(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_020351a0
    mov r4, r0
    mov r0, r5
    bl func_02026e30
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl func_ov002_02187df0
    cmp r6, #0x0
    add r0, r5, #0x100
    mov r3, #0x1
    strh r3, [r0, #0x2a]
    mov r2, #0x0
    addne r1, r5, #0xa2
    strh r2, [r0, #0x2c]
    swpneb r0, r3, [r1]
    addeq r1, r5, #0xa2
    swpeqb r0, r2, [r1]
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    mov r1, #0xef
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
