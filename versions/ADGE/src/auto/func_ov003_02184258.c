#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e58();
extern void func_0203535c();
extern void func_0203e5e8();
extern void func_ov003_0218a0f0();
// clang-format off
asm void func_ov003_02184258(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_0203535c
    mov r4, r0
    mov r0, r5
    bl func_02026e58
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl func_ov003_0218a0f0
    cmp r6, #0x0
    add r0, r5, #0x100
    mov r3, #0x1
    strh r3, [r0, #0x1c]
    mov r2, #0x0
    addne r1, r5, #0xb9
    strh r2, [r0, #0x1e]
    swpneb r0, r3, [r1]
    addeq r1, r5, #0xb9
    swpeqb r0, r2, [r1]
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    mov r1, #0xf4
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
