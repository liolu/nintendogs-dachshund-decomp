#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_020427d4(void) {
    ldr r2, =data_0214da84
    mvn r1, #0x0
    ldr r3, [r2, #0x0]
    ldrsb r2, [r3, #0x9]
    cmp r2, r1
    bxne lr
    cmp r0, #0x0
    blt L_020427fc
    cmp r0, #0x3
    blt L_02042804
L_020427fc:
    mov r1, #0x0
    b L_0204280c
L_02042804:
    add r1, r3, r0, lsl #0x2
    ldr r1, [r1, #0x54]
L_0204280c:
    cmp r1, #0x0
    bxeq lr
    add r1, r3, #0x9
    swpb r0, r0, [r1]
    ldr r0, =data_0214da84
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x40]
    bx lr
}
// clang-format on
