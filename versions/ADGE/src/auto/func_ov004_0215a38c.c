#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216e3c0[];
extern char func_02105824[];
// clang-format off
asm void func_ov004_0215a38c(void) {
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
