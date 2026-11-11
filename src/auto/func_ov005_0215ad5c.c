#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009dec();
extern void func_0203e5ac();
extern void func_020681f8();
extern void func_0206823c();
extern void func_02114658();
extern void func_ov005_0215b238();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov005_0215ad5c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    ldr r2, =data_02150e58
    ldr r1, =data_0214da80
    mov r4, r0
    ldr lr, [r2, #0x4c]
    ldr ip, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0x18
    add r2, r4, #0x2c4
    str lr, [sp, #0x0]
    str ip, [sp, #0x4]
    str r3, [sp, #0x8]
    bl func_02114658
    add r0, sp, #0x18
    add r1, r4, #0x2c4
    mov r2, r0
    bl func_0206823c
    ldr r0, =data_0215a064
    add ip, sp, #0x24
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    mov r2, ip
    mov r0, #0x3000
    add r1, sp, #0x18
    bl func_01ff832c
    ldr r1, [r4, #0x3b8]
    add r0, sp, #0x18
    add r1, r1, #0xa000
    str r1, [r4, #0x3b8]
    add r1, sp, #0x0
    bl func_020681f8
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0x1000
    strgth r1, [r0, #0x2e]
    addle r0, r4, #0x100
    movle r1, #0xf000
    strleh r1, [r0, #0x2e]
    ldr r1, =data_02150e58
    ldr r0, =data_0215a064
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    ldr r0, [r0, #0x0]
    str r3, [sp, #0xc]
    str r1, [sp, #0x14]
    str r2, [sp, #0x10]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0215ae50
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215ae58
L_0215ae50:
    mov r1, #0x0
    b L_0215ae60
L_0215ae58:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215ae60:
    cmp r1, #0x0
    beq L_0215ae84
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_0215ae84
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_0215ae88
L_0215ae84:
    mov r0, #0x0
L_0215ae88:
    cmp r0, #0x0
    beq L_0215af40
    ldrh r0, [r4, #0xfc]
    cmp r0, #0x64
    bls L_0215af40
    add r0, sp, #0xc
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    bl func_02009dec
    cmp r0, #0x1
    beq L_0215aec0
    cmp r0, #0x2
    beq L_0215aef8
    b L_0215af30
L_0215aec0:
    ldr r2, =0x1e1
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x2e]
    b L_0215af40
L_0215aef8:
    ldr r2, =0x1e2
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x2e]
    b L_0215af40
L_0215af30:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
L_0215af40:
    ldr r2, =0x14d2
    mov r0, r4
    add r1, r4, #0x348
    bl func_ov005_0215b238
    add sp, sp, #0x30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
