#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020142a4();
extern void func_02021ff0();
extern void func_02022e04();
extern void func_020234f8();
extern void func_02028120();
extern void func_02028ec4();
extern void func_02029248();
extern void func_0202937c();
extern void func_02029874();
extern void func_020298c0();
extern void func_0202a0bc();
extern void func_0202a520();
extern void func_0202c55c();
extern void func_0202db08();
extern void func_0202df7c();
extern void func_0202ed48();
extern void func_0203614c();
extern void func_0203df68();
extern void func_0203e5e8();
extern void func_02114564();
extern void func_ov003_02189ca8();
extern void func_ov003_0218a0f0();
extern void func_ov003_0218a244();
extern void func_ov003_0218c400();
extern char data_0214da80[];
extern char data_0215a04c[];
extern char data_0215a064[];
extern char data_ov003_021987fc[];
// clang-format off
asm void func_ov003_02188bb0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, r1
    ldrsb r1, [sp, #0x2c]
    mov r7, r0
    mov r5, r2
    mov r9, r3
    mov r4, #0x7
    bl func_ov003_0218a244
    mov r0, r7
    mov r1, #0x1
    bl func_ov003_0218a0f0
    mov r0, r7
    bl func_02028120
    mov r8, r0
    mov r0, r7
    bl func_02028120
    smull ip, r3, r0, r8
    mov r2, #0x800
    adds ip, ip, r2
    ldr r0, =data_0214da80
    adc r3, r3, #0x0
    mov ip, ip, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    ldr r3, [sp, #0x28]
    ldr r0, [r0, #0x0]
    smull lr, r3, ip, r3
    adds r2, lr, r2
    adc r3, r3, #0x0
    mov r2, r2, lsr #0xc
    mov r1, r9
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    addeq r0, r7, #0x100
    ldreqh r1, [r0, #0x1c]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1c]
    addne r0, r7, #0x100
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
    addgt r0, r7, #0x100
    ldrgth r1, [r0, #0x1e]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x1e]
    bgt L_02188ca4
    add r0, r7, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_02188ca4:
    mov r0, r7
    mov r1, r6
    bl func_ov003_02189ca8
    add r0, r7, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x2
    addls r1, r7, #0xb9
    movls r0, #0x1
    swplsb r0, r0, [r1]
    addhi r1, r7, #0xb9
    movhi r0, #0x0
    swphib r0, r0, [r1]
    ldr r1, [r7, #0x488]
    cmp r6, #0x1
    add r1, r1, #0x1
    add r0, r7, #0x100
    str r1, [r7, #0x488]
    ldrh r0, [r0, #0x1e]
    moveq r4, #0x3
    cmp r0, #0x28
    bls L_02188d04
    ldrsb r1, [sp, #0x2c]
    mov r0, r7
    bl func_020142a4
L_02188d04:
    mov r0, r7
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_02188d74
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x11
    beq L_02188d6c
    ldrsh r1, [r7, #0xf0]
    ldrb r2, [r7, #0xa5]
    mov r0, r7
    sub r1, r1, #0xc
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020234f8
    mov r1, r0
    mov r0, r7
    bl func_0203df68
    add r1, r6, #0x1
    mov r0, r7
    and r2, r1, #0xff
    mov r1, #0xe
    bl func_02028ec4
    b L_02188d74
L_02188d6c:
    mov r0, r7
    bl func_02029248
L_02188d74:
    mov r0, r7
    mov r1, r6
    bl func_0202c55c
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r7
    bl func_0203614c
    cmp r0, #0x0
    beq L_02188db0
    mov r0, r7
    bl func_0202a520
    cmp r0, #0x0
    beq L_02188dc8
L_02188db0:
    mov r0, r7
    mov r1, r6
    bl func_ov003_0218c400
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188dc8:
    ldrsb r0, [r7, #0x88]
    bl func_02021ff0
    cmp r0, #0x0
    beq L_02188df0
    mov r0, r7
    mov r1, r6
    bl func_0202937c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188df0:
    ldrh r0, [r7, #0xfc]
    cmp r0, #0x2
    bne L_02188e38
    add r0, r7, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x0
    beq L_02188e38
    mov r0, r7
    bl func_0202a0bc
    ldr r1, =0x13d
    mov r0, r7
    add r1, r6, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188e38:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x14
    bhi L_02188e5c
    ldr r1, =0x4000304
    ldrh r1, [r1, #0x0]
    and r1, r1, #0x8000
    movs r1, r1, asr #0xf
    beq L_02188e7c
L_02188e5c:
    add r0, r6, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188e7c:
    ldr r1, =data_0215a064
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x84]
    ands r1, r1, #0x2
    bne L_02188e98
    cmp r0, #0x1
    bls L_02188ebc
L_02188e98:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_020298c0
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
L_02188ebc:
    mov r0, r7
    bl func_0202df7c
    cmp r0, #0x0
    movne r0, #0x0
    bne L_02188f8c
    ldr r1, =data_ov003_021987fc
    ldr r0, [r7, #0x488]
    ldrh r5, [r1, #0x0]
    ldrh r4, [r1, #0x2]
    ldrh r3, [r1, #0x4]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x8]
    strh r3, [sp, #0x4]
    strh r5, [sp, #0x0]
    strh r4, [sp, #0x2]
    strh r1, [sp, #0x8]
    strh r2, [sp, #0x6]
    ldrsb r2, [r7, #0x8e]
    ldrsb r1, [r7, #0x8b]
    add r3, sp, #0x0
    mov r2, r2, lsl #0x1
    ldrh r2, [r3, r2]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02188f64
L_02188f20:
    b L_02188f64
    b L_02188f58
    b L_02188f58
    b L_02188f64
    b L_02188f48
    b L_02188f38
L_02188f38:
    add r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    b L_02188f64
L_02188f48:
    add r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    b L_02188f64
L_02188f58:
    sub r1, r2, #0x12c
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
L_02188f64:
    ldr r1, =data_0215a04c
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0xa
    subeq r1, r2, #0x12c
    moveq r1, r1, lsl #0x10
    moveq r2, r1, lsr #0x10
    cmp r0, r2
    movgt r0, #0x1
    movle r0, #0x0
L_02188f8c:
    cmp r0, #0x0
    beq L_0218903c
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_02189024
L_02188fa0:
    b L_02189024
    b L_02189024
    b L_02189024
    b L_02189024
    b L_02189024
    b L_02188fc4
    b L_02188fdc
    b L_02188ff4
    b L_0218900c
L_02188fc4:
    ldr r1, =0x381
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188fdc:
    ldr r1, =0x382
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02188ff4:
    ldr r1, =0x383
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0218900c:
    mov r0, r7
    mov r1, #0x384
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_02189024:
    ldr r1, =0x385
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0218903c:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x2
    bls L_02189068
    mov r0, r7
    mov r1, r6
    bl func_0202db08
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
L_02189068:
    add r0, r7, #0x100
    ldrh r2, [r0, #0x1e]
    mov r0, r7
    mov r1, r6
    bl func_0202ed48
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r7
    mov r1, r6
    bl func_02029874
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
