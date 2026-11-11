#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffde40();
extern void func_0205ece8();
extern void func_0206a6e4();
extern void func_02089640();
extern void func_02089e1c();
extern void func_0208a664();
extern void func_0208a824();
extern void func_0208aa80();
extern void func_020c6ea0();
extern void func_020c7b00();
extern void func_020c7c48();
extern void func_020c7f84();
extern void func_020ca618();
extern void func_020ca7c8();
extern char data_0212c9e0[];
extern char data_02130388[];
extern char data_0213aa1c[];
extern char data_0214d5fc[];
extern char data_ov011_0215b358[];
extern char data_ov011_0215b3a0[];
extern char data_ov011_0215b3c4[];
// clang-format off
asm void func_ov011_0215a184(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    ldr r2, =data_ov011_0215b3c4
    ldr r0, [r2, #0x0]
    ldr r3, [r0, #0x874]
    add r1, r0, #0x800
    cmp r3, #0x0
    ldr r10, [r0, #0x4]
    ldrh r11, [r1, #0x64]
    beq L_0215a2e4
    ldr r1, =data_0214d5fc
    ldrh r1, [r1, #0x0]
    and r1, r1, #0x1
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    beq L_0215a2e4
    ldr r1, [r10, #0x94]
    cmp r1, #0x0
    beq L_0215a1dc
    mov r0, r10
    bl func_020c7f84
    b L_0215a2e4
L_0215a1dc:
    ldrh r4, [r0, #0x8]
    ldr r3, =data_02130388
    mov r1, #0xc
    mla r1, r4, r1, r3
    ldrh r1, [r1, #0x8]
    ldrb r3, [r0, #0xa]
    sub r1, r1, #0x1
    cmp r3, r1
    addlt r2, r3, #0x1
    addlt r1, r0, #0xa
    swpltb r0, r2, [r1]
    blt L_0215a23c
    add r1, r4, #0x1
    strh r1, [r0, #0x8]
    ldr r1, [r2, #0x0]
    mov r2, #0x0
    ldrh r0, [r1, #0x8]
    cmp r0, #0x15
    movhi r0, #0x0
    strhih r0, [r1, #0x8]
    ldr r0, =data_ov011_0215b3c4
    ldr r0, [r0, #0x0]
    add r1, r0, #0xa
    swpb r0, r2, [r1]
L_0215a23c:
    ldr r1, =data_ov011_0215b3c4
    mov r0, r10
    ldr r2, [r1, #0x0]
    ldrh r1, [r2, #0x8]
    ldrb r2, [r2, #0xa]
    bl func_020c7b00
    ldr r1, =data_ov011_0215b3c4
    ldr r0, =0x87c
    ldr r1, [r1, #0x0]
    add r0, r1, r0
    bl func_02089e1c
    ldr r1, =data_ov011_0215b3c4
    ldr r0, =0x87c
    ldr r2, [r1, #0x0]
    mov r1, #0x0
    add r0, r2, r0
    add r2, r2, #0x8
    bl func_0208a664
    ldr r4, =data_ov011_0215b3c4
    ldr r1, =0x87c
    ldr r2, [r4, #0x0]
    mov r7, #0x0
    add r0, r2, #0x800
    ldrh r8, [r0, #0x64]
    add r9, r2, r1
    mov r6, r7
    mov r5, r7
L_0215a2a8:
    ldr r0, [r4, #0x0]
    mov r2, r8
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215a2c8
    cmp r7, r0
    movne r2, r6
L_0215a2c8:
    mov r0, r9
    mov r1, r7
    mov r3, r5
    bl func_0208aa80
    add r7, r7, #0x1
    cmp r7, #0x3
    blt L_0215a2a8
L_0215a2e4:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x2000
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    ldrne r0, =data_ov011_0215b3c4
    ldrne r1, [r0, #0x0]
    ldrne r0, [r1, #0x874]
    eorne r0, r0, #0x1
    strne r0, [r1, #0x874]
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x4
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a340
    ldr r0, =data_ov011_0215b3c4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x874]
    cmp r0, #0x0
    ldrne r0, [r1, #0x870]
    eorne r0, r0, #0x1
    strne r0, [r1, #0x870]
L_0215a340:
    ldr r0, =data_ov011_0215b3c4
    ldr r0, [r0, #0x0]
    add r1, r0, #0x800
    ldrh r0, [r1, #0x6a]
    ldrh r1, [r1, #0x6c]
    cmp r1, r0
    beq L_0215a374
    bl func_02089640
    ldr r0, =data_ov011_0215b3c4
    ldr r0, [r0, #0x0]
    add r0, r0, #0x800
    ldrh r1, [r0, #0x6a]
    strh r1, [r0, #0x6c]
L_0215a374:
    ldr r1, =data_ov011_0215b3c4
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x874]
    cmp r0, #0x0
    bne L_0215a550
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x40
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a3c8
    add r0, r2, #0x800
    ldrsh r2, [r0, #0x78]
    add r2, r2, #0x1
    strh r2, [r0, #0x78]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r1, [r0, #0x78]
    cmp r1, #0x3
    movge r1, #0x0
    strgeh r1, [r0, #0x78]
L_0215a3c8:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x80
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a410
    ldr r1, =data_ov011_0215b3c4
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r2, [r0, #0x78]
    sub r2, r2, #0x1
    strh r2, [r0, #0x78]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r1, [r0, #0x78]
    cmp r1, #0x0
    movlt r1, #0x2
    strlth r1, [r0, #0x78]
L_0215a410:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a458
    ldr r1, =data_ov011_0215b3c4
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r2, [r0, #0x7a]
    add r2, r2, #0x1
    strh r2, [r0, #0x7a]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r1, [r0, #0x7a]
    cmp r1, #0x2
    movgt r1, #0x0
    strgth r1, [r0, #0x7a]
L_0215a458:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x20
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a4a0
    ldr r1, =data_ov011_0215b3c4
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r2, [r0, #0x7a]
    sub r2, r2, #0x1
    strh r2, [r0, #0x7a]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x800
    ldrsh r1, [r0, #0x7a]
    cmp r1, #0x0
    movlt r1, #0x2
    strlth r1, [r0, #0x7a]
L_0215a4a0:
    ldr r1, =data_ov011_0215b3c4
    ldr r0, =data_0214d5fc
    ldr r1, [r1, #0x0]
    ldrh r3, [r0, #0x6]
    ldr r0, [r1, #0x4]
    add r1, r1, #0x800
    ldrh r2, [r0, #0x7a]
    ldr r4, =data_0213aa1c
    mov r0, #0x64
    smlabb r0, r2, r0, r4
    add r6, r0, #0x16
    ldrsh r5, [r1, #0x78]
    mov r0, #0x6
    ldrsh r4, [r1, #0x7a]
    and r2, r3, #0x1
    smlabb r0, r5, r0, r6
    mov r1, r2, lsl #0x10
    add r0, r0, r4, lsl #0x1
    movs r1, r1, lsr #0x10
    ldrnesh r1, [r0, #0x0]
    addne r1, r1, #0x1
    strneh r1, [r0, #0x0]
    bne L_0215a514
    and r1, r3, #0x2
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    ldrnesh r1, [r0, #0x0]
    subne r1, r1, #0x1
    strneh r1, [r0, #0x0]
L_0215a514:
    ldr r1, =data_0214d5fc
    ldrh r2, [r1, #0x6]
    and r1, r2, #0x400
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    ldrnesh r1, [r0, #0x0]
    addne r1, r1, #0x100
    strneh r1, [r0, #0x0]
    bne L_0215a550
    and r1, r2, #0x800
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    ldrnesh r1, [r0, #0x0]
    subne r1, r1, #0x100
    strneh r1, [r0, #0x0]
L_0215a550:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x6]
    and r0, r0, #0x100
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a59c
    ldr r2, =data_ov011_0215b3c4
    ldr r1, =0x267
    ldr r0, [r2, #0x0]
    add r0, r0, #0x800
    ldrh r3, [r0, #0x64]
    add r3, r3, #0x1
    strh r3, [r0, #0x64]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x800
    ldrh r2, [r0, #0x64]
    cmp r2, r1
    movhs r1, #0x0
    strhsh r1, [r0, #0x64]
L_0215a59c:
    ldr r0, =data_0214d5fc
    ldrh r0, [r0, #0x6]
    and r0, r0, #0x200
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a5d8
    ldr r0, =data_ov011_0215b3c4
    ldr r0, [r0, #0x0]
    add r0, r0, #0x800
    ldrh r1, [r0, #0x64]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x64]
    ldreq r1, =0x266
    streqh r1, [r0, #0x64]
L_0215a5d8:
    ldr r0, [r10, #0x94]
    cmp r0, #0x0
    beq L_0215a6c4
    ldr r0, =data_ov011_0215b3c4
    ldr r3, [r0, #0x0]
    add r0, r3, #0x800
    ldrh r2, [r0, #0x64]
    cmp r11, r2
    beq L_0215a6c4
    ldr r1, =data_0212c9e0
    mov r0, #0x18
    mla r1, r2, r0, r1
    ldrb r0, [r1, #0x6]
    cmp r0, #0x0
    bne L_0215a624
    ldr r0, [r3, #0x4]
    mov r1, #0x0
    bl func_01ffde40
    b L_0215a6c4
L_0215a624:
    ldr r0, [r3, #0x4]
    ldr r3, [r1, #0x0]
    ldr r4, [r0, #0x94]
    ldr r2, =data_ov011_0215b3a0
    add r0, sp, #0x0
    mov r1, #0x40
    ldr r11, [r4, #0x74]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_020c6ea0
    mov r1, r0
    mov r0, r4
    bl func_020ca7c8
    mov r7, #0x0
    ldr r4, =data_ov011_0215b3c4
    ldr r1, =0x87c
    ldr r2, [r4, #0x0]
    mov r6, r7
    add r0, r2, #0x800
    ldrh r8, [r0, #0x64]
    add r9, r2, r1
    mov r5, r7
L_0215a67c:
    ldr r0, [r4, #0x0]
    mov r2, r8
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215a69c
    cmp r7, r0
    movne r2, r6
L_0215a69c:
    mov r0, r9
    mov r1, r7
    mov r3, r5
    bl func_0208aa80
    add r7, r7, #0x1
    cmp r7, #0x3
    blt L_0215a67c
    add r1, r11, #0x14
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0215a6c4:
    mov r0, r10
    bl func_020c7c48
    ldr r0, =data_ov011_0215b358
    bl func_0206a6e4
    ldr r0, =data_ov011_0215b3c4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x0]
    bl func_020ca618
    ldr r0, [r10, #0x94]
    cmp r0, #0x0
    addeq sp, sp, #0x4c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, [r0, #0x74]
    mov r3, #0x0
    add r2, sp, #0x40
L_0215a704:
    ldr r0, [r1, #0x20]
    str r0, [r2, r3, lsl #0x2]
    add r3, r3, #0x1
    cmp r3, #0x3
    blt L_0215a704
    ldr r1, =data_ov011_0215b3c4
    ldr r0, =0x87c
    ldr r4, [r1, #0x0]
    mov r1, #0x0
    add r3, r4, #0x800
    ldrh r3, [r3, #0x6e]
    add r0, r4, r0
    bl func_0208a824
    add sp, sp, #0x4c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
