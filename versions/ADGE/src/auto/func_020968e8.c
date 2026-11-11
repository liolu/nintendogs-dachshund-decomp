#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021545e8[];
extern char data_02154600[];
extern char data_02154604[];
extern char data_0215464c[];
extern char data_0215465c[];
// clang-format off
asm void func_020968e8(void) {
    ldr r2, =data_0215465c
    ldr r1, =data_021545e8
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr ip, [r2, #0x0]
    ldr r2, =data_02154604
    ldr r1, =data_02154600
    mov r3, #0x0
    ldr r0, =data_0215464c
    str ip, [r2, #0x0]
    strh r3, [r1, #0x0]
    str r3, [r0, #0x0]
    bx lr
}
// clang-format on
