/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009e8c();
extern void func_02009ee4();
extern void func_0200c3ec();
extern void func_020266a0();
extern void func_02026704();
extern void func_02026824();
extern void func_02026884();
extern void func_020268e0();
extern void func_02026a54();
extern void func_02026b54();
extern void func_02026bcc();
extern void func_02026d88();
extern void func_02027db0();
extern void func_02027e14();
extern void func_020280ec();
extern void func_020280f8();
extern void func_02029204();
extern void func_020324e8();
extern void func_02034c88();
extern void func_020351a0();
extern void func_02035fd0();
extern void func_02036a60();
extern void func_02036fbc();
extern void func_020382e4();
extern void func_02038edc();
extern void func_0203e280();
extern void func_02069634();
extern void func_02069668();
extern void func_020af298();
extern void func_ov005_0215c3f4();
extern void func_ov005_0215cf60();
extern void func_ov005_0215ee6c();
extern void func_ov005_0215eea4();
extern char data_02124ae0[];
extern char data_0214b47c[];
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov005_02158fc4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x9c
    mov r1, #0x0
    str r1, [sp, #0x18]
    ldr r2, [sp, #0x18]
    mov r9, r0
    mov r1, #0x2
    str r2, [sp, #0x1c]
    str r2, [sp, #0x20]
    str r2, [sp, #0x14]
    str r2, [sp, #0x24]
    str r2, [sp, #0x28]
    mov r11, r2
    bl func_02027e14
    str r0, [sp, #0x34]
    mov r0, r9
    bl func_02035fd0
    str r0, [sp, #0x2c]
    cmp r0, #0x0
    beq L_02159058
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    str r0, [sp, #0x30]
    cmp r0, #0x0
    beq L_02159058
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r8, r1, r0
    movne r0, #0x1
    bne L_0215905c
L_02159058:
    mov r0, #0x0
L_0215905c:
    cmp r0, #0x0
    beq L_02159da0
    ldr r0, [sp, #0x2c]
    ldr r1, [r0, #0x2c]
    mov r0, #0x0
    str r0, [sp, #0x38]
    mov r0, r1, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x28]
    ldr r0, =data_0214b47c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r0, #0x0
    ble L_02159320
    ldr r0, [sp, #0x34]
    ldr r4, [sp, #0x38]
    rsb r0, r0, #0x3e8
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x34]
    add r10, sp, #0x84
    rsb r0, r0, #0x4b0
    str r0, [sp, #0x40]
    mov r0, #0x1
    str r0, [sp, #0x48]
    mov r0, #0x2000
    str r0, [sp, #0x50]
    mov r0, r4
    str r0, [sp, #0x4c]
    mov r0, #0x8
    str r0, [sp, #0x44]
L_021590d8:
    ldr r0, [sp, #0x44]
    ldr r1, [sp, #0x38]
    bl func_0200c3ec
    movs r5, r0
    beq L_021592f0
    ldr r0, [sp, #0x2c]
    ldr r1, [r5, #0x20]
    ldr r0, [r0, #0x2c]
    cmp r0, r1
    bne L_021592f0
    mov r0, r1, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov005_0215eea4
    mov r11, r0
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021591c8
    ldr r0, =data_0214b484
    ldr r3, [r11, #0x20]
    ldr r0, [r0, #0x0]
    ldr r2, [r11, #0x1c]
    ldr r1, [r11, #0x18]
    add r6, r0, #0x70
    str r1, [sp, #0x54]
    str r2, [sp, #0x58]
    add r0, r6, #0xc
    str r3, [sp, #0x5c]
    add r1, r9, #0x2a0
    add r2, sp, #0x60
    bl func_02069634
    ldr r0, [r6, #0x10]
    cmp r0, #0x0
    ble L_021591c8
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    ldrne r0, [r9, #0x48c]
    addne r0, r0, #0xc8
    strne r0, [r9, #0x48c]
    ldreq r0, [r9, #0x48c]
    addeq r0, r0, #0xa
    streq r0, [r9, #0x48c]
    ldr r1, [r9, #0x48c]
    ldr r0, [sp, #0x3c]
    cmp r1, r0
    ble L_021591a8
    ldr r0, [sp, #0x40]
    cmp r1, r0
    strlt r0, [r9, #0x48c]
L_021591a8:
    add r0, sp, #0x54
    add r1, sp, #0x60
    bl func_02009e8c
    cmp r0, #0x0
    ldrne r0, [sp, #0x48]
    strne r0, [sp, #0x1c]
    ldreq r0, [sp, #0x48]
    streq r0, [sp, #0x20]
L_021591c8:
    ldrsh r0, [r8, #0x2]
    ldr r6, [sp, #0x4c]
    cmp r0, #0x0
    ble L_021592f0
L_021591d8:
    str r4, [r10, #0x0]
    str r4, [r10, #0x4]
    str r4, [r10, #0x8]
    ldrsh r1, [r8, #0x2]
    mov r2, r6
    cmp r6, #0x0
    movlt r2, r4
    cmp r2, r1
    subge r0, r1, #0x1
    movge r0, r0, lsl #0x10
    movge r2, r0, asr #0x10
    ldr r0, [sp, #0x2c]
    ldr r0, [r0, #0x34]
    cmp r0, #0x0
    bne L_02159234
    ldr r0, =data_0214b47c
    ldrsh r1, [r8, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r7, r1, r0, r3
    b L_02159260
L_02159234:
    cmp r0, #0x1
    bne L_02159260
    ldr r0, =data_0214b47c
    ldrsh r7, [r8, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r7, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r7, r1, r3, r0
L_02159260:
    add ip, sp, #0x78
    ldmia r7, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r1, [sp, #0x7c]
    mov r3, r10
    add r1, r1, #0xa000
    str r1, [sp, #0x7c]
    str r11, [sp, #0x0]
    ldr r2, [r5, #0x18]
    mov r1, ip
    str r2, [sp, #0x4]
    ldr ip, [r5, #0x14]
    ldr r2, [sp, #0x50]
    str ip, [sp, #0x8]
    ldr ip, [r5, #0x1c]
    mov r0, r7
    str ip, [sp, #0xc]
    ldr ip, [sp, #0x48]
    str ip, [sp, #0x10]
    bl func_02009ee4
    mov r0, r7
    mov r1, r10
    add r2, sp, #0x6c
    bl func_02069668
    ldr r0, [r9, #0x488]
    cmp r6, r0
    addeq r0, sp, #0x6c
    addeq r3, r9, #0x26c
    ldmeqia r0, {r0, r1, r2}
    stmeqia r3, {r0, r1, r2}
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r0, [r8, #0x2]
    cmp r6, r0
    blt L_021591d8
L_021592f0:
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x38]
    ldr r0, =data_0214b47c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r1, [r0, #0x22]
    ldr r0, [sp, #0x38]
    cmp r0, r1
    blt L_021590d8
L_02159320:
    ldrsh r0, [r8, #0x2]
    ldr r1, [r9, #0x488]
    cmp r1, r0
    blt L_02159394
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r1, =data_02124ae0
    ldrh r0, [r0, #0x4]
    ldr r2, [r9, #0x26c]
    mov r3, #0x1e
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r0, [r1, r0]
    smlabb r0, r0, r3, r2
    str r0, [r9, #0x26c]
    ldr r2, [sp, #0x30]
    ldr r0, [r9, #0x274]
    ldrh r2, [r2, #0x4]
    mov r2, r2, asr #0x4
    mov r2, r2, lsl #0x1
    add r2, r2, #0x1
    mov r2, r2, lsl #0x1
    ldrsh r1, [r1, r2]
    smlabb r0, r1, r3, r0
    str r0, [r9, #0x274]
L_02159394:
    ldr r0, [sp, #0x30]
    ldr r1, =data_02124ae0
    ldrh r0, [r0, #0x4]
    ldr r2, [r9, #0x2a0]
    mov r3, #0xa
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r0, [r1, r0]
    smlabb r0, r0, r3, r2
    str r0, [r9, #0x278]
    ldr r0, [r9, #0x2a4]
    ldr r2, [sp, #0x30]
    str r0, [r9, #0x27c]
    ldrh r2, [r2, #0x4]
    ldr r0, [r9, #0x2a8]
    mov r2, r2, asr #0x4
    mov r2, r2, lsl #0x1
    add r2, r2, #0x1
    mov r2, r2, lsl #0x1
    ldrsh r1, [r1, r2]
    smlabb r0, r1, r3, r0
    str r0, [r9, #0x280]
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    bne L_02159440
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    bne L_02159440
    ldr r0, [r9, #0x48c]
    sub r0, r0, #0x14
    str r0, [r9, #0x48c]
    ldr r0, [r9, #0x488]
    cmp r0, #0x1
    ble L_02159440
    ldr r0, [r9, #0x494]
    cmp r0, #0x0
    bne L_02159440
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r0, #0x1
    strne r0, [sp, #0x24]
L_02159440:
    ldr r0, [r9, #0x48c]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r9, #0x48c]
    ldr r0, [sp, #0x34]
    cmp r0, #0x3e8
    blt L_02159470
    ldr r1, [sp, #0x34]
    mov r0, r9
    bl func_020382e4
    mov r4, r0
    b L_021594d8
L_02159470:
    mov r0, r9
    bl func_020280f8
    mov r0, r0, lsl #0x1
    add r1, r9, #0x1a4
    add r2, r9, #0x2a0
    add r3, r9, #0x3d8
    bl func_01ff832c
    ldr r0, [r9, #0x488]
    cmp r0, #0x1
    ble L_021594b4
    ldr r1, [r9, #0x48c]
    ldr r0, [sp, #0x34]
    add r0, r1, r0
    cmp r0, #0x3e8
    movle r0, #0x1
    strle r0, [sp, #0x18]
    ble L_021594bc
L_021594b4:
    mov r0, #0x0
    str r0, [sp, #0x18]
L_021594bc:
    ldr r0, [sp, #0x34]
    cmp r0, #0x12c
    movlt r4, #0x0
    blt L_021594d8
    cmp r0, #0x2bc
    movlt r4, #0x1
    movge r4, #0x2
L_021594d8:
    ldr r1, [r9, #0x490]
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_02159d78
L_021594e8:
    b L_0215950c
    b L_02159704
    b L_02159704
    b L_02159704
    b L_0215982c
    b L_021598c8
    b L_02159c10
    b L_02159c7c
    b L_02159cfc
L_0215950c:
    mov r0, r9
    bl func_020280ec
    mov r5, r0
    mov r0, r9
    mov r1, #0x100
    mov r2, r4
    bl func_02036a60
    mov r1, r5, asr #0x1f
    mov r2, r1, lsl #0xe
    mov r1, #0x0
    str r1, [sp, #0x14]
    mov r3, r5, lsl #0xe
    mov r1, #0x800
    orr r2, r2, r5, lsr #0x12
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    movlt r0, #0x1
    strlt r0, [sp, #0x14]
    ldr r0, [sp, #0x34]
    cmp r0, #0x3e8
    bge L_02159584
    add r1, r9, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0xb1
    mov r0, #0x6
    swpb r0, r0, [r1]
L_02159584:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_02159664
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_02159658
L_0215959c:
    b L_021595b4
    b L_021595d0
    b L_021595ec
    b L_02159608
    b L_02159624
    b L_02159640
L_021595b4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    b L_02159658
L_021595d0:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e280
    mov r0, r9
    bl func_02026704
    b L_02159658
L_021595ec:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e280
    mov r0, r9
    bl func_02026a54
    b L_02159658
L_02159608:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e280
    mov r0, r9
    bl func_020268e0
    b L_02159658
L_02159624:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e280
    mov r0, r9
    bl func_02026884
    b L_02159658
L_02159640:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e280
    mov r0, r9
    bl func_02026824
L_02159658:
    mov r0, #0x4
    str r0, [r9, #0x490]
    b L_02159d78
L_02159664:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0215969c
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    add r1, r9, #0xac
    mov r2, #0x3
    swpb r0, r2, [r1]
    str r2, [r9, #0x490]
    b L_02159d78
L_0215969c:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02159d78
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
    add r1, r9, #0xac
    mov r2, #0x2
    swpb r0, r2, [r1]
    mov r0, #0x0
    add r1, r9, #0xb1
    swpb r0, r0, [r1]
    add r1, r9, #0xb0
    swpb r0, r2, [r1]
    mov r0, #0x5
    str r0, [r9, #0x490]
    b L_02159d78
L_02159704:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_021597e4
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_021597d8
L_0215971c:
    b L_02159734
    b L_02159750
    b L_0215976c
    b L_02159788
    b L_021597a4
    b L_021597c0
L_02159734:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    b L_021597d8
L_02159750:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e280
    mov r0, r9
    bl func_02026704
    b L_021597d8
L_0215976c:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e280
    mov r0, r9
    bl func_02026a54
    b L_021597d8
L_02159788:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e280
    mov r0, r9
    bl func_020268e0
    b L_021597d8
L_021597a4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e280
    mov r0, r9
    bl func_02026884
    b L_021597d8
L_021597c0:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e280
    mov r0, r9
    bl func_02026824
L_021597d8:
    mov r0, #0x4
    str r0, [r9, #0x490]
    b L_02159d78
L_021597e4:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    bne L_02159d78
    sub r0, r1, #0x1
    str r0, [r9, #0x490]
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    bne L_02159d78
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    add r1, r9, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02159d78
L_0215982c:
    ldr r0, =data_0214b484
    add r3, r9, #0x26c
    ldr r0, [r0, #0x0]
    add r0, r0, #0x70
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_02038edc
    mov r0, r9
    mov r1, #0x310
    bl func_02036fbc
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_02159890
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    add r1, r9, #0xac
    mov r2, #0x3
    swpb r0, r2, [r1]
    str r2, [r9, #0x490]
    b L_02159d78
L_02159890:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    beq L_02159d78
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    add r1, r9, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x490]
    b L_02159d78
L_021598c8:
    add r0, r9, #0x100
    ldrsh r1, [r0, #0x50]
    ldr r0, =0x153
    cmp r1, r0
    beq L_021598e4
    cmp r1, #0x154
    bne L_02159934
L_021598e4:
    cmp r11, #0x0
    beq L_02159934
    ldr r6, [r11, #0x8]
    add r2, r9, #0x278
    ldr r5, [r11, #0x4]
    ldr r0, [r11, #0x0]
    add r1, sp, #0x90
    str r0, [sp, #0x90]
    mov r3, r2
    mov r0, #0x2000
    str r5, [sp, #0x94]
    str r6, [sp, #0x98]
    bl func_01ff832c
    add r0, r9, #0x278
    add r3, r9, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r9, #0x3dc]
    sub r0, r0, #0x3000
    str r0, [r9, #0x3dc]
L_02159934:
    mov r0, r9
    mov r1, #0x100
    bl func_02036fbc
    mov r0, r9
    bl func_020351a0
    cmp r0, #0x0
    beq L_02159ad8
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02159ad8
L_02159988:
    b L_02159998
    b L_021599e8
    b L_02159a38
    b L_02159a88
L_02159998:
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e280
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    add r1, r9, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r9, #0xb1
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_02159ad8
L_021599e8:
    ldr r2, =0x153
    mov r0, r9
    mov r1, #0x0
    bl func_0203e280
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    add r1, r9, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0xb1
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_02159ad8
L_02159a38:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x154
    bl func_0203e280
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    add r1, r9, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0xb1
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_02159ad8
L_02159a88:
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
    mov r2, #0x2
    add r1, r9, #0xac
    swpb r0, r2, [r1]
    mov r0, #0x0
    add r1, r9, #0xb1
    swpb r0, r0, [r1]
    add r1, r9, #0xb0
    swpb r0, r2, [r1]
L_02159ad8:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_02159bc8
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_02159bac
L_02159af0:
    b L_02159b08
    b L_02159b24
    b L_02159b40
    b L_02159b5c
    b L_02159b78
    b L_02159b94
L_02159b08:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    b L_02159bac
L_02159b24:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e280
    mov r0, r9
    bl func_02026704
    b L_02159bac
L_02159b40:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e280
    mov r0, r9
    bl func_02026a54
    b L_02159bac
L_02159b5c:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e280
    mov r0, r9
    bl func_020268e0
    b L_02159bac
L_02159b78:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e280
    mov r0, r9
    bl func_02026884
    b L_02159bac
L_02159b94:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e280
    mov r0, r9
    bl func_02026824
L_02159bac:
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, #0x4
    str r0, [r9, #0x490]
    b L_02159d78
L_02159bc8:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    bne L_02159d78
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    add r1, r9, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x490]
    b L_02159d78
L_02159c10:
    mov r0, r9
    bl func_020351a0
    cmp r0, #0x0
    beq L_02159d78
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e280
    mov r0, r9
    bl func_020268e0
    add r1, r9, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    add r0, r0, #0x7
    str r0, [r9, #0x490]
    b L_02159d78
L_02159c7c:
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r4, =data_02124ae0
    ldrh r0, [r0, #0x4]
    ldr r3, [r9, #0x26c]
    mov r2, #0x1e
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1
    mov r0, r0, lsl #0x1
    ldrsh r1, [r4, r0]
    mov r0, r9
    smlabb r1, r1, r2, r3
    str r1, [r9, #0x26c]
    ldr r1, [sp, #0x30]
    ldr r3, [r9, #0x274]
    ldrh r1, [r1, #0x4]
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x2
    ldrsh r1, [r4, r1]
    rsb r1, r1, #0x0
    mla r2, r1, r2, r3
    str r2, [r9, #0x274]
    bl func_02038edc
    mov r0, r9
    mov r1, #0x310
    bl func_02036fbc
    b L_02159d78
L_02159cfc:
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r4, =data_02124ae0
    ldrh r0, [r0, #0x4]
    ldr r3, [r9, #0x26c]
    mvn r2, #0x1d
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1
    mov r0, r0, lsl #0x1
    ldrsh r1, [r4, r0]
    mov r0, r9
    smlabb r1, r1, r2, r3
    str r1, [r9, #0x26c]
    ldr r1, [sp, #0x30]
    ldr r3, [r9, #0x274]
    ldrh r1, [r1, #0x4]
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x2
    ldrsh r1, [r4, r1]
    rsb r1, r1, #0x0
    mla r2, r1, r2, r3
    str r2, [r9, #0x274]
    bl func_02038edc
    mov r0, r9
    mov r1, #0x310
    bl func_02036fbc
L_02159d78:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_02159da0
    ldr r1, [r9, #0x488]
    mov r0, r9
    add r3, r1, #0x1
    mov r1, #0x2
    mov r2, #0x1e
    str r3, [r9, #0x488]
    bl func_02027db0
L_02159da0:
    mov r0, r9
    bl func_02029204
    ldr r0, [r9, #0x494]
    cmp r0, #0x0
    bne L_02159e80
    ldr r0, [sp, #0x2c]
    ldr r0, [r0, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov005_0215ee6c
    cmp r0, #0x0
    beq L_02159e80
    mov r3, #0x1
    mov r0, r9
    mov r1, #0x2
    mov r2, #0x1e
    str r3, [r9, #0x494]
    bl func_02027db0
    ldr r4, =data_0214b484
    ldr r2, =0x10dcd
    ldr r0, [r4, #0x0]
    mov r3, #0x7d0
    ldr r1, [r0, #0x0]
    mul r5, r1, r2
    add r5, r5, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    str r5, [r0, #0x0]
    ldr r0, [sp, #0x34]
    mov r1, r1, lsl #0x10
    cmp r0, r1, lsr #0x10
    bge L_02159e80
    ldr r4, [r4, #0x0]
    mov r0, r9
    ldr r3, [r4, #0x0]
    mov r1, #0x0
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    add r2, r2, #0xc3
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    str r3, [r4, #0x0]
    bl func_0203e280
    mov r0, r9
    bl func_02026bcc
    add r1, r9, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x6
    str r0, [r9, #0x490]
L_02159e80:
    ldr r1, [sp, #0x28]
    mov r0, r9
    bl func_02026d88
    cmp r0, #0x0
    addne sp, sp, #0x9c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r0, r9
    bl func_020324e8
    cmp r0, #0x0
    addeq sp, sp, #0x9c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r9, #0x488]
    cmp r0, #0x1
    addle sp, sp, #0x9c
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    mov r2, #0x1
    ldr r1, [sp, #0x2c]
    mov r0, r9
    mov r3, r2
    bl func_ov005_0215c3f4
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_02159fd0
L_02159ee8:
    b L_02159fd0
    b L_02159efc
    b L_02159f84
    b L_02159fd0
    b L_02159fac
L_02159efc:
    ldrsh r0, [r8, #0x2]
    ldr r1, [r9, #0x488]
    cmp r1, r0
    blt L_02159f5c
    ldr r0, [r9, #0x494]
    cmp r0, #0x0
    beq L_02159f5c
    ldr r0, =data_0214b484
    mov r2, #0x5
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_02159f50
    mov r0, #0x3
    bl func_020af298
    b L_02159fd0
L_02159f50:
    mov r0, #0x2
    bl func_020af298
    b L_02159fd0
L_02159f5c:
    ldr r0, =data_0214b484
    mov r3, #0x6
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_02159fd0
L_02159f84:
    ldr r0, =data_0214b484
    mov r3, #0x6
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_02159fd0
L_02159fac:
    ldr r0, =data_0214b484
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
L_02159fd0:
    mov r2, #0x0
    ldr r1, [sp, #0x2c]
    mov r0, r9
    mov r3, r2
    bl func_ov005_0215c3f4
    ldrb r1, [r9, #0xc0]
    add r2, r9, #0xc0
    mov r0, r9
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    ldrb r1, [r9, #0xc0]
    bic r1, r1, #0x8
    swpb r1, r1, [r2]
    bl func_ov005_0215cf60
    add sp, sp, #0x9c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
