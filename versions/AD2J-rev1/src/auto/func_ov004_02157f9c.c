#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ea8();
extern void func_02027f40();
extern void func_020280f8();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020418b0();
extern void func_0206902c();
extern void func_02069098();
extern void func_02069634();
extern void func_02092df4();
extern void func_02092ee8();
extern char data_0213931d[];
extern char data_0214b480[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov004_02157f9c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r2, #0xc
    mov r8, r0
    smulbb r4, r1, r2
    ldr r0, =data_0214b480
    add r2, r8, #0x30c
    add r1, r8, #0x3e4
    add r5, r2, r4
    add r6, r1, r4
    ldr r0, [r0, #0x0]
    mov r1, r6
    mov r2, r5
    bl func_02092ee8
    add r0, r8, #0x3e4
    add r2, sp, #0x0
    add r0, r0, r4
    add r1, r8, #0x2f4
    bl func_02069634
    ldr r1, [sp, #0x8]
    ldr r2, [sp, #0x0]
    smull ip, r0, r1, r1
    ldr lr, [sp, #0x4]
    smull r7, r4, r2, r2
    smull r3, r2, lr, lr
    mov r1, #0x800
    adds lr, ip, r1
    adc ip, r0, #0x0
    adds r7, r7, r1
    adc r4, r4, #0x0
    adds r3, r3, r1
    mov r7, r7, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    mov r0, lr, lsr #0xc
    orr r7, r7, r4, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    orr r0, r0, ip, lsl #0x14
    add r1, r7, r2
    add r7, r0, r1
    mov r0, r8
    bl func_020280f8
    ldr r1, =0x19a0
    mov r3, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r3, ip
    mov r4, r0, asr #0x1f
    mla ip, r4, r1, ip
    mov r2, #0x800
    adds r1, lr, r2
    adc r0, ip, #0x0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    smull r1, r0, r4, r4
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r7, r1
    bge L_021580b0
    mov r0, r7
    bl func_0206902c
    mov r1, r0
    mov r0, r4
    bl func_02069098
    add r1, sp, #0x0
    mov r3, r6
    add r2, r8, #0x2f4
    bl func_01ff832c
L_021580b0:
    mov r0, r8
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ea8
    ldr r0, =data_02153720
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r8, #0x100
    ldreqh r1, [r0, #0x28]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x28]
    addne r0, r8, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x28]
    add r0, r8, #0x100
    ldr r1, =data_02153720
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
    addgt r0, r8, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x2c]
    bgt L_02158144
    add r0, r8, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_02158144:
    add r0, r8, #0x100
    ldrh r0, [r0, #0x2c]
    cmp r0, #0x0
    beq L_021581b4
    add r1, r8, #0xb0
    mov r4, #0x2
    swpb r0, r4, [r1]
    add r0, r8, #0x278
    add r3, r8, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r4
    mov r2, #0x4
    bl func_0203e280
    ldr r0, [r8, #0x9e4]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213931d
    mov r0, r8
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e280
    b L_021581fc
L_021581b4:
    add r1, r8, #0xb0
    mov r4, #0x0
    swpb r0, r4, [r1]
    add r3, r8, #0x3d8
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r2, r4
    mov r1, #0x2
    bl func_0203e280
    mov r0, r8
    mov r1, #0x3
    mov r2, r4
    bl func_0203e280
L_021581fc:
    mov r0, r8
    bl func_020280f8
    mov r4, r0
    mov r0, r8
    bl func_020280f8
    smull r3, r2, r0, r4
    mov r1, #0x800
    adds r3, r3, r1
    adc r0, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    mov r0, #0x334
    umull r2, r4, r3, r0
    adds r6, r2, r1
    mov r2, #0x0
    mla r4, r3, r2, r4
    mov r2, r3, asr #0x1f
    mla r4, r2, r0, r4
    ldr r0, =data_0214b480
    adc r3, r4, #0x0
    mov r2, r6, lsr #0xc
    ldr r0, [r0, #0x0]
    mov r1, r5
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_02158280
    ldr r1, =0x43c
    mov r0, r8
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02158280:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_021582a8
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_021582b0
L_021582a8:
    mov r1, #0x0
    b L_021582b8
L_021582b0:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_021582b8:
    cmp r1, #0x0
    beq L_021582dc
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_021582dc
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_021582e0
L_021582dc:
    mov r0, #0x0
L_021582e0:
    cmp r0, #0x0
    bne L_02158340
    cmp r2, #0x0
    blt L_02158304
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215830c
L_02158304:
    mov r0, #0x0
    b L_02158314
L_0215830c:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_02158314:
    cmp r0, #0x0
    beq L_0215832c
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_02158330
L_0215832c:
    mov r0, #0x0
L_02158330:
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
L_02158340:
    ldrsb r0, [r8, #0xa4]
    cmp r0, #0x2
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r0, r8
    mov r1, #0x5
    bl func_02027f40
    mov r4, r0
    mov r0, r8
    bl func_020418b0
    cmp r4, r0
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    ldr r1, =0x43f
    mov r0, r8
    bl func_0203e2b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
