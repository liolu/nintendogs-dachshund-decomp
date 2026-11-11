#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066f88();
extern void func_020ca530();
extern char func_01ffdfe4[];
extern char func_01ffe160[];
// clang-format off
asm void func_020caae0(void) {
    stmfd sp!, {r4, lr}
    mov r1, #0x5
    mov r4, r0
    bl func_020ca530
    ldr r1, =func_01ffe160
    ldr r0, =func_01ffdfe4
    str r1, [r4, #0x14]
    str r0, [r4, #0x18]
    mov r2, #0x0
    str r2, [r4, #0x1c]
    strh r2, [r4, #0x20]
    add r1, r4, #0x22
    swpb r0, r2, [r1]
    add r1, r4, #0x23
    mov r0, #0x1f
    swpb r0, r0, [r1]
    mov r0, #0x1000
    str r0, [r4, #0x24]
    str r0, [r4, #0x28]
    str r0, [r4, #0x2c]
    str r2, [r4, #0x30]
    str r2, [r4, #0x34]
    add r0, r4, #0x3c
    str r2, [r4, #0x38]
    bl func_02066f88
    mov r0, #0x0
    strh r0, [r4, #0x6c]
    strh r0, [r4, #0x6e]
    strh r0, [r4, #0x70]
    strh r0, [r4, #0x72]
    str r0, [r4, #0x74]
    str r0, [r4, #0x78]
    str r0, [r4, #0x7c]
    str r0, [r4, #0x80]
    strh r0, [r4, #0x84]
    strh r0, [r4, #0x86]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
