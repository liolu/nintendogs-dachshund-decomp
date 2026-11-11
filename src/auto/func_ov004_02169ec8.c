#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020276f8();
extern void func_02027aac();
extern void func_02027f30();
extern void func_0203278c();
extern void func_0203e5e8();
extern void func_0204462c();
extern void func_0204467c();
extern void func_020446b0();
extern void func_020449c4();
extern void func_0204e704();
// clang-format off
asm void func_ov004_02169ec8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    movs r4, r1
    mov r5, r0
    beq L_0216a104
    mov r0, r4
    bl func_020276f8
    mov r1, r0
    mov r0, r5
    bl func_0203278c
    cmp r0, #0x0
    beq L_0216a104
    ldrsh r1, [r5, #0xea]
    cmp r1, #0x4d0
    moveq r0, #0x1
    beq L_02169f28
    ldr r0, =0x4ce
    cmp r1, r0
    blt L_02169f24
    ldr r0, =0x4cf
    cmp r1, r0
    movle r0, #0x1
    ble L_02169f28
L_02169f24:
    mov r0, #0x0
L_02169f28:
    cmp r0, #0x0
    bne L_02169f68
    ldrsh r1, [r4, #0xea]
    cmp r1, #0x4d0
    moveq r0, #0x1
    beq L_02169f60
    ldr r0, =0x4ce
    cmp r1, r0
    blt L_02169f5c
    ldr r0, =0x4cf
    cmp r1, r0
    movle r0, #0x1
    ble L_02169f60
L_02169f5c:
    mov r0, #0x0
L_02169f60:
    cmp r0, #0x0
    beq L_02169f98
L_02169f68:
    bl func_0204467c
    cmp r0, #0x0
    ldrne r0, [r5, #0x488]
    mov r1, #0x4d0
    subne r0, r0, #0x1
    strne r0, [r5, #0x488]
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02169f98:
    bl func_0204467c
    cmp r0, #0x0
    ldrne r0, [r5, #0x488]
    addne r0, r0, #0x1
    strne r0, [r5, #0x488]
    ldrsb r0, [r5, #0x88]
    bl func_020449c4
    cmp r0, #0x0
    beq L_0216a0e8
    ldr r0, [r5, #0x488]
    cmp r0, #0x4
    blt L_0216a0cc
    ldrb r1, [r5, #0xb0]
    add ip, r5, #0xb0
    ldr r2, =0x2710
    bic r3, r1, #0x2
    swpb r3, r3, [ip]
    mov r0, r5
    mov r1, #0x0
    bl func_02027f30
    mov r0, r5
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f30
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f30
    ldr r2, =0x2710
    mov r0, r5
    mov r1, #0x5
    bl func_02027f30
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_02027f30
    mov r0, r4
    bl func_020276f8
    mov r1, r0
    mov r0, r5
    mov r2, #0x0
    bl func_02027aac
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x0
    bl func_02027f30
    mov r0, r4
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f30
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f30
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x5
    bl func_02027f30
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_02027f30
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r2, #0x0
    bl func_02027aac
    mov r0, #0x120
    bl func_020446b0
    mov r0, #0x0
    bl func_0204462c
    mov r0, r5
    mov r1, r4
    bl func_0204e704
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0216a0cc:
    ldr r1, =0x4d1
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0216a0e8:
    ldr r1, =0x4d2
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0216a104:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
