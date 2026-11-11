#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c488();
extern void func_02025ba0();
extern void func_0202674c();
extern char data_02124e68[];
// clang-format off
asm void func_ov003_0216c0e8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x12
    strh r2, [r1, #0x52]
    mov r3, #0x1
    add r2, r4, #0x98
    strh r3, [r1, #0x56]
    swpb r1, r3, [r2]
    bl func_0202674c
    mov r0, r4
    bl func_02025ba0
    ldr r1, [r4, #0x948]
    mov r0, #0x9
    orr r2, r1, #0x1
    mov r1, #0x0
    str r2, [r4, #0x948]
    bl func_0200c488
    movs r3, r0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r0, r3, #0x8
    add ip, r4, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldrh r0, [r3, #0x4]
    ldr ip, =data_02124e68
    ldr r2, [r3, #0x8]
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r1, [ip, r0]
    mov r0, #0xa
    smlabb r1, r1, r0, r2
    str r1, [r4, #0x278]
    ldr r1, [r3, #0xc]
    str r1, [r4, #0x27c]
    ldrh r1, [r3, #0x4]
    ldr r2, [r3, #0x10]
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x1
    add r1, r1, #0x1
    mov r1, r1, lsl #0x1
    ldrsh r1, [ip, r1]
    smlabb r0, r1, r0, r2
    str r0, [r4, #0x280]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
