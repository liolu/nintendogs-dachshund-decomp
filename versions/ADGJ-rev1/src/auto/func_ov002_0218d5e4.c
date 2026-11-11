#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02022154();
extern void func_02027e2c();
extern void func_020280f8();
extern void func_02029204();
extern void func_0202f588();
extern void func_0202f960();
extern void func_02033cd8();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_0203e280();
extern void func_02044570();
extern void func_020695f0();
extern void func_02069634();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_0210609c();
extern void func_ov002_021939d8();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0218d5e4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    bl func_02035ff4
    cmp r0, #0x0
    beq L_0218d8cc
    ldr r1, =data_02153720
    mvn r0, #0x9
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x88]
    cmp r1, r0
    ble L_0218d688
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x1004
    ldr r3, =data_0214b480
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x390
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    movne r0, #0x0
    strne r0, [r4, #0x488]
    bne L_0218d694
L_0218d688:
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
L_0218d694:
    mov r0, r4
    bl func_0202f588
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    bne L_0218d75c
    ldr r0, =data_02153720
    ldr ip, =data_02150330
    ldr r0, [r0, #0x0]
    ldr r3, =data_0214b480
    ldr r0, [r0, #0x1c]
    add r5, sp, #0x4
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r5, [ip, #0x4c]
    ldr lr, [ip, #0x58]
    ldr ip, [ip, #0x64]
    ldr r0, [r3, #0x0]
    add r1, sp, #0x1c
    add r2, r4, #0x2f4
    str r5, [sp, #0x10]
    str lr, [sp, #0x14]
    str ip, [sp, #0x18]
    bl func_02092ee8
    add r0, sp, #0x1c
    add r1, r4, #0x2f4
    mov r2, r0
    bl func_02069634
    add r1, sp, #0x1c
    add r2, sp, #0x4
    mov r0, #0x3000
    add r3, r4, #0x3d8
    bl func_01ff832c
    ldr r1, [sp, #0x20]
    ldr r2, [r4, #0x3dc]
    mov r1, r1, asr #0x5
    sub r1, r1, #0x1400
    add r1, r2, r1
    str r1, [r4, #0x3dc]
    add r0, sp, #0x1c
    add r1, sp, #0x10
    bl func_020695f0
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0xf400
    strgth r1, [r0, #0x8]
    addle r0, r4, #0x100
    movle r1, #0xc00
    strleh r1, [r0, #0x8]
    b L_0218d790
L_0218d75c:
    ldr r0, =data_02153720
    add lr, r4, #0x3d8
    ldr r0, [r0, #0x0]
    add r3, r4, #0x100
    ldr r0, [r0, #0x1c]
    mov ip, #0x0
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r0, [r4, #0x3dc]
    sub r0, r0, #0x1000
    str r0, [r4, #0x3dc]
    strh ip, [r3, #0x8]
L_0218d790:
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    bne L_0218d7f4
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    ble L_0218d7f4
    ldr r0, [r4, #0x4b0]
    sub r0, r0, #0x2
    str r0, [r4, #0x4b0]
    ldr r0, [r4, #0x4b0]
    cmp r0, #0x11
    movlt r0, #0x11
    strlt r0, [r4, #0x4b0]
    ldr r0, [r4, #0x48c]
    add r0, r0, #0x1
    str r0, [r4, #0x48c]
    b L_0218d810
L_0218d7f4:
    ldr r0, [r4, #0x48c]
    sub r0, r0, #0x2
    str r0, [r4, #0x48c]
    ldr r0, [r4, #0x48c]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r4, #0x48c]
L_0218d810:
    ldr r0, [r4, #0x48c]
    cmp r0, #0x28
    ble L_0218d884
    add r1, r4, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r4, #0xb1
    mov r0, #0x9
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0xc9]
    ands r1, r0, #0x20
    bicne r0, r0, #0x20
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0218d8cc
    mov r0, r4
    mov r1, #0x5
    mov r2, #0x19
    bl func_02027e2c
    mov r2, #0x0
    str r2, [sp, #0x0]
    ldrsb r1, [r4, #0x88]
    mov r0, r4
    mvn r3, #0x0
    bl func_02022154
    b L_0218d8cc
L_0218d884:
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    bne L_0218d8b0
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x30
    bl func_0203e280
    add r1, r4, #0xb0
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_0218d8cc
L_0218d8b0:
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0218d8cc:
    ldr r0, [r4, #0x488]
    cmp r0, #0x2
    addle r1, r4, #0xa2
    movle r0, #0x1
    swpleb r0, r0, [r1]
    addgt r1, r4, #0xa2
    movgt r0, #0x0
    swpgtb r0, r0, [r1]
    mov r0, r4
    bl func_ov002_021939d8
    cmp r0, #0x0
    beq L_0218d910
    ldrsb r0, [r4, #0x88]
    bl func_02044570
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0218d910:
    bl func_0210609c
    cmp r0, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_02029204
    mov r0, r4
    bl func_02033cd8
    mov r0, r4
    bl func_0202f960
    mov r0, r4
    bl func_02035e20
    ldrsb r0, [r4, #0x88]
    bl func_02044570
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
