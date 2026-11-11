#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020259c0();
extern void func_02025ec4();
extern void func_02028114();
extern void func_02033e78();
// clang-format off
asm void func_ov003_0216c5d8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x173
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025ec4
    mov r0, r4
    bl func_020259c0
    mov r0, r4
    bl func_02033e78
    mov r0, r4
    bl func_02028114
    mvn r1, #0x4f
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
    ldr r0, [r4, #0x25c]
    mov r0, r0, lsl #0x4
    rsb r0, r0, #0x0
    str r0, [r4, #0x264]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
