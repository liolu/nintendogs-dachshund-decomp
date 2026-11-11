#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024f98();
extern void func_02025d7c();
extern void func_020264bc();
extern void func_02026704();
extern void func_02026b54();
extern void func_020280ec();
extern void func_020280f8();
extern void func_020366bc();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_02038ef8();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020e17d8();
extern void func_020e2e1c();
extern char data_0214b484[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov003_02162ea4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r0, #0x0
    str r0, [r5, #0x4a8]
    ldr r1, [r5, #0x2a0]
    ldr r0, [r5, #0x4a8]
    sub r0, r1, r0
    str r0, [r5, #0x2a0]
    ldr r1, [r5, #0x414]
    ldr r0, [r5, #0x4a8]
    sub r0, r1, r0
    str r0, [r5, #0x414]
    ldr r1, [r5, #0x420]
    ldr r0, [r5, #0x4a8]
    sub r0, r1, r0
    str r0, [r5, #0x420]
    ldr r0, [r5, #0x4ac]
    add r0, r0, #0x1
    str r0, [r5, #0x4ac]
    bl func_020e2e1c
    cmp r0, #0x0
    beq L_02162f08
    ldr r0, [r5, #0x4a8]
    bl func_020e17d8
L_02162f08:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_02162f30
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02162f38
L_02162f30:
    mov r0, #0x0
    b L_02162f40
L_02162f38:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_02162f40:
    cmp r0, #0x0
    beq L_02162f64
    add r0, r0, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x3d8
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02162f64:
    ldr r0, [r5, #0x488]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021632f0
L_02162f74:
    b L_02162f84
    b L_02163020
    b L_02163224
    b L_021632ac
L_02162f84:
    mov r0, r5
    bl func_02038edc
    mov r0, r5
    mov r1, #0x314
    bl func_02036fbc
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3d8
    bl func_020366bc
    cmp r0, #0x3000
    bge L_02162fd8
    mov r0, #0x1
    mov r1, #0x0
    str r0, [r5, #0x488]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x48c]
    bl func_0203e280
    mov r0, r5
    bl func_02026b54
    b L_021632f0
L_02162fd8:
    mov r0, r5
    bl func_020280ec
    mov r1, #0x3
    mul r2, r0, r1
    cmp r4, r2
    bge L_021632f0
    str r1, [r5, #0x488]
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x48c]
    add r4, r5, #0xac
    mov r3, #0x5
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_020264bc
    b L_021632f0
L_02163020:
    mov r0, r5
    bl func_020280f8
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
    ldr r3, [r5, #0x3dc]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_02163070
    mov r0, r5
    mov r2, #0x85
    bl func_0203e280
    b L_021630cc
L_02163070:
    mov r0, r5
    bl func_020280f8
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
    ldr r3, [r5, #0x3dc]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_021630c0
    mov r0, r5
    mov r2, #0x86
    bl func_0203e280
    b L_021630cc
L_021630c0:
    mov r0, r5
    mov r2, #0x87
    bl func_0203e280
L_021630cc:
    mov r0, r5
    bl func_020280f8
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3d8
    bl func_020366bc
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
    addlt r1, r5, #0xac
    movlt r0, #0x10
    swpltb r0, r0, [r1]
    addge r1, r5, #0xac
    movge r0, #0x7
    swpgeb r0, r0, [r1]
    ldr r0, [r5, #0x48c]
    add r0, r0, #0x1
    str r0, [r5, #0x48c]
    ldr r0, [r5, #0x48c]
    cmp r0, #0x3c
    ble L_021632f0
    mov r0, #0x2
    str r0, [r5, #0x488]
    mov r1, #0x0
    ldr r0, =data_0214b484
    str r1, [r5, #0x48c]
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
    beq L_021631c0
    mov r0, r5
    bl func_020280ec
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
    str r1, [r5, #0x490]
    b L_021631fc
L_021631c0:
    mov r0, r5
    bl func_020280ec
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
    str r0, [r5, #0x490]
L_021631fc:
    mov r0, r5
    add r4, r5, #0xac
    mov r3, #0x5
    mov r1, #0x0
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_02025d7c
    b L_021632f0
L_02163224:
    ldr r1, [r5, #0x490]
    mov r0, r5
    bl func_02024f98
    add r0, r5, #0x26c
    add r3, r5, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_02038ef8
    mov r0, r5
    mov r1, #0x310
    bl func_02036fbc
    add r0, r5, #0x278
    add r3, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x48c]
    add r0, r0, #0x1
    str r0, [r5, #0x48c]
    ldr r0, [r5, #0x48c]
    cmp r0, #0xf
    ble L_021632f0
    mov r1, #0x0
    str r1, [r5, #0x488]
    mov r0, r5
    str r1, [r5, #0x48c]
    add r4, r5, #0xac
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_02026704
    b L_021632f0
L_021632ac:
    ldr r0, [r5, #0x48c]
    add r0, r0, #0x1
    str r0, [r5, #0x48c]
    ldr r0, [r5, #0x48c]
    cmp r0, #0x1e
    ble L_021632f0
    mov r1, #0x0
    str r1, [r5, #0x488]
    mov r0, r5
    str r1, [r5, #0x48c]
    add r4, r5, #0xac
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_02026704
L_021632f0:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x64
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r1, =0x4c3
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
