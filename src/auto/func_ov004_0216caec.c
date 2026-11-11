#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ffe160();
extern void func_02006a20();
extern void func_0200b634();
extern void func_020275e0();
extern void func_020275f4();
extern void func_02027608();
extern void func_02027644();
extern void func_02028120();
extern void func_0202818c();
extern void func_02044980();
extern void func_02067c34();
extern void func_02067ca0();
extern void func_0206810c();
extern void func_020681f8();
extern void func_0206823c();
extern void func_02068270();
extern void func_0208f0e4();
extern void func_020a5fcc();
extern void func_020bc580();
extern void func_020bcbb4();
extern void func_020bccdc();
extern void func_020bcdf0();
extern void func_020bcf5c();
extern void func_020bd018();
extern void func_020bd04c();
extern void func_020bd064();
extern void func_020c9bf0();
extern void func_020fde70();
extern void func_020fe140();
extern void func_021144f0();
extern void func_021145d8();
extern void func_ov004_0216c5a8();
extern void func_ov004_0216c5e0();
extern char data_02124d28[];
extern char data_02150e58[];
extern char data_0215a064[];
extern char data_ov004_0216e3a0[];
extern char data_ov004_0216e3ac[];
// clang-format off
asm void func_ov004_0216caec(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x17c
    mov r8, r0
    ldrsh r0, [r8, #0xdc]
    bl func_ov004_0216c5a8
    str r0, [sp, #0x4]
    mov r0, #0x0
    bl func_02044980
    ldrh r1, [r8, #0x20]
    str r0, [sp, #0x8]
    ands r0, r1, #0x1
    addne sp, sp, #0x17c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    addeq sp, sp, #0x17c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    bl func_020fe140
    mov r2, r0
    mvn r0, #0x0
    cmp r2, r0
    ldr r1, [sp, #0x4]
    moveq r2, #0x0
    add r0, sp, #0x18
    bl func_020fde70
    add r2, sp, #0x18
    add r0, r8, #0x88
    mov r1, #0x8
    bl func_020bd04c
    ldrb r0, [r8, #0xa4]
    cmp r0, #0x1
    bne L_0216cbd4
    ldr r0, =data_ov004_0216e3a0
    ldr r4, =data_ov004_0216e3ac
    add r5, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    add r3, sp, #0x30
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x8]
    mov r2, r5
    add r1, r8, #0xa8
    bl func_021145d8
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0216cbc4
    bl func_ov004_0216c5e0
    cmp r0, #0x0
    bne L_0216cf80
L_0216cbc4:
    add r1, r8, #0xa4
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0216cf80
L_0216cbd4:
    cmp r0, #0x0
    bne L_0216cf80
    ldr r5, [r8, #0xa8]
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x4]
    sub r4, r5, r1
    bl func_02028120
    ldr r1, =0x99a
    mov r3, #0x0
    umull r7, r6, r0, r1
    mla r6, r0, r3, r6
    mov r0, r0, asr #0x1f
    mov r2, #0x800
    mla r6, r0, r1, r6
    adds r2, r7, r2
    adc r0, r6, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, #0x9
    mul r2, r1, r0
    cmp r4, #0x0
    movgt r0, r4
    rsble r0, r4, #0x0
    cmp r0, r2
    ble L_0216cc4c
    cmp r4, #0x0
    ldrgt r0, [sp, #0x18]
    addgt r5, r0, r2
    ldrle r0, [sp, #0x18]
    suble r5, r0, r2
L_0216cc4c:
    ldr r4, [r8, #0xa8]
    ldr r1, =0x66666667
    sub r2, r5, r4
    smull r0, r3, r1, r2
    mov r3, r3, asr #0x2
    mov r0, r2, lsr #0x1f
    add r3, r0, r3
    add r0, r4, r3
    str r0, [r8, #0xa8]
    bl func_ov004_0216c5e0
    cmp r0, #0x0
    beq L_0216cf28
    ldr r0, =data_0215a064
    add r6, sp, #0x3c
    ldr r4, [r0, #0x0]
    ldr r3, =data_02150e58
    ldr r0, [r4, #0x1c]
    add r5, sp, #0x48
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldr r0, [r4, #0x1c]
    ldr r4, [r3, #0x50]
    add r0, r0, #0x48
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r0, [r3, #0x5c]
    str r4, [sp, #0x54]
    ldr r4, [r3, #0x68]
    str r0, [sp, #0x58]
    add r3, sp, #0x60
    mov r1, r5
    mov r2, r6
    mov r0, #0x1000
    str r4, [sp, #0x5c]
    bl func_01ff832c
    bl func_020a5fcc
    mov r4, r0
    bl func_020a5fcc
    mov r1, r0
    ldrsh r0, [r4, #0x6c]
    ldrsh r1, [r1, #0x6e]
    bl func_02067ca0
    add r2, sp, #0x60
    add r1, sp, #0x54
    mov r3, r2
    bl func_01ff832c
    ldr r1, [r8, #0xb0]
    mov r0, #0x0
    str r1, [sp, #0x74]
    str r0, [sp, #0x6c]
    str r0, [sp, #0x70]
    str r0, [sp, #0x78]
    str r0, [sp, #0x7c]
    mov r0, #0x1000
    str r0, [sp, #0x80]
    add r1, sp, #0x78
    add r0, sp, #0x60
    str r1, [sp, #0x0]
    mov r1, r6
    mov r2, r0
    add r3, sp, #0x6c
    bl func_0200b634
    ldr r1, [sp, #0x64]
    ldr r0, =0xfffff333
    ldr r4, [r8, #0xac]
    add r0, r1, r0
    cmp r4, r0
    ble L_0216cd80
    ldr r1, =0x66666667
    sub r2, r0, r4
    smull r0, r3, r1, r2
    mov r3, r3, asr #0x2
    mov r0, r2, lsr #0x1f
    add r3, r0, r3
    add r0, r4, r3
    str r0, [r8, #0xac]
L_0216cd80:
    bl func_020a5fcc
    ldr r5, [r0, #0x70]
    bl func_020a5fcc
    mov r4, r0
    bl func_020a5fcc
    mov r1, r0
    ldrsh r0, [r4, #0x6c]
    ldrsh r1, [r1, #0x6e]
    bl func_02067ca0
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r4, r2, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    ldr r0, =data_0215a064
    add lr, sp, #0x84
    ldr ip, [r0, #0x0]
    ldr r0, =data_02150e58
    ldr r1, [ip, #0x1c]
    ldr r11, [r0, #0x4c]
    ldr r10, [r0, #0x58]
    ldr r9, [r0, #0x64]
    add r1, r1, #0x30
    ldmia r1, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r0, [ip, #0x1c]
    rsb r5, r9, #0x0
    add r0, r0, #0x48
    ldmia r0, {r0, r1, r2}
    str r9, [sp, #0xa4]
    str r5, [sp, #0xa4]
    add r5, sp, #0x90
    stmia r5, {r0, r1, r2}
    rsb r7, r11, #0x0
    str r11, [sp, #0x9c]
    rsb r6, r10, #0x0
    str r10, [sp, #0xa0]
    add r3, sp, #0xb4
    mov r1, r5
    mov r2, lr
    mov r0, #0x1000
    str r7, [sp, #0x9c]
    str r6, [sp, #0xa0]
    bl func_01ff832c
    mov r0, r4
    add r1, sp, #0x9c
    add r2, sp, #0xb4
    add r3, sp, #0xa8
    bl func_01ff832c
    add r2, sp, #0xb4
    rsb r0, r4, #0x0
    add r1, sp, #0x9c
    mov r3, r2
    bl func_01ff832c
    ldr r1, [r8, #0xb0]
    mov r0, #0x0
    str r1, [sp, #0xc8]
    str r0, [sp, #0xc0]
    str r0, [sp, #0xc4]
    str r0, [sp, #0xcc]
    str r0, [sp, #0xd0]
    mov r0, #0x1000
    str r0, [sp, #0xd4]
    add r1, sp, #0xcc
    add r0, sp, #0xa8
    str r1, [sp, #0x0]
    add r1, sp, #0x84
    mov r2, r0
    add r3, sp, #0xc0
    bl func_0200b634
    add r1, sp, #0xcc
    add r0, sp, #0xb4
    str r1, [sp, #0x0]
    add r1, sp, #0x84
    mov r2, r0
    add r3, sp, #0xc0
    bl func_0200b634
    ldr r2, [sp, #0xb4]
    ldr r1, =0xfffff333
    ldr r0, [r8, #0xa8]
    add r1, r2, r1
    cmp r0, r1
    ble L_0216cef4
    ldr r2, =0x66666667
    sub r3, r1, r0
    smull r1, r4, r2, r3
    mov r4, r4, asr #0x2
    mov r1, r3, lsr #0x1f
    add r4, r1, r4
    add r0, r0, r4
    str r0, [r8, #0xa8]
    b L_0216cf28
L_0216cef4:
    ldr r2, [sp, #0xa8]
    ldr r1, =0xccd
    add r1, r2, r1
    cmp r0, r1
    bge L_0216cf28
    ldr r2, =0x66666667
    sub r3, r1, r0
    smull r1, r4, r2, r3
    mov r4, r4, asr #0x2
    mov r1, r3, lsr #0x1f
    add r4, r1, r4
    add r0, r0, r4
    str r0, [r8, #0xa8]
L_0216cf28:
    ldr r0, [r8, #0xe0]
    cmp r0, #0x0
    bne L_0216cf80
    bl func_ov004_0216c5e0
    cmp r0, #0x0
    beq L_0216cf80
    ldr r2, =0xccd
    ldr r0, [sp, #0x8]
    add r1, r8, #0xa8
    bl func_021144f0
    cmp r0, #0x0
    beq L_0216cf80
    bl func_020a5fcc
    add r2, sp, #0xd8
    add r1, r8, #0xa8
    bl func_020c9bf0
    add r1, sp, #0xd8
    mov r0, #0x5
    bl func_0208f0e4
    add r1, r8, #0xa4
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0216cf80:
    ldr r1, [r8, #0xac]
    ldr r0, =0x333
    cmp r1, r0
    strlt r0, [r8, #0xac]
    ldr r0, [r8, #0xe0]
    cmp r0, #0x0
    beq L_0216cfa4
    ldr r0, [sp, #0x4]
    bl func_02028120
L_0216cfa4:
    add r0, sp, #0x18
    add r1, r8, #0xa8
    add r2, r8, #0xcc
    bl func_0206823c
    ldr r3, [r8, #0xd0]
    ldr r0, =data_02124d28
    smull r2, r1, r3, r3
    ldr r4, [r8, #0xcc]
    ldr r3, [r8, #0xd4]
    smlal r2, r1, r4, r4
    smlal r2, r1, r3, r3
    ldr r5, [r0, #0x0]
    ldr r4, [r0, #0x4]
    subs r0, r2, r5
    sbcs r0, r1, r4
    movlt r0, #0x0
    blt L_0216cff4
    add r0, r8, #0xcc
    mov r1, r0
    bl func_02006a20
L_0216cff4:
    cmp r0, #0x0
    bne L_0216d018
    ldr r0, =data_0215a064
    add r3, r8, #0xcc
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x48
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0216d018:
    ldr r1, =data_02150e58
    add r0, r8, #0xc0
    ldr r6, [r1, #0x68]
    ldr r3, [r1, #0x5c]
    ldr r2, [r1, #0x50]
    add r1, r8, #0xcc
    str r2, [r8, #0xc0]
    str r3, [r8, #0xc4]
    str r6, [r8, #0xc8]
    add r2, r8, #0xb4
    bl func_0206810c
    ldr r3, [r8, #0xb8]
    ldr r2, [r8, #0xb4]
    smull r0, r1, r3, r3
    smlal r0, r1, r2, r2
    ldr r2, [r8, #0xbc]
    smlal r0, r1, r2, r2
    subs r0, r0, r5
    sbcs r0, r1, r4
    movlt r0, #0x0
    blt L_0216d078
    add r0, r8, #0xb4
    mov r1, r0
    bl func_02006a20
L_0216d078:
    cmp r0, #0x0
    bne L_0216d0c0
    ldr r0, =data_02150e58
    ldr r2, [r0, #0x64]
    ldr r1, [r0, #0x58]
    ldr r0, [r0, #0x4c]
    str r0, [r8, #0xb4]
    str r1, [r8, #0xb8]
    str r2, [r8, #0xbc]
    ldr r0, [r8, #0xb4]
    rsb r0, r0, #0x0
    str r0, [r8, #0xb4]
    ldr r0, [r8, #0xb8]
    rsb r0, r0, #0x0
    str r0, [r8, #0xb8]
    ldr r0, [r8, #0xbc]
    rsb r0, r0, #0x0
    str r0, [r8, #0xbc]
L_0216d0c0:
    add r0, r8, #0xcc
    add r1, r8, #0xb4
    add r2, r8, #0xc0
    bl func_0206810c
    add r3, sp, #0xe4
    add r1, r8, #0xcc
    add r2, r8, #0xa8
    mov r0, #0x1000
    bl func_01ff832c
    add r2, sp, #0xe4
    add r0, r8, #0x88
    mov r1, #0x0
    bl func_020bd04c
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_0216d5ac
    bl func_02028120
    ldr r1, =0x99a
    mov r3, #0x0
    umull r5, r6, r0, r1
    mla r6, r0, r3, r6
    mov r0, r0, asr #0x1f
    ldr r2, =data_0215a064
    mla r6, r0, r1, r6
    ldr r7, =data_02150e58
    ldr r4, [r2, #0x0]
    mov r2, #0x800
    adds r9, r5, r2
    ldr r5, [r4, #0x94]
    adc r1, r6, #0x0
    mov r6, r9, lsr #0xc
    ldr r10, [r7, #0x4c]
    ldr r4, [r4, #0x98]
    smull r9, r3, r10, r5
    adds r9, r9, r2
    orr r6, r6, r1, lsl #0x14
    ldr r1, [r7, #0x58]
    str r10, [sp, #0xf0]
    ldr r10, [r7, #0x64]
    adc r3, r3, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    str r9, [sp, #0xf0]
    smull r9, r3, r1, r5
    adds r9, r9, r2
    str r1, [sp, #0xf4]
    adc r1, r3, #0x0
    mov r3, r9, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    str r3, [sp, #0xf4]
    smull r9, r3, r10, r5
    adds r9, r9, r2
    ldr r1, [r7, #0x50]
    adc r3, r3, #0x0
    mov r9, r9, lsr #0xc
    str r10, [sp, #0xf8]
    orr r9, r9, r3, lsl #0x14
    str r9, [sp, #0xf8]
    smull r9, r3, r1, r4
    adds r9, r9, r2
    str r1, [sp, #0xfc]
    adc r1, r3, #0x0
    mov r3, r9, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    ldr r9, [r7, #0x5c]
    ldr r1, [r7, #0x68]
    str r3, [sp, #0xfc]
    smull r7, r3, r9, r4
    adds r7, r7, r2
    adc r3, r3, #0x0
    mov r7, r7, lsr #0xc
    str r9, [sp, #0x100]
    orr r7, r7, r3, lsl #0x14
    str r7, [sp, #0x100]
    smull r7, r3, r1, r4
    adds r2, r7, r2
    str r1, [sp, #0x104]
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, sp, #0xf0
    str r2, [sp, #0x104]
    add r1, sp, #0xfc
    mov r2, r0
    bl func_02068270
    ldrb r0, [r8, #0xa4]
    cmp r0, #0x1
    bne L_0216d274
    add r0, sp, #0xf0
    add r1, r8, #0xcc
    bl func_020681f8
    cmp r0, #0x0
    bge L_0216d274
    mul r0, r4, r4
    mla r0, r5, r5, r0
    cmp r0, #0x64
    ble L_0216d274
    ldr r2, [r8, #0xa0]
    mov r0, #0x800
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0xa
    mov r3, r2, lsl #0xa
    adds r3, r3, r0
    orr r1, r1, r2, lsr #0x16
    adc r0, r1, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r8, #0xa0]
    b L_0216d28c
L_0216d274:
    ldr r0, [r8, #0xa0]
    add r0, r0, r6, asr #0x5
    str r0, [r8, #0xa0]
    ldr r0, [r8, #0xa0]
    cmp r0, r6
    strgt r6, [r8, #0xa0]
L_0216d28c:
    ldr r1, [r8, #0xa0]
    mov r0, #0x9
    mul r2, r1, r0
    ldr r0, [sp, #0x4]
    add r1, sp, #0x108
    str r2, [r8, #0xd8]
    bl func_02027644
    ldr r0, [sp, #0x4]
    add r1, sp, #0x114
    bl func_02027608
    ldr r0, [sp, #0x4]
    add r1, sp, #0x120
    bl func_020275f4
    ldr r0, [sp, #0x4]
    add r1, sp, #0x12c
    bl func_020275e0
    ldr r0, [sp, #0x4]
    bl func_02028120
    mov r1, #0xd00
    mov r2, #0x0
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r0, #0x800
    adds r1, r4, r0
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    str r1, [sp, #0x138]
    bl func_02028120
    mov r1, #0xb00
    mov r3, #0x0
    umull r6, r5, r0, r1
    mov r2, #0x800
    mla r5, r0, r3, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r1, r5
    adds r2, r6, r2
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    str r1, [sp, #0x13c]
    bl func_02028120
    mov r1, #0xe00
    mov r3, #0x0
    umull r6, r5, r0, r1
    mov r2, #0x800
    mla r5, r0, r3, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r1, r5
    adds r2, r6, r2
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    str r1, [sp, #0x140]
    bl func_02028120
    mov r2, #0xb00
    mov r1, #0x0
    umull r6, r5, r0, r2
    mla r5, r0, r1, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r2, r5
    mov r3, #0x800
    adds r2, r6, r3
    adc r0, r5, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [sp, #0x144]
    add r7, sp, #0x138
    add r2, sp, #0x148
    mov r0, r1
L_0216d3b8:
    ldr r6, [r7, r1, lsl #0x2]
    smull r5, r4, r6, r6
    adds r5, r5, r3
    adc r4, r4, r0
    mov r5, r5, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    str r5, [r2, r1, lsl #0x2]
    add r1, r1, #0x1
    cmp r1, #0x4
    blt L_0216d3b8
    mov r0, #0x0
    str r0, [sp, #0xc]
    add r4, sp, #0x170
    add r11, sp, #0x164
    add r5, sp, #0x158
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
L_0216d3fc:
    ldr r3, [sp, #0x10]
    ldr r1, [sp, #0xc]
    mov r2, r5
    add r0, r8, #0x88
    str r3, [sp, #0x164]
    str r3, [sp, #0x168]
    str r3, [sp, #0x16c]
    bl func_020bd064
    ldr r6, [sp, #0x14]
    add r7, sp, #0x108
L_0216d424:
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_0206823c
    ldr r0, [sp, #0x174]
    ldr r10, [sp, #0x170]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    strlt r0, [sp, #0x174]
    ldr r0, [sp, #0x178]
    ldr r3, [sp, #0x174]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    strlt r0, [sp, #0x178]
    ldr r0, [sp, #0x178]
    smull r2, r1, r3, r3
    smull r9, lr, r0, r0
    mov r0, #0x800
    adds r9, r9, r0
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
    add r1, sp, #0x148
    ldr r1, [r1, r6, lsl #0x2]
    add r0, r9, r0
    cmp r0, r1
    bge L_0216d4dc
    bl func_02067c34
    mov r1, r0
    add r0, sp, #0x138
    ldr r0, [r0, r6, lsl #0x2]
    bl func_02067ca0
    mov r1, r4
    mov r2, r11
    mov r3, r11
    bl func_01ff832c
L_0216d4dc:
    add r6, r6, #0x1
    cmp r6, #0x4
    add r7, r7, #0xc
    blt L_0216d424
    ldr r1, [sp, #0x164]
    ldr r3, [sp, #0x168]
    mov r0, r1, asr #0x1f
    mov r6, r0, lsl #0x9
    orr r6, r6, r1, lsr #0x17
    mov r1, r1, lsl #0x9
    mov r0, #0x800
    adds r7, r1, r0
    adc r1, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    mov r1, r3, asr #0x1f
    mov r1, r1, lsl #0x9
    orr r1, r1, r3, lsr #0x17
    mov r3, r3, lsl #0x9
    adds r3, r3, r0
    ldr r2, [sp, #0x16c]
    adc r1, r1, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0x9
    orr r1, r1, r2, lsr #0x17
    mov r2, r2, lsl #0x9
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x16c]
    ldr r1, [sp, #0xc]
    add r0, r8, #0x88
    mov r2, r11
    str r6, [sp, #0x164]
    str r3, [sp, #0x168]
    bl func_020bd018
    ldr r0, [sp, #0xc]
    add r0, r0, #0x1
    str r0, [sp, #0xc]
    cmp r0, #0x8
    blt L_0216d3fc
    ldr r0, [r8, #0xe0]
    cmp r0, #0x0
    bne L_0216d5ac
    bl func_ov004_0216c5e0
    cmp r0, #0x0
    beq L_0216d5ac
    ldr r0, [sp, #0x4]
    bl func_0202818c
L_0216d5ac:
    add r0, r8, #0x88
    bl func_020bcf5c
    ldr r1, =0xfd7
    add r0, r8, #0x88
    mov r2, #0x7b
    bl func_020bccdc
    ldr r1, =0x19a
    ldr r2, =0xccd
    add r0, r8, #0x88
    bl func_020bcbb4
    add r0, r8, #0x88
    bl func_020bc580
    add r0, r8, #0x88
    mov r1, #0xcd
    bl func_020bcdf0
    mov r0, r8
    bl func_01ffe160
    add sp, sp, #0x17c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
