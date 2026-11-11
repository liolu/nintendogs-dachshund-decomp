#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213d1a0[];
extern char data_02154a00[];
// clang-format off
asm void func_0209752c(void) {
    ldr r2, =data_0213d1a0
    mov r0, #0x1
    ldr r1, =data_02154a00
    mov r3, #0xff
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
