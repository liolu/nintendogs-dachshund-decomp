#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02025594();
extern void func_020266e8();
extern void func_0202d804();
// clang-format off
asm void func_ov003_0216bb70(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_02025594
    ldr r0, =0xb36
    add r1, r4, #0x18c
    add r2, r4, #0x2a0
    add r3, r4, #0x26c
    bl func_01ff832c
    ldr r0, =0xffff8fe4
    add r1, r4, #0x18c
    add r2, r4, #0x2a0
    add r3, r4, #0x278
    bl func_01ff832c
    ldr r0, =0xffffe7fa
    add r1, r4, #0x1a4
    add r2, r4, #0x26c
    mov r3, r2
    bl func_01ff832c
    ldr r0, =0xffff0fc4
    add r1, r4, #0x1a4
    add r2, r4, #0x278
    mov r3, r2
    bl func_01ff832c
    mov r0, r4
    mov r1, #0x0
    bl func_0202d804
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
