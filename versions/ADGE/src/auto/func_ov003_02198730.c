#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e54();
extern void func_02027eb8();
extern void func_02034430();
extern void func_02038588();
extern void func_0203e5e8();
// clang-format off
asm void func_ov003_02198730(void) {
    stmfd sp!, {r4, lr}
    mov r2, #0x1
    mov r4, r0
    bl func_02034430
    cmp r0, #0x0
    beq L_0219877c
    ldrb r0, [r4, #0xb6]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r4, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0219877c
    mov r0, r4
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e54
L_0219877c:
    mov r0, r4
    mov r1, #0x4
    bl func_02027eb8
    mov r1, r0
    mov r0, r4
    bl func_02038588
    mov r2, r0
    ldr r1, =0x3ba
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
