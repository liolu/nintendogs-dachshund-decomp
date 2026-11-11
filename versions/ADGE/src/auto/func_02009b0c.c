#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009b0c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r6, r0
    mov r7, #0x0
    mov r5, r7
    mvn r4, #0x0
    mov ip, #0x1
    ldr r8, =0x838
    ldr r11, =0x831
    ldr r1, =0x82a
    ldr r2, =0x83f
L_02009b38:
    add r9, r0, r7, lsl #0x2
    add lr, r0, r7
    add r3, r0, r7, lsl #0x1
    str r5, [r9, #0x8fc]
    add r3, r3, #0x800
    strh r4, [r3, #0x1c]
    add r10, lr, r8
    swpb r9, r4, [r10]
    add r10, lr, r11
    swpb r9, r4, [r10]
    add r10, lr, r1
    swpb r9, r4, [r10]
    add r10, lr, r2
    swpb r9, ip, [r10]
    add r7, r7, #0x1
    strh r5, [r3, #0x46]
    str r5, [r6, #0x854]
    str r5, [r6, #0x858]
    str r5, [r6, #0x85c]
    str r5, [r6, #0x8a8]
    mov r3, r7, lsl #0x10
    str r5, [r6, #0x8ac]
    mov r7, r3, asr #0x10
    str r5, [r6, #0x8b0]
    cmp r7, #0x7
    add r6, r6, #0xc
    blt L_02009b38
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
