#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_02028108();
extern void func_020fd5a4();
extern char data_021316ac[];
extern char data_0215a034[];
// clang-format off
asm void func_020fe2a0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    mov r5, r1
    bl func_01ffdb08
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    add r2, sp, #0x2
    swpb r1, r4, [r2]
    strh r5, [sp, #0x0]
    bl func_02028108
    ldr r2, =data_021316ac
    mov r1, #0x94
    ldr r3, [r2, r0, lsl #0x2]
    add r2, sp, #0x3
    str r1, [sp, #0x4]
    swpb r1, r3, [r2]
    add r0, sp, #0x0
    bl func_020fd5a4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_0215a034
    mov r1, r4, lsl #0x1
    ldr r2, [r0, #0x0]
    mov r0, #0x1
    strh r0, [r2, r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
