#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ff8958();
extern void func_0200c4c8();
extern void func_0201419c();
extern void func_020280f8();
extern void func_0202f960();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_020360f0();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e2b8();
extern void func_02044470();
extern void func_0206902c();
extern void func_02069098();
extern void func_020695f0();
extern void func_02069634();
extern void func_02069668();
extern void func_020eacd4();
extern void func_0210b754();
extern void func_0210bebc();
extern void func_ov002_02193e98();
extern void func_ov002_02196230();
extern char data_02138700[];
extern char data_0214b484[];
extern char data_02150330[];
extern char data_02153720[];
extern char data_ov002_02196328[];
// clang-format off
asm void func_ov002_02171078(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    mov r8, r0
    str r1, [sp, #0x0]
    str r2, [sp, #0x4]
    str r3, [sp, #0x8]
    bl func_02035ff4
    mov r1, #0x0
    str r1, [sp, #0x10]
    movs r11, r0
    str r1, [sp, #0x14]
    str r1, [sp, #0xc]
    beq L_0217192c
    ldrsh r1, [r11, #0x90]
    cmp r1, #0x0
    beq L_021710c0
    cmp r1, #0x2
    bne L_021710c8
L_021710c0:
    mov r0, #0x1
    b L_021710e8
L_021710c8:
    ldrsh r1, [r11, #0x94]
    cmp r1, #0x35
    bne L_021710e4
    bl func_0210bebc
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_021710e8
L_021710e4:
    mov r0, #0x0
L_021710e8:
    cmp r0, #0x0
    bne L_0217192c
    ldr r1, =data_02150330
    add r0, sp, #0x34
    ldr r4, [r1, #0x5c]
    bl func_02044470
    ldrsh r0, [r11, #0x96]
    cmp r0, #0x6
    bne L_0217111c
    add r1, sp, #0x28
    mov r0, r11
    bl func_0210b754
    b L_02171134
L_0217111c:
    ldr r0, =data_02153720
    add r3, sp, #0x28
    ldr r0, [r0, #0x0]
    add r0, r0, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02171134:
    mov r0, r8
    bl func_020280f8
    mvn r1, #0x2
    mul r1, r0, r1
    mov r0, r1
    add r1, sp, #0x34
    add r2, sp, #0x28
    add r3, r8, #0x26c
    bl func_01ff832c
    ldr r0, [sp, #0x28]
    mov r5, #0x0
    str r0, [r8, #0x3d8]
    ldr r9, [r8, #0x270]
    mov r1, #0x3000
    umull ip, r10, r9, r1
    mov r0, #0x8000
    rsb r2, r0, #0x0
    mla r10, r9, r5, r10
    mov r7, r9, asr #0x1f
    mla r10, r7, r1, r10
    mov r3, #0x800
    adds r1, ip, r3
    mvn lr, #0x0
    adc r5, r10, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r5, lsl #0x14
    umull r7, r5, r4, r2
    adds r3, r7, r3
    mla r5, r4, lr, r5
    mov r6, r4, asr #0x1f
    mla r5, r6, r2, r5
    adc r2, r5, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r1, r1, r3
    str r1, [r8, #0x3dc]
    ldr r1, [sp, #0x30]
    mov r0, r8
    str r1, [r8, #0x3e0]
    bl func_02038edc
    ldr r1, [sp, #0x8]
    mov r0, r8
    bl func_02036fbc
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    bne L_02171644
    ldr r0, [r8, #0x260]
    mov r3, #0xf80
    mov r5, #0x0
    umull r2, r1, r0, r3
    mla r1, r0, r5, r1
    mov r0, r0, asr #0x1f
    mov r4, #0x800
    mla r1, r0, r3, r1
    adds r2, r2, r4
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r8, #0x260]
    ldr r7, [r8, #0x264]
    add r0, r8, #0x3b4
    umull r10, r9, r7, r3
    mla r9, r7, r5, r9
    mov r6, r7, asr #0x1f
    adds r7, r10, r4
    mla r9, r6, r3, r9
    adc r6, r9, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [r8, #0x264]
    ldr r7, [r8, #0x268]
    add r1, r8, #0x3a8
    umull r10, r9, r7, r3
    mla r9, r7, r5, r9
    mov r6, r7, asr #0x1f
    adds r7, r10, r4
    mla r9, r6, r3, r9
    adc r6, r9, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [r8, #0x268]
    ldr r7, [r8, #0x3a8]
    mov r2, r0
    umull r10, r9, r7, r3
    mla r9, r7, r5, r9
    mov r6, r7, asr #0x1f
    adds r7, r10, r4
    mla r9, r6, r3, r9
    adc r6, r9, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [r8, #0x3a8]
    ldr r7, [r8, #0x3ac]
    umull r10, r9, r7, r3
    mla r9, r7, r5, r9
    mov r6, r7, asr #0x1f
    adds r7, r10, r4
    mla r9, r6, r3, r9
    adc r6, r9, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [r8, #0x3ac]
    ldr r7, [r8, #0x3b0]
    umull r10, r9, r7, r3
    adds r4, r10, r4
    mla r9, r7, r5, r9
    mov r6, r7, asr #0x1f
    mla r9, r6, r3, r9
    adc r3, r9, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    str r4, [r8, #0x3b0]
    ldr r4, [r8, #0x3ac]
    ldr r3, [r8, #0x25c]
    add r3, r4, r3
    str r3, [r8, #0x3ac]
    bl func_02069668
    ldr r0, =data_ov002_02196328
    add r1, sp, #0x28
    ldr r2, [r0, #0x0]
    str r1, [sp, #0x4c]
    ldr r1, [r0, #0x4]
    add r5, r8, #0x2a0
    add r0, r8, #0x3b4
    str r5, [sp, #0x54]
    add r4, sp, #0x58
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    str r0, [sp, #0x50]
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, sp, #0x64
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r8, #0x490]
    cmp r0, #0x1000
    bge L_02171370
    add r0, r0, #0x100
    str r0, [r8, #0x490]
    ldr r0, [r8, #0x490]
    cmp r0, #0x1000
    movgt r0, #0x1000
    strgt r0, [r8, #0x490]
L_02171370:
    ldr r4, [r8, #0x488]
    ldr r0, [r8, #0x4a8]
    ldr r1, [r8, #0x490]
    sub r0, r0, r4
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [r8, #0x488]
    ldr r1, [r8, #0x488]
    mov r0, r8
    str r1, [sp, #0x18]
    bl func_020280f8
    ldr r1, =0x4cbc
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x1c]
    mov r7, #0x1
L_021713e4:
    add r0, sp, #0x4c
    sub r4, r7, #0x1
    ldr r5, [r0, r4, lsl #0x2]
    ldr r6, [r0, r7, lsl #0x2]
    mov r1, r5
    mov r0, r6
    add r2, sp, #0x40
    bl func_02069634
    ldr r0, [sp, #0x48]
    ldr r3, [sp, #0x44]
    smull r9, lr, r0, r0
    mov r0, #0x800
    adds r9, r9, r0
    ldr r10, [sp, #0x40]
    smull r2, r1, r3, r3
    smull ip, r3, r10, r10
    adc r10, lr, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r10, lsl #0x14
    adds r10, ip, r0
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r10, r10, lsr #0xc
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r10, r1
    adds r0, r9, r0
    beq L_021714d8
    bl func_0206902c
    mov r1, r0
    add r0, sp, #0x18
    ldr r0, [r0, r4, lsl #0x2]
    bl func_02069098
    ldr r3, [sp, #0x40]
    mov r2, r6
    smull r6, r4, r3, r0
    mov r1, #0x800
    adds r6, r6, r1
    adc r3, r4, #0x0
    mov r4, r6, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    str r4, [sp, #0x40]
    ldr r4, [sp, #0x44]
    ldr r3, [sp, #0x48]
    smull r9, r6, r4, r0
    adds r9, r9, r1
    adc r4, r6, #0x0
    mov r6, r9, lsr #0xc
    orr r6, r6, r4, lsl #0x14
    smull r4, r0, r3, r0
    adds r1, r4, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x48]
    mov r0, r5
    add r1, sp, #0x40
    str r6, [sp, #0x44]
    bl func_02069668
L_021714d8:
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    blt L_021713e4
    add r1, sp, #0x58
    add r2, sp, #0x40
    add r0, r8, #0x3b4
    bl func_02069634
    ldr r7, [sp, #0x20]
    ldr r2, [sp, #0x40]
    ldr r1, [sp, #0x44]
    ldr r0, [sp, #0x48]
    smull r6, r5, r2, r7
    smull r4, r3, r1, r7
    smull r2, r1, r0, r7
    mov r0, #0x800
    adds r6, r6, r0
    adc r5, r5, #0x0
    adds r4, r4, r0
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r0, r4, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    str r0, [sp, #0x44]
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r6, r6, lsr #0xc
    add r0, r8, #0x3a8
    orr r6, r6, r5, lsl #0x14
    str r1, [sp, #0x48]
    add r1, sp, #0x40
    mov r2, r0
    str r6, [sp, #0x40]
    bl func_02069668
    add r0, r8, #0x2a0
    add r1, sp, #0x64
    add r2, sp, #0x40
    bl func_02069634
    ldr r0, [sp, #0x24]
    ldr r2, [sp, #0x40]
    mov r1, #0x800
    smull r4, r3, r2, r0
    adds r4, r4, r1
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [sp, #0x40]
    ldr r3, [sp, #0x44]
    ldr r2, [sp, #0x48]
    smull r5, r4, r3, r0
    smull r3, r0, r2, r0
    adds r5, r5, r1
    adc r2, r4, #0x0
    adds r1, r3, r1
    mov r3, r5, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r8, #0x260
    str r1, [sp, #0x48]
    add r1, sp, #0x40
    mov r2, r0
    str r3, [sp, #0x44]
    bl func_02069668
    mov r0, r8
    bl func_020280f8
    ldr r1, =0x280a
    mov r3, #0x0
    umull r6, r5, r0, r1
    mla r5, r0, r3, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r1, r5
    mov r2, #0x800
    adds r1, r6, r2
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    ldr r7, [r8, #0x268]
    orr r1, r1, r0, lsl #0x14
    cmp r7, #0x0
    ldr r0, [r8, #0x260]
    rsble r7, r7, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r7
    cmp r0, r1
    movgt r0, #0x1
    strgt r0, [sp, #0xc]
    b L_02171804
L_02171644:
    add r0, sp, #0x28
    add r2, sp, #0x70
    add r1, r8, #0x300
    bl func_02069634
    ldr r0, [r8, #0x4a8]
    ldr r5, [sp, #0x74]
    smull r1, r3, r0, r0
    mov r0, #0x800
    adds r4, r1, r0
    smull r2, r1, r5, r5
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r4, r4, lsr #0xc
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    sub r0, r4, r1
    cmp r0, #0x0
    mov r4, #0x0
    ble L_021716a0
    bl func_0206902c
    mov r4, r0
L_021716a0:
    ldr r2, [sp, #0x78]
    ldr r0, [sp, #0x70]
    smull r1, r3, r2, r2
    smull r5, r2, r0, r0
    mov r0, #0x800
    adds r7, r5, r0
    adc r6, r2, #0x0
    adds r5, r1, r0
    mov r7, r7, lsr #0xc
    smull r2, r1, r4, r4
    orr r7, r7, r6, lsl #0x14
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r0, r5, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    add r0, r7, r0
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    ble L_02171804
    bl func_0206902c
    mov r1, r0
    sub r0, r1, r4
    bl func_01ff8958
    ldr r1, [sp, #0xbc]
    cmp r1, #0x0
    bne L_02171764
    ldr r1, [sp, #0x70]
    mov r0, r0, asr #0x5
    smull r3, r2, r1, r0
    mov r1, #0x800
    adds r3, r3, r1
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    ldr r4, [r8, #0x260]
    orr r3, r3, r2, lsl #0x14
    add r2, r4, r3
    str r2, [r8, #0x260]
    ldr r2, [sp, #0x78]
    ldr r4, [r8, #0x268]
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [r8, #0x268]
    b L_02171804
L_02171764:
    ldr r1, [r8, #0x2a4]
    cmp r1, #0x0
    ble L_021717b4
    ldr r1, [sp, #0x70]
    mov r4, r0, asr #0x2
    smull r3, r2, r1, r4
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r8, #0x260]
    ldr r1, [sp, #0x78]
    smull r3, r2, r1, r4
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r8, #0x268]
    b L_02171804
L_021717b4:
    ldr r1, [sp, #0x70]
    mov r0, r0, asr #0x4
    smull r3, r2, r1, r0
    mov r1, #0x800
    adds r3, r3, r1
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    ldr r4, [r8, #0x260]
    orr r3, r3, r2, lsl #0x14
    add r2, r4, r3
    str r2, [r8, #0x260]
    ldr r2, [sp, #0x78]
    ldr r4, [r8, #0x268]
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [r8, #0x268]
L_02171804:
    ldr r0, [sp, #0xc0]
    cmp r0, #0x0
    beq L_021718b4
    add r0, sp, #0x28
    add r2, sp, #0x7c
    add r1, r8, #0x300
    bl func_02069634
    ldr r3, [sp, #0x84]
    ldr r4, [sp, #0x7c]
    ldr r1, [sp, #0x80]
    smull r0, ip, r3, r3
    mov r3, #0x800
    ldr r2, [r8, #0x4a8]
    smull r10, r9, r4, r4
    smull r7, r6, r1, r1
    adds r0, r0, r3
    smull r5, r4, r2, r2
    adc r2, ip, #0x0
    mov r1, r0, lsr #0xc
    adds r0, r10, r3
    orr r1, r1, r2, lsl #0x14
    adc r2, r9, #0x0
    mov r0, r0, lsr #0xc
    adds r7, r7, r3
    orr r0, r0, r2, lsl #0x14
    adc r6, r6, #0x0
    adds r2, r5, r3
    mov r3, r7, lsr #0xc
    orr r3, r3, r6, lsl #0x14
    add r0, r0, r3
    add r3, r1, r0
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r3, r1
    ble L_021718b4
    add r1, sp, #0x7c
    add r0, r8, #0x18c
    bl func_020695f0
    cmp r0, #0x0
    movgt r0, #0x1
    strgt r0, [sp, #0x10]
    movle r0, #0x1
    strle r0, [sp, #0x14]
L_021718b4:
    ldrsb r0, [r8, #0xb7]
    cmp r0, #0x2
    bne L_021718dc
    add r0, sp, #0x28
    add r3, r8, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r8, #0x3b8]
    mov r0, r0, lsl #0x1
    str r0, [r8, #0x3b8]
L_021718dc:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r2, [r0, #0x94]
    mul r0, r1, r1
    mla r0, r2, r2, r0
    cmp r0, #0x32
    movlt r0, #0x64
    strlt r0, [r8, #0x48c]
    blt L_02171914
    ldr r0, [r8, #0x48c]
    cmp r0, #0xa
    subgt r0, r0, #0xa
    strgt r0, [r8, #0x48c]
L_02171914:
    ldr r0, [sp, #0xb8]
    cmp r0, #0x0
    beq L_0217192c
    add r1, sp, #0x28
    mov r0, r8
    bl func_0200c4c8
L_0217192c:
    ldr r1, [sp, #0xb0]
    mov r0, r8
    bl func_0201419c
    mov r0, r8
    bl func_020280f8
    ldr r1, =0x54e2
    mov r3, #0x0
    umull r5, r4, r0, r1
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    mov r2, #0x800
    adds r2, r5, r2
    ldr r3, [sp, #0x2c]
    ldr r1, [r8, #0x4a8]
    adc r0, r4, #0x0
    sub r3, r3, r1
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r3, r1
    movgt r4, #0x2
    bgt L_021719cc
    mov r0, r8
    bl func_020280f8
    ldr r1, =0x34da
    mov r4, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r4, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r2, #0x800
    adds r2, r5, r2
    ldr r5, [sp, #0x2c]
    ldr r1, [r8, #0x4a8]
    adc r0, r3, #0x0
    sub r3, r5, r1
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r3, r1
    movgt r4, #0x1
L_021719cc:
    ldr r0, [sp, #0xc]
    ldr r1, [r8, #0x4b0]
    cmp r0, #0x0
    add r0, r1, #0x1
    str r0, [r8, #0x4b0]
    bne L_02171a10
    ldrsb r2, [r8, #0xa6]
    ldr r1, =data_02138700+0x12
    mov r0, #0x12c
    ldrb r1, [r1, r2]
    ldr r2, [r8, #0x4b0]
    mul r0, r1, r0
    cmp r2, r0
    movgt r0, #0x1
    strgt r0, [sp, #0xc]
    movle r0, #0x0
    strle r0, [sp, #0xc]
L_02171a10:
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    bne L_02171a40
    ldr r0, [r8, #0x48c]
    cmp r0, #0x64
    beq L_02171a40
    ldr r0, =0x958
    mov r1, #0x25
    add r0, r8, r0
    mov r2, #0x1
    bl func_020eacd4
    b L_02171a54
L_02171a40:
    ldr r0, =0x958
    mov r1, #0x25
    add r0, r8, r0
    mov r2, #0x0
    bl func_020eacd4
L_02171a54:
    cmp r11, #0x0
    beq L_02171aa4
    ldrsh r0, [r11, #0x90]
    cmp r0, #0x0
    beq L_02171a70
    cmp r0, #0x2
    bne L_02171a78
L_02171a70:
    mov r0, #0x1
    b L_02171a9c
L_02171a78:
    ldrsh r0, [r11, #0x94]
    cmp r0, #0x35
    bne L_02171a98
    mov r0, r11
    bl func_0210bebc
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02171a9c
L_02171a98:
    mov r0, #0x0
L_02171a9c:
    cmp r0, #0x0
    beq L_02171ac4
L_02171aa4:
    mov r0, r8
    bl func_0202f960
    mov r0, r8
    bl func_02035e20
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171ac4:
    mov r0, r8
    bl func_ov002_02193e98
    cmp r0, #0x0
    addne sp, sp, #0x8c
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrsh r0, [r11, #0x90]
    cmp r0, #0x4
    bne L_02171b04
    mov r0, r8
    bl func_ov002_02196230
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171b04:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_02171b38
    add r3, r8, #0xa1
    mov r2, #0x4
    swpb r2, r2, [r3]
    ldr r1, =0x3da
    mov r0, r8
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171b38:
    cmp r11, #0x0
    beq L_02171b6c
    mov r0, r8
    mov r1, r11
    bl func_020360f0
    cmp r0, #0x2
    beq L_02171b6c
    mov r0, r8
    bl func_0202f960
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171b6c:
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    bne L_02171bb8
    ldr r0, [r8, #0x490]
    cmp r0, #0x1000
    bne L_02171bb8
    ldr r0, [r8, #0x2a4]
    cmp r0, #0x0
    bgt L_02171bb8
    ldr r0, [r8, #0x264]
    cmp r0, #0x0
    bgt L_02171bb8
    ldr r0, [sp, #0x0]
    add r0, r0, #0x2
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    b L_02171e30
L_02171bb8:
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    beq L_02171bf4
    cmp r4, #0x2
    bne L_02171bf4
    ldr r0, [sp, #0x0]
    add r0, r0, #0x5
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171bf4:
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    beq L_02171c38
    cmp r0, #0x1
    beq L_02171c38
    cmp r4, #0x1
    bne L_02171c38
    ldr r0, [sp, #0x0]
    add r0, r0, #0x2
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171c38:
    ldr r0, [sp, #0x4]
    cmp r0, #0x2
    beq L_02171c70
    cmp r0, #0x0
    beq L_02171c70
    cmp r4, #0x0
    bne L_02171c70
    ldr r1, [sp, #0x0]
    mov r0, r8
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171c70:
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    beq L_02171ca4
    ldr r0, [sp, #0x0]
    add r0, r0, #0x3
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171ca4:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_02171cd8
    ldr r0, [sp, #0x0]
    add r0, r0, #0x4
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171cd8:
    ldr r0, [sp, #0xb4]
    cmp r0, #0x0
    beq L_02171e30
    ldr r1, =data_0214b484
    ldr r0, [r8, #0x48c]
    ldr r4, [r1, #0x0]
    mov r0, r0, lsl #0x10
    ldr r3, [r4, #0x0]
    ldr r2, =0x10dcd
    mov r5, r0, lsr #0x10
    mul r0, r3, r2
    add r3, r0, #0x1
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r0, r5, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    str r3, [r4, #0x0]
    movs r0, r0, lsr #0x10
    bne L_02171e30
    ldr r3, [r1, #0x0]
    mov r1, #0x3
    ldr r0, [r3, #0x0]
    mul r2, r0, r2
    add r2, r2, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02171d84
    ldr r0, [sp, #0x0]
    add r0, r0, #0x1
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171d84:
    ldr r0, =data_02150330
    ldr r4, [r8, #0x2a0]
    ldr r3, [sp, #0x28]
    ldr r2, [r8, #0x2a8]
    ldr r1, [sp, #0x30]
    ldr r5, [r0, #0x4c]
    sub r4, r4, r3
    ldr r3, [r0, #0x64]
    sub r1, r2, r1
    smull r2, r4, r5, r4
    mov r0, #0x800
    adds r5, r2, r0
    smull r2, r1, r3, r1
    adc r3, r4, #0x0
    adds r2, r2, r0
    mov r4, r5, lsr #0xc
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    cmp r0, #0x0
    ble L_02171e08
    ldr r0, [sp, #0x0]
    add r0, r0, #0x6
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171e08:
    ldr r0, [sp, #0x0]
    add r0, r0, #0x7
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x8c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02171e30:
    mov r0, #0x0
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
