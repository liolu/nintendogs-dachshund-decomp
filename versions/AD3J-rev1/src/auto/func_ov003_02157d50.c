#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov003_0216be20[];
extern char func_020efb78[];
// clang-format off
asm void func_ov003_02157d50(void) {
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2200
    ldrsb r0, [r0, #0x95]
    cmp r0, #0x0
    blt L_0215a208
    add r1, r1, r0
    ldr r0, =0x28d
    add r1, r1, #0x2000
    add r1, r1, r0
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0215a208:
    ldr r1, =data_ov003_0216be20
    ldr ip, =func_020efb78
    ldr r1, [r1, #0x0]
    mov r0, #0xa
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c4]
    add r1, r2, #0x2300
    ldrsb r3, [r1, #0x14]
    add r1, r2, #0x2000
    add r2, r1, #0x314
    sub r1, r3, #0x3
    swpb r1, r1, [r2]
    bx ip
}
// clang-format on
