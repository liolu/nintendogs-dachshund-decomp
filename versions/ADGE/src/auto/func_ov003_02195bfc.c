#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e54();
extern void func_02027eb8();
extern void func_02029248();
extern void func_0202f9a0();
extern void func_02034430();
extern void func_020350fc();
extern void func_02035fcc();
extern void func_02038588();
extern void func_0203e5e8();
extern void func_020abb3c();
// clang-format off
asm void func_ov003_02195bfc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_020350fc
    movs r4, r0
    beq L_02195cfc
    ldrsh r1, [r4, #0x90]
    cmp r1, #0x0
    beq L_02195c28
    cmp r1, #0x2
    bne L_02195c30
L_02195c28:
    mov r0, #0x1
    b L_02195c50
L_02195c30:
    ldrsh r1, [r4, #0x94]
    cmp r1, #0x35
    bne L_02195c4c
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02195c50
L_02195c4c:
    mov r0, #0x0
L_02195c50:
    cmp r0, #0x0
    bne L_02195cfc
    ldrsh r1, [r4, #0x88]
    mov r0, r5
    add r1, r1, #0x3
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_02034430
    cmp r0, #0x0
    beq L_02195cbc
    ldrb r0, [r5, #0xb6]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r5, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02195cbc
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e54
L_02195cbc:
    mov r0, r5
    mov r1, #0x4
    bl func_02027eb8
    mov r1, r0
    mov r0, r5
    bl func_02038588
    mov r2, r0
    ldr r1, =0x3ba
    mov r0, r5
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    mov r0, #0x0
    str r0, [r5, #0x488]
    b L_02195d04
L_02195cfc:
    mov r0, r5
    bl func_0202f9a0
L_02195d04:
    mov r0, r5
    bl func_02029248
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
