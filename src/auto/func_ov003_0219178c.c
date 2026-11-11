#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200925c();
extern void func_020142a4();
extern void func_020274c8();
extern void func_0202fa5c();
extern void func_0203e5ac();
extern void func_0208a2b4();
// clang-format off
asm void func_ov003_0219178c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrh r1, [r4, #0xfc]
    cmp r1, #0x6
    beq L_021917b0
    cmp r1, #0x12
    beq L_021917b0
    cmp r1, #0x1e
    bne L_021917d4
L_021917b0:
    mov r0, r4
    bl func_020274c8
    ldr r2, =0x95c
    mov r1, r0
    add r0, r4, r2
    mov r2, #0x0
    bl func_0208a2b4
    ldmfd sp!, {r4, lr}
    bx lr
L_021917d4:
    cmp r1, #0x32
    bne L_02191828
    mov r1, #0x6a
    mov r2, #0x3
    bl func_0200925c
    mov r0, r4
    mov r1, #0x6b
    mov r2, #0x3
    bl func_0200925c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e5ac
    add r3, r4, #0x97
    mov r2, #0x4
    swpb r2, r2, [r3]
    mov r0, r4
    mov r1, #0x0
    bl func_020142a4
    ldmfd sp!, {r4, lr}
    bx lr
L_02191828:
    cmp r1, #0x5a
    ldmlsfd sp!, {r4, lr}
    bxls lr
    bl func_0202fa5c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
