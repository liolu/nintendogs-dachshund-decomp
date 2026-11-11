#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009d50();
extern void func_0203e280();
extern void func_020695f0();
extern void func_02069634();
extern void func_02092ee8();
extern void func_ov002_021868b4();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_02185dbc(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x38
    ldr r2, =data_02150330
    ldr r1, =data_0214b480
    mov r4, r0
    ldr lr, [r2, #0x4c]
    ldr ip, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0x20
    add r2, r4, #0x2dc
    str lr, [sp, #0x14]
    str ip, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl func_02092ee8
    add r0, sp, #0x20
    add r1, r4, #0x2dc
    mov r2, r0
    bl func_02069634
    ldr r0, =data_02153720
    add ip, sp, #0x2c
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    mov r2, ip
    mov r0, #0x3000
    add r1, sp, #0x20
    bl func_01ff832c
    ldr r1, [r4, #0x3dc]
    add r0, sp, #0x20
    add r1, r1, #0xa000
    str r1, [r4, #0x3dc]
    add r1, sp, #0x14
    bl func_020695f0
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0x1000
    strgth r1, [r0, #0x8]
    addle r0, r4, #0x100
    movle r1, #0xf000
    strleh r1, [r0, #0x8]
    ldr r1, =0x14d2
    ldr r2, =0x1ff
    str r1, [sp, #0x0]
    mov ip, #0x2
    mov r0, r4
    add r3, r4, #0x360
    mov r1, #0x0
    str ip, [sp, #0x4]
    bl func_ov002_021868b4
    ldr r1, =data_02150330
    add r0, sp, #0x8
    ldr lr, [r1, #0x54]
    ldr ip, [r1, #0x60]
    ldr r3, [r1, #0x6c]
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    str lr, [sp, #0x8]
    str ip, [sp, #0xc]
    str r3, [sp, #0x10]
    bl func_02009d50
    cmp r0, #0x1
    beq L_02185ed0
    cmp r0, #0x2
    beq L_02185f10
    b L_02185f50
L_02185ed0:
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
    add sp, sp, #0x38
    add r0, r4, #0x100
    strh r2, [r0, #0x8]
    ldmfd sp!, {r4, lr}
    bx lr
L_02185f10:
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
    add sp, sp, #0x38
    add r0, r4, #0x100
    strh r2, [r0, #0x8]
    ldmfd sp!, {r4, lr}
    bx lr
L_02185f50:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    add sp, sp, #0x38
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
