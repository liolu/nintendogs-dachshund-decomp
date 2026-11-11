#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02022e04();
extern void func_02026de0();
extern void func_02028120();
extern void func_02029248();
extern void func_0202a5a8();
extern void func_0202f694();
extern void func_02033dd4();
extern void func_020382c4();
extern void func_0203e5e8();
extern void func_020448ac();
extern void func_020681f8();
extern void func_0206823c();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_02189adc();
extern void func_ov003_0218a0f0();
extern void func_ov003_0218ac1c();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02189794(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    ldr r2, =data_02150e58
    ldr r1, =data_0214da80
    mov r4, r0
    ldr r6, [r2, #0x4c]
    ldr r5, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0xc
    add r2, r4, #0x2dc
    str r6, [sp, #0x0]
    str r5, [sp, #0x4]
    str r3, [sp, #0x8]
    bl func_02114658
    add r0, sp, #0xc
    add r1, r4, #0x2dc
    mov r2, r0
    bl func_0206823c
    ldr r0, =data_0215a064
    add r5, sp, #0x18
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r2, r5
    mov r0, #0x3000
    add r1, sp, #0xc
    bl func_01ff832c
    ldr r1, [sp, #0x10]
    mov r0, #0x3
    mul r0, r1, r0
    ldr r2, [r4, #0x3b8]
    sub r0, r0, #0x5000
    add r0, r2, r0
    str r0, [r4, #0x3b8]
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl func_020681f8
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0xf400
    strgth r1, [r0, #0x2e]
    addle r0, r4, #0x100
    movle r1, #0xc00
    strleh r1, [r0, #0x2e]
    mov r0, r4
    mov r1, #0x1
    bl func_ov003_0218a0f0
    mov r0, r4
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r3, #0x800
    adds r2, r2, r3
    mov r5, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r5, r5, r1, lsl #0x14
    ldr r2, =0x1004
    ldr r0, =data_0214da80
    mov ip, #0x0
    umull r7, r6, r5, r2
    mla r6, r5, ip, r6
    mov lr, r5, asr #0x1f
    mla r6, lr, r2, r6
    adds r2, r7, r3
    ldr r0, [r0, #0x0]
    adc r3, r6, #0x0
    mov r2, r2, lsr #0xc
    add r1, r4, #0x378
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    addeq r0, r4, #0x100
    ldreqh r1, [r0, #0x1c]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1c]
    addne r0, r4, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1c]
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r4, #0x100
    ldrgth r1, [r0, #0x1e]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x1e]
    bgt L_02189934
    add r0, r4, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_02189934:
    mov r0, r4
    bl func_0202f694
    add r0, r4, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x2
    addls r1, r4, #0xb9
    movls r0, #0x1
    swplsb r0, r0, [r1]
    addhi r1, r4, #0xb9
    movhi r0, #0x0
    swphib r0, r0, [r1]
    add r0, r4, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x14
    bls L_0218998c
    ldrsb r0, [r4, #0x88]
    bl func_020448ac
    mov r0, r4
    bl func_ov003_0218ac1c
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218998c:
    mov r0, r4
    bl func_02026de0
    cmp r0, #0x0
    beq L_02189a54
    ldrsb r0, [r4, #0x88]
    bl func_020448ac
    mov r0, r4
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02189a04
L_021899b8:
    b L_021899c8
    b L_021899d8
    b L_021899e8
    b L_021899f8
L_021899c8:
    ldr r1, =0x30f
    mov r0, r4
    bl func_0203e5e8
    b L_02189a04
L_021899d8:
    ldr r1, =0x311
    mov r0, r4
    bl func_0203e5e8
    b L_02189a04
L_021899e8:
    ldr r1, =0x312
    mov r0, r4
    bl func_0203e5e8
    b L_02189a04
L_021899f8:
    ldr r1, =0x313
    mov r0, r4
    bl func_0203e5e8
L_02189a04:
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x1
    bne L_02189a24
    mov r0, r4
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02189a24:
    mov r0, r4
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r4
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02189a54:
    mov r0, r4
    bl func_0202a5a8
    cmp r0, #0x0
    beq L_02189a8c
    ldrsb r0, [r4, #0x88]
    bl func_020448ac
    ldr r1, =0x35a
    mov r0, r4
    bl func_0203e5e8
    mov r0, r4
    bl func_02033dd4
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02189a8c:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x1e]
    cmp r0, #0x14
    addls sp, sp, #0x24
    ldmlsfd sp!, {r4, r5, r6, r7, lr}
    bxls lr
    mov r0, r4
    bl func_ov003_02189adc
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
