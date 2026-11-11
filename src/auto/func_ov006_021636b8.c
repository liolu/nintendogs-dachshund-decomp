#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025424();
extern void func_020266e8();
// clang-format off
asm void func_ov006_021636b8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    mov r3, #0x290
    add r2, r4, #0xab
    mov r1, #0x1
    swpb r1, r1, [r2]
    rsb r1, r3, #0x0
    str r1, [r4, #0x25c]
    bl func_020266e8
    mov r0, r4
    bl func_02025424
    ldrb r0, [r4, #0xb0]
    add r1, r4, #0xb0
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0xb0]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
