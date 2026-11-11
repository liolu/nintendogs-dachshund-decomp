/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009f28();
extern void func_02009f80();
extern void func_0200c488();
extern void func_020266e8();
extern void func_0202674c();
extern void func_0202686c();
extern void func_020268cc();
extern void func_02026928();
extern void func_02026a9c();
extern void func_02026b9c();
extern void func_02026c14();
extern void func_02026db0();
extern void func_02027dd8();
extern void func_02027e3c();
extern void func_02028114();
extern void func_02028120();
extern void func_02029248();
extern void func_020325e4();
extern void func_02034e44();
extern void func_0203535c();
extern void func_02036188();
extern void func_02036c18();
extern void func_02037130();
extern void func_02038514();
extern void func_0203910c();
extern void func_0203e5ac();
extern void func_0206823c();
extern void func_02068270();
extern void func_020e1f90();
extern void func_ov006_0215e870();
extern void func_ov006_0215f3e4();
extern void func_ov006_021612f0();
extern void func_ov006_02161328();
extern char data_02124e68[];
extern char data_0214da7c[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov006_0215b438(void) {
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
    bl func_02027e3c
    str r0, [sp, #0x34]
    mov r0, r9
    bl func_02036188
    str r0, [sp, #0x2c]
    cmp r0, #0x0
    beq L_0215b4cc
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c488
    str r0, [sp, #0x30]
    cmp r0, #0x0
    beq L_0215b4cc
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r8, r1, r0
    movne r0, #0x1
    bne L_0215b4d0
L_0215b4cc:
    mov r0, #0x0
L_0215b4d0:
    cmp r0, #0x0
    beq L_0215c214
    ldr r0, [sp, #0x2c]
    ldr r1, [r0, #0x2c]
    mov r0, #0x0
    str r0, [sp, #0x38]
    mov r0, r1, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x28]
    ldr r0, =data_0214da7c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r0, #0x0
    ble L_0215b794
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
L_0215b54c:
    ldr r0, [sp, #0x44]
    ldr r1, [sp, #0x38]
    bl func_0200c488
    movs r5, r0
    beq L_0215b764
    ldr r0, [sp, #0x2c]
    ldr r1, [r5, #0x20]
    ldr r0, [r0, #0x2c]
    cmp r0, r1
    bne L_0215b764
    mov r0, r1, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov006_02161328
    mov r11, r0
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215b63c
    ldr r0, =data_0214da84
    ldr r3, [r11, #0x20]
    ldr r0, [r0, #0x0]
    ldr r2, [r11, #0x1c]
    ldr r1, [r11, #0x18]
    add r6, r0, #0x74
    str r1, [sp, #0x54]
    str r2, [sp, #0x58]
    add r0, r6, #0xc
    str r3, [sp, #0x5c]
    add r1, r9, #0x2a0
    add r2, sp, #0x60
    bl func_0206823c
    ldr r0, [r6, #0x10]
    cmp r0, #0x0
    ble L_0215b63c
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    ldrne r0, [r9, #0x468]
    addne r0, r0, #0xc8
    strne r0, [r9, #0x468]
    ldreq r0, [r9, #0x468]
    addeq r0, r0, #0xa
    streq r0, [r9, #0x468]
    ldr r1, [r9, #0x468]
    ldr r0, [sp, #0x3c]
    cmp r1, r0
    ble L_0215b61c
    ldr r0, [sp, #0x40]
    cmp r1, r0
    strlt r0, [r9, #0x468]
L_0215b61c:
    add r0, sp, #0x54
    add r1, sp, #0x60
    bl func_02009f28
    cmp r0, #0x0
    ldrne r0, [sp, #0x48]
    strne r0, [sp, #0x1c]
    ldreq r0, [sp, #0x48]
    streq r0, [sp, #0x20]
L_0215b63c:
    ldrsh r0, [r8, #0x2]
    ldr r6, [sp, #0x4c]
    cmp r0, #0x0
    ble L_0215b764
L_0215b64c:
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
    bne L_0215b6a8
    ldr r0, =data_0214da7c
    ldrsh r1, [r8, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r7, r1, r0, r3
    b L_0215b6d4
L_0215b6a8:
    cmp r0, #0x1
    bne L_0215b6d4
    ldr r0, =data_0214da7c
    ldrsh r7, [r8, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r7, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r7, r1, r3, r0
L_0215b6d4:
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
    bl func_02009f80
    mov r0, r7
    mov r1, r10
    add r2, sp, #0x6c
    bl func_02068270
    ldr r0, [r9, #0x464]
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
    blt L_0215b64c
L_0215b764:
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x38]
    ldr r0, =data_0214da7c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r1, [r0, #0x22]
    ldr r0, [sp, #0x38]
    cmp r0, r1
    blt L_0215b54c
L_0215b794:
    ldrsh r0, [r8, #0x2]
    ldr r1, [r9, #0x464]
    cmp r1, r0
    blt L_0215b808
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r1, =data_02124e68
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
L_0215b808:
    ldr r0, [sp, #0x30]
    ldr r1, =data_02124e68
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
    bne L_0215b8b4
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    bne L_0215b8b4
    ldr r0, [r9, #0x468]
    sub r0, r0, #0x14
    str r0, [r9, #0x468]
    ldr r0, [r9, #0x464]
    cmp r0, #0x1
    ble L_0215b8b4
    ldr r0, [r9, #0x470]
    cmp r0, #0x0
    bne L_0215b8b4
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r0, #0x1
    strne r0, [sp, #0x24]
L_0215b8b4:
    ldr r0, [r9, #0x468]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r9, #0x468]
    ldr r0, [sp, #0x34]
    cmp r0, #0x3e8
    blt L_0215b8e4
    ldr r1, [sp, #0x34]
    mov r0, r9
    bl func_02038514
    mov r4, r0
    b L_0215b94c
L_0215b8e4:
    mov r0, r9
    bl func_02028120
    mov r0, r0, lsl #0x1
    add r1, r9, #0x1a4
    add r2, r9, #0x2a0
    add r3, r9, #0x3b4
    bl func_01ff832c
    ldr r0, [r9, #0x464]
    cmp r0, #0x1
    ble L_0215b928
    ldr r1, [r9, #0x468]
    ldr r0, [sp, #0x34]
    add r0, r1, r0
    cmp r0, #0x3e8
    movle r0, #0x1
    strle r0, [sp, #0x18]
    ble L_0215b930
L_0215b928:
    mov r0, #0x0
    str r0, [sp, #0x18]
L_0215b930:
    ldr r0, [sp, #0x34]
    cmp r0, #0x12c
    movlt r4, #0x0
    blt L_0215b94c
    cmp r0, #0x2bc
    movlt r4, #0x1
    movge r4, #0x2
L_0215b94c:
    ldr r1, [r9, #0x46c]
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_0215c1ec
L_0215b95c:
    b L_0215b980
    b L_0215bb78
    b L_0215bb78
    b L_0215bb78
    b L_0215bca0
    b L_0215bd3c
    b L_0215c084
    b L_0215c0f0
    b L_0215c170
L_0215b980:
    mov r0, r9
    bl func_02028114
    mov r5, r0
    mov r0, r9
    mov r1, #0x100
    mov r2, r4
    bl func_02036c18
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
    bge L_0215b9f8
    add r1, r9, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0x98
    mov r0, #0x6
    swpb r0, r0, [r1]
L_0215b9f8:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_0215bad8
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0215bacc
L_0215ba10:
    b L_0215ba28
    b L_0215ba44
    b L_0215ba60
    b L_0215ba7c
    b L_0215ba98
    b L_0215bab4
L_0215ba28:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    b L_0215bacc
L_0215ba44:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e5ac
    mov r0, r9
    bl func_0202674c
    b L_0215bacc
L_0215ba60:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e5ac
    mov r0, r9
    bl func_02026a9c
    b L_0215bacc
L_0215ba7c:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e5ac
    mov r0, r9
    bl func_02026928
    b L_0215bacc
L_0215ba98:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e5ac
    mov r0, r9
    bl func_020268cc
    b L_0215bacc
L_0215bab4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e5ac
    mov r0, r9
    bl func_0202686c
L_0215bacc:
    mov r0, #0x4
    str r0, [r9, #0x46c]
    b L_0215c1ec
L_0215bad8:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0215bb10
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r2, #0x3
    swpb r0, r2, [r1]
    str r2, [r9, #0x46c]
    b L_0215c1ec
L_0215bb10:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0215c1ec
    ldr r2, =0x162
    mov r0, r9
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02034e44
    mov r2, r0
    mov r0, r9
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r2, #0x2
    swpb r0, r2, [r1]
    mov r0, #0x0
    add r1, r9, #0x98
    swpb r0, r0, [r1]
    add r1, r9, #0x97
    swpb r0, r2, [r1]
    mov r0, #0x5
    str r0, [r9, #0x46c]
    b L_0215c1ec
L_0215bb78:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_0215bc58
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0215bc4c
L_0215bb90:
    b L_0215bba8
    b L_0215bbc4
    b L_0215bbe0
    b L_0215bbfc
    b L_0215bc18
    b L_0215bc34
L_0215bba8:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    b L_0215bc4c
L_0215bbc4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e5ac
    mov r0, r9
    bl func_0202674c
    b L_0215bc4c
L_0215bbe0:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e5ac
    mov r0, r9
    bl func_02026a9c
    b L_0215bc4c
L_0215bbfc:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e5ac
    mov r0, r9
    bl func_02026928
    b L_0215bc4c
L_0215bc18:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e5ac
    mov r0, r9
    bl func_020268cc
    b L_0215bc4c
L_0215bc34:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e5ac
    mov r0, r9
    bl func_0202686c
L_0215bc4c:
    mov r0, #0x4
    str r0, [r9, #0x46c]
    b L_0215c1ec
L_0215bc58:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    bne L_0215c1ec
    sub r0, r1, #0x1
    str r0, [r9, #0x46c]
    ldr r0, [r9, #0x46c]
    cmp r0, #0x0
    bne L_0215c1ec
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    add r1, r9, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0215c1ec
L_0215bca0:
    ldr r0, =data_0214da84
    add r3, r9, #0x26c
    ldr r0, [r0, #0x0]
    add r0, r0, #0x74
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_0203910c
    mov r0, r9
    mov r1, #0x310
    bl func_02037130
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0215bd04
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r2, #0x3
    swpb r0, r2, [r1]
    str r2, [r9, #0x46c]
    b L_0215c1ec
L_0215bd04:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    beq L_0215c1ec
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    add r1, r9, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x46c]
    b L_0215c1ec
L_0215bd3c:
    add r0, r9, #0x100
    ldrsh r1, [r0, #0x52]
    cmp r1, #0x154
    beq L_0215bd58
    ldr r0, =0x155
    cmp r1, r0
    bne L_0215bda8
L_0215bd58:
    cmp r11, #0x0
    beq L_0215bda8
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
    add r3, r9, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r9, #0x3b8]
    sub r0, r0, #0x3000
    str r0, [r9, #0x3b8]
L_0215bda8:
    mov r0, r9
    mov r1, #0x100
    bl func_02037130
    mov r0, r9
    bl func_0203535c
    cmp r0, #0x0
    beq L_0215bf4c
    ldr r1, =data_0214da84
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
    b L_0215bf4c
L_0215bdfc:
    b L_0215be0c
    b L_0215be5c
    b L_0215beac
    b L_0215befc
L_0215be0c:
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e5ac
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r9, #0x98
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0215bf4c
L_0215be5c:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x154
    bl func_0203e5ac
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0x98
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0215bf4c
L_0215beac:
    ldr r2, =0x155
    mov r0, r9
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    add r1, r9, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r9, #0x98
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r9, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0215bf4c
L_0215befc:
    ldr r2, =0x162
    mov r0, r9
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02034e44
    mov r2, r0
    mov r0, r9
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    mov r2, #0x2
    add r1, r9, #0x93
    swpb r0, r2, [r1]
    mov r0, #0x0
    add r1, r9, #0x98
    swpb r0, r0, [r1]
    add r1, r9, #0x97
    swpb r0, r2, [r1]
L_0215bf4c:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_0215c03c
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0215c020
L_0215bf64:
    b L_0215bf7c
    b L_0215bf98
    b L_0215bfb4
    b L_0215bfd0
    b L_0215bfec
    b L_0215c008
L_0215bf7c:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    b L_0215c020
L_0215bf98:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e5ac
    mov r0, r9
    bl func_0202674c
    b L_0215c020
L_0215bfb4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e5ac
    mov r0, r9
    bl func_02026a9c
    b L_0215c020
L_0215bfd0:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e5ac
    mov r0, r9
    bl func_02026928
    b L_0215c020
L_0215bfec:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x15
    bl func_0203e5ac
    mov r0, r9
    bl func_020268cc
    b L_0215c020
L_0215c008:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x16
    bl func_0203e5ac
    mov r0, r9
    bl func_0202686c
L_0215c020:
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, #0x4
    str r0, [r9, #0x46c]
    b L_0215c1ec
L_0215c03c:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    bne L_0215c1ec
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    add r1, r9, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x46c]
    b L_0215c1ec
L_0215c084:
    mov r0, r9
    bl func_0203535c
    cmp r0, #0x0
    beq L_0215c1ec
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x14
    bl func_0203e5ac
    mov r0, r9
    bl func_02026928
    add r1, r9, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =data_0214da84
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
    str r0, [r9, #0x46c]
    b L_0215c1ec
L_0215c0f0:
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r4, =data_02124e68
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
    bl func_0203910c
    mov r0, r9
    mov r1, #0x310
    bl func_02037130
    b L_0215c1ec
L_0215c170:
    ldr r0, [sp, #0x30]
    add r3, r9, #0x26c
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x30]
    ldr r4, =data_02124e68
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
    bl func_0203910c
    mov r0, r9
    mov r1, #0x310
    bl func_02037130
L_0215c1ec:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0215c214
    ldr r1, [r9, #0x464]
    mov r0, r9
    add r3, r1, #0x1
    mov r1, #0x2
    mov r2, #0x1e
    str r3, [r9, #0x464]
    bl func_02027dd8
L_0215c214:
    mov r0, r9
    bl func_02029248
    ldr r0, [r9, #0x470]
    cmp r0, #0x0
    bne L_0215c2f4
    ldr r0, [sp, #0x2c]
    ldr r0, [r0, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov006_021612f0
    cmp r0, #0x0
    beq L_0215c2f4
    mov r3, #0x1
    mov r0, r9
    mov r1, #0x2
    mov r2, #0x1e
    str r3, [r9, #0x470]
    bl func_02027dd8
    ldr r4, =data_0214da84
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
    bge L_0215c2f4
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
    bl func_0203e5ac
    mov r0, r9
    bl func_02026c14
    add r1, r9, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x6
    str r0, [r9, #0x46c]
L_0215c2f4:
    ldr r1, [sp, #0x28]
    mov r0, r9
    bl func_02026db0
    cmp r0, #0x0
    addne sp, sp, #0x9c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r0, r9
    bl func_020325e4
    cmp r0, #0x0
    addeq sp, sp, #0x9c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r9, #0x464]
    cmp r0, #0x1
    addle sp, sp, #0x9c
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    mov r2, #0x1
    ldr r1, [sp, #0x2c]
    mov r0, r9
    mov r3, r2
    bl func_ov006_0215e870
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215c444
L_0215c35c:
    b L_0215c444
    b L_0215c370
    b L_0215c3f8
    b L_0215c444
    b L_0215c420
L_0215c370:
    ldrsh r0, [r8, #0x2]
    ldr r1, [r9, #0x464]
    cmp r1, r0
    blt L_0215c3d0
    ldr r0, [r9, #0x470]
    cmp r0, #0x0
    beq L_0215c3d0
    ldr r0, =data_0214da84
    mov r2, #0x5
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_0215c3c4
    mov r0, #0x3
    bl func_020e1f90
    b L_0215c444
L_0215c3c4:
    mov r0, #0x2
    bl func_020e1f90
    b L_0215c444
L_0215c3d0:
    ldr r0, =data_0214da84
    mov r3, #0x6
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215c444
L_0215c3f8:
    ldr r0, =data_0214da84
    mov r3, #0x6
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215c444
L_0215c420:
    ldr r0, =data_0214da84
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
L_0215c444:
    mov r2, #0x0
    ldr r1, [sp, #0x2c]
    mov r0, r9
    mov r3, r2
    bl func_ov006_0215e870
    ldrb r1, [r9, #0xb0]
    add r2, r9, #0xb0
    mov r0, r9
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    ldrb r1, [r9, #0xb0]
    bic r1, r1, #0x8
    swpb r1, r1, [r2]
    bl func_ov006_0215f3e4
    add sp, sp, #0x9c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
