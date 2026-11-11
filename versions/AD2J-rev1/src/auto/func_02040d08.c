#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040db4();
// clang-format off
asm void func_02040d08(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x4ac]
    bl func_02040db4
    cmp r0, #0x0
    beq L_02040d50
    cmp r0, #0x1
    beq L_02040d40
    cmp r0, #0x2
    ldreq r0, [r4, #0x4ac]
    addeq r0, r0, #0x1
    streq r0, [r4, #0x4ac]
    b L_02040d5c
L_02040d40:
    ldr r0, [r4, #0x4ac]
    add r0, r0, #0x2
    str r0, [r4, #0x4ac]
    b L_02040d5c
L_02040d50:
    ldr r0, [r4, #0x4ac]
    add r0, r0, #0x3
    str r0, [r4, #0x4ac]
L_02040d5c:
    add r1, r4, #0x8b
    mov ip, #0x1
    swpb r0, ip, [r1]
    ldr r3, =0x2710
    ldr r0, [r4, #0x9e4]
    mov r2, #0x0
    strh r3, [r0, #0x18]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e4]
    strh r2, [r0, #0x1c]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e4]
    strh r2, [r0, #0x24]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e4]
    strh r2, [r0, #0x1a]
    swpb r0, ip, [r1]
    ldr r0, [r4, #0x9e4]
    strh r2, [r0, #0x22]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
