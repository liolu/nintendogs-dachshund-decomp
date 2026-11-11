#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020142b8();
extern void func_02022020();
extern void func_02022dd0();
extern void func_020234c4();
extern void func_020280f8();
extern void func_02028e80();
extern void func_02029204();
extern void func_02029820();
extern void func_0202986c();
extern void func_0202a068();
extern void func_0202a4cc();
extern void func_0202c4c0();
extern void func_0202d9fc();
extern void func_0202de70();
extern void func_0202ec3c();
extern void func_0202f894();
extern void func_02035f94();
extern void func_0203dc40();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_ov002_021879a8();
extern void func_ov002_02187df0();
extern void func_ov002_02187f44();
extern void func_ov002_0218a100();
extern char data_0214b480[];
extern char data_02153708[];
extern char data_02153720[];
extern char data_ov002_0219633c[];
// clang-format off
asm void func_ov002_021868b4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, r1
    ldrsb r1, [sp, #0x2c]
    mov r7, r0
    mov r5, r2
    mov r9, r3
    mov r4, #0x7
    bl func_ov002_02187f44
    mov r0, r7
    mov r1, #0x1
    bl func_ov002_02187df0
    mov r0, r7
    bl func_020280f8
    mov r8, r0
    mov r0, r7
    bl func_020280f8
    smull ip, r3, r0, r8
    mov r2, #0x800
    adds ip, ip, r2
    ldr r0, =data_0214b480
    adc r3, r3, #0x0
    mov ip, ip, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    ldr r3, [sp, #0x28]
    ldr r0, [r0, #0x0]
    smull lr, r3, ip, r3
    adds r2, lr, r2
    adc r3, r3, #0x0
    mov r2, r2, lsr #0xc
    mov r1, r9
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    addeq r0, r7, #0x100
    ldreqh r1, [r0, #0x2a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x2a]
    addne r0, r7, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x2a]
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
    addgt r0, r7, #0x100
    ldrgth r1, [r0, #0x2c]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x2c]
    bgt L_021869a8
    add r0, r7, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_021869a8:
    mov r0, r7
    mov r1, r6
    bl func_ov002_021879a8
    add r0, r7, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x2
    addls r1, r7, #0xa2
    movls r0, #0x1
    swplsb r0, r0, [r1]
    addhi r1, r7, #0xa2
    movhi r0, #0x0
    swphib r0, r0, [r1]
    ldr r1, [r7, #0x4ac]
    cmp r6, #0x1
    add r1, r1, #0x1
    add r0, r7, #0x100
    str r1, [r7, #0x4ac]
    ldrh r0, [r0, #0x2c]
    moveq r4, #0x3
    cmp r0, #0x28
    bls L_02186a08
    ldrsb r1, [sp, #0x2c]
    mov r0, r7
    bl func_020142b8
L_02186a08:
    mov r0, r7
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_02186a78
    ldr r0, =data_02153708
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x11
    beq L_02186a70
    ldrsh r1, [r7, #0xf0]
    ldrb r2, [r7, #0xc4]
    mov r0, r7
    sub r1, r1, #0xc
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020234c4
    mov r1, r0
    mov r0, r7
    bl func_0203dc40
    add r1, r6, #0x1
    mov r0, r7
    and r2, r1, #0xff
    mov r1, #0xe
    bl func_02028e80
    b L_02186a78
L_02186a70:
    mov r0, r7
    bl func_02029204
L_02186a78:
    mov r0, r7
    mov r1, r6
    bl func_0202c4c0
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r7
    bl func_02035f94
    cmp r0, #0x0
    beq L_02186ab4
    mov r0, r7
    bl func_0202a4cc
    cmp r0, #0x0
    beq L_02186acc
L_02186ab4:
    mov r0, r7
    mov r1, r6
    bl func_ov002_0218a100
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186acc:
    ldrsb r0, [r7, #0x88]
    bl func_02022020
    cmp r0, #0x0
    beq L_02186af4
    mov r0, r7
    mov r1, r6
    bl func_0202f894
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186af4:
    add r0, r7, #0x100
    ldrh r1, [r0, #0xa]
    cmp r1, #0x2
    bne L_02186b3c
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x0
    beq L_02186b3c
    mov r0, r7
    bl func_0202a068
    ldr r1, =0x13d
    mov r0, r7
    add r1, r6, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186b3c:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x14
    bhi L_02186b60
    ldr r1, =0x4000304
    ldrh r1, [r1, #0x0]
    and r1, r1, #0x8000
    movs r1, r1, asr #0xf
    beq L_02186b80
L_02186b60:
    add r0, r6, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186b80:
    ldr r1, =data_02153720
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x84]
    ands r1, r1, #0x2
    bne L_02186b9c
    cmp r0, #0x1
    bls L_02186bc0
L_02186b9c:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_0202986c
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
L_02186bc0:
    mov r0, r7
    bl func_0202de70
    cmp r0, #0x0
    movne r0, #0x0
    bne L_02186c90
    ldr r1, =data_ov002_0219633c
    ldr r0, [r7, #0x4ac]
    ldrh r5, [r1, #0x0]
    ldrh r4, [r1, #0x2]
    ldrh r3, [r1, #0x4]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x8]
    strh r3, [sp, #0x4]
    strh r5, [sp, #0x0]
    strh r4, [sp, #0x2]
    strh r1, [sp, #0x8]
    strh r2, [sp, #0x6]
    ldrsb r2, [r7, #0xa7]
    ldrsb r1, [r7, #0xa4]
    add r3, sp, #0x0
    mov r2, r2, lsl #0x1
    ldrh r2, [r3, r2]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02186c68
L_02186c24:
    b L_02186c68
    b L_02186c5c
    b L_02186c5c
    b L_02186c68
    b L_02186c4c
    b L_02186c3c
L_02186c3c:
    add r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    b L_02186c68
L_02186c4c:
    add r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    b L_02186c68
L_02186c5c:
    sub r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
L_02186c68:
    ldr r1, =data_02153708
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0xa
    subeq r1, r2, #0x12c
    moveq r1, r1, lsl #0x10
    moveq r2, r1, lsr #0x10
    cmp r0, r2
    movgt r0, #0x1
    movle r0, #0x0
L_02186c90:
    cmp r0, #0x0
    beq L_02186d40
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_02186d28
L_02186ca4:
    b L_02186d28
    b L_02186d28
    b L_02186d28
    b L_02186d28
    b L_02186d28
    b L_02186cc8
    b L_02186ce0
    b L_02186cf8
    b L_02186d10
L_02186cc8:
    ldr r1, =0x381
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186ce0:
    ldr r1, =0x382
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186cf8:
    ldr r1, =0x383
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186d10:
    mov r0, r7
    mov r1, #0x384
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186d28:
    ldr r1, =0x385
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02186d40:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x2
    bls L_02186d6c
    mov r0, r7
    mov r1, r6
    bl func_0202d9fc
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
L_02186d6c:
    add r0, r7, #0x100
    ldrh r2, [r0, #0x2c]
    mov r0, r7
    mov r1, r6
    bl func_0202ec3c
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r7
    mov r1, r6
    bl func_02029820
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
