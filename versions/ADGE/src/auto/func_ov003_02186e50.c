#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ed0();
extern void func_02028120();
extern void func_02029874();
extern void func_0203e5e8();
extern void func_02067c34();
extern void func_02067ca0();
extern void func_0206823c();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_02189b1c();
extern void func_ov003_0218a0f0();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02186e50(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r5, r1
    mov r4, r2
    mov r6, r0
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ed0
    mov r0, r6
    mov r1, #0x1
    bl func_ov003_0218a0f0
    ldr r1, =data_0215a064
    add r0, r6, #0x100
    mov r2, #0x0
    strh r2, [r0, #0x1c]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r6, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x1e]
    bgt L_02186ed4
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_02186ed4:
    mov r0, r6
    bl func_ov003_02189b1c
    add r1, r6, #0xb9
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_0215a064
    mov r0, #0xc
    ldr r1, [r1, #0x0]
    smulbb r7, r4, r0
    ldr r0, [r1, #0x1c]
    add r8, r6, #0x2f4
    add r0, r0, #0x48
    add r9, r6, #0x3c0
    ldr r3, =data_0214da80
    add r10, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    add r8, r8, r7
    add r9, r9, r7
    ldr r0, [r3, #0x0]
    mov r1, r9
    mov r2, r8
    bl func_02114658
    add r0, r6, #0x3c0
    add r0, r0, r7
    add r1, r6, #0x2dc
    add r2, sp, #0xc
    bl func_0206823c
    ldr r0, [sp, #0x10]
    ldr lr, [sp, #0xc]
    ldr r1, [sp, #0x14]
    smull r3, r2, r0, r0
    smull ip, r0, r1, r1
    smull r10, r7, lr, lr
    mov r1, #0x800
    adds lr, ip, r1
    adc ip, r0, #0x0
    adds r10, r10, r1
    adc r7, r7, #0x0
    adds r3, r3, r1
    mov r10, r10, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    mov r0, lr, lsr #0xc
    orr r10, r10, r7, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    orr r0, r0, ip, lsl #0x14
    add r1, r10, r2
    add r10, r0, r1
    mov r0, r6
    bl func_02028120
    ldr r1, =0x19a0
    mov r3, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r3, ip
    mov r7, r0, asr #0x1f
    mla ip, r7, r1, ip
    mov r2, #0x800
    adds r1, lr, r2
    adc r0, ip, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    smull r1, r0, r7, r7
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r10, r1
    bge L_0218700c
    mov r0, r10
    bl func_02067c34
    mov r1, r0
    mov r0, r7
    bl func_02067ca0
    add r1, sp, #0xc
    mov r3, r9
    add r2, r6, #0x2dc
    bl func_01ff832c
L_0218700c:
    mov r0, r6
    bl func_02028120
    ldr r1, =0xffffd7f6
    mvn r2, #0x0
    umull r9, r7, r0, r1
    mla r7, r0, r2, r7
    mov r0, r0, asr #0x1f
    mla r7, r0, r1, r7
    mov r3, #0x800
    adds r0, r9, r3
    adc r2, r7, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    add r1, sp, #0x0
    add r3, sp, #0xc
    add r2, r6, #0x2a0
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r1, r6, #0x3b4
    ldr r0, [r0, #0x0]
    add r2, sp, #0xc
    bl func_02114658
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_021870e4
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r9, r2, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    mov r2, #0x334
    mov r1, r8
    ldr r0, =data_0214da80
    mov r7, #0x0
    umull ip, r10, r9, r2
    mla r10, r9, r7, r10
    mov r8, r9, asr #0x1f
    mla r10, r8, r2, r10
    adds r2, ip, r3
    ldr r0, [r0, #0x0]
    adc r3, r10, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_02187158
L_021870e4:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1e
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    bne L_02187138
    ldr r1, =0x13d
    mov r0, r6
    add r1, r5, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02187138:
    add r0, r5, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02187158:
    mov r0, r6
    mov r1, r5
    bl func_02029874
    cmp r0, #0x0
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldrh r0, [r6, #0xfc]
    cmp r0, #0xc8
    addls sp, sp, #0x18
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxls lr
    cmp r5, #0x1
    beq L_021871a4
    cmp r5, #0x3
    beq L_021871c8
    cmp r5, #0x4
    beq L_021871ec
    b L_02187210
L_021871a4:
    ldr r1, =0x161
    mov r0, r6
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021871c8:
    ldr r1, =0x163
    mov r0, r6
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021871ec:
    ldr r1, =0x165
    mov r0, r6
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02187210:
    ldr r1, =0x13d
    mov r0, r6
    add r1, r5, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
