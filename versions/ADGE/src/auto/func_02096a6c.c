#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02097550();
extern char data_0213d178[];
extern char data_021545e8[];
extern char data_02154600[];
extern char data_02154604[];
extern char data_02154624[];
extern char data_02154634[];
extern char data_02154638[];
extern char data_0215464c[];
extern char data_0215465c[];
// clang-format off
asm void func_02096a6c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02154638
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096ae0
    ldr r0, =data_02154634
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096ab0
    bl func_02097550
    ldr r1, =data_02154624
    mov r2, #0x0
    ldr r0, =data_02154634
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    b L_02096ae0
L_02096ab0:
    ldr r2, =data_0215465c
    ldr r1, =data_021545e8
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr ip, [r2, #0x0]
    ldr r2, =data_02154604
    ldr r1, =data_02154600
    mov r3, #0x0
    ldr r0, =data_0215464c
    str ip, [r2, #0x0]
    strh r3, [r1, #0x0]
    str r3, [r0, #0x0]
L_02096ae0:
    ldr r0, =data_0213d178
    mvn r1, #0x6
    str r1, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
