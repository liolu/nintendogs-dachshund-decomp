#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e950();
extern char data_0212cc18[];
extern char data_02141510[];
// clang-format off
asm void func_020c1d70(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov ip, #0xc
    mul ip, r2, ip
    ldr r2, =data_0212cc18
    mov r4, r3
    ldr r3, [r2, ip]
    ldr r2, =data_02141510
    mov r5, r0
    bl func_0205e950
    ldrb r0, [r5, #0x4]
    add r1, r5, #0x4
    add r0, r0, r4
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
