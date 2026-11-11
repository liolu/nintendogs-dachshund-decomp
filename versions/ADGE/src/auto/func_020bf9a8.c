#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020641dc();
extern char data_02155680[];
extern char data_021556e0[];
// clang-format off
asm void func_020bf9a8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r1, =data_02155680
    ldr r2, =data_021556e0
    strh r0, [r1, #0x4]
    str r2, [r1, #0x0]
    bl func_020641dc
    ldr r6, =data_02155680
    mov r7, #0xff
    add r2, r6, #0x8
    add r3, r6, #0x9
    add ip, r6, #0xa
    add lr, r6, #0xb
    add r4, r6, #0xc
    add r5, r6, #0xd
    swpb r1, r7, [r2]
    swpb r1, r7, [r3]
    swpb r1, r7, [ip]
    swpb r1, r7, [lr]
    swpb r1, r7, [r4]
    swpb r1, r7, [r5]
    strh r0, [r6, #0x6]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
