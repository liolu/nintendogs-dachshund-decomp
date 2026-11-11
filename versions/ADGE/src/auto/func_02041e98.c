#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203e6b8();
extern void func_0203e860();
extern void func_020cf7bc();
extern void func_020cf924();
extern void func_020d0454();
extern char data_0214da84[];
// clang-format off
asm void func_02041e98(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    movs r10, r0
    bmi L_02041eb0
    cmp r10, #0x3
    blt L_02041eb8
L_02041eb0:
    mov r8, #0x0
    b L_02041ec8
L_02041eb8:
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    add r0, r0, r10, lsl #0x2
    ldr r8, [r0, #0x54]
L_02041ec8:
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    add r0, r0, r10
    ldrsb r0, [r0, #0x1c]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r8, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r8
    bl func_0203e860
    mov r0, r8
    bl func_0203e6b8
    ldrb r0, [r8, #0xd2]
    cmp r0, #0x0
    beq L_02041f3c
    ldr r1, =data_0214da84
    ldr r0, =0x85c
    ldr r2, [r1, #0x0]
    mov r1, r10
    add r2, r2, #0x1a4
    mla r0, r10, r0, r2
    bl func_020d0454
    add r1, r8, #0xd2
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02041f3c:
    ldr r0, =0x18b0
    mov r1, #0x500
    mul r5, r10, r0
    mov r9, #0x0
    mul r11, r10, r1
    mov r7, r9
    mov r6, r9
    str r9, [sp, #0x0]
L_02041f5c:
    add r4, r8, r9
    ldrb r0, [r4, #0xd3]
    cmp r0, #0x0
    beq L_02041fc0
    ldr r0, =data_0214da84
    mov r1, r10
    ldr r2, [r0, #0x0]
    ldr r0, =0x1ab8
    add r0, r2, r0
    add r0, r0, r5
    add r0, r0, r7
    mov r2, r9
    bl func_020cf924
    ldr r0, =data_0214da84
    mov r1, r10
    ldr r2, [r0, #0x0]
    ldr r0, =0x64c8
    add r0, r2, r0
    add r0, r0, r11
    add r0, r0, r6
    mov r2, r9
    bl func_020cf7bc
    ldr r0, [sp, #0x0]
    add r1, r4, #0xd3
    swpb r0, r0, [r1]
L_02041fc0:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x14
    add r7, r7, #0x13c
    add r6, r6, #0x40
    blt L_02041f5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
