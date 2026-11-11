#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027c30();
extern void func_02027e2c();
extern void func_020280ec();
extern void func_0202a5bc();
extern void func_02033eac();
extern void func_020342ec();
extern void func_020360f0();
extern void func_02037e64();
extern void func_0203e2b8();
extern void func_021075c0();
extern void func_0210be10();
extern void func_0210beb4();
extern void func_ov002_02195b74();
extern void func_ov002_02195d68();
extern char data_0214b484[];
// clang-format off
asm void func_ov002_02194ab0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    movs r6, r3
    mov r4, r0
    mov r8, r1
    mov r7, r2
    beq L_02195b14
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x0
    beq L_02194ae0
    cmp r0, #0x2
    bne L_02194ae8
L_02194ae0:
    mov r0, #0x1
    b L_02194b0c
L_02194ae8:
    ldrsh r0, [r6, #0x94]
    cmp r0, #0x35
    bne L_02194b08
    mov r0, r6
    bl func_0210beb4
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02194b0c
L_02194b08:
    mov r0, #0x0
L_02194b0c:
    cmp r0, #0x0
    bne L_02195b14
    mov r0, r4
    mov r1, r6
    bl func_020360f0
    mov r5, r0
    mov r0, r4
    mov r1, r6
    mov r2, #0x1
    bl func_020342ec
    cmp r0, #0x0
    beq L_02194b80
    ldrb r0, [r4, #0xc9]
    ands r1, r0, #0x2
    bicne r0, r0, #0x2
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02194b80
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x32
    bl func_02027e2c
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x19
    bl func_02027e2c
L_02194b80:
    ldrsh r1, [r6, #0x96]
    cmp r1, #0xe
    bne L_02194bb4
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x6
    bne L_02194bb4
    ldr r1, =0x435
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194bb4:
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0x1
    bhi L_02194c3c
    mov r0, r6
    bl func_0210be10
    mov r1, #0xc00
    mov r3, #0x0
    umull r7, r5, r0, r1
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mov r2, #0x800
    mla r5, r0, r1, r5
    adds r7, r7, r2
    adc r0, r5, #0x0
    mov r5, r7, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    smull r1, r0, r5, r5
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    addge sp, sp, #0x28
    movge r0, r3
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r0, r4
    mov r1, r6
    bl func_0202a5bc
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194c3c:
    cmp r1, #0x5
    bne L_02195070
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x3
    beq L_02195070
    add r0, r6, #0xb0
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r6, #0xbc
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r2, [sp, #0x4]
    cmp r2, #0x0
    bgt L_02194fdc
    ldr r1, [sp, #0x10]
    mov r0, r4
    mov r3, r6
    bl func_ov002_02195b74
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02194cb4
L_02194c98:
    b L_02194cb4
    b L_02194cc4
    b L_02194d7c
    b L_02194e34
    b L_02194cb4
    b L_02194eec
    b L_02194f64
L_02194cb4:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194cc4:
    mov r0, r4
    bl func_02033eac
    cmp r0, #0x0
    beq L_02194d6c
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02194d50
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_02194d50:
    mov r0, r4
    mov r1, #0x3e4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194d6c:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194d7c:
    mov r0, r4
    bl func_02033eac
    cmp r0, #0x0
    beq L_02194e24
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x9000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02194e08
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_02194e08:
    ldr r1, =0x3e6
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194e24:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194e34:
    mov r0, r4
    bl func_02033eac
    cmp r0, #0x0
    beq L_02194edc
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x6000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02194ec0
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_02194ec0:
    mov r0, r4
    mov r1, #0x3e8
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194edc:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194eec:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    smull r2, r1, r3, r3
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    ble L_02194f48
    ldr r1, =0x3e2
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194f48:
    ldr r1, =0x3ea
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194f64:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    smull r2, r1, r3, r3
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    ble L_02194fc0
    ldr r1, =0x3e9
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194fc0:
    mov r0, r4
    mov r1, #0x3f4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02194fdc:
    ldr r0, [sp, #0x10]
    cmp r0, #0x400
    bgt L_02195060
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    smull r2, r1, r3, r3
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    ble L_02195044
    ldr r1, =0x3e9
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195044:
    mov r0, r4
    mov r1, #0x3f4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195060:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195070:
    cmp r1, #0x3
    bne L_021952d4
    cmp r5, #0x0
    beq L_021952a0
    cmp r5, #0x1
    beq L_02195194
    cmp r5, #0x2
    bne L_02195b14
    mov r0, r4
    bl func_020280ec
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r7, r1
    smull r3, r0, r1, r0
    adds r1, r3, r2
    adc r0, r0, #0x0
    mov r3, r1, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    smull r1, r0, r3, r3
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    bge L_02195184
    mov r0, r4
    mov r1, r6
    bl func_021075c0
    cmp r0, #0x0
    beq L_021950f4
    cmp r0, #0x1
    beq L_02195110
    b L_02195184
L_021950f4:
    ldr r1, =0x3ea
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195110:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0219514c
    cmp r0, #0x1
    beq L_02195168
    b L_02195184
L_0219514c:
    ldr r1, =0x3ed
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195168:
    ldr r1, =0x3ee
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195184:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195194:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02195290
L_021951d8:
    b L_021951ec
    b L_02195208
    b L_02195224
    b L_02195240
    b L_0219525c
L_021951ec:
    ldr r1, =0x402
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195208:
    ldr r1, =0x403
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195224:
    ldr r1, =0x404
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195240:
    ldr r1, =0x401
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219525c:
    mov r0, r4
    bl func_02037e64
    mov r2, r0
    ldr r1, =0x405
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195290:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021952a0:
    mov r0, r4
    bl func_02037e64
    mov r2, r0
    ldr r1, =0x3cd
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021952d4:
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x5
    beq L_021952f0
    cmp r0, #0x6
    beq L_021952f0
    cmp r0, #0x8
    bne L_021953a8
L_021952f0:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1e
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02195b14
L_02195328:
    b L_02195338
    b L_02195354
    b L_02195370
    b L_0219538c
L_02195338:
    ldr r1, =0x402
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195354:
    ldr r1, =0x403
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195370:
    ldr r1, =0x404
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219538c:
    ldr r1, =0x401
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021953a8:
    cmp r5, #0x0
    beq L_02195ae0
    cmp r5, #0x1
    beq L_021959d4
    cmp r5, #0x2
    bne L_02195b14
    add r0, r6, #0xbc
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x0
    bl func_02027c30
    cmp r0, #0x0
    beq L_02195794
    ldr r1, [sp, #0x1c]
    mov r0, r4
    bl func_ov002_02195d68
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02195418
L_021953fc:
    b L_02195418
    b L_02195428
    b L_021954c0
    b L_02195558
    b L_021955f0
    b L_021956a4
    b L_0219571c
L_02195418:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195428:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_021954a4
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_021954a4:
    ldr r1, =0x3e3
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021954c0:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x9000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_0219553c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_0219553c:
    ldr r1, =0x3e5
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195558:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x6000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_021955d4
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_021955d4:
    ldr r1, =0x3e7
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021955f0:
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x3
    bne L_02195694
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    smull r3, r2, r5, r5
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r4, #0xc9]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02195678
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e2c
L_02195678:
    ldr r1, =0x3e3
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195694:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021956a4:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    smull r2, r1, r3, r3
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    ble L_02195700
    ldr r1, =0x3e2
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195700:
    ldr r1, =0x3ea
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219571c:
    mov r0, r4
    bl func_020280ec
    add r1, r7, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    smull r2, r1, r3, r3
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    ble L_02195778
    ldr r1, =0x3e9
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195778:
    mov r0, r4
    mov r1, #0x3f4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195794:
    ldr r1, [sp, #0x1c]
    mov r0, r4
    bl func_ov002_02195d68
    cmp r0, #0x4
    beq L_021957c8
    cmp r0, #0x5
    beq L_021957e4
    cmp r0, #0x6
    beq L_021958e8
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021957c8:
    ldr r1, =0x3eb
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021957e4:
    mov r0, r4
    bl func_020280ec
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r7, r1
    smull r3, r0, r1, r0
    adds r1, r3, r2
    adc r0, r0, #0x0
    mov r3, r1, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    smull r1, r0, r3, r3
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    bge L_021958d8
    mov r0, r4
    mov r1, r6
    bl func_021075c0
    cmp r0, #0x0
    beq L_02195848
    cmp r0, #0x1
    beq L_02195864
    b L_021958d8
L_02195848:
    ldr r1, =0x3ea
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195864:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_021958a0
    cmp r0, #0x1
    beq L_021958bc
    b L_021958d8
L_021958a0:
    ldr r1, =0x3ed
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021958bc:
    ldr r1, =0x3ee
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021958d8:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021958e8:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x14
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02195930
    cmp r0, #0x1
    beq L_0219594c
    b L_02195968
L_02195930:
    ldr r1, =0x403
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219594c:
    ldr r1, =0x404
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195968:
    mov r0, r4
    bl func_020280ec
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r7, r1
    smull r0, r3, r1, r0
    adds r5, r0, r2
    mov r0, #0x0
    adc r1, r3, r0
    mov r5, r5, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    smull r3, r1, r5, r5
    adds r2, r3, r2
    adc r1, r1, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r8, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r0, r4
    mov r1, #0x3ec
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021959d4:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02195ad0
L_02195a18:
    b L_02195a2c
    b L_02195a48
    b L_02195a64
    b L_02195a80
    b L_02195a9c
L_02195a2c:
    ldr r1, =0x402
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195a48:
    ldr r1, =0x403
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195a64:
    ldr r1, =0x404
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195a80:
    ldr r1, =0x401
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195a9c:
    mov r0, r4
    bl func_02037e64
    mov r2, r0
    ldr r1, =0x405
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195ad0:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195ae0:
    mov r0, r4
    bl func_02037e64
    mov r2, r0
    ldr r1, =0x3cd
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02195b14:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
