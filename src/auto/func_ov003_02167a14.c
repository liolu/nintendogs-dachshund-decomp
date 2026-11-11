#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020276d0();
extern void func_02027a84();
extern void func_02027f08();
extern void func_02032690();
extern void func_0203e2b8();
extern void func_020442e8();
extern void func_02044338();
extern void func_02044370();
extern void func_02044688();
extern void func_0204e358();
// clang-format off
asm void func_ov003_02167a14(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    movs r4, r1
    mov r5, r0
    beq L_02167c58
    mov r0, r4
    bl func_020276d0
    mov r1, r0
    mov r0, r5
    bl func_02032690
    cmp r0, #0x0
    beq L_02167c58
    ldrsh r1, [r5, #0xe8]
    ldr r0, =0x4cf
    cmp r1, r0
    moveq r0, #0x1
    beq L_02167a78
    ldr r0, =0x4cd
    cmp r1, r0
    blt L_02167a74
    ldr r0, =0x4ce
    cmp r1, r0
    movle r0, #0x1
    ble L_02167a78
L_02167a74:
    mov r0, #0x0
L_02167a78:
    cmp r0, #0x0
    bne L_02167abc
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x4cf
    cmp r1, r0
    moveq r0, #0x1
    beq L_02167ab4
    ldr r0, =0x4cd
    cmp r1, r0
    blt L_02167ab0
    ldr r0, =0x4ce
    cmp r1, r0
    movle r0, #0x1
    ble L_02167ab4
L_02167ab0:
    mov r0, #0x0
L_02167ab4:
    cmp r0, #0x0
    beq L_02167aec
L_02167abc:
    bl func_02044338
    cmp r0, #0x0
    ldrne r0, [r5, #0x4ac]
    ldr r1, =0x4cf
    subne r0, r0, #0x1
    strne r0, [r5, #0x4ac]
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02167aec:
    bl func_02044338
    cmp r0, #0x0
    ldrne r0, [r5, #0x4ac]
    addne r0, r0, #0x1
    strne r0, [r5, #0x4ac]
    ldrsb r0, [r5, #0x88]
    bl func_02044688
    cmp r0, #0x0
    beq L_02167c3c
    ldr r0, [r5, #0x4ac]
    cmp r0, #0x4
    blt L_02167c20
    ldrb r1, [r5, #0xc0]
    add ip, r5, #0xc0
    ldr r2, =0x2710
    bic r3, r1, #0x2
    swpb r3, r3, [ip]
    mov r0, r5
    mov r1, #0x0
    bl func_02027f08
    mov r0, r5
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f08
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f08
    ldr r2, =0x2710
    mov r0, r5
    mov r1, #0x5
    bl func_02027f08
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_02027f08
    mov r0, r4
    bl func_020276d0
    mov r1, r0
    mov r0, r5
    mov r2, #0x0
    bl func_02027a84
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x0
    bl func_02027f08
    mov r0, r4
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f08
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f08
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x5
    bl func_02027f08
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_02027f08
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r2, #0x0
    bl func_02027a84
    mov r0, #0x120
    bl func_02044370
    mov r0, #0x0
    bl func_020442e8
    mov r0, r5
    mov r1, r4
    bl func_0204e358
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02167c20:
    mov r0, r5
    mov r1, #0x4d0
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02167c3c:
    ldr r1, =0x4d1
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02167c58:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
