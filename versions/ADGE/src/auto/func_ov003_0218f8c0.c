#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02022124();
extern void func_02027e54();
extern void func_02028120();
extern void func_02029248();
extern void func_0202f694();
extern void func_0202fa5c();
extern void func_02033dd4();
extern void func_02035fd8();
extern void func_020361ac();
extern void func_0203e5ac();
extern void func_020448ac();
extern void func_020681f8();
extern void func_0206823c();
extern void func_020a5d1c();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_02195e78();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0218f8c0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    bl func_020361ac
    cmp r0, #0x0
    beq L_0218fba8
    ldr r1, =data_0215a064
    mvn r0, #0x9
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x88]
    cmp r1, r0
    ble L_0218f964
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
    ldr r1, =0x1004
    ldr r3, =data_0214da80
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x378
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    movne r0, #0x0
    strne r0, [r4, #0x464]
    bne L_0218f970
L_0218f964:
    ldr r0, [r4, #0x464]
    add r0, r0, #0x1
    str r0, [r4, #0x464]
L_0218f970:
    mov r0, r4
    bl func_0202f694
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    bne L_0218fa38
    ldr r0, =data_0215a064
    ldr ip, =data_02150e58
    ldr r0, [r0, #0x0]
    ldr r3, =data_0214da80
    ldr r0, [r0, #0x1c]
    add r5, sp, #0x4
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r5, [ip, #0x4c]
    ldr lr, [ip, #0x58]
    ldr ip, [ip, #0x64]
    ldr r0, [r3, #0x0]
    add r1, sp, #0x1c
    add r2, r4, #0x2dc
    str r5, [sp, #0x10]
    str lr, [sp, #0x14]
    str ip, [sp, #0x18]
    bl func_02114658
    add r0, sp, #0x1c
    add r1, r4, #0x2dc
    mov r2, r0
    bl func_0206823c
    add r1, sp, #0x1c
    add r2, sp, #0x4
    mov r0, #0x3000
    add r3, r4, #0x3b4
    bl func_01ff832c
    ldr r1, [sp, #0x20]
    ldr r2, [r4, #0x3b8]
    mov r1, r1, asr #0x5
    sub r1, r1, #0x1400
    add r1, r2, r1
    str r1, [r4, #0x3b8]
    add r0, sp, #0x1c
    add r1, sp, #0x10
    bl func_020681f8
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0xf400
    strgth r1, [r0, #0x2e]
    addle r0, r4, #0x100
    movle r1, #0xc00
    strleh r1, [r0, #0x2e]
    b L_0218fa6c
L_0218fa38:
    ldr r0, =data_0215a064
    add lr, r4, #0x3b4
    ldr r0, [r0, #0x0]
    add r3, r4, #0x100
    ldr r0, [r0, #0x1c]
    mov ip, #0x0
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r0, [r4, #0x3b8]
    sub r0, r0, #0x1000
    str r0, [r4, #0x3b8]
    strh ip, [r3, #0x2e]
L_0218fa6c:
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    bne L_0218fad0
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
    ble L_0218fad0
    ldr r0, [r4, #0x48c]
    sub r0, r0, #0x2
    str r0, [r4, #0x48c]
    ldr r0, [r4, #0x48c]
    cmp r0, #0x11
    movlt r0, #0x11
    strlt r0, [r4, #0x48c]
    ldr r0, [r4, #0x468]
    add r0, r0, #0x1
    str r0, [r4, #0x468]
    b L_0218faec
L_0218fad0:
    ldr r0, [r4, #0x468]
    sub r0, r0, #0x2
    str r0, [r4, #0x468]
    ldr r0, [r4, #0x468]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r4, #0x468]
L_0218faec:
    ldr r0, [r4, #0x468]
    cmp r0, #0x28
    ble L_0218fb60
    add r1, r4, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r4, #0x98
    mov r0, #0x9
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0xb6]
    ands r1, r0, #0x20
    bicne r0, r0, #0x20
    addne r1, r4, #0xb6
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_0218fba8
    mov r0, r4
    mov r1, #0x5
    mov r2, #0x19
    bl func_02027e54
    mov r2, #0x0
    str r2, [sp, #0x0]
    ldrsb r1, [r4, #0x88]
    mov r0, r4
    mvn r3, #0x0
    bl func_02022124
    b L_0218fba8
L_0218fb60:
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    bne L_0218fb8c
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x30
    bl func_0203e5ac
    add r1, r4, #0x97
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_0218fba8
L_0218fb8c:
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0218fba8:
    ldr r0, [r4, #0x464]
    cmp r0, #0x2
    addle r1, r4, #0xb9
    movle r0, #0x1
    swpleb r0, r0, [r1]
    addgt r1, r4, #0xb9
    movgt r0, #0x0
    swpgtb r0, r0, [r1]
    mov r0, r4
    bl func_ov003_02195e78
    cmp r0, #0x0
    beq L_0218fbec
    ldrsb r0, [r4, #0x88]
    bl func_020448ac
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0218fbec:
    bl func_020a5d1c
    cmp r0, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_02029248
    mov r0, r4
    bl func_02033dd4
    mov r0, r4
    bl func_0202fa5c
    mov r0, r4
    bl func_02035fd8
    ldrsb r0, [r4, #0x88]
    bl func_020448ac
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
