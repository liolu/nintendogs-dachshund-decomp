#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ed0();
extern void func_02028120();
extern void func_02029874();
extern void func_02037130();
extern void func_02039128();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_02189b1c();
extern void func_ov003_0218a0f0();
extern char data_0214da80[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02185208(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    ldr r3, =data_0215a064
    mov r7, r0
    ldr r3, [r3, #0x0]
    mov r0, #0xc
    ldr r4, [r3, #0x1c]
    smulbb r5, r2, r0
    add r3, r7, #0x30c
    add r0, r4, #0x48
    mov r6, r1
    add r4, r3, r5
    add r8, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    mov r0, #0x400
    add r3, sp, #0xc
    mov r1, r8
    mov r2, r4
    rsb r0, r0, #0x0
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r1, r7, #0x3f0
    ldr r0, [r0, #0x0]
    add r1, r1, r5
    add r2, sp, #0xc
    bl func_02114658
    mov r0, r7
    bl func_02028120
    ldr r5, =0xffffcff4
    mvn ip, #0x0
    umull r10, r9, r0, r5
    mov lr, #0x800
    mla r9, r0, ip, r9
    mov r8, r0, asr #0x1f
    adds r10, r10, lr
    mla r9, r8, r5, r9
    adc r5, r9, #0x0
    mov r0, r10, lsr #0xc
    add r1, sp, #0x0
    add r2, r7, #0x2a0
    add r3, sp, #0xc
    orr r0, r0, r5, lsl #0x14
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r1, r7, #0x278
    ldr r0, [r0, #0x0]
    add r2, sp, #0xc
    bl func_02114658
    mov r0, r7
    bl func_02039128
    cmp r6, #0x4
    bgt L_021852e8
    mov r0, r7
    mov r1, #0x300
    bl func_02037130
L_021852e8:
    mov r0, r7
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ed0
    mov r0, r7
    mov r1, #0x1
    bl func_ov003_0218a0f0
    ldr r1, =data_0215a064
    add r0, r7, #0x100
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
    addgt r0, r7, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x1e]
    bgt L_0218535c
    add r0, r7, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0218535c:
    mov r0, r7
    bl func_ov003_02189b1c
    add r3, r7, #0xb9
    mov r2, #0x1
    mov r0, r7
    mov r1, r6
    swpb r2, r2, [r3]
    bl func_02029874
    ldr r0, =0x4000304
    mov r5, #0x0
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02185400
    mov r0, r7
    bl func_02028120
    mov r6, r0
    mov r0, r7
    bl func_02028120
    smull r3, r2, r0, r6
    mov r1, #0x800
    adds r3, r3, r1
    adc r0, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    mov r0, #0x334
    umull r2, r6, r3, r0
    adds r7, r2, r1
    mov r2, r5
    mla r6, r3, r2, r6
    mov r2, r3, asr #0x1f
    mla r6, r2, r0, r6
    ldr r0, =data_0214da80
    adc r3, r6, #0x0
    mov r2, r7, lsr #0xc
    ldr r0, [r0, #0x0]
    mov r1, r4
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    movne r5, #0x1
L_02185400:
    mov r0, r5
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
