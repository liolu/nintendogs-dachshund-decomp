#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039708();
extern char data_02139be4[];
// clang-format off
asm void func_02039600(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    add r3, r0, #0x97
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov r2, #0x4
    str r2, [sp, #0x0]
    ldrsb ip, [r0, #0x8d]
    ldr r3, =data_02139be4
    mov r2, #0x3
    mov ip, ip, lsl #0x1
    ldrh ip, [r3, ip]
    mov r3, #0x8
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
