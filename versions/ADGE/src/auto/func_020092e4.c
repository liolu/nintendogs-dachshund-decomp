#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020092e4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    add r2, r0, r1, lsl #0x2
    ldr r4, [r2, #0x8fc]
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r2, =0x83f
    add r3, r0, r2
    ldrsb r2, [r3, r1]
    add r6, r3, r1
    cmp r2, #0x0
    beq L_0200935c
    ldr r3, [r4, #0x8]
    cmp r3, #0x0
    beq L_0200933c
L_02009328:
    ldrh r2, [r3, #0x2c]
    strh r2, [r3, #0x2e]
    ldr r3, [r3, #0x0]
    cmp r3, #0x0
    bne L_02009328
L_0200933c:
    ldr r3, [r4, #0x10]
    cmp r3, #0x0
    beq L_0200935c
L_02009348:
    ldrh r2, [r3, #0x2c]
    strh r2, [r3, #0x2e]
    ldr r3, [r3, #0x0]
    cmp r3, #0x0
    bne L_02009348
L_0200935c:
    ldr r2, [r4, #0x1c]
    add r3, r0, r1, lsl #0x1
    bic r2, r2, #0x1
    orr r2, r2, #0x1
    str r2, [r4, #0x1c]
    add r4, r0, r1, lsl #0x2
    mov r5, #0x0
    ldr r7, =0x838
    add lr, r0, r1
    ldr r9, =0x831
    ldr r2, =0x82a
    str r5, [r4, #0x8fc]
    add r3, r3, #0x800
    mvn r4, #0x0
    mov ip, #0xc
    strh r4, [r3, #0x1c]
    add r8, lr, r7
    swpb r7, r4, [r8]
    add r8, lr, r9
    swpb r7, r4, [r8]
    add r7, lr, r2
    swpb r2, r4, [r7]
    mov r2, #0x1
    swpb r2, r2, [r6]
    mla r0, r1, ip, r0
    strh r5, [r3, #0x46]
    str r5, [r0, #0x8a8]
    str r5, [r0, #0x8ac]
    str r5, [r0, #0x8b0]
    str r5, [r0, #0x854]
    str r5, [r0, #0x858]
    str r5, [r0, #0x85c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
