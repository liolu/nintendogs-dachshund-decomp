#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ce80();
extern void func_02026c08();
extern void func_02027e90();
extern void func_020280ec();
extern void func_020286ec();
extern void func_0202f960();
extern void func_02035454();
extern void func_020355c8();
extern void func_02035710();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_020360f0();
extern void func_020365b0();
extern void func_02036fbc();
extern void func_02037a74();
extern void func_02038edc();
extern void func_0203e2b8();
extern void func_0210bebc();
extern void func_ov002_021931f8();
extern void func_ov002_021947a0();
extern void func_ov002_02194ab0();
extern void func_ov002_02195f40();
extern char data_02153708[];
extern char data_ov002_021962f8[];
extern char data_ov002_02196300[];
// clang-format off
asm void func_ov002_02192e8c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    ldr r1, =data_02153708
    mov r8, r0
    ldr r0, [r1, #0x0]
    mov r6, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_02192ec0
    cmp r0, #0x1
    moveq r0, #0x1
    movne r0, r6
L_02192ec0:
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r4, r1, lsr #0x10
    bl func_02035710
    mov r0, r8
    bl func_020355c8
    mov r0, r8
    bl func_02035ff4
    movs r7, r0
    beq L_02192fb4
    mov r0, r8
    mov r1, r7
    bl func_ov002_021931f8
    add r0, r7, #0xbc
    ldr r6, [r7, #0xf8]
    add r3, r8, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x4
    str r1, [sp, #0x0]
    mov r0, r8
    mov r1, r7
    mov r2, r3
    bl func_020365b0
    mov r5, r0
    mov r0, r8
    bl func_02038edc
    ldr r1, =0x312
    mov r0, r8
    bl func_02036fbc
    ldrsh r0, [sp, #0x4]
    cmp r0, #0x2
    addeq r1, r8, #0xb0
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r8, #0xb0
    movne r0, #0x0
    swpneb r0, r0, [r1]
    ldrh r0, [r7, #0xa4]
    cmp r0, #0xfa
    bhi L_02192f90
    mov r0, r8
    mov r1, #0x1
    bl func_02027e90
    ldr r1, =0x19a
    mul r1, r0, r1
    add r0, r1, #0x384000
    cmp r5, r0
    bge L_02192fac
L_02192f90:
    mov r0, r8
    mov r1, #0x1
    bl func_02027e90
    mov r1, r0
    mov r0, r8
    bl func_02037a74
    b L_02192fb4
L_02192fac:
    mov r0, #0x11
    strh r0, [r8, #0xfc]
L_02192fb4:
    mov r0, r8
    mov r1, #0x0
    mov r2, #0x1
    bl func_020286ec
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r0, r8
    mov r1, r7
    bl func_02035454
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, [r8, #0x4ac]
    ldr r0, =data_02153708
    add r1, r1, #0x1
    str r1, [r8, #0x4ac]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_021930c0
    ldrsh r0, [r8, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_021930c0
    cmp r7, #0x0
    beq L_02193078
    ldrsh r0, [r7, #0x90]
    cmp r0, #0x0
    beq L_02193044
    cmp r0, #0x2
    bne L_0219304c
L_02193044:
    mov r0, #0x1
    b L_02193070
L_0219304c:
    ldrsh r0, [r7, #0x94]
    cmp r0, #0x35
    bne L_0219306c
    mov r0, r7
    bl func_0210bebc
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02193070
L_0219306c:
    mov r0, #0x0
L_02193070:
    cmp r0, #0x0
    beq L_02193094
L_02193078:
    mov r0, r8
    mov r1, #0x5d
    bl func_0203e2b8
    mov r0, r8
    bl func_02035e20
    mov r0, #0x1
    b L_021930c0
L_02193094:
    mov r0, r8
    mov r1, r7
    bl func_02026c08
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_021930c0
    mov r0, r8
    bl func_0202f960
    mov r0, r8
    bl func_02035e20
    mov r0, #0x1
L_021930c0:
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r7, #0x0
    beq L_02193100
    mov r0, r8
    mov r1, r7
    bl func_020360f0
    cmp r0, #0x0
    bne L_02193100
    mov r0, r8
    bl func_ov002_02195f40
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02193100:
    mov r0, r8
    bl func_0200ce80
    cmp r0, #0x0
    beq L_02193128
    ldr r1, =0x3c6
    mov r0, r8
    bl func_0203e2b8
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02193128:
    mov r0, r8
    bl func_020280ec
    ldr r2, =data_ov002_02196300
    mov r1, #0x800
    ldr r2, [r2, r4, lsl #0x2]
    add r2, r6, r2
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    bge L_02193180
    mov r0, r8
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_ov002_021947a0
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
L_02193180:
    mov r0, r8
    bl func_020280ec
    ldr r2, =data_ov002_021962f8
    mov r1, #0x800
    ldr r2, [r2, r4, lsl #0x2]
    add r2, r6, r2
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    addge sp, sp, #0x8
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r0, r8
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_ov002_02194ab0
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
