#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022154();
extern void func_020240d0();
extern void func_02027ff4();
extern void func_0202814c();
extern char data_0214b484[];
// clang-format off
asm void func_020142b8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r0
    mov r5, r1
    ldrsh r1, [r6, #0xf8]
    bl func_020240d0
    movs r4, r0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0xa
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    moveq r0, #0x1
    movne r0, #0x0
    str r0, [sp, #0x0]
    ldrsb r1, [r6, #0x88]
    ldrsh r3, [r6, #0xf8]
    mov r0, r6
    mov r2, r5
    bl func_02022154
    mov r0, r6
    bl func_0202814c
    ldrsh r0, [r6, #0xf8]
    cmp r0, #0x0
    bne L_0201436c
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xa
    bl func_02027ff4
L_0201436c:
    ldrh r0, [r4, #0x2]
    add r1, r6, #0xc5
    mov r2, #0x0
    add r0, r0, #0x32
    strh r0, [r4, #0x2]
    swpb r0, r2, [r1]
    mvn r0, #0x0
    strh r0, [r6, #0xf8]
    add r0, r6, #0x100
    strh r2, [r0, #0x26]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
