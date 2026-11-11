#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8930();
extern void func_02025ba0();
extern void func_02026bc0();
extern void func_02028120();
// clang-format off
asm void func_ov003_0216c438(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x177
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_02026bc0
    mov r0, r4
    bl func_02025ba0
    mov r0, r4
    bl func_02028120
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
