#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_0202761c();
extern void func_02028120();
extern char data_ov005_02165fa0[];
// clang-format off
asm void func_ov005_021603b8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r1, =data_ov005_02165fa0
    mov r6, r0
    ldr r0, [r1, #0x0]
    ldrsh r0, [r0, #0x0]
    bl func_01ffdb08
    ldr r2, =data_ov005_02165fa0
    add r1, sp, #0x0
    mov r5, r0
    ldr r4, [r2, #0x0]
    bl func_0202761c
    ldr r0, [r6, #0x18]
    ldr r1, [sp, #0x0]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    add r0, r1, r0
    str r0, [r6, #0x20]
    ldr r0, [r6, #0x18]
    ldr r1, [sp, #0x4]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x8]
    add r0, r1, r0
    str r0, [r6, #0x24]
    ldr r0, [r6, #0x18]
    ldr r1, [sp, #0x8]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0xc]
    add r0, r1, r0
    str r0, [r6, #0x28]
    ldr r2, [r4, #0x58]
    cmp r2, #0x0
    ldreq r0, [r6, #0x1c]
    orreq r0, r0, #0x2
    streq r0, [r6, #0x1c]
    beq L_02160494
    mov r0, #0x5f000
    rsb r0, r0, #0x0
    mvn r1, #0x0
    umull r4, r3, r2, r0
    mla r3, r2, r1, r3
    mov r2, r2, asr #0x1f
    mov r1, #0x800
    adds r1, r4, r1
    mla r3, r2, r0, r3
    ldr r2, [r6, #0x1c]
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    bic r2, r2, #0x2
    mov r0, r1, asr #0xc
    str r2, [r6, #0x1c]
    add r0, r0, #0x64
    add r1, r6, #0x5c
    swpb r0, r0, [r1]
L_02160494:
    mov r0, r5
    bl func_02028120
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, r5
    str r1, [r6, #0x54]
    bl func_02028120
    ldr r1, =0xa66
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r6, #0x44]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
