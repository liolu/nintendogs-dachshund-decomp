#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009d50();
extern void func_0203e280();
extern void func_020695f0();
extern void func_02069634();
extern void func_02092ee8();
extern void func_ov004_02158de8();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov004_02158908(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    ldr r2, =data_02150330
    ldr r1, =data_0214b480
    mov r4, r0
    ldr lr, [r2, #0x4c]
    ldr ip, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0x18
    add r2, r4, #0x2dc
    str lr, [sp, #0x0]
    str ip, [sp, #0x4]
    str r3, [sp, #0x8]
    bl func_02092ee8
    add r0, sp, #0x18
    add r1, r4, #0x2dc
    mov r2, r0
    bl func_02069634
    ldr r0, =data_02153720
    add ip, sp, #0x24
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    mov r2, ip
    mov r0, #0x3000
    add r1, sp, #0x18
    bl func_01ff832c
    ldr r1, [r4, #0x3dc]
    add r0, sp, #0x18
    add r1, r1, #0xa000
    str r1, [r4, #0x3dc]
    add r1, sp, #0x0
    bl func_020695f0
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0x1000
    strgth r1, [r0, #0x8]
    addle r0, r4, #0x100
    movle r1, #0xf000
    strleh r1, [r0, #0x8]
    ldr r1, =data_02150330
    ldr r0, =data_02153720
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    ldr r0, [r0, #0x0]
    str r3, [sp, #0xc]
    str r1, [sp, #0x14]
    str r2, [sp, #0x10]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_021589fc
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02158a04
L_021589fc:
    mov r1, #0x0
    b L_02158a0c
L_02158a04:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_02158a0c:
    cmp r1, #0x0
    beq L_02158a30
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_02158a30
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_02158a34
L_02158a30:
    mov r0, #0x0
L_02158a34:
    cmp r0, #0x0
    beq L_02158af0
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x64
    bls L_02158af0
    add r0, sp, #0xc
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    bl func_02009d50
    cmp r0, #0x1
    beq L_02158a70
    cmp r0, #0x2
    beq L_02158aa8
    b L_02158ae0
L_02158a70:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x1e0
    bl func_0203e280
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x8]
    b L_02158af0
L_02158aa8:
    ldr r2, =0x1e1
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x8]
    b L_02158af0
L_02158ae0:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
L_02158af0:
    ldr r2, =0x14d2
    mov r0, r4
    add r1, r4, #0x360
    bl func_ov004_02158de8
    add sp, sp, #0x30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
