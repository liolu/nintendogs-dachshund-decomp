#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov015_02157c20();
extern char data_ov015_02158de0[];
// clang-format off
asm void func_ov015_02157fa8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, #0x0
    ldr ip, =data_ov015_02158de0
    ldr r1, =0xc04
    mov r0, r5
    mov r4, r5
L_0215a440:
    mov r6, r4
    mov lr, r5, lsl #0x4
L_0215a448:
    ldr r2, [ip, #0x0]
    add r2, lr, r2
    add r2, r6, r2
    add r3, r2, r1
    add r6, r6, #0x1
    cmp r6, #0x10
    swpb r2, r0, [r3]
    blt L_0215a448
    add r5, r5, #0x1
    cmp r5, #0x10
    blt L_0215a440
    ldr lr, [ip, #0x0]
    ldr r1, [lr, #0xd08]
    cmp r1, #0x0
    ble L_0215a4dc
    ldr r1, =data_ov015_02158de0
    mov r3, #0x1
    mov ip, #0x0
L_0215a490:
    ldr r2, [lr, #0xd04]
    mov r4, ip
    cmp r2, #0x0
    ble L_0215a4cc
    add r2, r0, #0x8
    mov r5, r2, lsl #0x5
L_0215a4a8:
    add r2, r5, #0x8
    add r2, lr, r2, lsl #0x1
    strh r3, [r2, #0x4]
    ldr lr, [r1, #0x0]
    add r4, r4, #0x1
    ldr r2, [lr, #0xd04]
    add r5, r5, #0x1
    cmp r4, r2
    blt L_0215a4a8
L_0215a4cc:
    ldr r2, [lr, #0xd08]
    add r0, r0, #0x1
    cmp r0, r2
    blt L_0215a490
L_0215a4dc:
    bl func_ov015_02157c20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
