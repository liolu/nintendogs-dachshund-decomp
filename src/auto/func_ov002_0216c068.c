#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202554c();
extern void func_02026884();
extern void func_02033d7c();
extern void func_020ae7fc();
extern char data_02153708[];
// clang-format off
asm void func_ov002_0216c068(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x15
    strh r2, [r1, #0x50]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    swpb r1, r3, [r2]
    bl func_02026884
    mov r0, r4
    bl func_0202554c
    ldr r1, [r4, #0x188]
    mov r0, r4
    orr r1, r1, #0x1
    str r1, [r4, #0x188]
    bl func_02033d7c
    ldr r0, =data_02153708
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    bl func_020ae7fc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
