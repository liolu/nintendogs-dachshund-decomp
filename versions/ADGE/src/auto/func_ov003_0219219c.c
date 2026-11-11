#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009f28();
extern void func_02026c30();
extern void func_02027e54();
extern void func_02028714();
extern void func_0202fa5c();
extern void func_0203535c();
extern void func_0203560c();
extern void func_02035fd8();
extern void func_020361ac();
extern void func_020362a8();
extern void func_02037130();
extern void func_02039128();
extern void func_0203e5e8();
extern void func_0206823c();
extern void func_020abb3c();
extern void func_ov003_02196034();
extern void func_ov003_02198408();
extern char data_0215a04c[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0219219c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    mov r7, r0
    bl func_020361ac
    mov r5, #0x0
    movs r4, r0
    mov r6, r5
    beq L_02192240
    mov r0, r7
    bl func_02039128
    add r0, r4, #0xbc
    add r3, r7, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0215a064
    add r3, r7, #0x278
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =0x392
    mov r0, r7
    bl func_02037130
    add r0, r7, #0x3b4
    add r1, r7, #0x2a0
    add r2, sp, #0x0
    bl func_0206823c
    add r0, r7, #0x278
    add r1, r7, #0x2a0
    add r2, sp, #0xc
    bl func_0206823c
    add r0, sp, #0x0
    add r1, sp, #0xc
    bl func_02009f28
    cmp r0, #0x0
    ldr r0, [r7, #0x3b8]
    moveq r5, #0x1
    cmp r0, #0x800
    movlt r6, #0x1
    movge r6, #0x0
L_02192240:
    mov r0, r7
    mov r1, #0x0
    mov r2, #0x1
    bl func_02028714
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r7
    mov r1, r4
    bl func_0203560c
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldr r1, [r7, #0x488]
    ldr r0, =data_0215a04c
    add r1, r1, #0x1
    str r1, [r7, #0x488]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_0219234c
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_0219234c
    cmp r4, #0x0
    beq L_02192304
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_021922d0
    cmp r0, #0x2
    bne L_021922d8
L_021922d0:
    mov r0, #0x1
    b L_021922fc
L_021922d8:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_021922f8
    mov r0, r4
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_021922fc
L_021922f8:
    mov r0, #0x0
L_021922fc:
    cmp r0, #0x0
    beq L_02192320
L_02192304:
    mov r0, r7
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r7
    bl func_02035fd8
    mov r0, #0x1
    b L_0219234c
L_02192320:
    mov r0, r7
    mov r1, r4
    bl func_02026c30
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0219234c
    mov r0, r7
    bl func_0202fa5c
    mov r0, r7
    bl func_02035fd8
    mov r0, #0x1
L_0219234c:
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsb r1, [r7, #0x88]
    ldrsh r0, [r4, #0x98]
    cmp r1, r0
    beq L_02192378
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    bne L_02192380
L_02192378:
    mov r1, #0x1
    b L_02192384
L_02192380:
    mov r1, #0x0
L_02192384:
    mov r0, r7
    bl func_ov003_02196034
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    cmp r4, #0x0
    beq L_021923cc
    mov r0, r7
    mov r1, r4
    bl func_020362a8
    cmp r0, #0x0
    bne L_021923cc
    mov r0, r7
    bl func_ov003_02198408
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021923cc:
    cmp r5, #0x0
    bne L_021923dc
    cmp r6, #0x0
    beq L_021923f0
L_021923dc:
    mov r0, r7
    bl func_ov003_02198408
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021923f0:
    mov r0, r7
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldrb r0, [r7, #0xb6]
    ands r1, r0, #0x1
    bicne r0, r0, #0x1
    addne r1, r7, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0219243c
    mov r0, r7
    mov r1, #0x0
    mov r2, #0x19
    bl func_02027e54
L_0219243c:
    ldr r1, =0x3f2
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
