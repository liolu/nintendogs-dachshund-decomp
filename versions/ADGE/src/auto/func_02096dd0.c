#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020975ac();
extern char data_021545e8[];
extern char data_021545f4[];
extern char data_02154604[];
extern char data_0215461c[];
extern char data_02154624[];
extern char data_02154628[];
extern char data_0215465c[];
// clang-format off
asm void func_02096dd0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0215465c
    ldr ip, =data_02154604
    ldr r5, [r0, #0x0]
    ldr r3, =data_02154624
    mov r4, #0x1
    ldr r2, =data_02154628
    mov lr, #0x0
    ldr r0, =data_021545f4
    ldr r1, =data_021545e8
    str r5, [ip, #0x0]
    str r4, [r3, #0x0]
    str lr, [r2, #0x0]
    strh lr, [r0, #0x0]
    swpb r0, lr, [r1]
    bl func_020975ac
    ldr r1, =data_0215465c
    ldr r0, =data_0215461c
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
