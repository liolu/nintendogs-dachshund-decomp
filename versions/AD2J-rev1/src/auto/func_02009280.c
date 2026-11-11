#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009280(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    add r2, r0, r1, lsl #0x2
    ldr r5, [r2, #0x914]
    cmp r5, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r2, =0x857
    add r3, r0, r2
    ldrsb r2, [r3, r1]
    add r4, r3, r1
    cmp r2, #0x0
    beq L_020092f8
    ldr r3, [r5, #0x8]
    cmp r3, #0x0
    beq L_020092d8
L_020092c4:
    ldrh r2, [r3, #0x2c]
    strh r2, [r3, #0x2e]
    ldr r3, [r3, #0x0]
    cmp r3, #0x0
    bne L_020092c4
L_020092d8:
    ldr r3, [r5, #0x10]
    cmp r3, #0x0
    beq L_020092f8
L_020092e4:
    ldrh r2, [r3, #0x2c]
    strh r2, [r3, #0x2e]
    ldr r3, [r3, #0x0]
    cmp r3, #0x0
    bne L_020092e4
L_020092f8:
    ldr r3, [r5, #0x1c]
    add r2, r0, r1, lsl #0x1
    bic r3, r3, #0x1
    orr r3, r3, #0x1
    str r3, [r5, #0x1c]
    add r9, r0, r1
    add r3, r0, r1, lsl #0x2
    mov lr, #0x0
    ldr r7, =0x849
    str lr, [r3, #0x914]
    ldr r8, =0x842
    add r2, r2, #0x800
    mvn ip, #0x0
    mov r3, #0xc
    strh ip, [r2, #0x34]
    add r6, r9, #0x850
    swpb r5, ip, [r6]
    add r6, r9, r7
    swpb r5, ip, [r6]
    add r6, r9, r8
    swpb r5, ip, [r6]
    mov r5, #0x1
    swpb r5, r5, [r4]
    mla r0, r1, r3, r0
    strh lr, [r2, #0x5e]
    str lr, [r0, #0x8c0]
    str lr, [r0, #0x8c4]
    str lr, [r0, #0x8c8]
    str lr, [r0, #0x86c]
    str lr, [r0, #0x870]
    str lr, [r0, #0x874]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
