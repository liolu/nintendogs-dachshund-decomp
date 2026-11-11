#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026e30();
extern void func_0202a2fc();
extern void func_02035294();
extern void func_02036fbc();
extern void func_02038ef8();
extern void func_02039708();
extern void func_02039764();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_02092f20();
extern void func_02105dbc();
extern void func_021060cc();
extern void func_ov002_0217582c();
extern char data_0214b480[];
extern char data_02150330[];
// clang-format off
asm void func_ov002_02173b90(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r5, r0
    mov r4, #0x1
    bl func_02038ef8
    ldr r0, =data_0214b480
    add r1, r5, #0x3d8
    ldr r0, [r0, #0x0]
    bl func_02092f20
    ldr r0, =data_02150330
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
    bl func_02036fbc
    add r0, r5, #0x100
    ldrsh r1, [r0, #0x50]
    ldr r0, =0x1e2
    cmp r1, r0
    beq L_02173c98
    ldr r0, =0x1e3
    cmp r1, r0
    beq L_02173c98
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02173d08
    bl func_021060cc
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02173d08
    bl func_02044630
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02173d08
    mov r0, r5
    bl func_02026e30
    cmp r0, #0x0
    beq L_02173d08
    mov r0, r5
    bl func_0202a2fc
    cmp r0, #0x1
    bne L_02173c78
    ldr r2, =0x1e2
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    b L_02173c88
L_02173c78:
    ldr r2, =0x1e3
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
L_02173c88:
    add r1, r5, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02173d08
L_02173c98:
    bl func_021060cc
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02173d08
    bl func_02044630
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02173d08
    mov r0, r5
    mov r1, #0x1e
    bl func_02035294
    cmp r0, #0x0
    beq L_02173d08
    mov r0, r5
    bl func_02039764
    cmp r0, #0x0
    beq L_02173cf0
    ldrsb r1, [r5, #0x88]
    mov r0, #0x4
    bl func_02105dbc
    mov r0, r5
    bl func_02039708
L_02173cf0:
    mov r2, #0x0
    mov r0, r5
    mov r1, #0x3a8
    str r2, [r5, #0x4b0]
    bl func_0203e2b8
    mov r4, #0x0
L_02173d08:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
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
    bl func_ov002_0217582c
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
