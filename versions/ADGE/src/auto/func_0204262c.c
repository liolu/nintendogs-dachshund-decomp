#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_0204262c(void) {
    ldr r1, =data_0214da84
    mvn r0, #0x0
    ldr r2, [r1, #0x0]
    ldrsb r1, [r2, #0x9]
    cmp r1, r0
    bxeq lr
    cmp r1, #0x0
    blt L_02042654
    cmp r1, #0x3
    blt L_0204265c
L_02042654:
    mov r2, #0x0
    b L_02042664
L_0204265c:
    add r0, r2, r1, lsl #0x2
    ldr r2, [r0, #0x54]
L_02042664:
    cmp r2, #0x0
    bxeq lr
    add r1, r2, #0xa8
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r0, r2, #0x100
    strh ip, [r0, #0x12]
    mov r0, #0x59
    strh r0, [r2, #0xf0]
    add r1, r2, #0xa5
    mov r0, #0x3
    swpb r0, r0, [r1]
    ldr r2, =data_0214da84
    mvn r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0x9
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    str ip, [r0, #0x40]
    bx lr
}
// clang-format on
