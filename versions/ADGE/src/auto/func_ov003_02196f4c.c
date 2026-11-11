#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027c58();
extern void func_02027e54();
extern void func_02028114();
extern void func_0202a610();
extern void func_02033ff0();
extern void func_02034430();
extern void func_020362a8();
extern void func_02038094();
extern void func_0203e5e8();
extern void func_020a7248();
extern void func_020aba98();
extern void func_020abb3c();
extern void func_020ae22c();
extern void func_ov003_0219803c();
extern void func_ov003_02198230();
extern char data_0214da84[];
// clang-format off
asm void func_ov003_02196f4c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    movs r8, r3
    mov r6, r0
    mov r5, r1
    mov r4, r2
    beq L_02197fd4
    ldrsh r0, [r8, #0x90]
    cmp r0, #0x0
    beq L_02196f7c
    cmp r0, #0x2
    bne L_02196f84
L_02196f7c:
    mov r0, #0x1
    b L_02196fa8
L_02196f84:
    ldrsh r0, [r8, #0x94]
    cmp r0, #0x35
    bne L_02196fa4
    mov r0, r8
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02196fa8
L_02196fa4:
    mov r0, #0x0
L_02196fa8:
    cmp r0, #0x0
    bne L_02197fd4
    mov r0, r6
    mov r1, r8
    bl func_020362a8
    mov r7, r0
    mov r0, r6
    mov r1, r8
    mov r2, #0x1
    bl func_02034430
    cmp r0, #0x0
    beq L_0219701c
    ldrb r0, [r6, #0xb6]
    ands r1, r0, #0x2
    bicne r0, r0, #0x2
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0219701c
    mov r0, r6
    mov r1, #0x1
    mov r2, #0x32
    bl func_02027e54
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x19
    bl func_02027e54
L_0219701c:
    ldrsh r1, [r8, #0x96]
    cmp r1, #0xe
    bne L_02197050
    ldrsh r0, [r8, #0x90]
    cmp r0, #0x6
    bne L_02197050
    ldr r1, =0x436
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197050:
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0x1
    bhi L_021970d8
    mov r0, r8
    bl func_020aba98
    mov r1, #0xc00
    mov r3, #0x0
    umull r7, r4, r0, r1
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mov r2, #0x800
    mla r4, r0, r1, r4
    adds r7, r7, r2
    adc r0, r4, #0x0
    mov r4, r7, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    smull r1, r0, r4, r4
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    addge sp, sp, #0x28
    movge r0, r3
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r0, r6
    mov r1, r8
    bl func_0202a610
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021970d8:
    cmp r1, #0x5
    bne L_02197530
    ldrsh r0, [r8, #0x90]
    cmp r0, #0x3
    beq L_02197530
    add r0, r8, #0xb0
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r8, #0xbc
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r2, [sp, #0x4]
    cmp r2, #0x0
    bgt L_0219749c
    ldr r1, [sp, #0x10]
    mov r0, r6
    mov r3, r8
    bl func_ov003_0219803c
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02197150
L_02197134:
    b L_02197150
    b L_02197160
    b L_0219723c
    b L_021972f4
    b L_02197150
    b L_021973ac
    b L_02197424
L_02197150:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197160:
    mov r0, r6
    bl func_02033ff0
    cmp r0, #0x0
    beq L_0219722c
    mov r0, r8
    bl func_020ae22c
    mov r7, r0
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_021971f8
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_021971f8:
    cmp r7, #0x0
    beq L_02197210
    ldr r1, =0x3e9
    mov r0, r6
    bl func_0203e5e8
    b L_0219721c
L_02197210:
    mov r0, r6
    mov r1, #0x3e4
    bl func_0203e5e8
L_0219721c:
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219722c:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219723c:
    mov r0, r6
    bl func_02033ff0
    cmp r0, #0x0
    beq L_021972e4
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x9000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_021972c8
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_021972c8:
    ldr r1, =0x3e6
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021972e4:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021972f4:
    mov r0, r6
    bl func_02033ff0
    cmp r0, #0x0
    beq L_0219739c
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x6000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02197380
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_02197380:
    mov r0, r6
    mov r1, #0x3e8
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219739c:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021973ac:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x1000
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
    cmp r5, r1
    ble L_02197408
    ldr r1, =0x3e2
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197408:
    ldr r1, =0x3eb
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197424:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x1000
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
    cmp r5, r1
    ble L_02197480
    ldr r1, =0x3ea
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197480:
    ldr r1, =0x3f5
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219749c:
    ldr r0, [sp, #0x10]
    cmp r0, #0x400
    bgt L_02197520
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x1000
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
    cmp r5, r1
    ble L_02197504
    ldr r1, =0x3ea
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197504:
    ldr r1, =0x3f5
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197520:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197530:
    cmp r1, #0x3
    bne L_02197794
    cmp r7, #0x0
    beq L_02197760
    cmp r7, #0x1
    beq L_02197654
    cmp r7, #0x2
    bne L_02197fd4
    mov r0, r6
    bl func_02028114
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r4, r1
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
    cmp r5, r1
    bge L_02197644
    mov r0, r6
    mov r1, r8
    bl func_020a7248
    cmp r0, #0x0
    beq L_021975b4
    cmp r0, #0x1
    beq L_021975d0
    b L_02197644
L_021975b4:
    ldr r1, =0x3eb
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021975d0:
    ldr r1, =data_0214da84
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
    beq L_0219760c
    cmp r0, #0x1
    beq L_02197628
    b L_02197644
L_0219760c:
    ldr r1, =0x3ee
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197628:
    ldr r1, =0x3ef
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197644:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197654:
    ldr r0, =data_0214da84
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
    b L_02197750
L_02197698:
    b L_021976ac
    b L_021976c8
    b L_021976e4
    b L_02197700
    b L_0219771c
L_021976ac:
    ldr r1, =0x403
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021976c8:
    ldr r1, =0x404
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021976e4:
    ldr r1, =0x405
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197700:
    ldr r1, =0x402
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219771c:
    mov r0, r6
    bl func_02038094
    mov r2, r0
    ldr r1, =0x406
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197750:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197760:
    mov r0, r6
    bl func_02038094
    mov r2, r0
    ldr r1, =0x3cd
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197794:
    ldrsh r0, [r8, #0x90]
    cmp r0, #0x5
    beq L_021977b0
    cmp r0, #0x6
    beq L_021977b0
    cmp r0, #0x8
    bne L_02197868
L_021977b0:
    ldr r1, =data_0214da84
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
    b L_02197fd4
L_021977e8:
    b L_021977f8
    b L_02197814
    b L_02197830
    b L_0219784c
L_021977f8:
    ldr r1, =0x403
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197814:
    ldr r1, =0x404
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197830:
    ldr r1, =0x405
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0219784c:
    ldr r1, =0x402
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197868:
    cmp r7, #0x0
    beq L_02197fa0
    cmp r7, #0x1
    beq L_02197e94
    cmp r7, #0x2
    bne L_02197fd4
    add r0, r8, #0xbc
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r6
    mov r1, #0x0
    bl func_02027c58
    cmp r0, #0x0
    beq L_02197c54
    ldr r1, [sp, #0x1c]
    mov r0, r6
    bl func_ov003_02198230
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_021978d8
L_021978bc:
    b L_021978d8
    b L_021978e8
    b L_02197980
    b L_02197a18
    b L_02197ab0
    b L_02197b64
    b L_02197bdc
L_021978d8:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021978e8:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02197964
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_02197964:
    ldr r1, =0x3e3
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197980:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x9000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_021979fc
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_021979fc:
    ldr r1, =0x3e5
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197a18:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x6000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02197a94
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_02197a94:
    ldr r1, =0x3e7
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197ab0:
    ldrsh r0, [r8, #0x90]
    cmp r0, #0x3
    bne L_02197b54
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x4000
    smull r0, r2, r1, r0
    mov r1, #0x800
    adds r3, r0, r1
    mov r0, #0x0
    adc r2, r2, r0
    mov r4, r3, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    smull r3, r2, r4, r4
    adds r3, r3, r1
    adc r1, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldrb r1, [r6, #0xb6]
    ands r2, r1, #0x4
    bicne r0, r1, #0x4
    addne r1, r6, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    cmp r0, #0x0
    beq L_02197b38
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027e54
L_02197b38:
    ldr r1, =0x3e3
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197b54:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197b64:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x1000
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
    cmp r5, r1
    ble L_02197bc0
    ldr r1, =0x3e2
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197bc0:
    ldr r1, =0x3eb
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197bdc:
    mov r0, r6
    bl func_02028114
    add r1, r4, #0x1000
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
    cmp r5, r1
    ble L_02197c38
    ldr r1, =0x3ea
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197c38:
    ldr r1, =0x3f5
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197c54:
    ldr r1, [sp, #0x1c]
    mov r0, r6
    bl func_ov003_02198230
    cmp r0, #0x4
    beq L_02197c88
    cmp r0, #0x5
    beq L_02197ca4
    cmp r0, #0x6
    beq L_02197da8
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197c88:
    mov r0, r6
    mov r1, #0x3ec
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197ca4:
    mov r0, r6
    bl func_02028114
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r4, r1
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
    cmp r5, r1
    bge L_02197d98
    mov r0, r6
    mov r1, r8
    bl func_020a7248
    cmp r0, #0x0
    beq L_02197d08
    cmp r0, #0x1
    beq L_02197d24
    b L_02197d98
L_02197d08:
    ldr r1, =0x3eb
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197d24:
    ldr r1, =data_0214da84
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
    beq L_02197d60
    cmp r0, #0x1
    beq L_02197d7c
    b L_02197d98
L_02197d60:
    ldr r1, =0x3ee
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197d7c:
    ldr r1, =0x3ef
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197d98:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197da8:
    ldr r0, =data_0214da84
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
    beq L_02197df0
    cmp r0, #0x1
    beq L_02197e0c
    b L_02197e28
L_02197df0:
    ldr r1, =0x404
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197e0c:
    ldr r1, =0x405
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197e28:
    mov r0, r6
    bl func_02028114
    ldr r1, =0x168f
    mov r2, #0x800
    add r1, r4, r1
    smull r0, r3, r1, r0
    adds r4, r0, r2
    mov r0, #0x0
    adc r1, r3, r0
    mov r4, r4, lsr #0xc
    orr r4, r4, r1, lsl #0x14
    smull r3, r1, r4, r4
    adds r2, r3, r2
    adc r1, r1, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r5, r2
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    ldr r1, =0x3ed
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197e94:
    ldr r0, =data_0214da84
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
    b L_02197f90
L_02197ed8:
    b L_02197eec
    b L_02197f08
    b L_02197f24
    b L_02197f40
    b L_02197f5c
L_02197eec:
    ldr r1, =0x403
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197f08:
    ldr r1, =0x404
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197f24:
    ldr r1, =0x405
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197f40:
    ldr r1, =0x402
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197f5c:
    mov r0, r6
    bl func_02038094
    mov r2, r0
    ldr r1, =0x406
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197f90:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197fa0:
    mov r0, r6
    bl func_02038094
    mov r2, r0
    ldr r1, =0x3cd
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02197fd4:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
