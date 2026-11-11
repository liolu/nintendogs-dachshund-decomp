#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void _s32_div_f();
extern void func_0205e950();
extern void func_02074d7c();
extern void func_02074dec();
extern void func_02074e3c();
extern void func_0207e718();
extern void func_02089418();
extern void func_0208948c();
extern void func_020ecf18();
extern void func_020cd3d0();
extern char data_0212dbc4[];
extern char data_0212dbc8[];
extern char data_021449f8[];
extern char data_02144a08[];
extern char data_02144a18[];
extern char data_02144a30[];
extern char data_02144a44[];
extern char data_02144a54[];
extern char data_02144a68[];
extern char data_02144a78[];
extern char data_02144a88[];
extern char data_02144a9c[];
extern char data_02154dd8[];
extern char func_020da9bc[];
extern char func_020da9d0[];
extern char func_020dabb8[];
extern char func_020dac0c[];
extern char func_020dbc78[];
extern char func_020dbc7c[];
// clang-format off
asm void func_020dc0c4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x48
    ldr r4, =func_020dbc78
    mov r6, r0
    str r4, [r6, #0x1f4]
    ldr r3, =func_020dac0c
    ldr r0, =func_020dbc7c
    str r3, [r6, #0x1f8]
    str r0, [r6, #0x1f0]
    ldr r4, =func_020dabb8
    mov r0, r1
    ldr r3, =func_020da9d0
    str r4, [r6, #0x20c]
    ldr r1, =func_020da9bc
    str r3, [r6, #0x208]
    str r1, [r6, #0x204]
    mov r1, #0x158
    mov r5, r2
    bl func_02003844
    str r0, [r6, #0x214]
    ldr r3, [r6, #0x1ec]
    ldr r2, =data_021449f8
    add r0, sp, #0x4
    mov r1, #0x40
    ldr r4, [r6, #0x214]
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x60]
    ldr r2, =data_02144a08
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x64]
    ldr r2, =data_02144a18
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x68]
    ldr r2, =data_02144a30
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x6c]
    ldr r2, =data_02144a44
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x70]
    ldr r2, =data_02144a54
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x74]
    ldr r2, =data_02144a68
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x78]
    ldr r2, =data_02144a78
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x7c]
    ldr r2, =data_02144a88
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x80]
    ldr r2, =data_02144a9c
    ldr r3, [r6, #0x1ec]
    add r0, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x4
    bl func_0207e718
    str r0, [r4, #0x84]
    ldr r0, [r4, #0x6c]
    add r1, r4, #0x88
    bl func_02074dec
    ldr r0, [r4, #0x70]
    add r1, r4, #0x8c
    bl func_02074d7c
    ldr r0, [r4, #0x74]
    add r1, r4, #0x90
    bl func_02074d7c
    ldr r0, [r4, #0x78]
    add r1, r4, #0x94
    bl func_02074dec
    ldr r0, [r4, #0x7c]
    add r1, r4, #0x98
    bl func_02074e3c
    ldr r0, [r4, #0x80]
    add r1, r4, #0x9c
    bl func_02074e3c
    ldr r0, [r4, #0x84]
    add r1, r4, #0xa0
    bl func_02074e3c
    mov r3, #0x0
    mov r0, r3
    mov r8, r3
    mov ip, r3
    mov r1, r3
    mov r2, #0x1
L_021002fc:
    add lr, r4, r3, lsl #0x4
    sub r7, r3, #0x1
    str r2, [lr, #0xa4]
    cmp r7, #0x1
    strls r0, [lr, #0xa4]
    ldrsh r7, [r6, #0x94]
    cmp r7, #0x64
    bne L_0210033c
    cmp r3, #0x9
    beq L_02100330
    sub r7, r3, #0x5
    cmp r7, #0x1
    bhi L_0210034c
L_02100330:
    add r7, r4, r3, lsl #0x4
    str ip, [r7, #0xa4]
    b L_0210034c
L_0210033c:
    sub r7, r3, #0x3
    cmp r7, #0x7
    addls r7, r4, r3, lsl #0x4
    strls r8, [r7, #0xa4]
L_0210034c:
    add r7, r4, r3, lsl #0x4
    strh r1, [r7, #0xaa]
    strh r1, [r7, #0xac]
    strh r1, [r7, #0xae]
    strh r1, [r7, #0xb0]
    add r3, r3, #0x1
    strh r2, [r7, #0xa8]
    cmp r3, #0xb
    blt L_021002fc
    ldr r7, [r4, #0x64]
    ldr r0, [r4, #0x68]
    add r8, r7, #0x8
    bl func_0208948c
    ldrb r2, [r0, #0x0]
    sub r1, sp, #0x4
    str r2, [r4, #0x40]
    ldrb r0, [r0, #0x1]
    str r0, [r4, #0x44]
    ldrh r0, [r7, #0x8]
    strh r0, [r1, #0x0]
    ldmia r1, {r0}
    ldr r1, [r4, #0x40]
    bl func_02089418
    str r0, [r4, #0x38]
    ldrh r0, [r8, #0x2]
    sub r1, sp, #0x4
    strh r0, [r1, #0x0]
    ldmia r1, {r0}
    ldr r1, [r4, #0x44]
    bl func_02089418
    str r0, [r4, #0x3c]
    ldr r0, [r4, #0x40]
    ldr r1, [r4, #0x38]
    add r0, r0, r0, lsr #0x1f
    add r0, r1, r0, asr #0x1
    str r0, [r4, #0x38]
    ldr r0, [r4, #0x44]
    ldr r1, [r4, #0x3c]
    add r0, r0, r0, lsr #0x1f
    add r0, r1, r0, asr #0x1
    str r0, [r4, #0x3c]
    ldr r1, [r4, #0x64]
    ldr r0, [r4, #0x68]
    add r8, r1, #0x8
    mov r1, #0x1
    add r7, r8, #0x8
    bl func_0208948c
    mov r2, r0
    ldrh r0, [r8, #0x8]
    ldrb r8, [r2, #0x1]
    sub r1, sp, #0x4
    strh r0, [r1, #0x0]
    ldmia r1, {r0}
    ldrb r1, [r2, #0x0]
    bl func_02089418
    ldrh r0, [r7, #0x2]
    sub r2, sp, #0x4
    mov r1, r8
    strh r0, [r2, #0x0]
    ldmia r2, {r0}
    bl func_02089418
    add r1, r8, r8, lsr #0x1f
    add r2, r0, r1, asr #0x1
    ldr r0, [r4, #0x3c]
    mov r1, #0x2
    sub r0, r2, r0
    str r0, [r4, #0x34]
    ldr r2, [r4, #0x64]
    ldr r0, [r4, #0x68]
    add r7, r2, #0x8
    add r8, r7, #0x10
    bl func_0208948c
    ldrh r1, [r7, #0x10]
    mov r2, r0
    ldrb r7, [r2, #0x1]
    sub r0, sp, #0x4
    strh r1, [r0, #0x0]
    ldmia r0, {r0}
    ldrb r1, [r2, #0x0]
    bl func_02089418
    ldrh r0, [r8, #0x2]
    sub r2, sp, #0x4
    mov r1, r7
    strh r0, [r2, #0x0]
    ldmia r2, {r0}
    bl func_02089418
    add r1, r7, r7, lsr #0x1f
    add r2, r0, r1, asr #0x1
    ldr r1, [r4, #0x3c]
    mov r0, #0x1
    sub r1, r2, r1
    str r1, [r4, #0x30]
    str r0, [r4, #0x54]
    mov r0, #0x0
    str r0, [r4, #0x154]
    mov r0, #0x7f
    strh r0, [r4, #0x6]
    ldrsh r0, [r6, #0x94]
    bl func_020ecf18
    str r0, [r4, #0x8]
    ldr r0, =data_02154dd8
    ldr r0, [r0, #0x3c]
    mov r2, r0, asr #0x8
    cmp r2, #0x0
    ble L_02100588
    ldr r0, =0x11c7
    mov r1, #0x1
    mul r0, r2, r0
    str r1, [r4, #0x18]
    ldr r1, [r4, #0x8]
    bl _s32_div_f
    ldr r1, =0xeef
    ldr r2, =0x20b6
    add r0, r0, r1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, r2
    movhi r0, r2
    ldr r2, =data_02154dd8
    strh r0, [r4, #0x1c]
    ldrsh r0, [r2, #0x32]
    ldr r1, =0x51eb851f
    add r0, r0, #0x100
    mov r3, r0, lsl #0xa
    mov r0, r3, asr #0x7
    add r0, r3, r0, lsr #0x18
    mov r0, r0, asr #0x8
    strh r0, [r4, #0xe]
    ldrsh r0, [r2, #0x32]
    ldr r3, [r4, #0x30]
    ldr r2, [r4, #0x34]
    rsb r0, r0, #0x0
    sub r2, r3, r2
    mov r2, r2, asr #0x1
    mul r3, r2, r0
    smull r0, r2, r1, r3
    mov r2, r2, asr #0x5
    mov r0, r3, lsr #0x1f
    add r2, r0, r2
    str r2, [r4, #0x2c]
    ldr r0, [r4, #0x2c]
    strh r0, [r4, #0xb0]
    b L_021005a0
L_02100588:
    mov r1, #0x0
    str r1, [r4, #0x18]
    strh r1, [r4, #0x1c]
    mov r0, #0x400
    strh r0, [r4, #0xe]
    str r1, [r4, #0x2c]
L_021005a0:
    mov r3, #0x0
    strh r3, [r4, #0x0]
    ldrsh r0, [r4, #0x0]
    add r1, r4, #0x4
    ldr r2, =data_0212dbc4
    strh r0, [r4, #0x2]
    swpb r0, r5, [r1]
    strh r3, [r4, #0xc]
    str r3, [r4, #0x14]
    str r3, [r4, #0x5c]
    str r3, [r4, #0x50]
    str r3, [r4, #0x58]
    ldr r0, =data_0212dbc8
    ldrb r5, [r2, #0x0]
    ldrb r1, [r0, #0x2]
    sub r1, r5, r1
    str r1, [r4, #0x20]
    ldrb r1, [r2, #0x1]
    ldrb r0, [r0, #0x3]
    sub r0, r1, r0
    str r0, [r4, #0x24]
    ldrsh r0, [r6, #0x94]
    cmp r0, #0x64
    addne sp, sp, #0x48
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, =0xdac
    mov r2, #0x1
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d0
    add sp, sp, #0x48
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
