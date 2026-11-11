#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025978();
extern void func_02025e7c();
extern void func_020280ec();
extern void func_02033d7c();
// clang-format off
asm void func_ov002_0216a0bc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x173
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025e7c
    mov r0, r4
    bl func_02025978
    mov r0, r4
    bl func_02033d7c
    mov r0, r4
    bl func_020280ec
    mvn r1, #0x53
    mvn r2, #0x0
    umull lr, ip, r0, r1
    mov r3, #0x800
    adds r3, lr, r3
    mla ip, r0, r2, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    adc r0, ip, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x25c]
    ldr r1, [r4, #0x25c]
    mvn r0, #0xb
    mul r0, r1, r0
    str r0, [r4, #0x264]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
