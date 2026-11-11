#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02072e68();
extern void _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj();
extern void func_020f81b0();
extern void func_020648c0();
extern void func_02064ab8();
extern char data_02147400[];
// clang-format off
asm void func_020f9330(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r4, r2
    mov r2, #0x0
    ldr r3, =data_02147400
    str r2, [sp, #0x0]
    ldr r6, [r3, #0x0]
    mov r7, r1
    mov r1, #0x2
    mov r3, #0x1f40
    mov r5, r0
    str r6, [sp, #0x4]
    bl func_020f81b0
    mov r0, r7
    bl _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj
    cmp r0, #0x0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r0, [r0, #0x0]
    bl func_02072e68
    movs r7, r0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    add r3, sp, #0x8
    mov r1, r4
    mov r2, #0x3c
    bl func_02064ab8
    mov lr, r5, lsr #0x10
    add r3, sp, #0x8
    mov r6, #0x4
    mov r1, r4
    swpb r4, r6, [r3]
    add ip, sp, #0xe
    mov r2, #0x3c
    mov r0, r7
    strh r5, [sp, #0xa]
    strh lr, [sp, #0xc]
    swpb r4, r2, [ip]
    bl func_020648c0
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
