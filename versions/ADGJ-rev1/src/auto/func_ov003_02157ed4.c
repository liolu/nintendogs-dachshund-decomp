#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov003_0216be20[];
extern char func_020e1758[];
// clang-format off
asm void func_ov003_02157ed4(void) {
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x315
    ldr r0, [r0, #0x0]
    ldr ip, =func_020e1758
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    mov r2, #0x0
    add r0, r0, #0x2000
    add r1, r0, r1
    swpb r0, r2, [r1]
    bx ip
}
// clang-format on
