#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_02027bcc();
extern void func_02027c48();
extern void func_02027ed0();
extern void func_02027f30();
extern void func_020280d4();
extern void func_0202816c();
extern void func_02028174();
extern void func_02028fd4();
extern void func_0205df50();
extern void func_02067ca0();
extern void func_0206a1a0();
extern void func_0207ca98();
extern void func_0208dae8();
extern void func_0208deb4();
extern void func_0208df98();
extern void func_020ce8e0();
extern void func_02102fe4();
extern void func_0210583c();
extern void func_0210585c();
extern void func_02105910();
extern void func_02106ef0();
extern void func_ov004_0215e258();
extern void func_ov004_0215e750();
extern void func_ov004_0216ae98();
extern char data_0215a078[];
extern char data_ov004_0216ddf4[];
extern char data_ov004_0216dfcc[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215ba94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xbc
    ldr r0, =data_0215a078
    mov r7, #0x0
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffdb08
    ldr r6, =data_ov004_0216e3c0
    mov r9, r0
    ldr r0, [r6, #0x0]
    ldr r0, [r0, #0x4]
    ands r0, r0, #0x1f
    bne L_0215bc14
    mov r0, #0x1b
    mov r5, r7
    str r0, [sp, #0xc]
    mov r0, #0x2
    str r5, [sp, #0x8]
    mvn r8, #0x0
    str r0, [sp, #0x10]
L_0215bae4:
    ldr r0, [r6, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, r5
    add r0, r0, #0x2000
    ldrb r0, [r0, #0x2c5]
    cmp r0, #0x1
    bne L_0215bc08
    mov r1, r5, lsl #0x10
    mov r0, r9
    mov r1, r1, asr #0x10
    mov r4, r8
    bl func_020280d4
    ldrb r1, [r0, #0x1]
    ldrb r2, [r0, #0x2]
    cmp r1, #0x20
    bhs L_0215bb48
    cmp r2, #0x20
    addlo r0, r1, r2, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_0215bb70
L_0215bb48:
    cmp r2, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_0215bb70:
    ldr r0, [r6, #0x0]
    mov r2, r1, asr #0x1
    add r3, r0, r2, lsl #0x1
    add r3, r3, #0x1300
    ldrh r3, [r3, #0x94]
    ldr r10, [sp, #0x8]
L_0215bb88:
    add r11, r0, r10, lsl #0x1
    add r11, r11, #0x1300
    ldrh r11, [r11, #0x84]
    cmp r3, r11
    moveq r4, r10
    add r10, r10, #0x1
    cmp r10, #0x8
    blt L_0215bb88
    cmp r4, #0x4
    bge L_0215bbd0
    ldr r10, [r6, #0x0]
    add r0, r10, r4, lsl #0x1
    add r0, r0, #0x1300
    ldrh r3, [r0, #0x8c]
    add r0, r10, r2, lsl #0x1
    add r0, r0, #0x1300
    strh r3, [r0, #0x94]
    b L_0215bbec
L_0215bbd0:
    ldr r10, [r6, #0x0]
    add r0, r10, r4, lsl #0x1
    add r0, r0, #0x1300
    ldrh r3, [r0, #0x7c]
    add r0, r10, r2, lsl #0x1
    add r0, r0, #0x1300
    strh r3, [r0, #0x94]
L_0215bbec:
    ldr r4, [r6, #0x0]
    ldr r3, =0x1394
    ldr r0, [sp, #0xc]
    add r4, r4, r3
    ldr r3, [sp, #0x10]
    add r2, r4, r2, lsl #0x1
    bl func_0207ca98
L_0215bc08:
    add r5, r5, #0x1
    cmp r5, #0x40
    blt L_0215bae4
L_0215bc14:
    ldr r0, =data_ov004_0216e3c0
    mvn r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c8]
    cmp r0, r1
    addne sp, sp, #0xbc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    bl func_02106ef0
    cmp r0, #0x0
    beq L_0215bc58
    bl func_0210585c
    ldr r1, =data_ov004_0216e3c0
    ldr r1, [r1, #0x0]
    add r1, r1, #0x3000
    str r0, [r1, #0x39c]
L_0215bc58:
    ldr r4, =data_ov004_0216e3c0
    ldr r0, [r4, #0x0]
    add r3, r0, #0x3000
    ldr r2, [r3, #0x6c4]
    add r0, r2, #0x2000
    ldr r1, [r0, #0x264]
    ldr r0, [r2, #0x8]
    cmp r1, r0
    bge L_0215bcfc
    add r0, r2, r1, lsl #0x1
    ldrb r1, [r0, #0xc]
    ldr r8, [r3, #0x39c]
    ldrb r6, [r2, #0x0]
    mov r1, r1, lsl #0x3
    mul r5, r1, r8
    mov r6, r6, lsl #0x3
    rsb r1, r8, #0x1000
    mla r5, r6, r1, r5
    ldrb r1, [r2, #0x1]
    ldrb r0, [r0, #0xd]
    ldrsh r2, [r2, #0x2]
    mov r5, r5, asr #0xc
    mov r0, r0, lsl #0x3
    sub r2, r5, r2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    str r2, [r3, #0x394]
    ldr r2, [r4, #0x0]
    mov r5, r1, lsl #0x3
    add r1, r2, #0x3000
    ldr r4, [r1, #0x39c]
    ldr r2, [r1, #0x6c4]
    mul r3, r0, r4
    rsb r0, r4, #0x1000
    mla r3, r5, r0, r3
    ldrsh r0, [r2, #0x4]
    mov r2, r3, asr #0xc
    sub r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x398]
L_0215bcfc:
    ldr r2, =data_ov004_0216e3c0
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x39c]
    cmp r1, #0x1000
    bne L_0215ca0c
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldrb r3, [r1, #0x315]
    cmp r3, #0x0
    bne L_0215ca0c
    ldr r1, [r1, #0x264]
    add r3, r0, r1, lsl #0x1
    ldrb r1, [r3, #0xc]
    ldrb r10, [r3, #0xd]
    str r1, [sp, #0x0]
    cmp r1, #0x20
    swpb r1, r1, [r0]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x1
    swpb r0, r10, [r1]
    bhs L_0215bd88
    cmp r10, #0x20
    ldrlo r0, [sp, #0x0]
    addlo r0, r0, r10, lsl #0x5
    movlo r4, r0, lsl #0x1
    blo L_0215bdc0
    ldr r0, [sp, #0x0]
    sub r1, r10, #0x20
    add r0, r0, r1, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x1000
    b L_0215bdc0
L_0215bd88:
    cmp r10, #0x20
    bhs L_0215bda8
    ldr r0, [sp, #0x0]
    sub r0, r0, #0x20
    add r0, r0, r10, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x800
    b L_0215bdc0
L_0215bda8:
    ldr r0, [sp, #0x0]
    sub r1, r0, #0x20
    sub r0, r10, #0x20
    add r0, r1, r0, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x1800
L_0215bdc0:
    bl func_0206a1a0
    ldrh r1, [r0, r4]
    ldr r0, =0x3ff
    mov r6, #0x0
    and r0, r1, r0
    str r0, [sp, #0x4]
    mov r0, #0x54
    str r0, [sp, #0x14]
    mov r0, #0xf
    str r0, [sp, #0x1c]
    mvn r0, #0x9
    str r0, [sp, #0x4c]
    mov r0, #0x7d0
    str r0, [sp, #0x24]
    mov r0, #0x3
    str r0, [sp, #0x28]
    mov r0, #0x64
    str r0, [sp, #0x2c]
    mov r0, #0x4
    str r0, [sp, #0x30]
    mov r0, #0x1f4
    str r0, [sp, #0x34]
    mov r0, #0x5
    str r0, [sp, #0x38]
    mov r0, #0x6
    str r0, [sp, #0x40]
    mov r0, #0x7
    str r0, [sp, #0x48]
    mov r0, #0x12c
    str r0, [sp, #0x50]
    mov r0, #0xb4
    ldr r4, =data_ov004_0216e3c0
    str r6, [sp, #0x18]
    str r6, [sp, #0x20]
    str r6, [sp, #0x3c]
    str r6, [sp, #0x44]
    mov r5, #0x1
    mov r11, #0x2
    str r6, [sp, #0x58]
    str r0, [sp, #0x54]
L_0215be60:
    ldr r0, [r4, #0x0]
    add r1, r0, r6, lsl #0x1
    add r1, r1, #0xf00
    ldrh r2, [r1, #0x7a]
    ldr r1, =0x3ff
    and r2, r2, r1
    ldr r1, [sp, #0x4]
    cmp r1, r2
    bne L_0215c170
    cmp r6, #0x4
    addls pc, pc, r6, lsl #0x2
    b L_0215c170
L_0215be90:
    b L_0215bea4
    b L_0215c0c0
    b L_0215c0e8
    b L_0215c110
    b L_0215c12c
L_0215bea4:
    ldr r1, [sp, #0x14]
    mov r0, r9
    mov r2, r5
    bl func_02028fd4
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    str r5, [r0, #0x6c8]
    ldr r0, =data_0215a078
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffdb08
    ldr r7, [sp, #0x18]
    mov r8, r0
L_0215bed8:
    mov r1, r7, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_020280d4
    ldrb r1, [r0, #0x3]
    add r7, r7, #0x1
    cmp r1, #0x0
    subne r2, r1, #0x1
    addne r1, r0, #0x3
    swpneb r0, r2, [r1]
    cmp r7, #0x40
    blt L_0215bed8
    mov r0, r8
    bl func_02028174
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2300
    ldrsb r0, [r0, #0x14]
    cmp r0, #0x1
    addlt r0, r1, #0x2000
    addlt r1, r0, #0x314
    swpltb r0, r5, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2300
    ldrsb r0, [r0, #0x14]
    cmp r0, #0xf
    addgt r0, r1, #0x2000
    addgt r1, r0, #0x314
    ldrgt r0, [sp, #0x1c]
    swpgtb r0, r0, [r1]
    ldr r1, [r4, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r1, [r1, #0x24]
    add r0, r0, #0x2000
    ldr r2, [r0, #0x264]
    ldr r0, =0x2710
    mul r0, r2, r0
    bl func_0205df50
    rsb r0, r0, #0x0
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
    ldr r1, [sp, #0x20]
    mov r0, r9
    bl func_02027ed0
    ldr r2, [sp, #0x24]
    mov r0, r9
    mov r1, r11
    bl func_02027f30
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x2c]
    mov r0, r9
    bl func_02027ed0
    ldr r1, [sp, #0x30]
    ldr r2, [sp, #0x34]
    mov r0, r9
    bl func_02027ed0
    ldr r2, =0x2710
    mov r0, r9
    mov r1, r5
    bl func_02027f30
    ldr r1, [sp, #0x38]
    ldr r2, [sp, #0x3c]
    mov r0, r9
    bl func_02027f30
    ldr r1, [sp, #0x40]
    ldr r2, [sp, #0x44]
    mov r0, r9
    bl func_02027f30
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x48]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    mov r0, r9
    add r2, r2, #0x2000
    ldr r2, [r2, #0x264]
    rsb r2, r2, #0x0
    mov r2, r2, lsl #0x11
    mov r2, r2, asr #0x10
    bl func_02027ed0
    ldr r1, [r4, #0x0]
    mov r0, r9
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    ldr r1, [r1, #0x264]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, lsl #0xf
    mov r1, r1, lsr #0x10
    bl func_02027bcc
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2300
    ldrsb r0, [r0, #0x19]
    cmp r0, #0x0
    bge L_0215c070
    ldr r0, [sp, #0x4c]
    bl func_020ce8e0
L_0215c070:
    mov r0, r9
    bl func_0202816c
    ldrh r1, [r0, #0x76]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2300
    ldrsb r0, [r0, #0x14]
    add r7, r0, r1
    cmp r7, #0x12c
    ldrge r7, [sp, #0x50]
    mov r0, r9
    bl func_0202816c
    strh r7, [r0, #0x76]
    mov r0, r9
    bl func_02028174
    ldr r0, [sp, #0x54]
    bl func_0208df98
    mov r7, r5
    b L_0215c170
L_0215c0c0:
    ldr r1, [sp, #0x14]
    mov r0, r9
    mov r2, r5
    bl func_02028fd4
    ldr r0, [r4, #0x0]
    mov r7, r5
    add r1, r0, #0x3000
    ldr r0, [sp, #0x30]
    str r0, [r1, #0x6c8]
    b L_0215c170
L_0215c0e8:
    ldr r1, [sp, #0x14]
    mov r0, r9
    mov r2, r11
    bl func_02028fd4
    ldr r0, [r4, #0x0]
    mov r7, r5
    add r1, r0, #0x3000
    ldr r0, [sp, #0x28]
    str r0, [r1, #0x6c8]
    b L_0215c170
L_0215c110:
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x306
    add r1, r1, r0
    ldr r0, [sp, #0x58]
    swpb r0, r0, [r1]
L_0215c12c:
    cmp r6, #0x4
    bne L_0215c150
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x306
    add r1, r1, r0
    swpb r0, r5, [r1]
L_0215c150:
    ldr r1, [sp, #0x14]
    mov r0, r9
    mov r2, r11
    bl func_02028fd4
    ldr r0, [r4, #0x0]
    mov r7, r5
    add r0, r0, #0x3000
    str r11, [r0, #0x6c8]
L_0215c170:
    add r6, r6, #0x1
    cmp r6, #0x5
    blt L_0215be60
    cmp r7, #0x0
    bne L_0215c354
    mov r0, #0x96
    mov r8, #0x0
    str r0, [sp, #0x68]
    mov r0, #0x4
    ldr r4, =data_ov004_0216e3c0
    str r8, [sp, #0x5c]
    mov r6, r8
    str r8, [sp, #0x60]
    str r8, [sp, #0x64]
    mov r5, #0x1
    mov r11, #0x53
    str r0, [sp, #0x6c]
L_0215c1b4:
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, r8
    add r1, r1, #0x2200
    ldrsb r1, [r1, #0x70]
    cmp r1, #0x1
    bne L_0215c348
    add r1, r0, r8, lsl #0x1
    add r1, r1, #0x2000
    ldrb r3, [r1, #0x268]
    ldrb r2, [r1, #0x269]
    ldr r1, [sp, #0x0]
    sub r1, r3, r1
    cmp r1, #0x0
    rsble r1, r1, #0x0
    sub r2, r2, r10
    cmp r1, #0x1
    bgt L_0215c348
    cmp r2, #0x0
    rsble r2, r2, #0x0
    cmp r2, #0x1
    bgt L_0215c348
    add r0, r0, #0x2000
    add r1, r0, #0x274
    swpb r0, r8, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    str r6, [r0, #0x3a8]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x315
    add r1, r1, r0
    swpb r0, r5, [r1]
    bl func_0210583c
    ldr r0, [r4, #0x0]
    add r1, r0, #0x3000
    ldr r3, [r1, #0x6c4]
    ldrb r2, [r0, #0x1c]
    add r1, r3, r8, lsl #0x1
    add r1, r1, #0x2000
    ldrb r1, [r1, #0x268]
    sub r1, r2, r1
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r1, #0xd
    bge L_0215c2e0
    add r1, r3, r8, lsl #0x1
    ldrb r2, [r0, #0x1d]
    add r0, r1, #0x2000
    ldrb r0, [r0, #0x269]
    sub r0, r2, r0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, #0xd
    bge L_0215c2e0
    ldr r0, [sp, #0x5c]
    mov r1, r0
    mov r2, r0
    bl func_02102fe4
    ldr r2, [r4, #0x0]
    ldr r1, =0x33a0
    mov r3, #0x4
    add r7, r2, r1
L_0215c2bc:
    ldrb r1, [r0], #0x1
    ldrb r2, [r0], #0x1
    subs r3, r3, #0x1
    swpb r1, r1, [r7]
    add r7, r7, #0x1
    swpb r1, r2, [r7]
    add r7, r7, #0x1
    bne L_0215c2bc
    b L_0215c324
L_0215c2e0:
    mov r0, r9
    bl func_02027c48
    ldr r1, [sp, #0x60]
    mov r2, r1
    bl func_02102fe4
    ldr r2, [r4, #0x0]
    ldr r1, =0x33a0
    mov r3, #0x4
    add r7, r2, r1
L_0215c304:
    ldrb r1, [r0], #0x1
    ldrb r2, [r0], #0x1
    subs r3, r3, #0x1
    swpb r1, r1, [r7]
    add r7, r7, #0x1
    swpb r1, r2, [r7]
    add r7, r7, #0x1
    bne L_0215c304
L_0215c324:
    mov r0, r9
    mov r1, r11
    mov r2, r5
    bl func_02028fd4
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x68]
    bl func_0208deb4
    ldr r8, [sp, #0x6c]
    mov r7, r5
L_0215c348:
    add r8, r8, #0x1
    cmp r8, #0x4
    blt L_0215c1b4
L_0215c354:
    cmp r7, #0x0
    bne L_0215c588
    mov r0, #0x2
    str r0, [sp, #0x78]
    mov r5, #0x0
    mov r0, #0x8
    str r0, [sp, #0x70]
    mov r0, #0x70
    ldr r8, =data_ov004_0216e3c0
    str r5, [sp, #0x74]
    str r5, [sp, #0x7c]
    mov r4, #0x1
    str r0, [sp, #0x80]
L_0215c388:
    ldr r0, [r8, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, r5
    add r1, r1, #0x2200
    ldrsb r1, [r1, #0x85]
    cmp r1, #0x1
    bne L_0215c57c
    add r1, r0, r5, lsl #0x1
    add r1, r1, #0x2000
    ldrb r3, [r1, #0x275]
    ldrb r2, [r1, #0x276]
    ldr r1, [sp, #0x0]
    sub r1, r3, r1
    cmp r1, #0x0
    rsble r1, r1, #0x0
    sub r2, r2, r10
    cmp r1, #0x1
    bgt L_0215c57c
    cmp r2, #0x0
    rsble r2, r2, #0x0
    cmp r2, #0x1
    bgt L_0215c57c
    add r1, r0, #0x2000
    ldr r0, =0x295
    add r1, r1, r0
    swpb r0, r5, [r1]
    ldr r0, [r8, #0x0]
    add r0, r0, #0x3000
    str r4, [r0, #0x3a8]
    ldr r0, [r8, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x315
    add r1, r1, r0
    swpb r0, r4, [r1]
    bl func_0210583c
    ldr r0, [r8, #0x0]
    mov r7, r4
    add r1, r0, #0x3000
    ldr r2, [r1, #0x6c0]
    ldr r0, =0x10dcd
    ldr r5, [sp, #0x70]
    mul r0, r2, r0
    add r0, r0, #0x1
    str r0, [r1, #0x6c0]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    bne L_0215c534
    ldr r6, [r8, #0x0]
    add r0, r6, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrb r1, [r6, #0x1c]
    add r0, r2, #0x2000
    ldrb r0, [r0, #0x285]
    sub r0, r1, r0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, #0xd
    bge L_0215c4e4
    add r0, r2, #0x2000
    ldrb r0, [r0, #0x286]
    ldrb r1, [r6, #0x1d]
    sub r0, r1, r0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, #0xd
    bge L_0215c4e4
    ldr r0, [sp, #0x74]
    ldr r2, [sp, #0x78]
    mov r1, r0
    bl func_02102fe4
    ldr r1, =0x33a0
    add r2, r6, r1
    mov r1, #0x4
L_0215c4c0:
    ldrb r3, [r0], #0x1
    ldrb r11, [r0], #0x1
    subs r1, r1, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r11, [r2]
    add r2, r2, #0x1
    bne L_0215c4c0
    b L_0215c524
L_0215c4e4:
    mov r0, r9
    bl func_02027c48
    ldr r1, [sp, #0x7c]
    ldr r2, [sp, #0x78]
    bl func_02102fe4
    ldr r1, =0x33a0
    add r2, r6, r1
    mov r1, #0x4
L_0215c504:
    ldrb r3, [r0], #0x1
    ldrb r11, [r0], #0x1
    subs r1, r1, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r11, [r2]
    add r2, r2, #0x1
    bne L_0215c504
L_0215c524:
    ldr r0, [sp, #0x80]
    add r1, r6, #0x3000
    str r0, [r1, #0x3ac]
    b L_0215c57c
L_0215c534:
    ldr r0, [r8, #0x0]
    mov r2, #0x3
    add r1, r0, #0x3000
    ldr r3, [r1, #0x6c0]
    ldr r0, =0x10dcd
    mul r0, r3, r0
    add r0, r0, #0x1
    str r0, [r1, #0x6c0]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r2
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add r1, r0, #0x72
    ldr r0, [r8, #0x0]
    add r0, r0, #0x3000
    str r1, [r0, #0x3ac]
L_0215c57c:
    add r5, r5, #0x1
    cmp r5, #0x8
    blt L_0215c388
L_0215c588:
    cmp r7, #0x0
    bne L_0215c798
    mov r0, #0x2
    str r0, [sp, #0x88]
    mov r0, #0x3
    str r0, [sp, #0x8c]
    mov r0, #0x5
    str r0, [sp, #0x90]
    mov r0, #0x4
    ldr r4, =data_ov004_0216e3c0
    mov r8, #0x0
    mov r6, #0x54
    mov r5, #0x1
    str r0, [sp, #0x94]
L_0215c5c0:
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, r8
    add r1, r1, #0x2200
    ldrsb r1, [r1, #0x9e]
    cmp r1, #0x1
    bne L_0215c78c
    add r1, r0, r8, lsl #0x1
    add r1, r1, #0x2000
    ldrb r3, [r1, #0x296]
    ldrb r2, [r1, #0x297]
    ldr r1, [sp, #0x0]
    sub r1, r3, r1
    cmp r1, #0x0
    rsble r1, r1, #0x0
    sub r2, r2, r10
    cmp r1, #0x1
    bgt L_0215c78c
    cmp r2, #0x0
    rsble r2, r2, #0x0
    cmp r2, #0x1
    bgt L_0215c78c
    add r1, r0, #0x2000
    ldr r0, =0x2a2
    add r1, r1, r0
    swpb r0, r8, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, r8, lsl #0x1
    add r1, r0, #0x2000
    ldrb r0, [r1, #0x296]
    ldrb r1, [r1, #0x297]
    bl func_ov004_0215e750
    mov lr, r0
    ldr r0, [r4, #0x0]
    add r11, sp, #0x9c
    ldr ip, =data_ov004_0216dfcc
    add r7, r0, #0x3000
    str r11, [sp, #0x84]
    ldmia ip!, {r0, r1, r2, r3}
    stmia r11!, {r0, r1, r2, r3}
    ldmia ip, {r0, r1, r2, r3}
    stmia r11, {r0, r1, r2, r3}
    ldr r0, [r7, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x2a3
    ldrb r2, [r1, #0x305]
    add r1, r1, r0
    ldr r0, =data_ov004_0216ddf4
    add r0, r0, r2, lsl #0x2
    ldrsb r2, [r8, r0]
    ldr r0, [sp, #0x84]
    ldr r0, [r0, r2, lsl #0x2]
    add r0, r0, lr
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2200
    ldrsb r0, [r0, #0xa3]
    cmp r0, #0x3
    ldrge r0, =0x2a3
    addge r1, r1, #0x2000
    addge r1, r1, r0
    ldrge r0, [sp, #0x88]
    swpgeb r0, r0, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2200
    ldrsb r0, [r0, #0xa3]
    cmp r0, #0x0
    beq L_0215c700
    cmp r0, #0x1
    beq L_0215c714
    cmp r0, #0x2
    beq L_0215c728
    b L_0215c738
L_0215c700:
    ldr r2, [sp, #0x8c]
    mov r0, r9
    mov r1, r6
    bl func_02028fd4
    b L_0215c738
L_0215c714:
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_02028fd4
    b L_0215c738
L_0215c728:
    ldr r2, [sp, #0x88]
    mov r0, r9
    mov r1, r6
    bl func_02028fd4
L_0215c738:
    ldr r0, [r4, #0x0]
    add r1, r0, #0x3000
    ldr r0, [sp, #0x90]
    str r0, [r1, #0x6c8]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x315
    add r1, r1, r0
    swpb r0, r5, [r1]
    bl func_0210583c
    ldr r0, [r4, #0x0]
    ldr r8, [sp, #0x94]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    mov r7, r5
    add r1, r0, #0x2000
    ldr r0, =0x316
    add r1, r1, r0
    swpb r0, r5, [r1]
L_0215c78c:
    add r8, r8, #0x1
    cmp r8, #0x4
    blt L_0215c5c0
L_0215c798:
    cmp r7, #0x0
    bne L_0215c844
    mov r0, #0x7
    ldr r4, =data_ov004_0216e3c0
    mov r8, #0x0
    mov r6, #0x2
    mov r5, #0x1
    mov r11, #0x4
    str r0, [sp, #0x98]
L_0215c7bc:
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, r8, lsl #0x2
    add r0, r0, #0x2000
    add r1, r1, #0x2000
    ldr r2, [r0, #0x264]
    ldr r0, [r1, #0x2a8]
    cmp r2, r0
    bne L_0215c838
    mov r0, r9
    mov r1, r6
    bl func_ov004_0216ae98
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, #0x2c4
    swpb r0, r8, [r1]
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r0, #0x2000
    ldr r0, =0x315
    add r1, r1, r0
    swpb r0, r5, [r1]
    bl func_0210583c
    mov r0, r11
    mov r7, r5
    bl func_0208dae8
    ldr r8, [sp, #0x98]
L_0215c838:
    add r8, r8, #0x1
    cmp r8, #0x7
    blt L_0215c7bc
L_0215c844:
    cmp r7, #0x0
    bne L_0215c8d0
    ldr r4, =data_ov004_0216e3c0
    ldr r11, =0x315
    mov r0, #0x0
    mov r8, #0x3
    mov r6, #0x1
    mov r5, #0x7
L_0215c864:
    ldr r1, [r4, #0x0]
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r2, r1, r0, lsl #0x2
    add r1, r1, #0x2000
    add r2, r2, #0x2000
    ldr r3, [r1, #0x264]
    ldr r1, [r2, #0x308]
    cmp r3, r1
    bne L_0215c8c4
    mov r0, r9
    mov r1, r8
    bl func_ov004_0216ae98
    ldr r0, [r4, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r11
    swpb r0, r6, [r1]
    bl func_0210583c
    mov r0, r8
    mov r7, r6
    bl func_0208dae8
    mov r0, r5
L_0215c8c4:
    add r0, r0, #0x1
    cmp r0, #0x3
    blt L_0215c864
L_0215c8d0:
    cmp r7, #0x0
    bne L_0215c9e4
    ldr r0, [sp, #0x0]
    cmp r0, #0x20
    bhs L_0215c940
    cmp r10, #0x20
    addlo r0, r0, r10, lsl #0x5
    movlo r0, r0, lsl #0x1
    subhs r1, r10, #0x20
    addhs r0, r0, r1, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r0, r0, #0x1000
    b L_0215c968
L_0215c940:
    cmp r10, #0x20
    sublo r0, r0, #0x20
    addlo r0, r0, r10, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r0, r0, #0x800
    subhs r1, r0, #0x20
    subhs r0, r10, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r0, r0, #0x1800
L_0215c968:
    ldr r6, =data_ov004_0216e3c0
    mov r1, r0, asr #0x1
    ldr r2, [r6, #0x0]
    mov r0, #0x1
    add r1, r2, r1, lsl #0x1
    add r1, r1, #0x1300
    ldrh r4, [r1, #0x94]
    mov r10, r0
    mov r8, r0
    mov r7, #0x4
    ldr r5, =0x315
L_0215c994:
    ldr r1, [r6, #0x0]
    add r1, r1, r0, lsl #0x1
    add r1, r1, #0x1300
    ldrh r1, [r1, #0x84]
    cmp r4, r1
    bne L_0215c9d8
    mov r0, r9
    mov r1, r10
    bl func_ov004_0216ae98
    ldr r0, [r6, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r5
    swpb r0, r8, [r1]
    bl func_0210583c
    mov r0, r7
L_0215c9d8:
    add r0, r0, #0x1
    cmp r0, #0x4
    blt L_0215c994
L_0215c9e4:
    bl func_ov004_0215e258
    bl func_02105910
    ldr r0, =data_ov004_0216e3c0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    ldr r1, [r0, #0x264]
    add r1, r1, #0x1
    str r1, [r0, #0x264]
L_0215ca0c:
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x16]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x18]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x394]
    cmp r1, #0x38
    ldrle r0, [r0, #0x6c4]
    suble r1, r1, #0x38
    ldrlesh r0, [r0, #0x2]
    addle r0, r1, r0
    strleh r0, [r2, #0x16]
    ldr r0, =data_ov004_0216e3c0
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x394]
    cmp r1, #0xc0
    ldrge r0, [r0, #0x6c4]
    subge r1, r1, #0xc0
    ldrgesh r0, [r0, #0x2]
    addge r0, r1, r0
    strgeh r0, [r2, #0x16]
    ldr r0, =data_ov004_0216e3c0
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x398]
    cmp r1, #0x28
    ldrle r0, [r0, #0x6c4]
    suble r1, r1, #0x28
    ldrlesh r0, [r0, #0x4]
    addle r0, r1, r0
    strleh r0, [r2, #0x18]
    ldr r0, =data_ov004_0216e3c0
    ldr r2, [r0, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x398]
    cmp r1, #0x90
    ldrge r0, [r0, #0x6c4]
    subge r1, r1, #0x90
    ldrgesh r0, [r0, #0x4]
    addge r0, r1, r0
    strgeh r0, [r2, #0x18]
    ldr r0, =data_ov004_0216e3c0
    mov r2, #0x0
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x16]
    cmp r0, #0x0
    movlt r0, #0x0
    strlth r0, [r1, #0x16]
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x16]
    cmp r0, #0x100
    movgt r0, #0x100
    strgth r0, [r1, #0x16]
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x18]
    cmp r0, #0x0
    movlt r0, #0x0
    strlth r0, [r1, #0x18]
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x18]
    cmp r0, #0xc0
    movgt r0, #0xc0
    strgth r0, [r1, #0x18]
    ldr r1, =data_ov004_0216e3c0
    ldr r0, [r1, #0x0]
    str r2, [r0, #0x8]
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    add r0, r0, #0x1
    str r0, [r2, #0x8]
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    cmp r0, #0x8
    blt L_0215cbbc
    add r0, r2, #0x3000
    ldrsh r2, [r2, #0x16]
    ldr r0, [r0, #0x6c4]
    add sp, sp, #0xbc
    strh r2, [r0, #0x2]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x18]
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215cbbc:
    mov r0, r0, lsl #0xc
    mov r1, #0x8000
    bl func_02067ca0
    ldr r5, =data_ov004_0216e3c0
    mov r4, #0x800
    ldr r3, [r5, #0x0]
    ldrsh r2, [r3, #0x14]
    ldrsh r7, [r3, #0x18]
    ldrsh r1, [r3, #0x12]
    ldrsh r6, [r3, #0x16]
    sub r7, r7, r2
    mov r7, r7, lsl #0xc
    sub r6, r6, r1
    mov r6, r6, lsl #0xc
    smull r7, r8, r0, r7
    adds r9, r7, r4
    add r3, r3, #0x3000
    smull r7, r6, r0, r6
    adc r0, r8, #0x0
    adds r4, r7, r4
    mov r7, r9, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    add r0, r7, r2, lsl #0xc
    add r2, r0, #0x800
    adc r0, r6, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r0, r4, r1, lsl #0xc
    add r1, r0, #0x800
    ldr r0, [r3, #0x6c4]
    mov r1, r1, asr #0xc
    strh r1, [r0, #0x2]
    ldr r0, [r5, #0x0]
    mov r1, r2, asr #0xc
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
    add sp, sp, #0xbc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
