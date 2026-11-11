#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02022dd0();
extern void func_02026db8();
extern void func_020280f8();
extern void func_02029204();
extern void func_0202a554();
extern void func_0202f588();
extern void func_02033cd8();
extern void func_02038094();
extern void func_0203e2b8();
extern void func_02044570();
extern void func_020695f0();
extern void func_02069634();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_ov002_021877dc();
extern void func_ov002_02187df0();
extern void func_ov002_0218891c();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_02187494(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    ldr r2, =data_02150330
    ldr r1, =data_0214b480
    mov r4, r0
    ldr r6, [r2, #0x4c]
    ldr r5, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0xc
    add r2, r4, #0x2f4
    str r6, [sp, #0x0]
    str r5, [sp, #0x4]
    str r3, [sp, #0x8]
    bl func_02092ee8
    add r0, sp, #0xc
    add r1, r4, #0x2f4
    mov r2, r0
    bl func_02069634
    ldr r0, =data_02153720
    add r5, sp, #0x18
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r2, r5
    mov r0, #0x3000
    add r1, sp, #0xc
    bl func_01ff832c
    ldr r1, [sp, #0x10]
    mov r0, #0x3
    mul r0, r1, r0
    ldr r2, [r4, #0x3dc]
    sub r0, r0, #0x5000
    add r0, r2, r0
    str r0, [r4, #0x3dc]
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl func_020695f0
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0xf400
    strgth r1, [r0, #0x8]
    addle r0, r4, #0x100
    movle r1, #0xc00
    strleh r1, [r0, #0x8]
    mov r0, r4
    mov r1, #0x1
    bl func_ov002_02187df0
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r3, #0x800
    adds r2, r2, r3
    mov r5, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r5, r5, r1, lsl #0x14
    ldr r2, =0x1004
    ldr r0, =data_0214b480
    mov ip, #0x0
    umull r7, r6, r5, r2
    mla r6, r5, ip, r6
    mov lr, r5, asr #0x1f
    mla r6, lr, r2, r6
    adds r2, r7, r3
    ldr r0, [r0, #0x0]
    adc r3, r6, #0x0
    mov r2, r2, lsr #0xc
    add r1, r4, #0x390
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    addeq r0, r4, #0x100
    ldreqh r1, [r0, #0x2a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x2a]
    addne r0, r4, #0x100
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
    addgt r0, r4, #0x100
    ldrgth r1, [r0, #0x2c]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x2c]
    bgt L_02187634
    add r0, r4, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_02187634:
    mov r0, r4
    bl func_0202f588
    add r0, r4, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x2
    addls r1, r4, #0xa2
    movls r0, #0x1
    swplsb r0, r0, [r1]
    addhi r1, r4, #0xa2
    movhi r0, #0x0
    swphib r0, r0, [r1]
    add r0, r4, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x14
    bls L_0218768c
    ldrsb r0, [r4, #0x88]
    bl func_02044570
    mov r0, r4
    bl func_ov002_0218891c
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218768c:
    mov r0, r4
    bl func_02026db8
    cmp r0, #0x0
    beq L_02187754
    ldrsb r0, [r4, #0x88]
    bl func_02044570
    mov r0, r4
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02187704
L_021876b8:
    b L_021876c8
    b L_021876d8
    b L_021876e8
    b L_021876f8
L_021876c8:
    ldr r1, =0x30f
    mov r0, r4
    bl func_0203e2b8
    b L_02187704
L_021876d8:
    ldr r1, =0x311
    mov r0, r4
    bl func_0203e2b8
    b L_02187704
L_021876e8:
    ldr r1, =0x312
    mov r0, r4
    bl func_0203e2b8
    b L_02187704
L_021876f8:
    ldr r1, =0x313
    mov r0, r4
    bl func_0203e2b8
L_02187704:
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x1
    bne L_02187724
    mov r0, r4
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02187724:
    mov r0, r4
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r4
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02187754:
    mov r0, r4
    bl func_0202a554
    cmp r0, #0x0
    beq L_0218778c
    ldrsb r0, [r4, #0x88]
    bl func_02044570
    ldr r1, =0x35a
    mov r0, r4
    bl func_0203e2b8
    mov r0, r4
    bl func_02033cd8
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218778c:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x2c]
    cmp r0, #0x14
    addls sp, sp, #0x24
    ldmlsfd sp!, {r4, r5, r6, r7, lr}
    bxls lr
    mov r0, r4
    bl func_ov002_021877dc
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
