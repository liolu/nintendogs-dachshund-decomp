#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj();
extern void _u32_div_f();
extern void func_020648c0();
extern void func_02064ab8();
extern void func_0206e1b8();
extern void func_02072e68();
extern void func_020f7f2c();
extern void func_020f81b8();
extern void func_020f8d5c();
extern char data_02147400[];
// clang-format off
asm void func_020f8468(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x13c
    str r0, [sp, #0x8]
    mov r0, #0x0
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x8]
    str r3, [sp, #0x14]
    ldr r3, [sp, #0x18]
    add r0, r0, #0x320
    ldr r4, =data_02147400
    str r0, [sp, #0x1c]
    mov r0, r1
    str r3, [sp, #0xb8]
    ldr r3, [sp, #0x160]
    add r7, r0, #0xc
    ldr r0, [sp, #0x1c]
    ldr r4, [r4, #0x0]
    add r10, r0, #0xc
    str r3, [sp, #0x160]
    ldr r3, [sp, #0x18]
    str r1, [sp, #0xc]
    str r2, [sp, #0x10]
    add r1, sp, #0xa4
    mov r0, r7
    mov r2, #0x4
    str r4, [sp, #0xec]
    ldr r11, [sp, #0x168]
    mov r9, r10
    str r3, [sp, #0x20]
    mov r6, r3
    str r3, [sp, #0x24]
    bl func_0206e1b8
    ldr r0, =data_02147400
    add r7, r7, #0x4
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x3c]
    cmp r0, #0x0
    bls L_020f85ac
    mov r0, #0x0
    mov r8, #0x2
    str r0, [sp, #0x4c]
L_020f850c:
    ldr r4, [sp, #0x4c]
    mov r5, r4
L_020f8514:
    mov r0, r7
    add r1, sp, #0xa8
    mov r2, r8
    add r3, sp, #0xa4
    bl func_020f7f2c
    ldrsh r1, [sp, #0xa8]
    add r7, r7, #0x1
    cmp r1, #0x0
    rsblt r0, r1, #0x0
    movge r0, r1
    cmp r0, r4
    ble L_020f8550
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    mov r4, r1
L_020f8550:
    ldrsh r1, [sp, #0xaa]
    cmp r1, #0x0
    rsblt r0, r1, #0x0
    movge r0, r1
    cmp r0, r4
    ble L_020f8574
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    mov r4, r1
L_020f8574:
    add r6, r6, #0x2
    add r5, r5, #0x2
    cmp r5, #0xc8
    blt L_020f8514
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0x24]
    str r4, [r1, r0, lsl #0x2]
    add r0, r0, #0x1
    str r0, [sp, #0x24]
    ldr r0, =data_02147400
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x3c]
    cmp r6, r0
    blo L_020f850c
L_020f85ac:
    mov r8, #0x0
    mov r7, r8
    mov r4, r8
    mov r5, r8
    add lr, sp, #0xb8
    str r8, [sp, #0x50]
    mov r3, #0x1
    ldr r0, =0x3feb
L_020f85cc:
    cmp r8, #0x0
    bne L_020f861c
    ldr r2, [sp, #0x8]
    mov r1, r4, lsl #0x2
    ldr r2, [r2, r4, lsl #0x2]
    cmp r2, r0
    bge L_020f867c
    ldr r2, [sp, #0x8]
    add r2, r2, r1
    ldr r1, [r2, #0x4]
    cmp r1, r0
    ble L_020f867c
    ldr r1, [r2, #0x8]
    cmp r1, r0
    ble L_020f867c
    ldr r1, [sp, #0x160]
    mov r8, r3
    cmp r7, r1
    strne r5, [lr, r7, lsl #0x2]
    b L_020f867c
L_020f861c:
    mov r2, r7, lsl #0x2
    ldr r1, [lr, r7, lsl #0x2]
    sub r1, r6, r1
    cmp r1, #0x320
    blo L_020f867c
    ldr ip, [sp, #0x8]
    mov r1, r4, lsl #0x2
    ldr ip, [ip, r4, lsl #0x2]
    cmp ip, #0x1000
    bge L_020f867c
    ldr ip, [sp, #0x8]
    add r1, ip, r1
    ldr r1, [r1, #0x4]
    cmp r1, #0x1000
    bge L_020f867c
    ldr r1, [sp, #0x160]
    ldr r8, [sp, #0x50]
    cmp r7, r1
    addne r1, sp, #0xec
    strne r5, [r1, r2]
    addeq r1, sp, #0xec
    addeq r1, r1, r2
    addne r7, r7, #0x1
    streq r5, [r1, #-0x4]
L_020f867c:
    add r5, r5, #0xc8
    add r4, r4, #0x1
    cmp r4, #0xc6
    blt L_020f85cc
    cmp r8, #0x0
    beq L_020f86b0
    ldr r0, [sp, #0x160]
    add r1, sp, #0xec
    cmp r7, r0
    subhs r7, r0, #0x1
    ldr r0, [sp, #0x3c]
    str r0, [r1, r7, lsl #0x2]
    add r7, r7, #0x1
L_020f86b0:
    ldr r6, [sp, #0xec]
    cmp r7, #0x0
    moveq r0, #0x0
    ldr r5, [sp, #0xb8]
    streq r0, [sp, #0xbc]
    moveq r7, #0x1
    cmp r7, #0x1
    sub r0, r6, r5
    bne L_020f8760
    cmp r0, #0x3e80
    blo L_020f8760
    ldr r2, =0x10624dd3
    ldr r3, =0xfa0
    umull r1, r4, r0, r2
    umull r1, r2, r0, r2
    mov r2, r2, lsr #0x8
    umull r1, r2, r3, r2
    sub r2, r0, r1
    ldr r1, =0xf9f
    mov r4, r4, lsr #0x8
    cmp r2, r1
    addhi r4, r4, #0x1
    mov r1, r4
    bl _u32_div_f
    cmp r4, #0x0
    mov r7, #0x0
    bls L_020f8758
    add r3, sp, #0xec
    add r2, sp, #0xb8
L_020f8724:
    sub r1, r4, #0x1
    cmp r7, r1
    streq r6, [r3, r7, lsl #0x2]
    beq L_020f874c
    add r1, r7, #0x1
    mla r1, r0, r1, r5
    bic r8, r1, #0x1
    add r1, r2, r7, lsl #0x2
    str r8, [r3, r7, lsl #0x2]
    str r8, [r1, #0x4]
L_020f874c:
    add r7, r7, #0x1
    cmp r7, r4
    blo L_020f8724
L_020f8758:
    mov r0, #0x1
    str r0, [sp, #0x18]
L_020f8760:
    ldr r0, [sp, #0xc]
    mov r5, #0x0
    add r6, r0, #0xc
    add r1, sp, #0xa4
    mov r0, r6
    mov r2, #0x4
    str r5, [sp, #0x48]
    bl func_0206e1b8
    ldr r0, [sp, #0xb8]
    add r6, r6, #0x4
    cmp r0, #0x0
    bls L_020f87c0
    add r8, sp, #0xac
    mov r4, #0x2
L_020f8798:
    mov r0, r6
    mov r1, r8
    mov r2, r4
    add r3, sp, #0xa4
    bl func_020f7f2c
    ldr r0, [sp, #0xb8]
    add r5, r5, #0x2
    add r6, r6, #0x1
    cmp r5, r0
    blo L_020f8798
L_020f87c0:
    ldr r0, [sp, #0x48]
    mov r4, #0x0
    add r0, r0, #0x1
    str r0, [sp, #0x48]
    mov r0, #0x4
    str r0, [sp, #0x80]
    mov r0, #0x1f40
    str r0, [sp, #0x78]
    mov r0, #0x2
    str r0, [sp, #0x54]
    mov r0, #0x1
    str r0, [sp, #0x58]
    mov r0, #0x14
    str r0, [sp, #0x60]
    mov r0, #0xff
    str r4, [sp, #0x74]
    str r4, [sp, #0x5c]
    str r0, [sp, #0x68]
    str r4, [sp, #0x6c]
    str r4, [sp, #0x70]
    str r4, [sp, #0x64]
    str r4, [sp, #0x84]
    b L_020f8aec
L_020f881c:
    ldr r2, [sp, #0x54]
    mov r0, r6
    add r1, sp, #0xb0
    add r3, sp, #0xa4
    ldr r8, [sp, #0x20]
    bl func_020f7f2c
    cmp r11, #0x1
    add r6, r6, #0x1
    bne L_020f8864
    ldrsh r2, [sp, #0xb0]
    mov r1, r4, lsl #0x1
    add r0, r4, #0x1
    strh r2, [r10, r1]
    mov r0, r0, lsl #0x1
    add r4, r4, #0x2
    ldrsh r1, [sp, #0xb2]
    strh r1, [r10, r0]
    b L_020f888c
L_020f8864:
    ldrsh r0, [sp, #0xb0]
    add r1, r9, r4
    add r2, r4, #0x1
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
    add r1, r9, r2
    add r4, r4, #0x2
    ldrsh r0, [sp, #0xb2]
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
L_020f888c:
    ldr r0, [sp, #0x48]
    add r1, sp, #0xb8
    ldr r0, [r1, r0, lsl #0x2]
    add r5, r5, #0x2
    cmp r5, r0
    bne L_020f8aec
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_020f89b0
    cmp r11, #0x1
    bne L_020f8938
    ldr r0, [sp, #0x48]
    cmp r0, #0x1
    beq L_020f88e8
    ldr r0, =0x7fff
    ldr r1, [sp, #0x5c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x58]
    ldr r2, [sp, #0x60]
    str r0, [sp, #0x4]
    mov r0, r10
    mov r3, r1
    bl func_020f8d5c
L_020f88e8:
    ldr r0, [sp, #0x48]
    cmp r0, r7
    beq L_020f89b0
    add r1, sp, #0xec
    add r0, r1, r0, lsl #0x2
    ldr r1, [r0, #-0x4]
    ldr r0, [sp, #0x48]
    add r2, sp, #0xb8
    add r0, r2, r0, lsl #0x2
    ldr r2, [r0, #-0x4]
    ldr r3, =0x7fff
    sub r2, r1, r2
    ldr r1, [sp, #0x64]
    mov r0, r10
    str r1, [sp, #0x0]
    ldr r1, [sp, #0x58]
    str r1, [sp, #0x4]
    sub r1, r2, #0x14
    bl func_020f8d5c
    b L_020f89b0
L_020f8938:
    ldr r0, [sp, #0x48]
    cmp r0, #0x1
    beq L_020f8968
    ldr r0, [sp, #0x68]
    ldr r1, [sp, #0x6c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x6c]
    ldr r2, [sp, #0x60]
    str r0, [sp, #0x4]
    mov r0, r9
    mov r3, r1
    bl func_020f8d5c
L_020f8968:
    ldr r0, [sp, #0x48]
    cmp r0, r7
    beq L_020f89b0
    add r1, sp, #0xec
    add r0, r1, r0, lsl #0x2
    ldr r1, [r0, #-0x4]
    ldr r0, [sp, #0x48]
    add r2, sp, #0xb8
    add r0, r2, r0, lsl #0x2
    ldr r2, [r0, #-0x4]
    ldr r3, [sp, #0x68]
    sub r2, r1, r2
    ldr r1, [sp, #0x70]
    mov r0, r9
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    sub r1, r2, #0x14
    bl func_020f8d5c
L_020f89b0:
    ldr r0, [sp, #0x160]
    cmp r8, r0
    bhs L_020f8ab0
    ldr r0, [sp, #0x48]
    add r1, sp, #0xec
    add r0, r1, r0, lsl #0x2
    ldr r1, [sp, #0x48]
    add r2, sp, #0xb8
    add r1, r2, r1, lsl #0x2
    ldr r3, [r1, #-0x4]
    ldr r0, [r0, #-0x4]
    ldr r2, [sp, #0x1c]
    ldr r1, =0xffff
    sub r0, r0, r3
    str r0, [sp, #0x30]
    mov r0, r2
    and r1, r2, r1
    mov r0, r0, lsr #0x10
    str r1, [sp, #0x34]
    str r0, [sp, #0x38]
L_020f8a00:
    ldr r0, [sp, #0x74]
    ldrb r2, [sp, #0x164]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x30]
    ldr r3, [sp, #0x78]
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x1c]
    mov r1, r11
    bl func_020f81b8
    ldr r0, [sp, #0x10]
    bl _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj
    cmp r0, #0x0
    beq L_020f8aa0
    ldr r0, [r0, #0x0]
    bl func_02072e68
    str r0, [sp, #0x7c]
    cmp r0, #0x0
    beq L_020f8aa0
    and r1, r8, #0xff
    str r1, [sp, #0x40]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x40]
    add r3, sp, #0x120
    bl func_02064ab8
    ldr r3, [sp, #0x80]
    add r1, sp, #0x120
    swpb r3, r3, [r1]
    add r1, sp, #0xa4
    ldr r3, [sp, #0x34]
    ldr r0, [sp, #0x7c]
    strh r3, [r1, #0x7e]
    ldr r3, [sp, #0x38]
    ldr r2, [sp, #0x40]
    strh r3, [r1, #0x80]
    add r1, sp, #0x100
    add r1, r1, #0x26
    swpb r3, r8, [r1]
    ldr r1, [sp, #0x14]
    add r3, sp, #0x120
    bl func_020648c0
L_020f8aa0:
    ldr r0, [sp, #0x160]
    add r8, r8, r7
    cmp r8, r0
    blo L_020f8a00
L_020f8ab0:
    ldr r0, [sp, #0x20]
    cmp r11, #0x1
    add r0, r0, #0x1
    and r0, r0, #0xff
    str r0, [sp, #0x20]
    addeq r0, r10, r4, lsl #0x1
    streq r0, [sp, #0x1c]
    addeq r10, r0, #0xc
    addne r0, r9, r4
    strne r0, [sp, #0x1c]
    addne r9, r0, #0xc
    ldr r0, [sp, #0x48]
    ldr r4, [sp, #0x84]
    add r0, r0, #0x1
    str r0, [sp, #0x48]
L_020f8aec:
    ldr r0, =data_02147400
    ldr r0, [r0, #0x0]
    cmp r5, r0
    bhs L_020f8b0c
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x160]
    cmp r1, r0
    blo L_020f881c
L_020f8b0c:
    ldr r0, [sp, #0x1c]
    ldr r1, =0xffff
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x1c]
    mov r8, #0x2
    and r0, r0, r1
    str r0, [sp, #0x28]
    mov r0, #0xff
    str r0, [sp, #0x94]
    mov r0, #0x1
    str r0, [sp, #0x88]
    mov r0, #0x0
    str r0, [sp, #0x8c]
    mov r0, #0x14
    str r0, [sp, #0x90]
    mov r0, #0x4
    str r0, [sp, #0xa0]
    mov r0, #0x1f40
    str r0, [sp, #0x98]
    b L_020f8d24
L_020f8b60:
    ldr r0, =data_02147400
    ldr r0, [r0, #0x0]
    cmp r5, r0
    bhs L_020f8bf0
L_020f8b70:
    mov r0, r6
    add r1, sp, #0xb4
    mov r2, r8
    add r3, sp, #0xa4
    bl func_020f7f2c
    cmp r11, #0x1
    add r6, r6, #0x1
    bne L_020f8bb4
    ldrsh r2, [sp, #0xb4]
    mov r1, r4, lsl #0x1
    add r0, r4, #0x1
    strh r2, [r10, r1]
    mov r0, r0, lsl #0x1
    add r4, r4, #0x2
    ldrsh r1, [sp, #0xb6]
    strh r1, [r10, r0]
    b L_020f8bdc
L_020f8bb4:
    ldrsh r0, [sp, #0xb4]
    add r1, r9, r4
    add r2, r4, #0x1
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
    add r1, r9, r2
    add r4, r4, #0x2
    ldrsh r0, [sp, #0xb6]
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
L_020f8bdc:
    ldr r0, =data_02147400
    add r5, r5, #0x2
    ldr r0, [r0, #0x0]
    cmp r5, r0
    blo L_020f8b70
L_020f8bf0:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_020f8c50
    cmp r11, #0x1
    bne L_020f8c2c
    ldr r0, =0x7fff
    ldr r1, [sp, #0x8c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x88]
    ldr r2, [sp, #0x90]
    str r0, [sp, #0x4]
    mov r0, r10
    mov r3, r1
    bl func_020f8d5c
    b L_020f8c50
L_020f8c2c:
    ldr r0, [sp, #0x94]
    ldr r1, [sp, #0x8c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x88]
    ldr r2, [sp, #0x90]
    str r0, [sp, #0x4]
    mov r0, r9
    mov r3, r1
    bl func_020f8d5c
L_020f8c50:
    ldr r0, [sp, #0x8c]
    add r1, sp, #0xec
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x48]
    add r2, sp, #0xb8
    add r0, r1, r0, lsl #0x2
    ldr r1, [r0, #-0x4]
    ldr r0, [sp, #0x48]
    ldr r3, [sp, #0x98]
    add r0, r2, r0, lsl #0x2
    ldr r2, [r0, #-0x4]
    ldr r0, [sp, #0x1c]
    sub r1, r1, r2
    str r1, [sp, #0x4]
    ldrb r2, [sp, #0x164]
    mov r1, r11
    bl func_020f81b8
    ldr r0, [sp, #0x10]
    bl _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj
    cmp r0, #0x0
    beq L_020f8d18
    ldr r0, [r0, #0x0]
    bl func_02072e68
    str r0, [sp, #0x9c]
    cmp r0, #0x0
    beq L_020f8d18
    ldr r1, [sp, #0x20]
    add r3, sp, #0x12c
    and r1, r1, #0xff
    str r1, [sp, #0x44]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x44]
    bl func_02064ab8
    ldr r3, [sp, #0xa0]
    add r1, sp, #0x12c
    swpb r3, r3, [r1]
    add r1, sp, #0xa4
    ldr r3, [sp, #0x28]
    ldr r0, [sp, #0x9c]
    strh r3, [r1, #0x8a]
    ldr r3, [sp, #0x2c]
    ldr r2, [sp, #0x44]
    strh r3, [r1, #0x8c]
    add r1, sp, #0x100
    ldr r3, [sp, #0x20]
    add r1, r1, #0x32
    swpb r3, r3, [r1]
    ldr r1, [sp, #0x14]
    add r3, sp, #0x12c
    bl func_020648c0
L_020f8d18:
    ldr r0, [sp, #0x20]
    add r0, r0, r7
    str r0, [sp, #0x20]
L_020f8d24:
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x160]
    cmp r1, r0
    blo L_020f8b60
    add sp, sp, #0x13c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
