#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e58();
extern void func_020298c0();
extern void func_0203e5e8();
extern void func_ov003_02189ca8();
extern void func_ov003_0218a0f0();
extern void func_ov003_0218c400();
// clang-format off
asm void func_ov003_02182bf8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_02026e58
    mov r4, r0
    mov r0, r8
    mov r1, r4
    bl func_ov003_0218a0f0
    add r2, r8, #0x100
    mov r3, #0x1
    strh r3, [r2, #0x1c]
    mov r3, #0x0
    mov r0, r8
    mov r1, r7
    strh r3, [r2, #0x1e]
    bl func_ov003_02189ca8
    cmp r4, #0x0
    addne r1, r8, #0xb9
    movne r0, #0x1
    swpneb r0, r0, [r1]
    addeq r1, r8, #0xb9
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    mov r1, r7
    mov r0, r8
    mov r2, r6
    mov r3, #0x0
    bl func_020298c0
    cmp r0, #0x0
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r5, #0x0
    beq L_02182ca8
    add r0, r7, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02182ca8:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    mov r0, r8
    mov r1, r7
    bl func_ov003_0218c400
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
