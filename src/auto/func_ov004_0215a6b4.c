#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216e3c0[];
extern char func_02105824[];
// clang-format off
asm void func_ov004_0215a6b4(void) {
    ldr r2, =data_ov004_0216e3c0
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2200
    ldrsb r0, [r0, #0x95]
    cmp r0, #0x0
    blt L_0215a718
    add r1, r1, r0
    ldr r0, =0x285
    add r1, r1, #0x2000
    add r1, r1, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =0x295
    ldr r0, [r2, #0x0]
    mvn r3, #0x0
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r1
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    str r3, [r0, #0x3ac]
L_0215a718:
    ldr r0, =data_ov004_0216e3c0
    ldr r1, =0x315
    ldr r0, [r0, #0x0]
    ldr ip, =func_02105824
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    mov r2, #0x0
    add r0, r0, #0x2000
    add r1, r0, r1
    swpb r0, r2, [r1]
    bx ip
}
// clang-format on
