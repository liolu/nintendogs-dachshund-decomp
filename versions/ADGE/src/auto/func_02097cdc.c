#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e15c();
extern void func_0206cdc0();
extern void func_02071ae4();
extern void func_02071ce4();
extern void func_020977a0();
extern void func_02097a2c();
extern void func_020985d0();
extern void func_020c608c();
extern void func_020c629c();
extern char data_0213d1ac[];
// clang-format off
asm void func_02097cdc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x13c
    str r0, [sp, #0x8]
    mov r0, #0x0
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x8]
    str r3, [sp, #0x14]
    ldr r3, [sp, #0x18]
    add r0, r0, #0x320
    ldr r4, =data_0213d1ac
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
    bl func_0206cdc0
    ldr r0, =data_0213d1ac
    add r7, r7, #0x4
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x3c]
    cmp r0, #0x0
    bls L_02097e20
    mov r0, #0x0
    mov r8, #0x2
    str r0, [sp, #0x4c]
L_02097d80:
    ldr r4, [sp, #0x4c]
    mov r5, r4
L_02097d88:
    mov r0, r7
    add r1, sp, #0xa8
    mov r2, r8
    add r3, sp, #0xa4
    bl func_020977a0
    ldrsh r1, [sp, #0xa8]
    add r7, r7, #0x1
    cmp r1, #0x0
    rsblt r0, r1, #0x0
    movge r0, r1
    cmp r0, r4
    ble L_02097dc4
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    mov r4, r1
L_02097dc4:
    ldrsh r1, [sp, #0xaa]
    cmp r1, #0x0
    rsblt r0, r1, #0x0
    movge r0, r1
    cmp r0, r4
    ble L_02097de8
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    mov r4, r1
L_02097de8:
    add r6, r6, #0x2
    add r5, r5, #0x2
    cmp r5, #0xc8
    blt L_02097d88
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0x24]
    str r4, [r1, r0, lsl #0x2]
    add r0, r0, #0x1
    str r0, [sp, #0x24]
    ldr r0, =data_0213d1ac
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x3c]
    cmp r6, r0
    blo L_02097d80
L_02097e20:
    mov r8, #0x0
    mov r7, r8
    mov r4, r8
    mov r5, r8
    add lr, sp, #0xb8
    str r8, [sp, #0x50]
    mov r3, #0x1
    ldr r0, =0x3feb
L_02097e40:
    cmp r8, #0x0
    bne L_02097e90
    ldr r2, [sp, #0x8]
    mov r1, r4, lsl #0x2
    ldr r2, [r2, r4, lsl #0x2]
    cmp r2, r0
    bge L_02097ef0
    ldr r2, [sp, #0x8]
    add r2, r2, r1
    ldr r1, [r2, #0x4]
    cmp r1, r0
    ble L_02097ef0
    ldr r1, [r2, #0x8]
    cmp r1, r0
    ble L_02097ef0
    ldr r1, [sp, #0x160]
    mov r8, r3
    cmp r7, r1
    strne r5, [lr, r7, lsl #0x2]
    b L_02097ef0
L_02097e90:
    mov r2, r7, lsl #0x2
    ldr r1, [lr, r7, lsl #0x2]
    sub r1, r6, r1
    cmp r1, #0x320
    blo L_02097ef0
    ldr ip, [sp, #0x8]
    mov r1, r4, lsl #0x2
    ldr ip, [ip, r4, lsl #0x2]
    cmp ip, #0x1000
    bge L_02097ef0
    ldr ip, [sp, #0x8]
    add r1, ip, r1
    ldr r1, [r1, #0x4]
    cmp r1, #0x1000
    bge L_02097ef0
    ldr r1, [sp, #0x160]
    ldr r8, [sp, #0x50]
    cmp r7, r1
    addne r1, sp, #0xec
    strne r5, [r1, r2]
    addeq r1, sp, #0xec
    addeq r1, r1, r2
    addne r7, r7, #0x1
    streq r5, [r1, #-0x4]
L_02097ef0:
    add r5, r5, #0xc8
    add r4, r4, #0x1
    cmp r4, #0xc6
    blt L_02097e40
    cmp r8, #0x0
    beq L_02097f24
    ldr r0, [sp, #0x160]
    add r1, sp, #0xec
    cmp r7, r0
    subhs r7, r0, #0x1
    ldr r0, [sp, #0x3c]
    str r0, [r1, r7, lsl #0x2]
    add r7, r7, #0x1
L_02097f24:
    ldr r6, [sp, #0xec]
    cmp r7, #0x0
    moveq r0, #0x0
    ldr r5, [sp, #0xb8]
    streq r0, [sp, #0xbc]
    moveq r7, #0x1
    cmp r7, #0x1
    sub r0, r6, r5
    bne L_02097fd4
    cmp r0, #0x3e80
    blo L_02097fd4
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
    bl func_0205e15c
    cmp r4, #0x0
    mov r7, #0x0
    bls L_02097fcc
    add r3, sp, #0xec
    add r2, sp, #0xb8
L_02097f98:
    sub r1, r4, #0x1
    cmp r7, r1
    streq r6, [r3, r7, lsl #0x2]
    beq L_02097fc0
    add r1, r7, #0x1
    mla r1, r0, r1, r5
    bic r8, r1, #0x1
    add r1, r2, r7, lsl #0x2
    str r8, [r3, r7, lsl #0x2]
    str r8, [r1, #0x4]
L_02097fc0:
    add r7, r7, #0x1
    cmp r7, r4
    blo L_02097f98
L_02097fcc:
    mov r0, #0x1
    str r0, [sp, #0x18]
L_02097fd4:
    ldr r0, [sp, #0xc]
    mov r5, #0x0
    add r6, r0, #0xc
    add r1, sp, #0xa4
    mov r0, r6
    mov r2, #0x4
    str r5, [sp, #0x48]
    bl func_0206cdc0
    ldr r0, [sp, #0xb8]
    add r6, r6, #0x4
    cmp r0, #0x0
    bls L_02098034
    add r8, sp, #0xac
    mov r4, #0x2
L_0209800c:
    mov r0, r6
    mov r1, r8
    mov r2, r4
    add r3, sp, #0xa4
    bl func_020977a0
    ldr r0, [sp, #0xb8]
    add r5, r5, #0x2
    add r6, r6, #0x1
    cmp r5, r0
    blo L_0209800c
L_02098034:
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
    b L_02098360
L_02098090:
    ldr r2, [sp, #0x54]
    mov r0, r6
    add r1, sp, #0xb0
    add r3, sp, #0xa4
    ldr r8, [sp, #0x20]
    bl func_020977a0
    cmp r11, #0x1
    add r6, r6, #0x1
    bne L_020980d8
    ldrsh r2, [sp, #0xb0]
    mov r1, r4, lsl #0x1
    add r0, r4, #0x1
    strh r2, [r10, r1]
    mov r0, r0, lsl #0x1
    add r4, r4, #0x2
    ldrsh r1, [sp, #0xb2]
    strh r1, [r10, r0]
    b L_02098100
L_020980d8:
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
L_02098100:
    ldr r0, [sp, #0x48]
    add r1, sp, #0xb8
    ldr r0, [r1, r0, lsl #0x2]
    add r5, r5, #0x2
    cmp r5, r0
    bne L_02098360
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02098224
    cmp r11, #0x1
    bne L_020981ac
    ldr r0, [sp, #0x48]
    cmp r0, #0x1
    beq L_0209815c
    ldr r0, =0x7fff
    ldr r1, [sp, #0x5c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x58]
    ldr r2, [sp, #0x60]
    str r0, [sp, #0x4]
    mov r0, r10
    mov r3, r1
    bl func_020985d0
L_0209815c:
    ldr r0, [sp, #0x48]
    cmp r0, r7
    beq L_02098224
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
    bl func_020985d0
    b L_02098224
L_020981ac:
    ldr r0, [sp, #0x48]
    cmp r0, #0x1
    beq L_020981dc
    ldr r0, [sp, #0x68]
    ldr r1, [sp, #0x6c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x6c]
    ldr r2, [sp, #0x60]
    str r0, [sp, #0x4]
    mov r0, r9
    mov r3, r1
    bl func_020985d0
L_020981dc:
    ldr r0, [sp, #0x48]
    cmp r0, r7
    beq L_02098224
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
    bl func_020985d0
L_02098224:
    ldr r0, [sp, #0x160]
    cmp r8, r0
    bhs L_02098324
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
L_02098274:
    ldr r0, [sp, #0x74]
    ldrb r2, [sp, #0x164]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x30]
    ldr r3, [sp, #0x78]
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x1c]
    mov r1, r11
    bl func_02097a2c
    ldr r0, [sp, #0x10]
    bl func_02071ce4
    cmp r0, #0x0
    beq L_02098314
    ldr r0, [r0, #0x0]
    bl func_02071ae4
    str r0, [sp, #0x7c]
    cmp r0, #0x0
    beq L_02098314
    and r1, r8, #0xff
    str r1, [sp, #0x40]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x40]
    add r3, sp, #0x120
    bl func_020c629c
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
    bl func_020c608c
L_02098314:
    ldr r0, [sp, #0x160]
    add r8, r8, r7
    cmp r8, r0
    blo L_02098274
L_02098324:
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
L_02098360:
    ldr r0, =data_0213d1ac
    ldr r0, [r0, #0x0]
    cmp r5, r0
    bhs L_02098380
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x160]
    cmp r1, r0
    blo L_02098090
L_02098380:
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
    b L_02098598
L_020983d4:
    ldr r0, =data_0213d1ac
    ldr r0, [r0, #0x0]
    cmp r5, r0
    bhs L_02098464
L_020983e4:
    mov r0, r6
    add r1, sp, #0xb4
    mov r2, r8
    add r3, sp, #0xa4
    bl func_020977a0
    cmp r11, #0x1
    add r6, r6, #0x1
    bne L_02098428
    ldrsh r2, [sp, #0xb4]
    mov r1, r4, lsl #0x1
    add r0, r4, #0x1
    strh r2, [r10, r1]
    mov r0, r0, lsl #0x1
    add r4, r4, #0x2
    ldrsh r1, [sp, #0xb6]
    strh r1, [r10, r0]
    b L_02098450
L_02098428:
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
L_02098450:
    ldr r0, =data_0213d1ac
    add r5, r5, #0x2
    ldr r0, [r0, #0x0]
    cmp r5, r0
    blo L_020983e4
L_02098464:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_020984c4
    cmp r11, #0x1
    bne L_020984a0
    ldr r0, =0x7fff
    ldr r1, [sp, #0x8c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x88]
    ldr r2, [sp, #0x90]
    str r0, [sp, #0x4]
    mov r0, r10
    mov r3, r1
    bl func_020985d0
    b L_020984c4
L_020984a0:
    ldr r0, [sp, #0x94]
    ldr r1, [sp, #0x8c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x88]
    ldr r2, [sp, #0x90]
    str r0, [sp, #0x4]
    mov r0, r9
    mov r3, r1
    bl func_020985d0
L_020984c4:
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
    bl func_02097a2c
    ldr r0, [sp, #0x10]
    bl func_02071ce4
    cmp r0, #0x0
    beq L_0209858c
    ldr r0, [r0, #0x0]
    bl func_02071ae4
    str r0, [sp, #0x9c]
    cmp r0, #0x0
    beq L_0209858c
    ldr r1, [sp, #0x20]
    add r3, sp, #0x12c
    and r1, r1, #0xff
    str r1, [sp, #0x44]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x44]
    bl func_020c629c
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
    bl func_020c608c
L_0209858c:
    ldr r0, [sp, #0x20]
    add r0, r0, r7
    str r0, [sp, #0x20]
L_02098598:
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x160]
    cmp r1, r0
    blo L_020983d4
    add sp, sp, #0x13c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
