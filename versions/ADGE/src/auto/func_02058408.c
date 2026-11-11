#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020276f8();
extern void func_02039268();
extern void func_0203e5e8();
// clang-format off
asm void func_02058408(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    bl func_02039268
    cmp r0, #0x0
    bne L_02058458
    cmp r4, #0x0
    beq L_02058458
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x303
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02058458:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
