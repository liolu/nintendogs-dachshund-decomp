#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b024[];
// clang-format off
asm void func_02006614(void) {
    ldr r2, =data_0214b024
    mov ip, #0xff
    add r1, r2, #0x1
    swpb r0, ip, [r2]
    mov r3, #0x0
    swpb r0, ip, [r1]
    strh r3, [r2, #0x2]
    bx lr
}
// clang-format on
