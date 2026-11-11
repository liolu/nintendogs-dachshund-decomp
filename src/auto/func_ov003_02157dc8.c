#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_02157dc8(void) {
    ldr r0, =data_ov003_0216be20
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, #0x318
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
