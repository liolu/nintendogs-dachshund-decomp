#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205ece8();
extern char data_02130388[];
extern char data_02140f30[];
extern char data_02140f34[];
// clang-format off
asm void func_020c722c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r4, #0xc
    mul ip, r2, r4
    mov r5, r0
    mov r4, r1
    ldr r0, =data_02130388
    mov r6, r3
    ldr r3, [r0, ip]
    ldr r2, =data_02140f30
    add r0, sp, #0x0
    mov r1, #0x10
    bl func_0205ece8
    ldrb r0, [sp, #0x4]
    add r1, sp, #0x4
    ldr r2, =data_02140f34
    add r0, r0, r6
    swpb r0, r0, [r1]
    add r3, sp, #0x0
    mov r0, r5
    mov r1, r4
    bl func_0205ece8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
