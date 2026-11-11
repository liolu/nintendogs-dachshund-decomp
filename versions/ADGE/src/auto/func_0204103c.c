#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020410e8();
// clang-format off
asm void func_0204103c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x488]
    bl func_020410e8
    cmp r0, #0x0
    beq L_02041084
    cmp r0, #0x1
    beq L_02041074
    cmp r0, #0x2
    ldreq r0, [r4, #0x488]
    addeq r0, r0, #0x1
    streq r0, [r4, #0x488]
    b L_02041090
L_02041074:
    ldr r0, [r4, #0x488]
    add r0, r0, #0x2
    str r0, [r4, #0x488]
    b L_02041090
L_02041084:
    ldr r0, [r4, #0x488]
    add r0, r0, #0x3
    str r0, [r4, #0x488]
L_02041090:
    add r1, r4, #0xd2
    mov ip, #0x1
    swpb r0, ip, [r1]
    ldr r3, =0x2710
    ldr r0, [r4, #0x9e8]
    mov r2, #0x0
    strh r3, [r0, #0x18]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e8]
    strh r2, [r0, #0x1c]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e8]
    strh r2, [r0, #0x24]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e8]
    strh r2, [r0, #0x1a]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e8]
    strh r2, [r0, #0x22]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
