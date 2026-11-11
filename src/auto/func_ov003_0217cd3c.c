#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039708();
// clang-format off
asm void func_ov003_0217cd3c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldrsb r1, [r0, #0x8b]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0217cea8
L_0217cd54:
    b L_0217ce7c
    b L_0217ce44
    b L_0217ce0c
    b L_0217cdd8
    b L_0217cda4
    b L_0217cd6c
L_0217cd6c:
    add r2, r0, #0x97
    mov r1, #0x5
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x7
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x8
    mov r3, #0xa
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217cda4:
    add r3, r0, #0x97
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov ip, #0x64
    mov r2, #0x9
    str r2, [sp, #0x0]
    mov r2, #0x8
    mov r3, #0xc
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217cdd8:
    add r3, r0, #0x97
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov ip, #0x64
    mov r2, #0x9
    str r2, [sp, #0x0]
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217ce0c:
    add r2, r0, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217ce44:
    add r2, r0, #0x97
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_02039708
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217ce7c:
    add r2, r0, #0x97
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov ip, #0x64
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_02039708
L_0217cea8:
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
