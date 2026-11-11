#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8930();
extern void func_01ff8958();
extern void func_02009f80();
extern void func_0200a638();
extern void func_0200aa64();
extern void func_0200c488();
extern void func_02067c34();
extern void func_0206823c();
extern void func_02068270();
extern void func_ov006_02161328();
extern char data_0214da7c[];
extern char data_0214da84[];
extern char data_0215a048[];
// clang-format off
asm void func_02024148(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xe4
    mov r4, #0x0
    ldr r1, =data_0214da84
    mov r3, r4
    mov r2, r4
L_02024160:
    cmp r4, #0x0
    blt L_02024170
    cmp r4, #0x3
    blt L_02024178
L_02024170:
    mov r0, r3
    b L_02024184
L_02024178:
    ldr r0, [r1, #0x0]
    add r0, r0, r4, lsl #0x2
    ldr r0, [r0, #0x54]
L_02024184:
    cmp r0, #0x0
    strne r2, [r0, #0x934]
    strne r2, [r0, #0x938]
    strne r2, [r0, #0x93c]
    strne r2, [r0, #0x924]
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x3
    blt L_02024160
    mov r0, #0x0
    str r0, [sp, #0x38]
    mov r0, #0x1000
    str r0, [sp, #0x54]
    ldr r0, [sp, #0x38]
    str r0, [sp, #0x44]
    str r0, [sp, #0x58]
    str r0, [sp, #0x50]
    str r0, [sp, #0x4c]
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x54]
    rsb r0, r0, #0x0
    str r0, [sp, #0x48]
    mov r0, #0x1
    str r0, [sp, #0x40]
L_020241e8:
    ldr r0, [sp, #0x38]
    cmp r0, #0x0
    blt L_020241fc
    cmp r0, #0x3
    blt L_02024204
L_020241fc:
    ldr r9, [sp, #0x3c]
    b L_02024218
L_02024204:
    ldr r0, =data_0214da84
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x38]
    add r0, r1, r0, lsl #0x2
    ldr r9, [r0, #0x54]
L_02024218:
    cmp r9, #0x0
    beq L_02024500
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    bge L_02024500
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #0x38]
    mov r0, r1, lsl r0
    str r0, [sp, #0x20]
L_02024248:
    cmp r7, #0x0
    blt L_02024258
    cmp r7, #0x3
    blt L_02024260
L_02024258:
    ldr r8, [sp, #0x44]
    b L_02024270
L_02024260:
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    add r0, r0, r7, lsl #0x2
    ldr r8, [r0, #0x54]
L_02024270:
    cmp r8, #0x0
    beq L_020244ec
    ldr r2, [r9, #0x91c]
    ldr r0, [r8, #0x91c]
    ldr r1, [r8, #0x928]
    add r4, r2, r0
    ldr r0, [r9, #0x928]
    sub r6, r1, r0
    cmp r6, #0x0
    movgt r0, r6
    rsble r0, r6, #0x0
    cmp r0, r4
    bge L_020244ec
    ldr r1, [r8, #0x92c]
    ldr r0, [r9, #0x92c]
    sub r2, r1, r0
    cmp r2, #0x0
    movgt r0, r2
    rsble r0, r2, #0x0
    cmp r0, r4
    bge L_020244ec
    ldr r1, [r8, #0x930]
    ldr r0, [r9, #0x930]
    sub r5, r1, r0
    cmp r5, #0x0
    movgt r0, r5
    rsble r0, r5, #0x0
    cmp r0, r4
    bge L_020244ec
    mov r0, r6, asr #0x1f
    str r0, [sp, #0x28]
    mov r0, r5, asr #0x1f
    str r0, [sp, #0x30]
    smull r11, r0, r5, r5
    mov r1, #0x800
    adds ip, r11, r1
    adc r11, r0, #0x0
    mov r0, ip, lsr #0xc
    smull r10, r3, r2, r2
    orr r0, r0, r11, lsl #0x14
    smull ip, r11, r6, r6
    adds ip, ip, r1
    adc r11, r11, #0x0
    adds r10, r10, r1
    mov ip, ip, lsr #0xc
    adc r3, r3, #0x0
    mov r10, r10, lsr #0xc
    orr ip, ip, r11, lsl #0x14
    orr r10, r10, r3, lsl #0x14
    add r3, ip, r10
    mov r2, #0x0
    adds r0, r0, r3
    beq L_020244ec
    smull r10, r3, r4, r4
    adds r10, r10, r1
    adc r1, r3, r2
    mov r2, r10, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_020244ec
    bl func_02067c34
    mov r1, r0
    sub r0, r4, r1
    bl func_01ff8958
    mov r4, r0
    ldrsb r1, [r8, #0xaf]
    ldrsb r0, [r9, #0xaf]
    cmp r0, r1
    bne L_020243e0
    ldr r1, [r9, #0x9e8]
    ldr r0, [r8, #0x9e8]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x8]
    add r0, r1, r0
    bl func_01ff8930
    ldr r2, [r8, #0x9e8]
    mov r1, #0x800
    ldr r3, [r2, #0x8]
    ldr r2, [r9, #0x9e8]
    rsb r3, r3, #0x0
    ldr r2, [r2, #0x8]
    smull r11, r10, r0, r3
    smull r3, r2, r0, r2
    adds r11, r11, r1
    adc r10, r10, #0x0
    adds r0, r3, r1
    mov r1, r11, lsr #0xc
    orr r1, r1, r10, lsl #0x14
    adc r2, r2, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    b L_02024404
L_020243e0:
    cmp r0, r1
    ldrlt r1, [sp, #0x48]
    ldrlt r0, [sp, #0x4c]
    blt L_02024404
    cmp r0, r1
    ldrgt r1, [sp, #0x50]
    ldrgt r0, [sp, #0x54]
    ldrle r1, [sp, #0x58]
    movle r0, r1
L_02024404:
    mov r11, r4, asr #0x1f
    umull r10, r3, r6, r4
    mla r3, r6, r11, r3
    ldr r6, [sp, #0x28]
    mov r2, #0x800
    mla r3, r6, r4, r3
    adds r6, r10, r2
    adc r3, r3, #0x0
    mov r10, r6, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    smull r3, r6, r10, r1
    adds r3, r3, r2
    ldr ip, [r9, #0x934]
    adc r6, r6, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r6, lsl #0x14
    add r3, ip, r3
    str r3, [r9, #0x934]
    smull r6, r3, r10, r0
    umull r10, lr, r5, r4
    mla lr, r5, r11, lr
    ldr r5, [sp, #0x30]
    ldr ip, [r9, #0x93c]
    mla lr, r5, r4, lr
    adds r4, r10, r2
    adc r5, lr, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r5, lsl #0x14
    smull r10, r5, r4, r1
    smull r1, r0, r4, r0
    adds r10, r10, r2
    adc r4, r5, #0x0
    mov r5, r10, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    add r4, ip, r5
    str r4, [r9, #0x93c]
    adds r4, r6, r2
    adc r3, r3, #0x0
    adds r1, r1, r2
    mov r2, r4, lsr #0xc
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r8, #0x934]
    orr r2, r2, r3, lsl #0x14
    add r0, r0, r2
    str r0, [r8, #0x934]
    ldr r0, [r8, #0x93c]
    add r0, r0, r1
    str r0, [r8, #0x93c]
    ldr r1, [r9, #0x924]
    ldr r0, [sp, #0x40]
    orr r0, r1, r0, lsl r7
    str r0, [r9, #0x924]
    ldr r1, [r8, #0x924]
    ldr r0, [sp, #0x20]
    orr r0, r1, r0
    str r0, [r8, #0x924]
L_020244ec:
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    blt L_02024248
L_02024500:
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x38]
    cmp r0, #0x2
    blt L_020241e8
    mov r0, #0x0
    str r0, [sp, #0x34]
    str r0, [sp, #0x88]
    str r0, [sp, #0x94]
    str r0, [sp, #0x90]
    str r0, [sp, #0x5c]
    str r0, [sp, #0x60]
    mov r0, #0x7
    str r0, [sp, #0x6c]
    mov r0, #0x1
    str r0, [sp, #0x84]
    mov r0, #0x3
    str r0, [sp, #0x8c]
    mov r0, #0x8
    str r0, [sp, #0x80]
    ldr r0, [sp, #0x34]
    ldr r10, =data_0214da7c
    str r0, [sp, #0x64]
    str r0, [sp, #0x68]
    mvn r0, #0x0
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x34]
    mov r4, #0x6
    str r0, [sp, #0x7c]
    str r0, [sp, #0xa4]
L_02024580:
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    blt L_02024594
    cmp r0, #0x3
    blt L_0202459c
L_02024594:
    ldr r6, [sp, #0x5c]
    b L_020245b0
L_0202459c:
    ldr r0, =data_0214da84
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x34]
    add r0, r1, r0, lsl #0x2
    ldr r6, [r0, #0x54]
L_020245b0:
    cmp r6, #0x0
    beq L_02024cdc
    ldrb r0, [r6, #0xb0]
    ands r0, r0, #0x2
    beq L_02024680
    ldr r0, [r10, #0x0]
    ldr r9, [sp, #0x60]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r0, #0x0
    ble L_02024680
    ldr r0, =0x924
    add r8, r6, #0x2a0
    add r5, r6, r0
    ldr r0, =0x934
    add r7, r6, #0x2ac
    add r11, r6, r0
L_020245f4:
    mov r0, r4
    mov r1, r9
    bl func_0200c488
    cmp r0, #0x0
    beq L_02024660
    ldr r1, [r0, #0x20]
    cmp r1, #0x1
    bne L_02024660
    add r1, r0, #0x8
    str r1, [sp, #0x0]
    ldrh r2, [r0, #0x4]
    mov r1, r7
    mov r3, r11
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x18]
    str r2, [sp, #0x8]
    ldr r2, [r0, #0x14]
    str r2, [sp, #0xc]
    ldr r2, [r0, #0x1c]
    mov r0, r8
    str r2, [sp, #0x10]
    ldr r2, [r6, #0x91c]
    bl func_0200a638
    cmp r0, #0x0
    ldrne r0, [r5, #0x0]
    orrne r0, r0, #0x20000000
    strne r0, [r5, #0x0]
L_02024660:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r9, r0
    blt L_020245f4
L_02024680:
    ldrb r0, [r6, #0xb0]
    ands r0, r0, #0x1
    beq L_02024780
    add r0, r6, #0x2a0
    add r3, sp, #0xa8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r9, r6, #0x2ac
    add r3, sp, #0xb4
    ldmia r9, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r7, [sp, #0xac]
    ldr r0, [r6, #0x91c]
    ldr r1, [sp, #0xb8]
    add r0, r7, r0
    str r0, [sp, #0xac]
    ldr r0, [r6, #0x91c]
    ldr r5, [r10, #0x0]
    add r0, r1, r0
    str r0, [sp, #0xb8]
    ldr r0, [r5, #0x20]
    ldr r8, [sp, #0x64]
    ldrsh r0, [r0, #0x1a]
    cmp r0, #0x0
    ble L_02024780
    ldr r0, =0x924
    add r5, r6, r0
    ldr r0, =0x934
    add r7, r6, r0
L_020246f4:
    mov r0, r4
    mov r1, r8
    bl func_0200c488
    cmp r0, #0x0
    beq L_02024760
    ldr r1, [r0, #0x20]
    cmp r1, #0x0
    bne L_02024760
    add r1, r0, #0x8
    str r1, [sp, #0x0]
    ldrh r2, [r0, #0x4]
    add r1, sp, #0xb4
    mov r3, r7
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x18]
    str r2, [sp, #0x8]
    ldr r2, [r0, #0x14]
    str r2, [sp, #0xc]
    ldr r2, [r0, #0x1c]
    add r0, sp, #0xa8
    str r2, [sp, #0x10]
    ldr r2, [r6, #0x91c]
    bl func_0200aa64
    cmp r0, #0x0
    ldrne r0, [r5, #0x0]
    orrne r0, r0, #0x20000000
    strne r0, [r5, #0x0]
L_02024760:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r8, r0
    blt L_020246f4
L_02024780:
    ldrb r0, [r6, #0xb0]
    ands r0, r0, #0x4
    beq L_02024968
    add r0, r6, #0x2a0
    add r3, sp, #0xc0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [sp, #0xc4]
    ldr r0, [r6, #0x91c]
    ldr r7, [r10, #0x0]
    add r0, r1, r0
    str r0, [sp, #0x18]
    str r0, [sp, #0xc4]
    ldr r0, [r7, #0x20]
    ldr r5, [sp, #0x68]
    ldrsh r0, [r0, #0x1e]
    cmp r0, #0x0
    ble L_02024968
    ldr r0, [sp, #0xc8]
    str r0, [sp, #0x1c]
L_020247d0:
    ldr r0, [sp, #0x6c]
    mov r1, r5
    bl func_0200c488
    cmp r0, #0x0
    beq L_02024948
    ldr r3, [r6, #0x91c]
    ldr r1, [r0, #0x14]
    ldr r2, [sp, #0xc0]
    add r9, r3, r1
    ldr r1, [r0, #0x8]
    sub r8, r2, r1
    cmp r8, #0x0
    movgt r1, r8
    rsble r1, r8, #0x0
    cmp r1, r9
    bge L_02024948
    ldr r2, [r0, #0xc]
    ldr r1, [sp, #0x18]
    sub r2, r1, r2
    cmp r2, #0x0
    movgt r1, r2
    rsble r1, r2, #0x0
    cmp r1, r9
    bge L_02024948
    ldr r1, [r0, #0x10]
    ldr r0, [sp, #0x1c]
    sub r7, r0, r1
    cmp r7, #0x0
    movgt r0, r7
    rsble r0, r7, #0x0
    cmp r0, r9
    bge L_02024948
    mov r0, r8, asr #0x1f
    str r0, [sp, #0x70]
    mov r0, r7, asr #0x1f
    str r0, [sp, #0x74]
    smull r1, r0, r7, r7
    smull r11, r3, r2, r2
    mov r2, #0x800
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r0, ip, r8, r8
    adds r0, r0, r2
    adc ip, ip, #0x0
    adds r11, r11, r2
    mov r0, r0, lsr #0xc
    adc r3, r3, #0x0
    mov r11, r11, lsr #0xc
    orr r0, r0, ip, lsl #0x14
    orr r11, r11, r3, lsl #0x14
    add r0, r0, r11
    mov lr, #0x0
    adds r0, r1, r0
    beq L_02024948
    smull r3, r1, r9, r9
    adds r2, r3, r2
    adc r1, r1, lr
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_02024948
    bl func_02067c34
    mov r1, r0
    sub r0, r9, r1
    bl func_01ff8958
    mov r2, r0, asr #0x1f
    umull ip, r11, r8, r0
    mla r11, r8, r2, r11
    ldr r3, [sp, #0x70]
    mov r9, #0x800
    adds r8, ip, r9
    mla r11, r3, r0, r11
    ldr r1, [r6, #0x934]
    adc r3, r11, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r3, lsl #0x14
    add r1, r1, r8
    umull r8, r3, r7, r0
    mla r3, r7, r2, r3
    ldr r2, [sp, #0x74]
    str r1, [r6, #0x934]
    mla r3, r2, r0, r3
    adds r2, r8, r9
    ldr r1, [r6, #0x93c]
    adc r0, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r6, #0x93c]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x20000000
    str r0, [r6, #0x924]
L_02024948:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1e]
    cmp r5, r0
    blt L_020247d0
L_02024968:
    ldrb r0, [r6, #0xb0]
    ands r0, r0, #0x8
    beq L_02024b14
    add r0, r6, #0x2a0
    add r3, sp, #0xcc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r8, r6, #0x2ac
    add r3, sp, #0xd8
    ldmia r8, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r7, [sp, #0xd0]
    ldr r0, [r6, #0x91c]
    ldr r1, [sp, #0xdc]
    add r0, r7, r0
    str r0, [sp, #0xd0]
    ldr r0, [r6, #0x91c]
    ldr r5, [sp, #0x7c]
    add r0, r1, r0
    str r0, [sp, #0xdc]
    ldr r0, [sp, #0x78]
    str r0, [r6, #0x484]
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r0, #0x0
    ble L_02024b14
L_020249d4:
    ldr r0, [sp, #0x80]
    mov r1, r5
    bl func_0200c488
    movs r8, r0
    beq L_02024af4
    ldr r0, [r8, #0x20]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov006_02161328
    mov r7, r0
    ldrsh r1, [r6, #0xea]
    ldr r0, =0x4ec
    cmp r1, r0
    str r7, [sp, #0x0]
    ldr r1, [r8, #0x18]
    ldreq r2, [sp, #0x84]
    str r1, [sp, #0x4]
    ldr r3, [r8, #0x14]
    ldrne r2, [sp, #0x88]
    str r3, [sp, #0x8]
    ldr r9, [r8, #0x1c]
    ldr r3, =0x934
    str r9, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [r6, #0x91c]
    add r0, sp, #0xcc
    add r1, sp, #0xd8
    add r3, r6, r3
    bl func_02009f80
    cmp r0, #0x0
    beq L_02024ae8
    cmp r0, #0x1
    beq L_02024a64
    cmp r0, #0x2
    beq L_02024ac0
    b L_02024af4
L_02024a64:
    ldr r0, [r6, #0x924]
    add r1, r6, #0x9e
    orr r0, r0, #0x20000000
    str r0, [r6, #0x924]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x40000000
    str r0, [r6, #0x924]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x10000000
    str r0, [r6, #0x924]
    ldr r0, [sp, #0x8c]
    swpb r0, r0, [r1]
    ldr r0, [r8, #0x20]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r6, #0x484]
    ldr r2, [r7, #0x14]
    ldr r1, [r7, #0x10]
    ldr r0, [r7, #0xc]
    str r0, [r6, #0x390]
    str r1, [r6, #0x394]
    str r2, [r6, #0x398]
    b L_02024af4
L_02024ac0:
    ldr r0, [r6, #0x924]
    add r1, r6, #0x9e
    orr r0, r0, #0x20000000
    str r0, [r6, #0x924]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x8000000
    str r0, [r6, #0x924]
    ldr r0, [sp, #0x90]
    swpb r0, r0, [r1]
    b L_02024af4
L_02024ae8:
    ldr r0, [sp, #0x94]
    add r1, r6, #0x9e
    swpb r0, r0, [r1]
L_02024af4:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r5, r0
    blt L_020249d4
L_02024b14:
    ldr r2, [r6, #0x2a0]
    ldr r0, [r6, #0x934]
    ldr r1, [r6, #0x2a4]
    add r5, r2, r0
    ldr r0, [r6, #0x938]
    ldr r2, [r6, #0x2a8]
    add r0, r1, r0
    str r0, [sp, #0x14]
    mov r0, r5, asr #0x1f
    ldr r1, [r6, #0x93c]
    str r0, [sp, #0xa0]
    add r0, r2, r1
    str r0, [sp, #0x98]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x9c]
    ldr r0, =data_0215a048
    mov r1, #0x800
    ldr r3, [r0, #0x0]
    ldr r0, [r6, #0x9e8]
    mov r2, #0x0
    ldr r7, [r0, #0x8]
    smull r9, r0, r5, r5
    adds r9, r9, r1
    adc r0, r0, #0x0
    mov ip, r9, lsr #0xc
    orr ip, ip, r0, lsl #0x14
    ldr r0, [sp, #0x98]
    ldr r8, [r3, #0xc]
    smull r11, r9, r0, r0
    adds r0, r11, r1
    adc r9, r9, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r9, lsl #0x14
    ldr r9, =0x14cc
    mov r3, r7, asr #0x1f
    umull r11, r9, r7, r9
    mla r9, r7, r2, r9
    ldr r7, =0x14cc
    ldrb lr, [r6, #0xb0]
    mla r9, r3, r7, r9
    adds r11, r11, r1
    adc r7, r9, #0x0
    ands r3, lr, #0x10
    mov r3, r11, lsr #0xc
    orr r3, r3, r7, lsl #0x14
    add r0, ip, r0
    sub r7, r8, r3
    beq L_02024c70
    smull r8, r3, r7, r7
    adds r8, r8, r1
    adc r1, r3, r2
    mov r2, r8, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    ble L_02024c70
    bl func_02067c34
    mov r1, r0
    sub r0, r7, r1
    bl func_01ff8958
    mov r2, r0, asr #0x1f
    umull r9, r8, r5, r0
    mla r8, r5, r2, r8
    ldr r3, [sp, #0xa0]
    mov r7, #0x800
    adds r5, r9, r7
    mla r8, r3, r0, r8
    adc r3, r8, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    ldr r1, [r6, #0x934]
    ldr r3, [sp, #0x98]
    add r1, r1, r5
    umull r8, r5, r3, r0
    mla r5, r3, r2, r5
    ldr r2, [sp, #0x9c]
    str r1, [r6, #0x934]
    mla r5, r2, r0, r5
    adds r2, r8, r7
    ldr r1, [r6, #0x93c]
    adc r0, r5, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r6, #0x93c]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x80000000
    str r0, [r6, #0x924]
L_02024c70:
    ldr r1, [r6, #0x918]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    bgt L_02024c9c
    sub r0, r1, r0
    ldr r1, [r6, #0x938]
    add r0, r1, r0
    str r0, [r6, #0x938]
    ldr r0, [r6, #0x924]
    orr r0, r0, #0x40000000
    str r0, [r6, #0x924]
L_02024c9c:
    ldr r0, [r6, #0x924]
    ands r0, r0, #0x40000000
    beq L_02024cb8
    ldr r0, [r6, #0x264]
    cmp r0, #0x0
    ldrlt r0, [sp, #0xa4]
    strlt r0, [r6, #0x264]
L_02024cb8:
    ldr r1, =0x934
    add r0, r6, #0x2a0
    add r1, r6, r1
    mov r2, r0
    bl func_02068270
    add r0, r6, #0x2a0
    add r1, r6, #0x2ac
    add r2, r6, #0x2b8
    bl func_0206823c
L_02024cdc:
    ldr r0, [sp, #0x34]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x34]
    cmp r0, #0x3
    blt L_02024580
    ldr r0, =data_0214da84
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x64]
    add sp, sp, #0xe4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
