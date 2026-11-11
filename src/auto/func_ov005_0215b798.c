#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009b24();
extern void func_02009e8c();
extern void func_0200c3ec();
extern void func_02025034();
extern void func_02025ddc();
extern void func_020266a0();
extern void func_02026704();
extern void func_02026b54();
extern void func_02027e14();
extern void func_020280ec();
extern void func_020324d4();
extern void func_020350a8();
extern void func_020351a0();
extern void func_02035fd0();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02069634();
extern void func_02092df4();
extern void func_ov005_0215bccc();
extern void func_ov005_0215c3f4();
extern void func_ov005_0215cf60();
extern char data_0214b47c[];
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov005_0215b798(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r9, r0
    mov r8, r1
    mov r10, r2
    mov r7, r3
    bl func_02035fd0
    movs r6, r0
    beq L_0215b7fc
    ldr r1, [r6, #0x2c]
    ldr r0, [r6, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_0215b7fc
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r5, r1, r0
    movne r0, #0x1
    bne L_0215b800
L_0215b7fc:
    mov r0, #0x0
L_0215b800:
    cmp r0, #0x0
    beq L_0215b884
    ldrsh r0, [r5, #0x2]
    cmp r7, #0x0
    movlt r7, #0x0
    cmp r7, r0
    subge r1, r0, #0x1
    movge r1, r1, lsl #0x10
    movge r7, r1, asr #0x10
    ldr r1, [r6, #0x34]
    cmp r1, #0x0
    bne L_0215b850
    ldr r0, =data_0214b47c
    ldrsh r1, [r5, #0x0]
    ldr r2, [r0, #0x0]
    mov r0, #0x44
    ldr r2, [r2, #0x1c]
    add r1, r1, r7
    smlabb r4, r1, r0, r2
    b L_0215b87c
L_0215b850:
    cmp r1, #0x1
    bne L_0215b87c
    ldrsh r3, [r5, #0x0]
    ldr r2, =data_0214b47c
    mov r1, #0x44
    ldr r2, [r2, #0x0]
    add r0, r3, r0
    sub r0, r0, #0x1
    ldr r2, [r2, #0x1c]
    sub r0, r0, r7
    smlabb r4, r0, r1, r2
L_0215b87c:
    mov r0, #0x1
    b L_0215b888
L_0215b884:
    mov r0, #0x0
L_0215b888:
    cmp r0, #0x0
    beq L_0215bc9c
    ldr r0, =data_0214b480
    mov r1, r4
    ldr r0, [r0, #0x0]
    mov r2, #0x19000
    bl func_02092df4
    ldr r1, [r9, #0x490]
    mov r5, r0
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0215bca4
L_0215b8b8:
    b L_0215b8c8
    b L_0215baf4
    b L_0215bbac
    b L_0215bc58
L_0215b8c8:
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_02038edc
    mov r0, r9
    mov r1, #0x100
    bl func_02036fbc
    ldrsb r0, [r9, #0xba]
    cmp r0, #0x0
    bne L_0215b8fc
    mov r0, r9
    bl func_ov005_0215bccc
L_0215b8fc:
    cmp r5, #0x0
    beq L_0215b9a8
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    beq L_0215b99c
    ldr r1, [r9, #0x48c]
    ldr r0, [sp, #0x30]
    add r1, r1, #0xc8
    str r1, [r9, #0x48c]
    cmp r0, #0x0
    beq L_0215b948
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
L_0215b948:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r6, r1, #0x1
    mov r1, r6, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r2
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    str r6, [r0, #0x0]
    movs r0, r1, lsr #0x10
    bne L_0215b9a8
    add r1, r9, #0xac
    swpb r0, r2, [r1]
    add r1, r9, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0215b9a8
L_0215b99c:
    ldr r0, [r9, #0x48c]
    add r0, r0, #0xa
    str r0, [r9, #0x48c]
L_0215b9a8:
    mov r0, r9
    mov r1, r8
    bl func_02027e14
    ldr r1, [r9, #0x48c]
    add r0, r1, r0
    cmp r0, #0x3e8
    ble L_0215ba0c
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r1, #0x1
    mov r0, r9
    mov r2, r1
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    add r1, r9, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    mov r0, #0x3
    str r0, [r9, #0x490]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215ba0c:
    mov r0, r9
    bl func_020324d4
    cmp r0, #0x0
    beq L_0215ba88
    add r2, sp, #0x0
    mov r0, r4
    add r1, r9, #0x2a0
    bl func_02069634
    add r0, sp, #0x0
    add r1, r9, #0x1a4
    bl func_02009e8c
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r2, =0x166
    mov r0, r9
    mov r1, #0x0
    bl func_0203e280
    mov r0, r9
    bl func_02025ddc
    add r1, r9, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r9, #0xb0
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    mov r0, #0x2
    str r0, [r9, #0x490]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215ba88:
    cmp r5, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e280
    mov r0, r9
    bl func_02026704
    mov r0, #0x1
    add sp, sp, #0x10
    str r0, [r9, #0x490]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215baf4:
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
    cmp r5, #0x0
    beq L_0215bb54
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    mov r0, #0x0
    add sp, sp, #0x10
    str r0, [r9, #0x490]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215bb54:
    mov r0, r4
    add r1, r9, #0x2a0
    bl func_02009b24
    mov r4, r0
    mov r0, r9
    bl func_020280ec
    mov r1, #0xa9
    mul r1, r0, r1
    cmp r4, r1
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxle lr
    mov r0, r9
    mov r1, r6
    mov r2, #0x0
    mov r3, #0x1
    bl func_ov005_0215c3f4
    mov r0, r9
    bl func_ov005_0215cf60
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215bbac:
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_02038edc
    mov r0, r9
    mov r1, #0x100
    bl func_02036fbc
    mov r0, r9
    bl func_020280ec
    mov r10, r0
    ldr r3, =0xfffffd8a
    mvn r4, #0x0
    umull r8, r7, r10, r3
    mla r7, r10, r4, r7
    mov r6, r10, asr #0x1f
    mla r7, r6, r3, r7
    mov r5, #0x800
    adds r3, r8, r5
    adc r4, r7, #0x0
    mov r3, r3, lsr #0xc
    mov r0, r9
    mov r1, #0x9
    mov r2, #0x11
    orr r3, r3, r4, lsl #0x14
    bl func_02025034
    mov r0, r9
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e280
    mov r0, r9
    bl func_02026b54
    mov r0, #0x0
    add sp, sp, #0x10
    str r0, [r9, #0x490]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215bc58:
    mov r0, r9
    bl func_020324d4
    cmp r0, #0x0
    bne L_0215bc84
    mov r0, r9
    mov r1, #0x1
    bl func_020350a8
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
L_0215bc84:
    mov r0, r9
    mov r1, r10
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215bc9c:
    mov r0, r9
    bl func_ov005_0215cf60
L_0215bca4:
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
