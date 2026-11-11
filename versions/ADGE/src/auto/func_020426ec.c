#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_020426ec(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214da84
    mvn r0, #0x0
    ldr r1, [r1, #0x0]
    mov r3, #0x0
    ldrsb r2, [r1, #0x9]
    cmp r2, r0
    beq L_0204271c
    ldr r0, [r1, #0x40]
    cmp r0, #0x1
    moveq r3, #0x1
L_0204271c:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    cmp r2, #0x0
    blt L_0204273c
    cmp r2, #0x3
    blt L_02042744
L_0204273c:
    mov r1, #0x0
    b L_0204274c
L_02042744:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x54]
L_0204274c:
    cmp r1, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    add r3, r1, #0xd2
    mov r5, #0x1
    swpb r0, r5, [r3]
    ldr r4, =0x1388
    ldr r2, [r1, #0x9e8]
    mov r0, #0x0
    strh r4, [r2, #0x18]
    swpb r2, r5, [r3]
    add ip, r1, #0xa8
    ldr r2, [r1, #0x9e8]
    add lr, r1, #0x100
    strh r0, [r2, #0x1a]
    swpb r2, r5, [r3]
    mov r4, #0x59
    ldr r2, [r1, #0x9e8]
    add r3, r1, #0xa5
    strh r0, [r2, #0x22]
    swpb r2, r0, [ip]
    mov r2, #0x2
    strh r0, [lr, #0x12]
    strh r4, [r1, #0xf0]
    swpb r1, r2, [r3]
    ldr r1, =data_0214da84
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x40]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
