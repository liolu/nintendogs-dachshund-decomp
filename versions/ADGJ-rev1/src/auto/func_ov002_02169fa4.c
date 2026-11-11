#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8930();
extern void func_02025b58();
extern void func_02026b78();
extern void func_020280f8();
// clang-format off
asm void func_ov002_02169fa4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x176
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_02026b78
    mov r0, r4
    bl func_02025b58
    mov r0, r4
    bl func_020280f8
    bl func_01ff8930
    mvn r1, #0xbf
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
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
