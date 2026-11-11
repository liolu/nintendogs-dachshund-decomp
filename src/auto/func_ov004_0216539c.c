#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024fe0();
extern void func_02025dc4();
extern void func_02026504();
extern void func_0202674c();
extern void func_02026b9c();
extern void func_02028114();
extern void func_02028120();
extern void func_02036874();
extern void func_02037130();
extern void func_0203910c();
extern void func_02039128();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_021058ac();
extern void func_02106ef0();
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov004_0216539c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r0, #0x0
    str r0, [r5, #0x484]
    ldr r1, [r5, #0x2a0]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x2a0]
    ldr r1, [r5, #0x3f0]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x3f0]
    ldr r1, [r5, #0x3fc]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x3fc]
    ldr r0, [r5, #0x488]
    add r0, r0, #0x1
    str r0, [r5, #0x488]
    bl func_02106ef0
    cmp r0, #0x0
    beq L_02165400
    ldr r0, [r5, #0x484]
    bl func_021058ac
L_02165400:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_02165428
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02165430
L_02165428:
    mov r0, #0x0
    b L_02165438
L_02165430:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_02165438:
    cmp r0, #0x0
    beq L_0216545c
    add r0, r0, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x3b4
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0216545c:
    ldr r0, [r5, #0x464]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021657e8
L_0216546c:
    b L_0216547c
    b L_02165518
    b L_0216571c
    b L_021657a4
L_0216547c:
    mov r0, r5
    bl func_0203910c
    mov r0, r5
    mov r1, #0x314
    bl func_02037130
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3b4
    bl func_02036874
    cmp r0, #0x3000
    bge L_021654d0
    mov r0, #0x1
    mov r1, #0x0
    str r0, [r5, #0x464]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x468]
    bl func_0203e5ac
    mov r0, r5
    bl func_02026b9c
    b L_021657e8
L_021654d0:
    mov r0, r5
    bl func_02028114
    mov r1, #0x3
    mul r2, r0, r1
    cmp r4, r2
    bge L_021657e8
    str r1, [r5, #0x464]
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_02026504
    b L_021657e8
L_02165518:
    mov r0, r5
    bl func_02028120
    ldr r2, =0x300c
    mov r1, #0x0
    umull ip, r4, r0, r2
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r1, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r2, r4
    adc r0, r4, #0x0
    mov r2, r3, lsr #0xc
    ldr r3, [r5, #0x3b8]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_02165568
    mov r0, r5
    mov r2, #0x85
    bl func_0203e5ac
    b L_021655c4
L_02165568:
    mov r0, r5
    bl func_02028120
    ldr r2, =0x2008
    mov r1, #0x0
    umull ip, r4, r0, r2
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r1, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r2, r4
    adc r0, r4, #0x0
    mov r2, r3, lsr #0xc
    ldr r3, [r5, #0x3b8]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_021655b8
    mov r0, r5
    mov r2, #0x86
    bl func_0203e5ac
    b L_021655c4
L_021655b8:
    mov r0, r5
    mov r2, #0x87
    bl func_0203e5ac
L_021655c4:
    mov r0, r5
    bl func_02028120
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3b4
    bl func_02036874
    ldr r1, =0x300c
    mov r3, #0x0
    umull lr, ip, r4, r1
    mov r2, #0x800
    adds lr, lr, r2
    mla ip, r4, r3, ip
    mov r2, r4, asr #0x1f
    mla ip, r2, r1, ip
    adc r1, ip, #0x0
    mov r2, lr, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    addlt r1, r5, #0x93
    movlt r0, #0x10
    swpltb r0, r0, [r1]
    addge r1, r5, #0x93
    movge r0, #0x7
    swpgeb r0, r0, [r1]
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0x3c
    ble L_021657e8
    mov r0, #0x2
    str r0, [r5, #0x464]
    mov r1, #0x0
    ldr r0, =data_0214da84
    str r1, [r5, #0x468]
    ldr r2, [r0, #0x0]
    ldr r0, =0x10dcd
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_021656b8
    mov r0, r5
    bl func_02028114
    mov r1, #0x120
    mov r3, #0x0
    umull ip, r4, r0, r1
    mov r2, #0x800
    adds r2, ip, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r5, #0x46c]
    b L_021656f4
L_021656b8:
    mov r0, r5
    bl func_02028114
    mov r1, #0x120
    mov r3, #0x0
    umull ip, r4, r0, r1
    mov r2, #0x800
    adds r2, ip, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    rsb r0, r1, #0x0
    str r0, [r5, #0x46c]
L_021656f4:
    mov r0, r5
    add r4, r5, #0x93
    mov r3, #0x5
    mov r1, #0x0
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_02025dc4
    b L_021657e8
L_0216571c:
    ldr r1, [r5, #0x46c]
    mov r0, r5
    bl func_02024fe0
    add r0, r5, #0x26c
    add r3, r5, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_02039128
    mov r0, r5
    mov r1, #0x310
    bl func_02037130
    add r0, r5, #0x278
    add r3, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0xf
    ble L_021657e8
    mov r1, #0x0
    str r1, [r5, #0x464]
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_0202674c
    b L_021657e8
L_021657a4:
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0x1e
    ble L_021657e8
    mov r1, #0x0
    str r1, [r5, #0x464]
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_0202674c
L_021657e8:
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x64
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r1, =0x4c4
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
