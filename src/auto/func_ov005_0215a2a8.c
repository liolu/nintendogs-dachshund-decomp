#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c3ec();
extern void func_02026b54();
extern void func_02027db0();
extern void func_02027e14();
extern void func_020280ec();
extern void func_02029204();
extern void func_02034c88();
extern void func_02035fd0();
extern void func_02036a60();
extern void func_02038270();
extern void func_0203e280();
extern void func_02092df4();
extern void func_020af298();
extern void func_ov005_0215c3f4();
extern void func_ov005_0215cf60();
extern char data_0214b47c[];
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153700[];
extern char data_02153720[];
// clang-format off
asm void func_ov005_0215a2a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r9, r0
    str r1, [sp, #0x4]
    str r1, [sp, #0x8]
    str r1, [sp, #0xc]
    bl func_02035fd0
    movs r11, r0
    beq L_0215a314
    ldr r1, [r11, #0x2c]
    ldr r0, [r11, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_0215a314
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r7, r1, r0
    movne r0, #0x1
    bne L_0215a318
L_0215a314:
    mov r0, #0x0
L_0215a318:
    cmp r0, #0x0
    beq L_0215a7e0
    ldrsh r0, [r7, #0x2]
    mov r8, #0x0
    mov r5, r8
    cmp r0, #0x0
    ble L_0215a4d8
    mov r0, #0x9000
    add r10, sp, #0x2c
    mov r4, #0x1
    str r0, [sp, #0x10]
L_0215a344:
    ldrsh r1, [r7, #0x2]
    mov r2, r5
    cmp r5, #0x0
    movlt r2, r8
    cmp r2, r1
    subge r0, r1, #0x1
    movge r0, r0, lsl #0x10
    movge r2, r0, asr #0x10
    ldr r0, [r11, #0x34]
    cmp r0, #0x0
    bne L_0215a390
    ldr r0, =data_0214b47c
    ldrsh r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r6, r1, r0, r3
    b L_0215a3bc
L_0215a390:
    cmp r0, #0x1
    bne L_0215a3bc
    ldr r0, =data_0214b47c
    ldrsh r6, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r6, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r6, r1, r3, r0
L_0215a3bc:
    ldmia r6, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldr ip, [r9, #0x488]
    sub r0, ip, #0x1
    cmp r5, r0
    addeq r3, sp, #0x20
    ldmeqia r10, {r0, r1, r2}
    stmeqia r3, {r0, r1, r2}
    cmp r5, ip
    addeq r3, sp, #0x14
    ldmeqia r10, {r0, r1, r2}
    stmeqia r3, {r0, r1, r2}
    ldr r0, =data_0214b480
    ldr r2, [sp, #0x10]
    ldr r0, [r0, #0x0]
    mov r1, r10
    bl func_02092df4
    cmp r0, #0x0
    beq L_0215a4c0
    ldr r0, =data_02153720
    mov r1, r4
    ldr r0, [r0, #0x0]
    str r4, [sp, #0x8]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    ldrne r0, [r9, #0x48c]
    addne r0, r0, #0xc8
    strne r0, [r9, #0x48c]
    ldreq r0, [r9, #0x48c]
    addeq r0, r0, #0xa
    streq r0, [r9, #0x48c]
    mov r0, r9
    bl func_02027e14
    ldr r1, [r9, #0x48c]
    rsb r0, r0, #0x3e8
    cmp r1, r0
    ble L_0215a480
    mov r0, r9
    mov r1, r4
    bl func_02027e14
    rsb r0, r0, #0x4b0
    ldr r1, [r9, #0x48c]
    cmp r1, r0
    bge L_0215a480
    mov r0, r9
    mov r1, r4
    bl func_02027e14
    rsb r0, r0, #0x4b0
    str r0, [r9, #0x48c]
L_0215a480:
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    bne L_0215a4b4
    ldr r1, [r9, #0x488]
    cmp r5, r1
    bge L_0215a4c0
    cmp r5, #0x2
    ble L_0215a4c0
    ldrsh r0, [r7, #0x2]
    sub r0, r0, #0x2
    cmp r1, r0
    strlt r4, [r9, #0x490]
    b L_0215a4c0
L_0215a4b4:
    ldr r0, [r9, #0x488]
    cmp r5, r0
    strgt r8, [r9, #0x490]
L_0215a4c0:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    ldrsh r0, [r7, #0x2]
    cmp r5, r0
    blt L_0215a344
L_0215a4d8:
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    ldreq r0, [r9, #0x48c]
    subeq r0, r0, #0x14
    streq r0, [r9, #0x48c]
    ldr r0, [r9, #0x48c]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r9, #0x48c]
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    beq L_0215a528
    add r0, sp, #0x20
    add r4, r9, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0215a544
L_0215a528:
    add r0, sp, #0x14
    add r4, r9, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0215a544:
    mov r0, r9
    mov r1, #0x1
    bl func_02027e14
    cmp r0, #0x3e8
    blt L_0215a5c0
    mov r0, r9
    bl func_020280ec
    mov r4, r0
    mov r0, r9
    mov r1, #0x1
    bl func_02027e14
    mov r1, r0
    mov r0, r9
    bl func_02038270
    mov r2, r0
    mov r0, r9
    mov r1, #0x100
    bl func_02036a60
    mov r1, r4, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r3, r4, lsl #0xc
    mov r1, #0x800
    orr r2, r2, r4, lsr #0x14
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    mov r8, #0x0
    cmp r0, r2
    movlt r8, #0x1
    b L_0215a6a0
L_0215a5c0:
    ldr r1, [r9, #0x488]
    cmp r1, #0x2
    ble L_0215a5f8
    ldrsh r0, [r7, #0x2]
    sub r0, r0, #0x2
    cmp r1, r0
    bge L_0215a5f8
    mov r0, r9
    mov r1, #0x1
    bl func_02027e14
    ldr r1, [r9, #0x48c]
    add r0, r1, r0
    cmp r0, #0x3e8
    ble L_0215a670
L_0215a5f8:
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_020280ec
    mov r4, r0
    mov r0, r9
    mov r1, #0x1
    bl func_02027e14
    mov r1, r0
    mov r0, r9
    bl func_02038270
    mov r2, r0
    mov r0, r9
    mov r1, #0x100
    bl func_02036a60
    mov r1, r4, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r3, r4, lsl #0xc
    mov r1, #0x800
    orr r2, r2, r4, lsr #0x14
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    mov r8, #0x0
    cmp r0, r2
    movlt r8, #0x1
    b L_0215a6a0
L_0215a670:
    ldr r2, =0x161
    mov r0, r9
    mov r1, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_02034c88
    mov r2, r0
    mov r0, r9
    mov r1, #0x3
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
L_0215a6a0:
    cmp r8, #0x0
    beq L_0215a7e0
    ldrsh r0, [r7, #0x2]
    ldr r1, [r9, #0x488]
    cmp r1, r0, asr #0x1
    bne L_0215a708
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr r4, [r0, #0x0]
    mov r0, r9
    ldr r3, [r4, #0x0]
    mov r1, #0x1
    mul r2, r3, r2
    add r5, r2, #0x1
    str r5, [r4, #0x0]
    bl func_02027e14
    mov r1, r5, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, #0xfa0
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    add r2, r0, #0x7d0
    mov r0, r1, lsl #0x10
    cmp r2, r0, lsr #0x10
    movlt r0, #0x1
    strlt r0, [r9, #0x490]
L_0215a708:
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    beq L_0215a748
    ldr r0, [r9, #0x488]
    sub r0, r0, #0x1
    str r0, [r9, #0x488]
    ldr r1, [r9, #0x488]
    cmp r1, #0x1
    moveq r0, #0x0
    streq r0, [sp, #0xc]
    moveq r0, #0x1
    streq r0, [sp, #0x4]
    cmp r1, #0x0
    movle r0, #0x1
    strle r0, [sp, #0x0]
    b L_0215a7e0
L_0215a748:
    ldr r0, [r9, #0x488]
    mov r1, #0x1
    mov r3, r1, lsl r0
    ldr r0, [r9, #0x494]
    ands r2, r0, r3
    bne L_0215a774
    orr r3, r0, r3
    mov r0, r9
    mov r2, #0xf
    str r3, [r9, #0x494]
    bl func_02027db0
L_0215a774:
    ldr r0, [r9, #0x488]
    add r0, r0, #0x1
    str r0, [r9, #0x488]
    ldrsh r1, [r7, #0x2]
    ldr r0, [r9, #0x488]
    sub r2, r1, #0x1
    cmp r0, r2
    bne L_0215a7d4
    ldr r2, =data_02153700
    ldr r2, [r2, #0x0]
    ldrsh r2, [r2, #0x0]
    cmp r2, #0x0
    beq L_0215a7b8
    ldr r3, [r11, #0x20]
    mvn r2, #0x0
    cmp r3, r2
    beq L_0215a7c4
L_0215a7b8:
    mov r2, #0x1
    str r2, [sp, #0xc]
    b L_0215a7cc
L_0215a7c4:
    mov r2, #0x0
    str r2, [sp, #0xc]
L_0215a7cc:
    mov r2, #0x1
    str r2, [sp, #0x4]
L_0215a7d4:
    cmp r0, r1
    movge r0, #0x1
    strge r0, [sp, #0x0]
L_0215a7e0:
    mov r0, r9
    bl func_02029204
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_0215a8e8
    mov r2, #0x1
    mov r0, r9
    mov r1, r11
    mov r3, r2
    bl func_ov005_0215c3f4
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215a8e8
L_0215a814:
    b L_0215a8e8
    b L_0215a828
    b L_0215a89c
    b L_0215a8e8
    b L_0215a8c4
L_0215a828:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0215a874
    ldr r1, =data_0214b484
    mov r0, #0x3
    ldr r2, [r1, #0x0]
    strh r0, [r2, #0x2e]
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x2c]
    add r1, r1, #0x1
    strh r1, [r2, #0x2c]
    ldrsh r1, [r2, #0x2c]
    cmp r1, #0x5
    blt L_0215a868
    bl func_020af298
    b L_0215a8e8
L_0215a868:
    mov r0, #0x2
    bl func_020af298
    b L_0215a8e8
L_0215a874:
    ldr r0, =data_0214b484
    mov r3, #0x4
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_0215a8e8
L_0215a89c:
    ldr r0, =data_0214b484
    mov r3, #0x4
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_0215a8e8
L_0215a8c4:
    ldr r0, =data_0214b484
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
L_0215a8e8:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x3c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r2, #0x0
    mov r0, r9
    mov r1, r11
    mov r3, r2
    bl func_ov005_0215c3f4
    ldrb r1, [r9, #0xc0]
    mov r0, r9
    add r2, r9, #0xc0
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    bl func_ov005_0215cf60
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
