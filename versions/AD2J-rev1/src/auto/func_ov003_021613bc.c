#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024f98();
extern void func_02025d7c();
extern void func_020264bc();
extern void func_020266a0();
extern void func_02026704();
extern void func_02026b54();
extern void func_020280ec();
extern void func_020280f8();
extern void func_02029204();
extern void func_0202f91c();
extern void func_020366bc();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_02038ef8();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020e17e0();
extern void func_020e2e24();
extern void func_020e2e40();
extern void func_ov003_02157ed4();
extern void func_ov003_02157f0c();
extern void func_ov003_02157f44();
extern char data_0214b484[];
// clang-format off
asm void func_ov003_021613bc(void) {
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
    bl func_020e2e24
    cmp r0, #0x0
    beq L_02161420
    ldr r0, [r5, #0x4a8]
    bl func_020e17e0
L_02161420:
    add r0, r5, #0x26c
    add r3, r5, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x488]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_021617d0
L_02161440:
    b L_02161454
    b L_021614f0
    b L_021616f4
    b L_0216177c
    b L_021617c4
L_02161454:
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
    bge L_021614a8
    mov r0, #0x1
    mov r1, #0x0
    str r0, [r5, #0x488]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x48c]
    bl func_0203e280
    mov r0, r5
    bl func_02026b54
    b L_021617d0
L_021614a8:
    mov r0, r5
    bl func_020280ec
    mov r1, #0x3
    mul r2, r0, r1
    cmp r4, r2
    bge L_021617d0
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
    b L_021617d0
L_021614f0:
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
    ble L_02161540
    mov r0, r5
    mov r2, #0x85
    bl func_0203e280
    b L_0216159c
L_02161540:
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
    ble L_02161590
    mov r0, r5
    mov r2, #0x86
    bl func_0203e280
    b L_0216159c
L_02161590:
    mov r0, r5
    mov r2, #0x87
    bl func_0203e280
L_0216159c:
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
    ble L_021617d0
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
    beq L_02161690
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
    b L_021616cc
L_02161690:
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
L_021616cc:
    mov r0, r5
    add r4, r5, #0xac
    mov r3, #0x5
    mov r1, #0x0
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_02025d7c
    b L_021617d0
L_021616f4:
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
    ble L_021617d0
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
    b L_021617d0
L_0216177c:
    ldr r0, [r5, #0x48c]
    add r0, r0, #0x1
    str r0, [r5, #0x48c]
    ldr r0, [r5, #0x48c]
    cmp r0, #0x1e
    ble L_021617d0
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
    b L_021617d0
L_021617c4:
    mov r0, r5
    mov r1, #0x314
    bl func_02036fbc
L_021617d0:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x96
    bne L_02161810
    mov r0, #0x4
    str r0, [r5, #0x488]
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x48c]
    add r4, r5, #0xac
    mov r3, #0x5
    mov r2, #0x11
    swpb r3, r3, [r4]
    bl func_0203e280
    mov r0, r5
    bl func_020266a0
L_02161810:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0xc8
    bhi L_02161858
    cmp r0, #0x96
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    ldrsb r0, [r5, #0xb9]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrsb r0, [r5, #0xba]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
L_02161858:
    ldrsh r0, [r5, #0xf0]
    cmp r0, #0x4d
    beq L_021618dc
    cmp r0, #0x4e
    beq L_02161878
    cmp r0, #0x4f
    beq L_02161948
    b L_02161960
L_02161878:
    ldrb r0, [r5, #0xc4]
    cmp r0, #0x1
    beq L_02161894
    cmp r0, #0x2
    beq L_021618ac
    cmp r0, #0x3
    beq L_021618c4
L_02161894:
    ldr r1, =0x47f
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021618ac:
    mov r0, r5
    mov r1, #0x480
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021618c4:
    ldr r1, =0x481
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021618dc:
    mov r0, r5
    bl func_02029204
    bl func_020e2e40
    cmp r0, #0x0
    beq L_02161934
    ldrsb r0, [r5, #0xce]
    cmp r0, #0x1
    beq L_02161910
    cmp r0, #0x2
    beq L_02161918
    cmp r0, #0x3
    beq L_02161924
    b L_02161928
L_02161910:
    bl func_ov003_02157f0c
    b L_02161928
L_02161918:
    mov r0, #0x1
    bl func_ov003_02157f44
    b L_02161928
L_02161924:
    bl func_ov003_02157ed4
L_02161928:
    add r1, r5, #0xce
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02161934:
    mov r0, r5
    bl func_0202f91c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02161948:
    ldr r1, =0x488
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02161960:
    mov r0, r5
    bl func_0202f91c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
