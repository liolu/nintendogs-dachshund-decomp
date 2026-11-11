#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027b28();
extern void func_02027ed0();
extern void func_02027f68();
extern void func_02028120();
extern void func_020352ec();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_02041be4();
extern void func_02114564();
extern void func_ov005_0215bc8c();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov005_0215b238(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r3, =0x4000304
    mov r6, r0
    ldrh r0, [r3, #0x0]
    mov r5, r1
    mov r4, r2
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0215b31c
    ldr r0, =data_0215a064
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_0215b31c
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_0215b2bc
    mov r0, r6
    mov r1, #0x1
    mov r2, #0x1e
    bl func_02027ed0
    mov r0, r6
    mov r1, #0x2
    mvn r2, #0x2
    bl func_02027ed0
    b L_0215b31c
L_0215b2bc:
    add r2, r6, #0x100
    ldrh r0, [r2, #0x28]
    add r0, r0, #0x1
    strh r0, [r2, #0x28]
    ldrh r0, [r2, #0x28]
    cmp r0, #0x3c
    blo L_0215b2ec
    mov r3, #0x0
    mov r0, r6
    mvn r1, #0x13
    strh r3, [r2, #0x28]
    bl func_02027b28
L_0215b2ec:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ed0
    mov r0, r6
    mov r1, #0x5
    mvn r2, #0x9
    bl func_02027ed0
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x1
    bl func_02027ed0
L_0215b31c:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x1a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1a]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1a]
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r1, r2, r0, r7
    mov r0, #0x800
    adds r3, r1, r0
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    smull r4, r2, r3, r4
    adds r0, r4, r0
    adc r3, r2, #0x0
    mov r2, r0, lsr #0xc
    ldr r1, =data_0214da80
    orr r2, r2, r3, lsl #0x14
    ldr r0, [r1, #0x0]
    mov r1, r5
    bl func_02114564
    cmp r0, #0x0
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x1c]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1c]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1c]
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r6, #0x100
    ldrgth r1, [r0, #0x1e]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x1e]
    bgt L_0215b408
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0215b408:
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x3c
    bls L_0215b4b0
    ldrsh r0, [r0, #0x56]
    cmp r0, #0x0
    beq L_0215b484
    cmp r0, #0x3
    beq L_0215b484
    cmp r0, #0x4
    bne L_0215b4e0
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3c
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    bne L_0215b4e0
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e5ac
    b L_0215b4e0
L_0215b484:
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xa
    bl func_020352ec
    cmp r0, #0x0
    beq L_0215b4e0
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
    b L_0215b4e0
L_0215b4b0:
    cmp r1, #0x14
    bls L_0215b4e0
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
    add r1, r6, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r6, #0x98
    mov r0, #0x9
    swpb r0, r0, [r1]
L_0215b4e0:
    ldr r1, [r6, #0x488]
    add r0, r6, #0x100
    add r1, r1, #0x1
    str r1, [r6, #0x488]
    ldrh r1, [r0, #0x1c]
    cmp r1, #0x14
    bls L_0215b540
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215b528
    ldr r1, =0x43d
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0215b528:
    mov r0, r6
    mov r1, #0x440
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0215b540:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    bne L_0215b55c
    cmp r1, #0x1
    bls L_0215b578
L_0215b55c:
    mov r0, r6
    mov r1, #0x1
    bl func_ov005_0215bc8c
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
L_0215b578:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0215b5a0
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215b5a8
L_0215b5a0:
    mov r1, #0x0
    b L_0215b5b0
L_0215b5a8:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215b5b0:
    cmp r1, #0x0
    beq L_0215b5d4
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_0215b5d4
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_0215b5d8
L_0215b5d4:
    mov r0, #0x0
L_0215b5d8:
    cmp r0, #0x0
    bne L_0215b638
    cmp r2, #0x0
    blt L_0215b5fc
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215b604
L_0215b5fc:
    mov r0, #0x0
    b L_0215b60c
L_0215b604:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215b60c:
    cmp r0, #0x0
    beq L_0215b624
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_0215b628
L_0215b624:
    mov r0, #0x0
L_0215b628:
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_0215b638:
    ldrsb r0, [r6, #0x8b]
    cmp r0, #0x2
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x5
    bl func_02027f68
    mov r4, r0
    mov r0, r6
    bl func_02041be4
    cmp r4, r0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    mov r0, r6
    mov r1, #0x440
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
