#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_02003844();
extern void func_020280e0();
extern void func_02028144();
extern void func_0205e950();
extern void func_02069b68();
extern void func_02074d7c();
extern void func_02074dec();
extern void func_02074e3c();
extern void func_0207d0e0();
extern void func_0207d160();
extern void func_02080f5c();
extern void func_020894a0();
extern void func_020894a8();
extern void func_020c23f4();
extern void func_020c897c();
extern void func_020c89d8();
extern void func_020e1750();
extern void func_020e19f8();
extern void func_020e2e1c();
extern void func_020ee32c();
extern void func_020ee8c8();
extern void func_ov003_0215bd34();
extern void func_ov003_0215e9f0();
extern void func_ov003_0215ece4();
extern void func_ov003_0215ee5c();
extern void func_ov003_0215f08c();
extern char data_0212d90c[];
extern char data_0214b150[];
extern char data_02153734[];
extern char data_ov003_0216b848[];
extern char data_ov003_0216b864[];
extern char data_ov003_0216babc[];
extern char data_ov003_0216bc28[];
extern char data_ov003_0216bc4c[];
extern char data_ov003_0216bc70[];
extern char data_ov003_0216bc98[];
extern char data_ov003_0216bcbc[];
extern char data_ov003_0216bcdc[];
extern char data_ov003_0216bd00[];
extern char data_ov003_0216bd20[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215f568(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x104
    ldr r1, =data_02153734
    mov r4, r0
    ldr r0, [r1, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffda04
    str r0, [sp, #0x0]
    ldr r1, =0x36d0
    mov r0, r4
    bl func_02003844
    ldr r2, =data_ov003_0216be20
    add r1, r0, #0x3000
    str r0, [r2, #0x0]
    mov r0, #0x0
    str r4, [r1, #0x6bc]
    bl func_02069b68
    ldr r2, =0x400100a
    ldr r0, =0xc808
    ldrh r4, [r2, #0x0]
    ldr r1, =0x400100c
    ldr r3, =0xcc08
    and r4, r4, #0x43
    orr r0, r4, r0
    strh r0, [r2, #0x0]
    ldrh r5, [r1, #0x0]
    ldr r0, =0x400100e
    ldr r4, =0xd808
    and r5, r5, #0x43
    orr r3, r5, r3
    strh r3, [r1, #0x0]
    ldrh r3, [r0, #0x0]
    ldr r6, =0x4001000
    mov r5, #0x0
    and r3, r3, #0x43
    orr r3, r3, r4
    strh r3, [r0, #0x0]
    ldrh r4, [r2, #0x0]
    ldr r3, =0x4001050
    bic r4, r4, #0x3
    orr r4, r4, #0x2
    strh r4, [r2, #0x0]
    ldrh r2, [r1, #0x0]
    bic r2, r2, #0x3
    orr r2, r2, #0x3
    strh r2, [r1, #0x0]
    ldrh r1, [r0, #0x0]
    bic r1, r1, #0x3
    orr r1, r1, #0x1
    strh r1, [r0, #0x0]
    ldr r0, [r6, #0x0]
    orr r0, r0, #0x1e00
    str r0, [r6, #0x0]
    strh r5, [r3, #0x0]
    bl func_02080f5c
    ldr r3, =data_ov003_0216be20
    ldr r2, =data_02153734
    ldr r1, [r3, #0x0]
    ldr r6, =data_ov003_0216babc
    add r1, r1, #0x3000
    str r0, [r1, #0x6c0]
    ldr r1, [r2, #0x0]
    ldr r0, [r3, #0x0]
    add r1, r1, #0x8
    add r0, r0, #0x3000
    str r1, [r0, #0x6c4]
    ldr r0, [r3, #0x0]
    add r5, sp, #0x48
    add r4, r0, #0x3000
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, [r4, #0x6bc]
    ldr r1, =data_ov003_0216bc28
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r1, =data_ov003_0216bc4c
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d0]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r1, =data_ov003_0216bc70
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d4]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r1, =data_ov003_0216bc98
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d8]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r1, =data_ov003_0216be20
    ldr r1, [r1, #0x0]
    add r1, r1, #0x3000
    str r0, [r1, #0x3dc]
    add r0, sp, #0xbc
    bl func_020c89d8
    ldrsb r1, [sp, #0xbc]
    mvn r0, #0x0
    cmp r1, r0
    bne L_0215f8b4
    ldr r3, =data_ov003_0216be20
    ldr r0, =0x10dcd
    add r5, sp, #0xbc
    mov r6, #0x0
L_0215f74c:
    ldr r1, [r3, #0x0]
    add r6, r6, #0x1
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c0]
    cmp r6, #0x4
    mul r4, r2, r0
    add r4, r4, #0x1
    mov r2, r4, lsl #0x10
    str r4, [r1, #0x6c0]
    mov r1, r2, lsr #0x1e
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    blt L_0215f74c
    mov r2, #0x0
    add r3, sp, #0x88
    mov r1, r2
L_0215f78c:
    add r2, r2, #0x1
    swpb r0, r1, [r3]
    cmp r2, #0x12
    add r3, r3, #0x1
    blt L_0215f78c
    ldr r0, [sp, #0x0]
    bl func_020280e0
    add r1, sp, #0x88
    mov r2, #0x1
    add r1, r1, r0
    swpb r0, r2, [r1]
    mov r1, #0x0
    add r2, sp, #0x9b
    mov r7, r1
L_0215f7c4:
    add r1, r1, #0x1
    swpb r0, r7, [r2]
    cmp r1, #0x20
    add r2, r2, #0x1
    blt L_0215f7c4
    mov r4, #0x0
    ldr r3, =data_0212d90c
    ldr r0, =data_ov003_0216be20
    ldr r9, =0x10dcd
    add r6, sp, #0xbc
    add r2, sp, #0x88
    add lr, sp, #0x9b
    mov r1, #0x1
    mov r11, #0x1f
    str r4, [sp, #0x4]
L_0215f800:
    cmp r7, #0x7
    addeq r4, r6, r7, lsl #0x3
    ldr r8, [sp, #0x4]
    streqh r11, [r4, #0x4]
    beq L_0215f8a0
L_0215f814:
    ldr r4, [r0, #0x0]
    mov r5, #0x1f
    add r4, r4, #0x3000
    ldr r10, [r4, #0x6c0]
    mul ip, r10, r9
    add r10, ip, #0x1
    str r10, [r4, #0x6c0]
    mov r4, r10, lsl #0x10
    mov r4, r4, lsr #0x10
    mul r5, r4, r5
    mov r4, r5, lsr #0x10
    mov r4, r4, lsl #0x10
    mov r4, r4, lsr #0x10
    mov r4, r4, lsl #0x10
    ldrb r10, [lr, r4, asr #0x10]
    mov r5, r4, asr #0x10
    add r4, lr, r4, asr #0x10
    cmp r10, #0x0
    bne L_0215f898
    mov r10, #0xc
    mul r10, r5, r10
    add ip, r3, r10
    ldrh r10, [r3, r10]
    ldrb r10, [r2, r10]
    cmp r10, #0x0
    bne L_0215f898
    swpb r8, r1, [r4]
    add r4, r6, r7, lsl #0x3
    ldrh r10, [ip, #0x0]
    mov r8, r1
    strh r5, [r4, #0x4]
    add r5, r2, r10
    swpb r4, r1, [r5]
L_0215f898:
    cmp r8, #0x0
    beq L_0215f814
L_0215f8a0:
    add r7, r7, #0x1
    cmp r7, #0x8
    blt L_0215f800
    add r0, sp, #0xbc
    bl func_020c897c
L_0215f8b4:
    ldr r6, =data_ov003_0216bcbc
    ldr r4, =data_ov003_0216be20
    add r10, sp, #0xbc
    mov r9, #0x0
    add r8, sp, #0x8
    add r5, sp, #0x48
    mov r7, #0x40
L_0215f8d0:
    ldrsb r2, [r10, #0x0]
    add r1, r5, r9, lsl #0x4
    mov r0, r8
    ldr r3, [r1, r2, lsl #0x2]
    mov r1, r7
    mov r2, r6
    bl func_0205e950
    ldr r0, [r4, #0x0]
    mov r1, r8
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r1, [r4, #0x0]
    add r10, r10, #0x1
    add r1, r1, r9, lsl #0x2
    add r1, r1, #0x3000
    add r9, r9, #0x1
    str r0, [r1, #0x3e8]
    cmp r9, #0x4
    blt L_0215f8d0
    ldr r0, [r4, #0x0]
    ldr r1, =data_ov003_0216bcdc
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r1, =data_ov003_0216bd00
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3f8]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r1, =data_ov003_0216bd20
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3e0]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c23f4
    ldr r3, =data_ov003_0216be20
    ldr r2, =0x33fc
    ldr r1, [r3, #0x0]
    add r1, r1, #0x3000
    str r0, [r1, #0x3e4]
    ldr r1, [r3, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x3dc]
    add r1, r1, r2
    bl func_02074dec
    mov r4, #0x0
    mov r5, r4
    ldr r7, =data_ov003_0216be20
    ldr r6, =0x3408
L_0215f9b4:
    ldr r1, [r7, #0x0]
    add r0, r1, r4, lsl #0x2
    add r0, r0, #0x3000
    add r1, r1, r6
    ldr r0, [r0, #0x3e8]
    add r1, r1, r5
    bl func_02074e3c
    add r4, r4, #0x1
    cmp r4, #0x4
    add r5, r5, #0x4
    blt L_0215f9b4
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x3418
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x3f8]
    add r1, r2, r1
    bl func_02074e3c
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x3e0]
    add r1, r1, #0x3400
    bl func_02074d7c
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x3404
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x3e4]
    add r1, r2, r1
    bl func_02074dec
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x3d8]
    bl func_020894a0
    mov r4, r0
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x3d8]
    bl func_020894a8
    mov r3, r4
    mov r2, r0
    mov r0, #0x23
    mov r1, #0x0
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0x0
    ldr r2, =data_ov003_0216be20
    mov r3, #0x600
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x408]
    add r2, r2, #0xc
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0x800
    ldr r2, =data_ov003_0216be20
    mov r3, #0x600
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x40c]
    add r2, r2, #0xc
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0x600
    ldr r2, =data_ov003_0216be20
    mov r3, #0x200
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x410]
    add r2, r2, #0xc
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0x1000
    ldr r2, =data_ov003_0216be20
    mov r3, #0x400
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x410]
    add r2, r2, #0xc
    add r2, r2, #0x200
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0xe00
    ldr r2, =data_ov003_0216be20
    mov r3, #0x200
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x414]
    add r2, r2, #0xc
    bl func_0207d0e0
    mov r0, #0x1a
    mov r1, #0x1800
    ldr r2, =data_ov003_0216be20
    mov r3, #0x400
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x414]
    add r2, r2, #0xc
    add r2, r2, #0x200
    bl func_0207d0e0
    ldr r1, =data_ov003_0216be20
    mov r0, #0x16
    ldr r2, [r1, #0x0]
    mov r1, #0x0
    add r2, r2, #0x3000
    ldr r3, [r2, #0x400]
    ldr r2, [r3, #0x14]
    ldr r3, [r3, #0x10]
    bl func_0207d0e0
    mov r0, #0x1e
    mov r1, #0x0
    ldr r2, =data_ov003_0216be20
    mov r3, #0x1c0
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x3fc]
    ldr r2, [r2, #0xc]
    bl func_0207d0e0
    mov r0, #0x1f
    mov r1, #0x0
    ldr r2, =data_ov003_0216be20
    mov r3, #0x1c0
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x404]
    ldr r2, [r2, #0xc]
    bl func_0207d0e0
    mov r4, #0x0
    ldr r1, =data_ov003_0216be20
L_0215fbc4:
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x418]
    add r0, r3, r4, lsl #0x1
    add r2, r2, r4, lsl #0x1
    ldrh r2, [r2, #0xc]
    add r0, r0, #0xb00
    add r4, r4, #0x1
    strh r2, [r0, #0xe0]
    cmp r4, #0x1d
    blt L_0215fbc4
    ldr r1, =data_ov003_0216be20
    mov r4, #0x0
L_0215fbf8:
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x418]
    add r0, r3, r4, lsl #0x1
    add r2, r2, r4, lsl #0x1
    ldrh r2, [r2, #0x4c]
    add r0, r0, #0x1300
    add r4, r4, #0x1
    strh r2, [r0, #0x84]
    cmp r4, #0x8
    blt L_0215fbf8
    mov r2, #0x0
    ldr r3, =data_ov003_0216b864
    mov r4, r2
    ldr r7, =data_ov003_0216be20
    mov r1, r2
L_0215fc38:
    ldrb r0, [r3, #0x0]
    add r6, r2, #0x2
    cmp r2, #0x0
    addne r6, r6, #0x2
    mov r5, r1
    cmp r0, #0x0
    ble L_0215fc94
    mov r0, r6, lsl #0x5
    mov r0, r0, lsl #0x1
L_0215fc5c:
    ldr r9, [r7, #0x0]
    add r6, r9, #0x3000
    ldr r8, [r6, #0x418]
    add r6, r4, r9
    add r8, r0, r8
    add r8, r8, r5, lsl #0x1
    ldrh r8, [r8, #0xc]
    add r6, r6, r5, lsl #0x1
    add r6, r6, #0xc00
    strh r8, [r6, #0x1a]
    ldrb r6, [r3, #0x0]
    add r5, r5, #0x1
    cmp r5, r6
    blt L_0215fc5c
L_0215fc94:
    add r2, r2, #0x1
    cmp r2, #0xa
    add r4, r4, #0x90
    add r3, r3, #0x1
    blt L_0215fc38
    mov r3, #0x0
    ldr r4, =data_ov003_0216b848
    mov r5, r3
    ldr r7, =data_ov003_0216be20
    mov r1, r3
L_0215fcbc:
    ldrb r0, [r4, #0x0]
    mov r2, r1
    cmp r0, #0x0
    ble L_0215fd10
    add r0, r3, #0x10
    mov r0, r0, lsl #0x5
    mov r0, r0, lsl #0x1
L_0215fcd8:
    ldr r9, [r7, #0x0]
    add r6, r9, #0x3000
    ldr r8, [r6, #0x418]
    add r6, r5, r9
    add r8, r0, r8
    add r8, r8, r2, lsl #0x1
    ldrh r8, [r8, #0xc]
    add r6, r6, r2, lsl #0x1
    add r6, r6, #0x1100
    strh r8, [r6, #0xba]
    ldrb r6, [r4, #0x0]
    add r2, r2, #0x1
    cmp r2, r6
    blt L_0215fcd8
L_0215fd10:
    add r3, r3, #0x1
    cmp r3, #0x8
    add r5, r5, #0x24
    add r4, r4, #0x1
    blt L_0215fcbc
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0215fd8c
    ldr r3, =data_ov003_0216be20
    ldr r0, =data_0214b150
    ldr r1, [r3, #0x0]
    ldr r2, [r0, #0x0]
    add r0, r1, #0x3000
    ldr r1, [r0, #0x6c4]
    ldr r2, [r2, #0x2c]
    ldr r0, =0x305
    add r1, r1, #0x2000
    mov r4, r2, lsr #0x2
    add r2, r1, r0
    swpb r1, r4, [r2]
    ldr r1, [r3, #0x0]
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    ldrb r2, [r1, #0x305]
    cmp r2, #0x6
    addhs r1, r1, r0
    movhs r0, #0x5
    swphsb r0, r0, [r1]
L_0215fd8c:
    bl func_ov003_0215f08c
    bl func_ov003_0215ee5c
    bl func_ov003_0215ece4
    mov r0, #0x0
    ldr r1, =data_ov003_0216be20
    mov r3, r0
    mov r2, #0x1
L_0215fda8:
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3000
    str r3, [r4, #0x41c]
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3400
    strh r3, [r4, #0x22]
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3400
    strh r3, [r4, #0x24]
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3400
    strh r3, [r4, #0x26]
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3400
    strh r3, [r4, #0x28]
    ldr r4, [r1, #0x0]
    add r4, r4, r0, lsl #0x4
    add r4, r4, #0x3400
    add r0, r0, #0x1
    strh r2, [r4, #0x20]
    cmp r0, #0x2a
    blt L_0215fda8
    ldr r0, [r1, #0x0]
    mvn r4, #0x0
    add r0, r0, #0x3000
    str r4, [r0, #0x6c8]
    ldr r0, [r1, #0x0]
    mov r6, #0x20
    str r3, [r0, #0x20]
    ldr r0, [r1, #0x0]
    mov r5, #0x17
    add r4, r0, #0x10
    swpb r0, r2, [r4]
    ldr r4, [r1, #0x0]
    ldr r0, [sp, #0x0]
    add r4, r4, #0x11
    swpb r2, r2, [r4]
    ldr r2, [r1, #0x0]
    add r4, r2, #0x1c
    swpb r2, r6, [r4]
    ldr r2, [r1, #0x0]
    add r4, r2, #0x1d
    swpb r2, r5, [r4]
    ldr r2, [r1, #0x0]
    swpb r1, r3, [r2]
    bl func_02028144
    ldr r2, =data_ov003_0216be20
    ldrh r1, [r0, #0x76]
    ldr r0, [r2, #0x0]
    mov r4, #0x0
    str r1, [r0, #0x24]
    ldr r0, [r2, #0x0]
    ldr r6, =0x3cd
    str r4, [r0, #0x4]
    ldr r1, [r2, #0x0]
    ldr r0, =0x3b9
    str r4, [r1, #0x8]
    ldr r1, [r2, #0x0]
    mvn r3, #0x0
    str r4, [r1, #0xc]
    ldr r5, [r2, #0x0]
    ldr r1, =0x315
    add r5, r5, #0x1000
    str r4, [r5, #0x2f4]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x1000
    str r4, [r5, #0x2f8]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x1000
    str r4, [r5, #0x2fc]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x3000
    add r6, r5, r6
    swpb r5, r4, [r6]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x1000
    str r4, [r5, #0x2ec]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x3000
    add r6, r5, #0x3b8
    swpb r5, r4, [r6]
    ldr r5, [r2, #0x0]
    add r5, r5, #0x3000
    add r5, r5, r0
    swpb r0, r4, [r5]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    str r4, [r0, #0x39c]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    str r3, [r0, #0x3ac]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r1
    swpb r0, r4, [r1]
    bl func_020e1750
    ldr r2, =data_ov003_0216be20
    ldr r1, =0x3ba
    ldr r3, [r2, #0x0]
    mov r0, r4
    add r3, r3, #0x3000
    add r3, r3, r1
    swpb r1, r0, [r3]
    ldr r3, =0x3bb
    mov r1, r0
L_0215ff68:
    ldr r4, [r2, #0x0]
    add r4, r4, r0
    add r4, r4, #0x3000
    add r5, r4, r3
    add r0, r0, #0x1
    cmp r0, #0x6
    swpb r4, r1, [r5]
    blt L_0215ff68
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02160060
    ldr r3, [r2, #0x0]
    mov r0, #0x4
    swpb r0, r0, [r3]
    mov r3, #0x2000
    ldr r2, [r2, #0x0]
    mov r0, #0x19
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, #0x264
    bl func_0207d0e0
    ldr r2, =data_ov003_0216be20
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r3, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    mov r3, r3, lsl #0x3
    sub r0, r3, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x394]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r3, [r0, #0x1]
    ldrsh r0, [r0, #0x4]
    mov r3, r3, lsl #0x3
    sub r0, r3, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x398]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldrb r0, [r1, #0x316]
    cmp r0, #0x0
    ldrne r0, =0x316
    movne r2, #0x0
    addne r1, r1, r0
    swpneb r0, r2, [r1]
    bne L_021601a8
    mov r0, #0x1b
    mov r1, #0x7f
    mov r2, #0x0
    bl func_020ee8c8
    mov r0, #0x2
    bl func_020ee32c
    b L_021601a8
L_02160060:
    bl func_ov003_0215e9f0
    ldr r6, =data_ov003_0216be20
    mov r2, #0x0
    ldr r0, [r6, #0x0]
    mvn r8, #0x0
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r1, =0x295
    add r0, r0, #0x2000
    str r2, [r0, #0x264]
    ldr r0, [r6, #0x0]
    ldr r3, =0x2a2
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    mov r7, #0x5
    add r0, r0, #0x2000
    add r4, r0, #0x274
    swpb r0, r8, [r4]
    ldr r4, =0x2a5
    ldr r0, [r6, #0x0]
    ldr r5, =0x316
    add r0, r0, #0x3000
    ldr r9, [r0, #0x6c4]
    mov r0, #0x1b
    add r9, r9, #0x2000
    add r9, r9, r1
    swpb r1, r8, [r9]
    ldr r9, [r6, #0x0]
    mov r1, #0x7f
    add r9, r9, #0x3000
    ldr r9, [r9, #0x6c4]
    add r9, r9, #0x2000
    add r9, r9, r3
    swpb r3, r8, [r9]
    ldr r3, [r6, #0x0]
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    add r3, r3, #0x2000
    add r9, r3, #0x2c4
    swpb r3, r8, [r9]
    ldr r3, [r6, #0x0]
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    add r3, r3, #0x2000
    add r8, r3, #0x314
    swpb r3, r7, [r8]
    ldr r3, [r6, #0x0]
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    add r3, r3, #0x2000
    add r4, r3, r4
    swpb r3, r2, [r4]
    ldr r3, [r6, #0x0]
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    add r3, r3, #0x2000
    add r4, r3, r5
    swpb r3, r2, [r4]
    bl func_020ee8c8
    mov r4, r6
    ldr r0, [r4, #0x0]
    ldr r1, =0x317
    add r0, r0, #0x3000
    ldr r2, [r0, #0x6c4]
    mov r3, #0x1
    add r2, r2, #0x2000
    add r2, r2, r1
    swpb r1, r3, [r2]
    mov r0, #0x0
    ldr r1, [r4, #0x0]
    ldr r3, =0x319
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    add r2, r1, #0x318
    swpb r1, r0, [r2]
    ldr r1, [r4, #0x0]
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    add r1, r1, r3
    swpb r0, r0, [r1]
L_021601a8:
    bl func_0207d160
    bl func_020e2e1c
    cmp r0, #0x0
    addeq sp, sp, #0x104
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    bl func_ov003_0215bd34
    bl func_020e19f8
    add sp, sp, #0x104
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
