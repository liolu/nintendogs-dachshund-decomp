#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020394d8();
// clang-format off
asm void func_ov002_0217a988(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldrsb r1, [r0, #0xa4]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0217aaf4
L_0217a9a0:
    b L_0217aac8
    b L_0217aa90
    b L_0217aa58
    b L_0217aa24
    b L_0217a9f0
    b L_0217a9b8
L_0217a9b8:
    add r2, r0, #0xb0
    mov r1, #0x5
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x7
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x8
    mov r3, #0xa
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217a9f0:
    add r3, r0, #0xb0
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov ip, #0x64
    mov r2, #0x9
    str r2, [sp, #0x0]
    mov r2, #0x8
    mov r3, #0xc
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217aa24:
    add r3, r0, #0xb0
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov ip, #0x64
    mov r2, #0x9
    str r2, [sp, #0x0]
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217aa58:
    add r2, r0, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217aa90:
    add r2, r0, #0xb0
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov ip, #0x64
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
L_0217aac8:
    add r2, r0, #0xb0
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r1, #0x9
    str r1, [sp, #0x0]
    mov ip, #0x64
    mov r1, #0x2
    mov r2, #0x6
    mov r3, #0x7
    str ip, [sp, #0x4]
    bl func_020394d8
L_0217aaf4:
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
