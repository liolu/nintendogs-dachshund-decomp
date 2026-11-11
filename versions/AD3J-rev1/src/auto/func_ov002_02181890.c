#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ea8();
extern void func_020280f8();
extern void func_02029820();
extern void func_0202de70();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_0206902c();
extern void func_02069098();
extern void func_02069634();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_ov002_02181db8();
extern void func_ov002_02187df0();
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_02181890(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r2, =data_0214b480
    ldr r1, =0x444
    mov r4, r0
    ldr r0, [r2, #0x0]
    add r1, r4, r1
    add r2, r4, #0x378
    bl func_02092ee8
    ldr r0, =0x444
    add r2, sp, #0x0
    add r0, r4, r0
    add r1, r4, #0x360
    bl func_02069634
    ldr r3, [sp, #0x8]
    ldr r6, [sp, #0x0]
    smull r2, r1, r3, r3
    mov r3, #0x800
    adds r5, r2, r3
    smull r2, ip, r6, r6
    adc r1, r1, #0x0
    adds lr, r2, r3
    mov r2, r5, lsr #0xc
    ldr r0, [sp, #0x4]
    adc ip, ip, #0x0
    smull r6, r5, r0, r0
    adds r3, r6, r3
    mov r6, lr, lsr #0xc
    adc r0, r5, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    orr r6, r6, ip, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r3
    mov r0, r4
    add r6, r2, r1
    bl func_020280f8
    ldr r1, =0x19a0
    mov r2, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r0, #0x800
    adds r2, r5, r0
    adc r1, r3, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    smull r2, r1, r5, r5
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r6, r1
    bge L_02181994
    mov r0, r6
    bl func_0206902c
    mov r1, r0
    mov r0, r5
    bl func_02069098
    ldr r3, =0x444
    add r1, sp, #0x0
    add r2, r4, #0x360
    add r3, r4, r3
    bl func_01ff832c
L_02181994:
    ldr r0, =0x444
    add r3, r4, #0x3d8
    add r0, r4, r0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_ov002_02181db8
    ldrsb r0, [r4, #0xae]
    cmp r0, #0x1
    beq L_021819d8
    cmp r0, #0x2
    beq L_02181a08
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    b L_02181a30
L_021819d8:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x50]
    ldr r2, =0x15d
    cmp r1, r2
    beq L_02181a30
    ldr r0, =0x15e
    cmp r1, r0
    beq L_02181a30
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    b L_02181a30
L_02181a08:
    add r0, r4, #0x100
    ldrsh r0, [r0, #0x50]
    ldr r2, =0x15f
    cmp r0, r2
    beq L_02181a30
    cmp r0, #0x160
    beq L_02181a30
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
L_02181a30:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02181b08
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x802
    ldr r3, =data_0214b480
    umull r2, r6, r5, r1
    adds ip, r2, r0
    mov r2, #0x0
    mla r6, r5, r2, r6
    mov r2, r5, asr #0x1f
    mla r6, r2, r1, r6
    ldr r0, [r3, #0x0]
    adc r3, r6, #0x0
    mov r2, ip, lsr #0xc
    add r1, r4, #0x378
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_02181b08
    mov r0, #0x0
    str r0, [r4, #0x498]
    ldr r1, [r4, #0x49c]
    ldr r0, =data_02153720
    add r1, r1, #0x1
    str r1, [r4, #0x49c]
    ldr r0, [r0, #0x0]
    ldr r1, [r4, #0x4a0]
    ldr r2, [r0, #0x94]
    ldr r0, =data_02153720
    cmp r2, #0x0
    rsble r2, r2, #0x0
    add r1, r1, r2
    str r1, [r4, #0x4a0]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r4, #0x4a0]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r0, r1
    str r0, [r4, #0x4a0]
    b L_02181b14
L_02181b08:
    ldr r0, [r4, #0x498]
    add r0, r0, #0x1
    str r0, [r4, #0x498]
L_02181b14:
    mov r0, r4
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ea8
    mov r0, r4
    mov r1, #0x1
    bl func_ov002_02187df0
    ldr r1, =data_02153720
    add r0, r4, #0x100
    mov r2, #0x0
    strh r2, [r0, #0x2a]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r4, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x2c]
    bgt L_02181b88
    add r0, r4, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_02181b88:
    add r1, r4, #0xa2
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x498]
    cmp r0, #0x5
    ble L_02181bb8
    mov r0, r4
    mov r1, #0xec
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02181bb8:
    mov r0, r4
    bl func_0202de70
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r4
    mov r1, #0x0
    bl func_02029820
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldrsb r1, [r4, #0xa4]
    cmp r1, #0x1
    bne L_02181ca0
    ldr r0, [r4, #0x49c]
    cmp r0, #0x3c
    ble L_02181ca0
    ldrsb r0, [r4, #0xae]
    mov r1, #0x0
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02181c34
L_02181c18:
    b L_02181c34
    b L_02181c74
    b L_02181c78
    b L_02181c34
    b L_02181c34
    b L_02181c74
    b L_02181c78
L_02181c34:
    ldr r2, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02181c70
    cmp r0, #0x1
    moveq r1, #0x1
    b L_02181c7c
L_02181c70:
    mov r1, #0x0
L_02181c74:
    b L_02181c7c
L_02181c78:
    mov r1, #0x1
L_02181c7c:
    ldr r2, =0x3a2
    mov r0, r4
    add r1, r1, r2
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02181ca0:
    ldr r0, [r4, #0x49c]
    cmp r0, #0xc8
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, lr}
    bxle lr
    cmp r1, #0x1
    beq L_02181ce4
    cmp r1, #0x4
    beq L_02181cd4
    cmp r1, #0x5
    bne L_02181cdc
    mov r0, #0x0
    b L_02181ce8
L_02181cd4:
    mov r0, #0x1
    b L_02181ce8
L_02181cdc:
    mov r0, #0x2
    b L_02181ce8
L_02181ce4:
    mov r0, #0x3
L_02181ce8:
    ldrsb r2, [r4, #0xae]
    mov r1, #0x0
    cmp r2, #0x6
    addls pc, pc, r2, lsl #0x2
    b L_02181d18
L_02181cfc:
    b L_02181d18
    b L_02181d58
    b L_02181d5c
    b L_02181d18
    b L_02181d18
    b L_02181d58
    b L_02181d5c
L_02181d18:
    ldr r3, =data_0214b484
    ldr r2, =0x10dcd
    ldr r5, [r3, #0x0]
    ldr r3, [r5, #0x0]
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    str r3, [r5, #0x0]
    movs r2, r2, lsr #0x10
    beq L_02181d54
    cmp r2, #0x1
    moveq r1, #0x1
    b L_02181d60
L_02181d54:
    mov r1, #0x0
L_02181d58:
    b L_02181d60
L_02181d5c:
    mov r1, #0x1
L_02181d60:
    mov r0, r0, lsl #0x1
    add r0, r0, #0x39c
    add r0, r1, r0
    mov r1, r0, lsl #0x10
    mov r0, r4
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
