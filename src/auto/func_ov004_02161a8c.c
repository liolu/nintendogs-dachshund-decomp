#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_020038a8();
extern void func_02028108();
extern void func_0202816c();
extern void func_0205ece8();
extern void func_02068770();
extern void func_02073978();
extern void func_020739e8();
extern void func_02073a38();
extern void func_0207ca98();
extern void func_0207cb18();
extern void func_02080978();
extern void func_02085d28();
extern void func_02085d30();
extern void func_0208dae8();
extern void func_0208e084();
extern void func_020c79a0();
extern void func_020ce118();
extern void func_020ce174();
extern void func_02105824();
extern void func_02105acc();
extern void func_02106ef0();
extern void func_ov004_0215e258();
extern void func_ov004_02160f14();
extern void func_ov004_02161208();
extern void func_ov004_02161380();
extern void func_ov004_021615b0();
extern char data_02131358[];
extern char data_0214d750[];
extern char data_0215a078[];
extern char data_ov004_0216ddd4[];
extern char data_ov004_0216dde8[];
extern char data_ov004_0216e06c[];
extern char data_ov004_0216e1d8[];
extern char data_ov004_0216e1fc[];
extern char data_ov004_0216e220[];
extern char data_ov004_0216e248[];
extern char data_ov004_0216e26c[];
extern char data_ov004_0216e28c[];
extern char data_ov004_0216e2b0[];
extern char data_ov004_0216e2d0[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02161a8c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x104
    ldr r1, =data_0215a078
    mov r4, r0
    ldr r0, [r1, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffdb08
    str r0, [sp, #0x0]
    ldr r1, =0x36d0
    mov r0, r4
    bl func_020038a8
    ldr r2, =data_ov004_0216e3c0
    add r1, r0, #0x3000
    str r0, [r2, #0x0]
    mov r0, #0x0
    str r4, [r1, #0x6bc]
    bl func_02068770
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
    bl func_02080978
    ldr r3, =data_ov004_0216e3c0
    ldr r2, =data_0215a078
    ldr r1, [r3, #0x0]
    ldr r6, =data_ov004_0216e06c
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
    ldr r1, =data_ov004_0216e1d8
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r1, =data_ov004_0216e1fc
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d0]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r1, =data_ov004_0216e220
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d4]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r1, =data_ov004_0216e248
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3d8]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r1, =data_ov004_0216e3c0
    ldr r1, [r1, #0x0]
    add r1, r1, #0x3000
    str r0, [r1, #0x3dc]
    add r0, sp, #0xc0
    bl func_020ce174
    ldrsb r1, [sp, #0xc0]
    mvn r0, #0x0
    cmp r1, r0
    bne L_02161dd8
    ldr r3, =data_ov004_0216e3c0
    ldr r0, =0x10dcd
    add r5, sp, #0xc0
    mov r6, #0x0
L_02161c70:
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
    blt L_02161c70
    mov r2, #0x0
    add r3, sp, #0x88
    mov r1, r2
L_02161cb0:
    add r2, r2, #0x1
    swpb r0, r1, [r3]
    cmp r2, #0x15
    add r3, r3, #0x1
    blt L_02161cb0
    ldr r0, [sp, #0x0]
    bl func_02028108
    add r1, sp, #0x88
    mov r2, #0x1
    add r1, r1, r0
    swpb r0, r2, [r1]
    mov r1, #0x0
    add r2, sp, #0x9e
    mov r7, r1
L_02161ce8:
    add r1, r1, #0x1
    swpb r0, r7, [r2]
    cmp r1, #0x20
    add r2, r2, #0x1
    blt L_02161ce8
    mov r4, #0x0
    ldr r3, =data_02131358
    ldr r0, =data_ov004_0216e3c0
    ldr r9, =0x10dcd
    add r6, sp, #0xc0
    add r2, sp, #0x88
    add lr, sp, #0x9e
    mov r1, #0x1
    mov r11, #0x1f
    str r4, [sp, #0x4]
L_02161d24:
    cmp r7, #0x7
    addeq r4, r6, r7, lsl #0x3
    ldr r8, [sp, #0x4]
    streqh r11, [r4, #0x4]
    beq L_02161dc4
L_02161d38:
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
    bne L_02161dbc
    mov r10, #0xc
    mul r10, r5, r10
    add ip, r3, r10
    ldrh r10, [r3, r10]
    ldrb r10, [r2, r10]
    cmp r10, #0x0
    bne L_02161dbc
    swpb r8, r1, [r4]
    add r4, r6, r7, lsl #0x3
    ldrh r10, [ip, #0x0]
    mov r8, r1
    strh r5, [r4, #0x4]
    add r5, r2, r10
    swpb r4, r1, [r5]
L_02161dbc:
    cmp r8, #0x0
    beq L_02161d38
L_02161dc4:
    add r7, r7, #0x1
    cmp r7, #0x8
    blt L_02161d24
    add r0, sp, #0xc0
    bl func_020ce118
L_02161dd8:
    ldr r6, =data_ov004_0216e26c
    ldr r4, =data_ov004_0216e3c0
    add r10, sp, #0xc0
    mov r9, #0x0
    add r8, sp, #0x8
    add r5, sp, #0x48
    mov r7, #0x40
L_02161df4:
    ldrsb r2, [r10, #0x0]
    add r1, r5, r9, lsl #0x4
    mov r0, r8
    ldr r3, [r1, r2, lsl #0x2]
    mov r1, r7
    mov r2, r6
    bl func_0205ece8
    ldr r0, [r4, #0x0]
    mov r1, r8
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r1, [r4, #0x0]
    add r10, r10, #0x1
    add r1, r1, r9, lsl #0x2
    add r1, r1, #0x3000
    add r9, r9, #0x1
    str r0, [r1, #0x3e8]
    cmp r9, #0x4
    blt L_02161df4
    ldr r0, [r4, #0x0]
    ldr r1, =data_ov004_0216e28c
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r1, =data_ov004_0216e2b0
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3f8]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r1, =data_ov004_0216e2d0
    ldr r2, [r3, #0x0]
    add r2, r2, #0x3000
    str r0, [r2, #0x3e0]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6bc]
    bl func_020c79a0
    ldr r3, =data_ov004_0216e3c0
    ldr r2, =0x33fc
    ldr r1, [r3, #0x0]
    add r1, r1, #0x3000
    str r0, [r1, #0x3e4]
    ldr r1, [r3, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x3dc]
    add r1, r1, r2
    bl func_020739e8
    mov r4, #0x0
    mov r5, r4
    ldr r7, =data_ov004_0216e3c0
    ldr r6, =0x3408
L_02161ed8:
    ldr r1, [r7, #0x0]
    add r0, r1, r4, lsl #0x2
    add r0, r0, #0x3000
    add r1, r1, r6
    ldr r0, [r0, #0x3e8]
    add r1, r1, r5
    bl func_02073a38
    add r4, r4, #0x1
    cmp r4, #0x4
    add r5, r5, #0x4
    blt L_02161ed8
    ldr r0, =data_ov004_0216e3c0
    ldr r1, =0x3418
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x3f8]
    add r1, r2, r1
    bl func_02073a38
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x3e0]
    add r1, r1, #0x3400
    bl func_02073978
    ldr r0, =data_ov004_0216e3c0
    ldr r1, =0x3404
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x3e4]
    add r1, r2, r1
    bl func_020739e8
    ldr r0, =data_ov004_0216e3c0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x3d8]
    bl func_02085d28
    mov r4, r0
    ldr r0, =data_ov004_0216e3c0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x3d8]
    bl func_02085d30
    mov r3, r4
    mov r2, r0
    mov r0, #0x23
    mov r1, #0x0
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0x0
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x600
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x408]
    add r2, r2, #0xc
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0x800
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x600
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x40c]
    add r2, r2, #0xc
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0x600
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x200
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x410]
    add r2, r2, #0xc
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0x1000
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x400
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x410]
    add r2, r2, #0xc
    add r2, r2, #0x200
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0xe00
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x200
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x414]
    add r2, r2, #0xc
    bl func_0207ca98
    mov r0, #0x1a
    mov r1, #0x1800
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x400
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x414]
    add r2, r2, #0xc
    add r2, r2, #0x200
    bl func_0207ca98
    ldr r1, =data_ov004_0216e3c0
    mov r0, #0x16
    ldr r2, [r1, #0x0]
    mov r1, #0x0
    add r2, r2, #0x3000
    ldr r3, [r2, #0x400]
    ldr r2, [r3, #0x14]
    ldr r3, [r3, #0x10]
    bl func_0207ca98
    mov r0, #0x1e
    mov r1, #0x0
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x1c0
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x3fc]
    ldr r2, [r2, #0xc]
    bl func_0207ca98
    mov r0, #0x1f
    mov r1, #0x0
    ldr r2, =data_ov004_0216e3c0
    mov r3, #0x1c0
    ldr r2, [r2, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x404]
    ldr r2, [r2, #0xc]
    bl func_0207ca98
    mov r4, #0x0
    ldr r1, =data_ov004_0216e3c0
L_021620e8:
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
    blt L_021620e8
    ldr r1, =data_ov004_0216e3c0
    mov r4, #0x0
L_0216211c:
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
    blt L_0216211c
    mov r2, #0x0
    ldr r3, =data_ov004_0216dde8
    mov r4, r2
    ldr r7, =data_ov004_0216e3c0
    mov r1, r2
L_0216215c:
    ldrb r0, [r3, #0x0]
    add r6, r2, #0x2
    cmp r2, #0x0
    addne r6, r6, #0x2
    mov r5, r1
    cmp r0, #0x0
    ble L_021621b8
    mov r0, r6, lsl #0x5
    mov r0, r0, lsl #0x1
L_02162180:
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
    blt L_02162180
L_021621b8:
    add r2, r2, #0x1
    cmp r2, #0xa
    add r4, r4, #0x90
    add r3, r3, #0x1
    blt L_0216215c
    mov r3, #0x0
    ldr r4, =data_ov004_0216ddd4
    mov r5, r3
    ldr r7, =data_ov004_0216e3c0
    mov r1, r3
L_021621e0:
    ldrb r0, [r4, #0x0]
    mov r2, r1
    cmp r0, #0x0
    ble L_02162234
    add r0, r3, #0x10
    mov r0, r0, lsl #0x5
    mov r0, r0, lsl #0x1
L_021621fc:
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
    blt L_021621fc
L_02162234:
    add r3, r3, #0x1
    cmp r3, #0x8
    add r5, r5, #0x24
    add r4, r4, #0x1
    blt L_021621e0
    ldr r0, =data_0215a078
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_021622b0
    ldr r3, =data_ov004_0216e3c0
    ldr r0, =data_0214d750
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
L_021622b0:
    bl func_ov004_021615b0
    bl func_ov004_02161380
    bl func_ov004_02161208
    mov r0, #0x0
    ldr r1, =data_ov004_0216e3c0
    mov r3, r0
    mov r2, #0x1
L_021622cc:
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
    blt L_021622cc
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
    bl func_0202816c
    ldr r2, =data_ov004_0216e3c0
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
    bl func_02105824
    ldr r2, =data_ov004_0216e3c0
    ldr r1, =0x3ba
    ldr r3, [r2, #0x0]
    mov r0, r4
    add r3, r3, #0x3000
    add r3, r3, r1
    swpb r1, r0, [r3]
    ldr r3, =0x3bb
    mov r1, r0
L_0216248c:
    ldr r4, [r2, #0x0]
    add r4, r4, r0
    add r4, r4, #0x3000
    add r5, r4, r3
    add r0, r0, #0x1
    cmp r0, #0x6
    swpb r4, r1, [r5]
    blt L_0216248c
    ldr r0, =data_0215a078
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02162584
    ldr r3, [r2, #0x0]
    mov r0, #0x4
    swpb r0, r0, [r3]
    mov r3, #0x2000
    ldr r2, [r2, #0x0]
    mov r0, #0x19
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, #0x264
    bl func_0207ca98
    ldr r2, =data_ov004_0216e3c0
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
    bne L_021626cc
    mov r0, #0x1b
    mov r1, #0x7f
    mov r2, #0x0
    bl func_0208e084
    mov r0, #0x2
    bl func_0208dae8
    b L_021626cc
L_02162584:
    bl func_ov004_02160f14
    ldr r6, =data_ov004_0216e3c0
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
    bl func_0208e084
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
L_021626cc:
    bl func_0207cb18
    bl func_02106ef0
    cmp r0, #0x0
    addeq sp, sp, #0x104
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    bl func_ov004_0215e258
    bl func_02105acc
    add sp, sp, #0x104
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
