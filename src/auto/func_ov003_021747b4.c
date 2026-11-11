#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ff8958();
extern void func_02026de0();
extern void func_02028120();
extern void func_0202d804();
extern void func_0202fa5c();
extern void func_0203535c();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_020447ac();
extern void func_02067c34();
extern void func_020681f8();
extern void func_0206823c();
extern void func_0208a418();
extern void func_021145d8();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_021747b4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x94
    mov r11, #0x0
    mov r4, r0
    str r11, [sp, #0x0]
    bl func_02028120
    ldr r1, =0x2ca6
    mov r3, r11
    umull r6, r5, r0, r1
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    mov r2, #0x800
    adds r2, r6, r2
    adc r1, r5, #0x0
    mov r5, r2, lsr #0xc
    add r0, sp, #0x10
    orr r5, r5, r1, lsl #0x14
    bl func_020447ac
    ldr r1, =data_02150e58
    ldr r0, =data_0215a064
    ldr r2, [r1, #0x50]
    ldr r3, [r1, #0x5c]
    str r2, [sp, #0x1c]
    ldr r2, [r1, #0x68]
    str r3, [sp, #0x20]
    str r2, [sp, #0x24]
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    str r3, [sp, #0x28]
    ldr r0, [r0, #0x0]
    str r2, [sp, #0x2c]
    str r1, [sp, #0x30]
    ldr r0, [r0, #0x1c]
    add r3, sp, #0x34
    add r0, r0, #0x3c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_02028120
    mov r6, #0x5000
    mov r8, r11
    umull ip, r10, r0, r6
    mov r7, #0x800
    mla r10, r0, r8, r10
    mov r9, r0, asr #0x1f
    adds r7, ip, r7
    mla r10, r9, r6, r10
    adc r6, r10, #0x0
    mov r0, r7, lsr #0xc
    add r1, sp, #0x28
    add r2, sp, #0x34
    add r3, sp, #0x40
    orr r0, r0, r6, lsl #0x14
    bl func_01ff832c
    mov r0, r4
    bl func_02028120
    mov r1, #0x2000
    rsb r6, r1, #0x0
    mvn r7, #0x0
    umull ip, r10, r0, r6
    mov r8, #0x800
    mla r10, r0, r7, r10
    mov r9, r0, asr #0x1f
    adds r8, ip, r8
    mla r10, r9, r6, r10
    adc r6, r10, #0x0
    mov r0, r8, lsr #0xc
    add r1, sp, #0x28
    add r2, sp, #0x34
    add r3, sp, #0x4c
    orr r0, r0, r6, lsl #0x14
    bl func_01ff832c
    mov r0, r11
    add r2, sp, #0x58
    str r0, [sp, #0x58]
    str r0, [sp, #0x60]
    mov r0, #0x10000
    str r0, [sp, #0x5c]
    mov r0, #0x1000
    rsb r0, r0, #0x0
    add r1, sp, #0x10
    mov r3, r2
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r1, sp, #0x4
    ldr r0, [r0, #0x0]
    add r2, sp, #0x40
    add r3, sp, #0x58
    bl func_021145d8
    ldr r0, =data_0214da80
    add r1, r4, #0x3b4
    ldr r0, [r0, #0x0]
    add r2, sp, #0x4c
    add r3, sp, #0x58
    bl func_021145d8
    mov r0, r4
    bl func_02028120
    mov r1, #0x3800
    rsb r3, r1, #0x0
    mov r6, r7
    umull r10, r9, r0, r3
    mov r7, #0x800
    mla r9, r0, r6, r9
    mov r8, r0, asr #0x1f
    adds r7, r10, r7
    mla r9, r8, r3, r9
    add r2, sp, #0x4
    adc r3, r9, #0x0
    mov r0, r7, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    add r1, sp, #0x28
    mov r3, r2
    bl func_01ff832c
    mov r0, r4
    bl func_02028120
    mov r1, #0x1
    subs r2, r1, r0
    mov r1, r11
    sbc r0, r1, r0, asr #0x1f
    mov r1, r0, lsl #0xb
    mov r0, r2, lsl #0xb
    orr r1, r1, r2, lsr #0x15
    mov r0, r0, lsr #0xc
    add r2, sp, #0x4
    orr r0, r0, r1, lsl #0x14
    add r1, sp, #0x10
    mov r3, r2
    bl func_01ff832c
    mov r0, r4
    bl func_02028120
    mov r6, #0xf000
    add r2, r4, #0x3b4
    mov r8, r11
    umull ip, r10, r0, r6
    mov r7, #0x800
    mla r10, r0, r8, r10
    mov r9, r0, asr #0x1f
    adds r7, ip, r7
    mla r10, r9, r6, r10
    adc r6, r10, #0x0
    mov r0, r7, lsr #0xc
    add r1, sp, #0x28
    mov r3, r2
    orr r0, r0, r6, lsl #0x14
    bl func_01ff832c
    mov r0, r4
    bl func_02028120
    mov r1, r0, asr #0x1f
    mov r1, r1, lsl #0xc
    orr r1, r1, r0, lsr #0x14
    mov r2, r0, lsl #0xc
    mov r0, #0x800
    adds r0, r2, r0
    add r2, r4, #0x3b4
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    add r1, sp, #0x1c
    mov r3, r2
    bl func_01ff832c
    mov r0, r4
    bl func_02028120
    mov r1, #0x1800
    rsb r6, r1, #0x0
    mvn r7, #0x0
    umull ip, r10, r0, r6
    mov r8, #0x800
    mla r10, r0, r7, r10
    mov r9, r0, asr #0x1f
    adds r8, ip, r8
    mla r10, r9, r6, r10
    adc r6, r10, #0x0
    mov r0, r8, lsr #0xc
    add r1, sp, #0x10
    add r2, sp, #0x4
    add r3, r4, #0x26c
    orr r0, r0, r6, lsl #0x14
    bl func_01ff832c
    mov r0, r4
    bl func_0203910c
    mov r0, r4
    mov r1, #0x200
    bl func_02037130
    add r0, sp, #0x4
    add r3, r4, #0x390
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r4, #0x48c]
    add r2, sp, #0x64
    cmp r0, #0x8
    movlt r6, r0, lsl #0x9
    add r0, sp, #0x4
    add r1, r4, #0x2a0
    movge r6, #0x1000
    bl func_0206823c
    smull r1, r3, r5, r5
    mov r0, #0x800
    adds r5, r1, r0
    ldr r7, [sp, #0x68]
    adc r3, r3, #0x0
    smull r2, r1, r7, r7
    adds r2, r2, r0
    mov r5, r5, lsr #0xc
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    sub r0, r5, r1
    cmp r0, #0x0
    mov r5, #0x0
    ble L_02174b10
    bl func_02067c34
    mov r5, r0
L_02174b10:
    ldr r3, [sp, #0x6c]
    ldr r0, [sp, #0x64]
    smull r2, r1, r3, r3
    smull r7, r3, r0, r0
    mov r0, #0x800
    adds r7, r7, r0
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r7, r7, lsr #0xc
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r7, r7, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    adds r0, r7, r1
    beq L_02174cdc
    bl func_02067c34
    mov r1, r0
    cmp r1, r5
    bge L_02174b84
    sub r0, r1, r5
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    rsb r9, r1, #0x0
    add r10, sp, #0x10
    b L_02174ba8
L_02174b84:
    sub r0, r1, r5
    bl func_01ff8958
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r9, r2, lsr #0xc
    add r10, sp, #0x64
    orr r9, r9, r0, lsl #0x14
L_02174ba8:
    ldr r0, [r4, #0x2a4]
    cmp r0, #0x0
    ble L_02174c70
    mov r0, #0xe0
    mov r3, #0x0
    umull r6, r7, r9, r0
    ldr ip, [r4, #0x260]
    mov r1, #0xf00
    umull r5, lr, ip, r1
    mov r2, #0x800
    adds r6, r6, r2
    mov r8, r6, lsr #0xc
    mov r6, r9, asr #0x1f
    mla r7, r9, r3, r7
    mla r7, r6, r0, r7
    adc r0, r7, #0x0
    orr r8, r8, r0, lsl #0x14
    adds r0, r5, r2
    mov r0, r0, lsr #0xc
    mov r5, ip, asr #0x1f
    mla lr, ip, r3, lr
    mla lr, r5, r1, lr
    adc r5, lr, #0x0
    orr r0, r0, r5, lsl #0x14
    ldr r5, [r10, #0x0]
    smull r7, r6, r5, r8
    adds r7, r7, r2
    adc r5, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r5, lsl #0x14
    add r0, r0, r6
    str r0, [r4, #0x260]
    ldr r0, [r10, #0x8]
    ldr r7, [r4, #0x268]
    smull r6, r5, r0, r8
    mov r0, r7, asr #0x1f
    umull r9, r8, r7, r1
    mla r8, r7, r3, r8
    mla r8, r0, r1, r8
    adds r3, r9, r2
    adc r0, r8, #0x0
    adds r1, r6, r2
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r4, #0x268]
    b L_02174cdc
L_02174c70:
    mov r0, r9, asr #0x1f
    mov r0, r0, lsl #0x7
    mov r2, r9, lsl #0x7
    mov r1, #0x800
    adds r2, r2, r1
    orr r0, r0, r9, lsr #0x19
    adc r3, r0, #0x0
    mov r0, r2, lsr #0xc
    ldr r2, [r10, #0x0]
    orr r0, r0, r3, lsl #0x14
    smull r5, r3, r2, r0
    adds r5, r5, r1
    adc r2, r3, #0x0
    mov r3, r5, lsr #0xc
    ldr r5, [r4, #0x260]
    orr r3, r3, r2, lsl #0x14
    add r2, r5, r3
    str r2, [r4, #0x260]
    ldr r2, [r10, #0x8]
    ldr r5, [r4, #0x268]
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r5, r1
    str r0, [r4, #0x268]
L_02174cdc:
    ldrsh r0, [r4, #0xea]
    cmp r0, #0x3a8
    bne L_02174d9c
    add r0, sp, #0x4
    add r2, sp, #0x70
    add r1, r4, #0x2c4
    bl func_0206823c
    ldr r3, [sp, #0x78]
    ldr r6, [sp, #0x70]
    smull r2, r1, r3, r3
    mov r3, #0x800
    adds r5, r2, r3
    smull r2, r7, r6, r6
    adc r1, r1, #0x0
    adds r8, r2, r3
    mov r2, r5, lsr #0xc
    ldr r0, [sp, #0x74]
    adc r7, r7, #0x0
    smull r6, r5, r0, r0
    adds r3, r6, r3
    mov r6, r8, lsr #0xc
    adc r0, r5, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    orr r6, r6, r7, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r3
    mov r0, r4
    add r5, r2, r1
    bl func_02028120
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x9
    mov r3, r0, lsl #0x9
    mov r1, #0x800
    adds r1, r3, r1
    orr r2, r2, r0, lsr #0x17
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    ble L_02174d9c
    add r1, sp, #0x70
    add r0, r4, #0x18c
    bl func_020681f8
    cmp r0, #0x0
    movle r0, #0x1
    movgt r11, #0x1
    strle r0, [sp, #0x0]
L_02174d9c:
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x52]
    cmp r2, #0x120
    bgt L_02174dd8
    cmp r2, #0x120
    bge L_02174e04
    cmp r2, #0x1
    bgt L_02174eac
    cmp r2, #0x0
    blt L_02174eac
    cmp r2, #0x0
    beq L_02174e40
    cmp r2, #0x1
    beq L_02174e54
    b L_02174eac
L_02174dd8:
    ldr r1, =0x122
    cmp r2, r1
    bgt L_02174eac
    ldr r0, =0x121
    cmp r2, r0
    blt L_02174eac
    cmp r2, r0
    beq L_02174e68
    cmp r2, r1
    beq L_02174e8c
    b L_02174eac
L_02174e04:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x28
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
    beq L_02174eac
L_02174e40:
    ldr r2, =0x121
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    b L_02174eac
L_02174e54:
    ldr r2, =0x122
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    b L_02174eac
L_02174e68:
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    beq L_02174eac
    ldr r2, =0x122
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    b L_02174eac
L_02174e8c:
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    beq L_02174eac
    ldr r2, =0x121
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
L_02174eac:
    ldr r1, [r4, #0x48c]
    ldr r0, =0x95c
    add r2, r1, #0x1
    add r0, r4, r0
    mov r1, #0x26
    str r2, [r4, #0x48c]
    bl func_0208a418
    mov r0, r4
    add r2, r4, #0xb9
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026de0
    cmp r0, #0x0
    beq L_02174efc
    mov r0, r4
    bl func_0202fa5c
    add sp, sp, #0x94
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02174efc:
    ldr r0, [r4, #0x48c]
    cmp r0, #0x12c
    ble L_02174f80
    mov r0, r4
    mov r1, #0x0
    bl func_0202d804
    ldr r1, =data_02150e58
    add r0, sp, #0x7c
    ldr r5, [r1, #0x4c]
    ldr r3, [r1, #0x58]
    ldr r2, [r1, #0x64]
    add r1, r4, #0x198
    str r5, [sp, #0x7c]
    str r3, [sp, #0x80]
    str r2, [sp, #0x84]
    bl func_020681f8
    cmp r0, #0x0
    bge L_02174f5c
    ldr r1, =0x20b
    mov r2, #0x0
    mov r0, r4
    str r2, [r4, #0x488]
    bl func_0203e5e8
    b L_02174f70
L_02174f5c:
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x20c
    str r2, [r4, #0x488]
    bl func_0203e5e8
L_02174f70:
    add sp, sp, #0x94
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02174f80:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    bne L_0217500c
    mov r0, r4
    mov r1, #0x0
    bl func_0202d804
    ldr r1, =data_02150e58
    add r0, sp, #0x88
    ldr r5, [r1, #0x4c]
    ldr r3, [r1, #0x58]
    ldr r2, [r1, #0x64]
    add r1, r4, #0x198
    str r5, [sp, #0x88]
    str r3, [sp, #0x8c]
    str r2, [sp, #0x90]
    bl func_020681f8
    cmp r0, #0x0
    bge L_02174fe8
    ldr r1, =0x20b
    mov r2, #0x0
    mov r0, r4
    str r2, [r4, #0x488]
    bl func_0203e5e8
    b L_02174ffc
L_02174fe8:
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x20c
    str r2, [r4, #0x488]
    bl func_0203e5e8
L_02174ffc:
    add sp, sp, #0x94
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217500c:
    cmp r11, #0x0
    beq L_02175030
    ldr r1, =0x3a9
    mov r0, r4
    bl func_0203e5e8
    add sp, sp, #0x94
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02175030:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x94
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =0x3aa
    mov r0, r4
    bl func_0203e5e8
    mov r0, #0x1
    add sp, sp, #0x94
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
