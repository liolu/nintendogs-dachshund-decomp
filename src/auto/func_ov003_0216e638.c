#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025594();
extern void func_02026a9c();
extern void func_02033e78();
extern void func_020e1478();
extern char data_0215a04c[];
// clang-format off
asm void func_ov003_0216e638(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x52]
    mov r3, #0x1
    strh r3, [r1, #0x56]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    swpb r1, r3, [r2]
    bl func_02026a9c
    mov r0, r4
    bl func_02025594
    ldr r1, [r4, #0x948]
    mov r0, r4
    orr r1, r1, #0x1
    str r1, [r4, #0x948]
    bl func_02033e78
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    bl func_020e1478
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
