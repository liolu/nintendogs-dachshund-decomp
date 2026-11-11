#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ed0();
extern void func_02028120();
extern void func_02029874();
extern void func_0202df7c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_02067c34();
extern void func_02067ca0();
extern void func_0206823c();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_0218414c();
extern void func_ov003_0218a0f0();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02183c34(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r1, =data_0214da80
    mov r4, r0
    ldr r0, [r1, #0x0]
    add r1, r4, #0x420
    add r2, r4, #0x360
    bl func_02114658
    add r2, sp, #0x0
    add r0, r4, #0x420
    add r1, r4, #0x348
    bl func_0206823c
    ldr r3, [sp, #0x8]
    ldr r6, [sp, #0x0]
    smull r2, r1, r3, r3
    mov r3, #0x800
    adds r5, r2, r3
    smull r2, ip, r6, r6
    adc r1, r1, #0x0
    adds lr, r2, r3
    mov r2, r5, lsr #0xc
    ldr r0, [sp, #0x4]
    adc ip, ip, #0x0
    smull r6, r5, r0, r0
    adds r3, r6, r3
    mov r6, lr, lsr #0xc
    adc r0, r5, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    orr r6, r6, ip, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r3
    mov r0, r4
    add r6, r2, r1
    bl func_02028120
    ldr r1, =0x19a0
    mov r2, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r0, #0x800
    adds r2, r5, r0
    adc r1, r3, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    smull r2, r1, r5, r5
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r6, r1
    bge L_02183d2c
    mov r0, r6
    bl func_02067c34
    mov r1, r0
    mov r0, r5
    bl func_02067ca0
    add r1, sp, #0x0
    add r2, r4, #0x348
    add r3, r4, #0x420
    bl func_01ff832c
L_02183d2c:
    add r0, r4, #0x420
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_ov003_0218414c
    ldrsb r0, [r4, #0x95]
    cmp r0, #0x1
    beq L_02183d6c
    cmp r0, #0x2
    beq L_02183d9c
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    b L_02183dc8
L_02183d6c:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x52]
    ldr r2, =0x15e
    cmp r1, r2
    beq L_02183dc8
    ldr r0, =0x15f
    cmp r1, r0
    beq L_02183dc8
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    b L_02183dc8
L_02183d9c:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x52]
    cmp r1, #0x160
    beq L_02183dc8
    ldr r0, =0x161
    cmp r1, r0
    beq L_02183dc8
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x160
    bl func_0203e5ac
L_02183dc8:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02183ea0
    mov r0, r4
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x802
    ldr r3, =data_0214da80
    umull r2, r6, r5, r1
    adds ip, r2, r0
    mov r2, #0x0
    mla r6, r5, r2, r6
    mov r2, r5, asr #0x1f
    mla r6, r2, r1, r6
    ldr r0, [r3, #0x0]
    adc r3, r6, #0x0
    mov r2, ip, lsr #0xc
    add r1, r4, #0x360
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02183ea0
    mov r0, #0x0
    str r0, [r4, #0x474]
    ldr r1, [r4, #0x478]
    ldr r0, =data_0215a064
    add r1, r1, #0x1
    str r1, [r4, #0x478]
    ldr r0, [r0, #0x0]
    ldr r1, [r4, #0x47c]
    ldr r2, [r0, #0x94]
    ldr r0, =data_0215a064
    cmp r2, #0x0
    rsble r2, r2, #0x0
    add r1, r1, r2
    str r1, [r4, #0x47c]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r4, #0x47c]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r0, r1
    str r0, [r4, #0x47c]
    b L_02183eac
L_02183ea0:
    ldr r0, [r4, #0x474]
    add r0, r0, #0x1
    str r0, [r4, #0x474]
L_02183eac:
    mov r0, r4
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ed0
    mov r0, r4
    mov r1, #0x1
    bl func_ov003_0218a0f0
    ldr r1, =data_0215a064
    add r0, r4, #0x100
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
    addgt r0, r4, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x1e]
    bgt L_02183f20
    add r0, r4, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_02183f20:
    add r1, r4, #0xb9
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x474]
    cmp r0, #0x5
    ble L_02183f50
    mov r0, r4
    mov r1, #0xec
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02183f50:
    mov r0, r4
    bl func_0202df7c
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r4
    mov r1, #0x0
    bl func_02029874
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldrsb r1, [r4, #0x8b]
    cmp r1, #0x1
    bne L_02184038
    ldr r0, [r4, #0x478]
    cmp r0, #0x3c
    ble L_02184038
    ldrsb r0, [r4, #0x95]
    mov r1, #0x0
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02183fcc
L_02183fb0:
    b L_02183fcc
    b L_0218400c
    b L_02184010
    b L_02183fcc
    b L_02183fcc
    b L_0218400c
    b L_02184010
L_02183fcc:
    ldr r2, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02184008
    cmp r0, #0x1
    moveq r1, #0x1
    b L_02184014
L_02184008:
    mov r1, #0x0
L_0218400c:
    b L_02184014
L_02184010:
    mov r1, #0x1
L_02184014:
    ldr r2, =0x3a2
    mov r0, r4
    add r1, r1, r2
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02184038:
    ldr r0, [r4, #0x478]
    cmp r0, #0xc8
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, lr}
    bxle lr
    cmp r1, #0x1
    beq L_0218407c
    cmp r1, #0x4
    beq L_0218406c
    cmp r1, #0x5
    bne L_02184074
    mov r0, #0x0
    b L_02184080
L_0218406c:
    mov r0, #0x1
    b L_02184080
L_02184074:
    mov r0, #0x2
    b L_02184080
L_0218407c:
    mov r0, #0x3
L_02184080:
    ldrsb r2, [r4, #0x95]
    mov r1, #0x0
    cmp r2, #0x6
    addls pc, pc, r2, lsl #0x2
    b L_021840b0
L_02184094:
    b L_021840b0
    b L_021840f0
    b L_021840f4
    b L_021840b0
    b L_021840b0
    b L_021840f0
    b L_021840f4
L_021840b0:
    ldr r3, =data_0214da84
    ldr r2, =0x10dcd
    ldr r5, [r3, #0x0]
    ldr r3, [r5, #0x0]
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    str r3, [r5, #0x0]
    movs r2, r2, lsr #0x10
    beq L_021840ec
    cmp r2, #0x1
    moveq r1, #0x1
    b L_021840f8
L_021840ec:
    mov r1, #0x0
L_021840f0:
    b L_021840f8
L_021840f4:
    mov r1, #0x1
L_021840f8:
    mov r0, r0, lsl #0x1
    add r0, r0, #0x39c
    add r0, r1, r0
    mov r1, r0, lsl #0x10
    mov r0, r4
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
