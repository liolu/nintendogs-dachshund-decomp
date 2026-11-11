#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8930();
extern void func_02022ddc();
extern void func_02023644();
extern void func_02025ba0();
extern void func_02026bc0();
extern void func_02028120();
extern void func_0202bdcc();
// clang-format off
asm void func_0201da3c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x178
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
    umull r5, lr, r0, r1
    mov r3, #0x800
    mla lr, r0, r2, lr
    mov ip, r0, asr #0x1f
    mla lr, ip, r1, lr
    adds r3, r5, r3
    adc r0, lr, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r4
    str r1, [r4, #0x25c]
    bl func_0202bdcc
    mov r0, r4
    mov r1, #0x26
    mov r2, #0x2
    bl func_02023644
    ldrb r0, [r4, #0xa3]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrsh r1, [r4, #0xf2]
    ldrb r2, [r4, #0xa6]
    mov r0, r4
    bl func_02022ddc
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, [r4, #0x18c]
    ldr r0, =0x668
    mov r1, r1, asr #0x3
    rsb r1, r1, #0x0
    str r1, [r4, #0x260]
    str r0, [r4, #0x264]
    ldr r0, [r4, #0x194]
    mov r0, r0, asr #0x3
    rsb r0, r0, #0x0
    str r0, [r4, #0x268]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
