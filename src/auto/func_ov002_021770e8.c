#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022dd0();
extern void func_02026d04();
extern void func_02026db8();
extern void func_020280ec();
extern void func_02028468();
extern void func_020285b0();
extern void func_02029204();
extern void func_0202a34c();
extern void func_0202a554();
extern void func_0202c4c0();
extern void func_02033cd8();
extern void func_02035268();
extern void func_02035294();
extern void func_02036fbc();
extern void func_02037fdc();
extern void func_02038094();
extern void func_02038ef8();
extern void func_0203e2b8();
extern void func_02069878();
extern void func_021060b8();
extern void func_ov002_021877dc();
extern void func_ov002_021883e4();
extern void func_ov002_0218891c();
extern char data_02124ae0[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_021770e8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r9, r0
    mov r4, r1
    mov r5, r2
    mov r10, r3
    bl func_02038ef8
    mov r0, r9
    add r1, r9, #0x278
    bl func_02028468
    add r1, sp, #0x0
    mov r0, r9
    add r2, r9, #0x3d8
    bl func_020285b0
    mov r0, r9
    mov r1, #0x300
    bl func_02036fbc
    ldr r1, [sp, #0x0]
    ldr r0, [r9, #0x2a0]
    ldr r2, [sp, #0x8]
    sub r7, r1, r0
    ldr r0, [r9, #0x2a8]
    mov r1, #0x800
    sub r6, r2, r0
    smull r2, r0, r7, r7
    adds r3, r2, r1
    adc r2, r0, #0x0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    smull r3, r2, r6, r6
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r8, r0, r2
    cmp r10, #0x0
    beq L_021772c8
    mov r0, r9
    mov r1, r4
    bl func_02035294
    cmp r0, #0x0
    beq L_021772c8
    mov r0, r9
    mov r1, r5
    bl func_02035268
    cmp r0, #0x0
    beq L_021772c8
    ldrsb r0, [r9, #0xa4]
    cmp r0, #0x4
    beq L_021771b8
    cmp r0, #0x5
    bne L_021771f0
L_021771b8:
    mov r0, r9
    bl func_020280ec
    mov r1, #0x60
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    b L_02177224
L_021771f0:
    mov r0, r9
    bl func_020280ec
    mov r1, #0x11c
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
L_02177224:
    smull r2, r1, r5, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    strlt r7, [r9, #0x260]
    mov r4, r5, asr #0x1f
    strlt r6, [r9, #0x268]
    blt L_021772c8
    mov r0, r7
    mov r1, r6
    bl func_02069878
    mov r0, r0, asr #0x4
    mov r1, r0, lsl #0x1
    ldr r6, =data_02124ae0
    mov r0, r1, lsl #0x1
    ldrsh r3, [r6, r0]
    add r2, r1, #0x1
    mov r1, #0x800
    umull r0, r7, r3, r5
    adds r0, r0, r1
    mla r7, r3, r4, r7
    mov r3, r3, asr #0x1f
    mla r7, r3, r5, r7
    adc r3, r7, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    str r0, [r9, #0x260]
    mov r0, r2, lsl #0x1
    ldrsh r0, [r6, r0]
    umull r3, r2, r0, r5
    adds r1, r3, r1
    mla r2, r0, r4, r2
    mov r0, r0, asr #0x1f
    mla r2, r0, r5, r2
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r9, #0x268]
L_021772c8:
    add r0, r9, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x2a]
    mov r1, #0x0
    strh r1, [r0, #0x2c]
    ldrsb r0, [r9, #0xa7]
    cmp r0, #0x1
    addeq r1, r9, #0xac
    moveq r0, #0x17
    swpeqb r0, r0, [r1]
    beq L_0217731c
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    ldrnesb r0, [sp, #0x38]
    addne r1, r9, #0xac
    swpneb r0, r0, [r1]
    addeq r1, r9, #0xac
    ldreqsb r0, [sp, #0x3c]
    swpeqb r0, r0, [r1]
L_0217731c:
    ldrsb r0, [r9, #0xa4]
    mov r4, #0x0
    cmp r0, #0x3
    ldreq r0, [r9, #0x4ac]
    addeq r0, r0, #0x2
    streq r0, [r9, #0x4ac]
    ldrne r0, [r9, #0x4ac]
    addne r0, r0, #0x1
    strne r0, [r9, #0x4ac]
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02177368
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    mov r0, r9
    movne r4, #0x1
    bl func_02029204
L_02177368:
    cmp r4, #0x0
    beq L_021773f4
    mov r0, r9
    bl func_02037fdc
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021775e0
L_02177384:
    b L_02177394
    b L_021773ac
    b L_021773c4
    b L_021773dc
L_02177394:
    ldr r1, =0x30a
    mov r0, r9
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021773ac:
    mov r0, r9
    mov r1, #0x30c
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021773c4:
    ldr r1, =0x30d
    mov r0, r9
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021773dc:
    ldr r1, =0x30e
    mov r0, r9
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021773f4:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_0217741c
    mov r0, r9
    bl func_ov002_021877dc
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0217741c:
    mov r0, r9
    mov r1, #0x1
    bl func_0202c4c0
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r0, [sp, #0x30]
    cmp r0, #0x0
    beq L_02177474
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02177474
    mov r0, r9
    mov r1, #0x1
    bl func_0202a34c
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
L_02177474:
    mov r0, r9
    bl func_02026db8
    cmp r0, #0x0
    bne L_02177494
    mov r0, r9
    bl func_02026d04
    cmp r0, #0x0
    beq L_02177544
L_02177494:
    mov r0, r9
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021774f4
L_021774a8:
    b L_021774b8
    b L_021774c8
    b L_021774d8
    b L_021774e8
L_021774b8:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e2b8
    b L_021774f4
L_021774c8:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e2b8
    b L_021774f4
L_021774d8:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e2b8
    b L_021774f4
L_021774e8:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e2b8
L_021774f4:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02177514
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02177514:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02177544:
    mov r0, r9
    bl func_0202a554
    cmp r0, #0x0
    beq L_0217757c
    ldr r1, =0x35a
    mov r2, #0x0
    mov r0, r9
    str r2, [r9, #0x4ac]
    bl func_0203e2b8
    mov r0, r9
    bl func_02033cd8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0217757c:
    bl func_021060b8
    cmp r0, #0x0
    bne L_021775a0
    ldr r1, =0x35e
    mov r0, r9
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021775a0:
    cmp r10, #0x0
    bne L_021775c4
    cmp r8, #0x400
    ble L_021775c4
    mov r0, r9
    bl func_ov002_021883e4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021775c4:
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_ov002_0218891c
L_021775e0:
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
