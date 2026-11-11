#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026e58();
extern void func_0202a350();
extern void func_02035450();
extern void func_02037130();
extern void func_02039128();
extern void func_02039948();
extern void func_020399a4();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_02114690();
extern void func_ov003_02177c58();
extern char data_0214da80[];
extern char data_02150e58[];
// clang-format off
asm void func_ov003_02175ff8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r5, r0
    mov r4, #0x1
    bl func_02039128
    ldr r0, =data_0214da80
    add r1, r5, #0x3b4
    ldr r0, [r0, #0x0]
    bl func_02114690
    ldr r0, =data_02150e58
    add r1, sp, #0x20
    ldr r2, [r0, #0x4c]
    ldr r3, [r0, #0x58]
    ldr r0, [r0, #0x64]
    str r2, [sp, #0x20]
    str r3, [sp, #0x24]
    str r0, [sp, #0x28]
    add r2, r5, #0x2a0
    add r3, r5, #0x278
    mov r0, #0x5000
    bl func_01ff832c
    mov r0, r5
    mov r1, #0x300
    bl func_02037130
    add r0, r5, #0x100
    ldrsh r1, [r0, #0x52]
    ldr r0, =0x1e3
    cmp r1, r0
    beq L_021760fc
    cmp r1, #0x1e4
    beq L_021760fc
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217616c
    bl func_020a5d54
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_0217616c
    bl func_0204496c
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_0217616c
    mov r0, r5
    bl func_02026e58
    cmp r0, #0x0
    beq L_0217616c
    mov r0, r5
    bl func_0202a350
    cmp r0, #0x1
    bne L_021760dc
    ldr r2, =0x1e3
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    b L_021760ec
L_021760dc:
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1e4
    bl func_0203e5ac
L_021760ec:
    add r1, r5, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0217616c
L_021760fc:
    bl func_020a5d54
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_0217616c
    bl func_0204496c
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_0217616c
    mov r0, r5
    mov r1, #0x1e
    bl func_02035450
    cmp r0, #0x0
    beq L_0217616c
    mov r0, r5
    bl func_020399a4
    cmp r0, #0x0
    beq L_02176154
    ldrsb r1, [r5, #0x88]
    mov r0, #0x4
    bl func_020a5a1c
    mov r0, r5
    bl func_02039948
L_02176154:
    mov r2, #0x0
    mov r0, r5
    mov r1, #0x3a8
    str r2, [r5, #0x48c]
    bl func_0203e5e8
    mov r4, #0x0
L_0217616c:
    ldrh r0, [r5, #0xfc]
    mov ip, #0x1
    mov r1, #0x0
    str ip, [sp, #0x0]
    cmp r0, #0xb4
    movhi r0, #0x1
    str ip, [sp, #0x4]
    movls r0, #0x0
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
    mov r0, #0x30
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str ip, [sp, #0x18]
    ldr r2, =0x1ff
    mov r0, r5
    mov r3, r4
    str ip, [sp, #0x1c]
    bl func_ov003_02177c58
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
