/* compiler: 2.0/sp1p5  */
/* func_020e6b30 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020e6b30.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_01ffda04();
extern void func_020273b8();
extern void func_02027f40();
extern void func_020280c8();
extern void func_02028144();
extern void func_020a3928();
extern void func_020a3c40();
extern void func_020a82fc();
extern void func_020a8458();
extern void func_020a8a64();
extern void func_020a8ec4();
extern void func_020af728();
extern void func_020b5024();
extern void func_020b50fc();
extern void func_020b54bc();
extern void func_020b8b0c();
extern void func_020b91bc();
extern void func_020b9218();
extern void func_020b93d4();
extern void func_020b9408();
extern void func_020c6534();
extern void func_020c98e4();
extern void func_020c99bc();
extern void func_020caa40();
extern char data_0212fec4[];
extern char data_0212fed4[];
extern char data_02146d9c[];
extern char data_02146da0[];
extern char data_02146da4[];
extern char data_02146dac[];
extern char data_02146db4[];
extern char data_02146dbc[];
extern char data_02146dfc[];
extern char data_02146e0c[];
extern char data_02146e1c[];
extern char data_02146e38[];
extern char data_02146e48[];
extern char data_02146e60[];
extern char data_02146e74[];
extern char data_02146e88[];
extern char data_02146e8c[];
extern char data_02153740[];
extern char data_02154c3c[];
// clang-format off
asm void func_020e6b30(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x244
    mov r4, r0
    add r0, r4, #0x970
    ldr r0, [r0, #0x4]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_01ffda04
    str r0, [sp, #0x8]
    bl func_02028144
    mov r1, #0x0
    str r1, [r4, #0x8]
    str r1, [r4, #0x0]
    ldr r1, [r4, #0x0]
    str r0, [sp, #0xc]
    str r1, [r4, #0x4]
    mvn r1, #0x1
    mov r0, #0x40
    str r1, [r4, #0x970]
    bl func_020b50fc
    ldr r1, =data_02146dfc
    mov r0, #0x40
    bl func_020b5024
    mov r5, r0
    ldr r1, =data_02146e0c
    mov r0, #0x40
    bl func_020b5024
    str r0, [sp, #0x10]
    ldr r1, =data_02146e1c
    mov r0, #0x40
    bl func_020b5024
    str r0, [sp, #0x14]
    ldr r1, =data_02146e38
    mov r0, #0x40
    bl func_020b5024
    mov r4, r0
    ldr r1, =data_02146e48
    mov r0, #0x40
    bl func_020b5024
    mov r1, r5
    mov r5, r0
    mov r0, #0x2
    bl func_020b93d4
    ldr r1, [sp, #0x10]
    mov r0, #0x2
    bl func_020b9408
    ldr r1, [sp, #0x14]
    mov r0, #0x2
    bl func_020b9218
    mov r1, r5
    mov r0, #0x2
    bl func_020b91bc
    bl func_020a8ec4
    mov r0, #0x0
    str r0, [sp, #0x4]
    str r0, [sp, #0x90]
    mov r0, #0x1
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x4]
    ldr r8, =data_0212fec4
    str r0, [sp, #0x94]
    str r0, [sp, #0x98]
    str r0, [sp, #0x9c]
    mov r0, #0x5
    str r0, [sp, #0x6c]
    ldr r0, [sp, #0x4]
    ldr r7, =data_0212fed4
    str r0, [sp, #0xa8]
    mov r0, #0xf40
    str r0, [sp, #0xb8]
    ldr r0, [sp, #0x4]
    ldr r10, =data_02154c3c
    str r0, [sp, #0xc8]
    mov r0, #0x9
    str r0, [sp, #0x70]
    ldr r0, [sp, #0x4]
    add r6, sp, #0xea
    str r0, [sp, #0x68]
    str r0, [sp, #0x74]
    mov r0, #0x3a
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x4]
    add r5, sp, #0x17c
    str r0, [sp, #0x7c]
    str r0, [sp, #0x80]
    mov r0, #0x7
    str r0, [sp, #0x88]
    ldr r0, [sp, #0x4]
    mov r11, #0x4
    str r0, [sp, #0x8c]
    mov r0, #0x3
    str r0, [sp, #0xa0]
    ldr r0, [sp, #0x4]
    str r0, [sp, #0xa4]
    str r0, [sp, #0xc4]
    str r0, [sp, #0xbc]
    str r0, [sp, #0xc0]
    str r0, [sp, #0xac]
    str r0, [sp, #0xb0]
    str r0, [sp, #0xb4]
    str r0, [sp, #0x84]
    str r0, [sp, #0x64]
    str r0, [sp, #0x60]
    str r0, [sp, #0x58]
    str r0, [sp, #0x5c]
    str r0, [sp, #0x50]
    str r0, [sp, #0x54]
    str r0, [sp, #0x48]
    str r0, [sp, #0x4c]
    str r0, [sp, #0x40]
    str r0, [sp, #0x44]
    str r0, [sp, #0x38]
    str r0, [sp, #0x3c]
    str r0, [sp, #0x34]
    str r0, [sp, #0x2c]
    str r0, [sp, #0x24]
    str r0, [sp, #0x28]
L_020e6d04:
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x14]
    str r0, [sp, #0x0]
    ldrb r3, [r8, #0x0]
    ldr r2, [sp, #0x10]
    bl func_020a8a64
    ldrb r1, [r8, #0x0]
    ldr r0, [sp, #0x28]
    bl func_020a8458
    ldr r0, [sp, #0x4]
    cmp r0, #0xd
    addls pc, pc, r0, lsl #0x2
    b L_020e74c4
L_020e6d38:
    b L_020e6d70
    b L_020e6d94
    b L_020e6dd0
    b L_020e6e00
    b L_020e6e30
    b L_020e6e60
    b L_020e6e90
    b L_020e6ec0
    b L_020e6f28
    b L_020e70f8
    b L_020e72ac
    b L_020e7378
    b L_020e73cc
    b L_020e73fc
L_020e6d70:
    ldr r0, [sp, #0xc]
    mov r1, r4
    add r0, r0, #0x78
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x2c]
    bl func_020a82fc
    b L_020e74c4
L_020e6d94:
    ldr r0, [sp, #0xc]
    ldr r1, [r10, #0x0]
    ldrh r3, [r0, #0x0]
    ldr r0, [r1, #0x4]
    ldr r1, =0x514
    ldr r2, [sp, #0x30]
    add r1, r3, r1
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x34]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6dd0:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf5b
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x38]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x3c]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6e00:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf5c
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x40]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x44]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6e30:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3e
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x48]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x4c]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6e60:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3d
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x50]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x54]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6e90:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf46
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x58]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x5c]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6ec0:
    ldr r0, [sp, #0xc]
    bl func_020caa40
    cmp r0, #0x0
    beq L_020e6ef8
    add r0, sp, #0x120
    bl func_020c99bc
    add r0, sp, #0x12c
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x60]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6ef8:
    ldr r0, [sp, #0xc]
    bl func_020c98e4
    cmp r0, #0x0
    beq L_020e74c4
    add r0, r0, #0xc
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x64]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e6f28:
    ldr r0, [sp, #0xc]
    ldr r1, =0x88888889
    add r0, r0, #0x600
    ldrh r2, [r0, #0x4c]
    ldr r9, [sp, #0x68]
    smull r3, r0, r1, r2
    smull lr, r3, r1, r2
    add r3, r2, r3
    add r0, r2, r0
    mov ip, r2, lsr #0x1f
    mov r3, r3, asr #0x5
    mov r0, r0, asr #0x5
    add r0, ip, r0
    ldr r1, =0x3c
    add r3, ip, r3
    smull r3, ip, r1, r3
    ldr r1, =0x66666667
    sub r3, r2, r3
    smull ip, r2, r1, r3
    str r2, [sp, #0x18]
    mov r1, r2, asr #0x2
    cmp r0, #0x3e8
    mov ip, r3, lsr #0x1f
    str r1, [sp, #0x18]
    add r1, ip, r2, asr #0x2
    str r1, [sp, #0x18]
    ldr r1, =0x66666667
    ldrgt r0, =0x3e7
    smull lr, r2, r1, r3
    str r2, [sp, #0x1c]
    mov r1, r2, asr #0x2
    str r1, [sp, #0x1c]
    add r2, ip, r2, asr #0x2
    ldr r1, =0xa
    str r2, [sp, #0x1c]
    smull r2, ip, r1, r2
    sub r1, r3, r2
    str r1, [sp, #0x1c]
    ldrgt r1, [sp, #0x6c]
    strgt r1, [sp, #0x18]
    ldrgt r1, [sp, #0x70]
    strgt r1, [sp, #0x1c]
    mov r1, r6
    bl func_020a3928
    ldr r0, [sp, #0x18]
    add r1, sp, #0xf2
    bl func_020a3928
    ldr r0, [sp, #0x1c]
    add r1, sp, #0xfa
    bl func_020a3928
    ldrh r1, [sp, #0xea]
    ldr r0, [sp, #0x74]
    cmp r1, #0x0
    beq L_020e7030
L_020e7000:
    mov r1, r0, lsl #0x1
    ldrh r3, [r6, r1]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x2
    add r0, r0, #0x1
    strh r3, [r1, r2]
    mov r1, r0, lsl #0x1
    ldrh r1, [r6, r1]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_020e7000
L_020e7030:
    add r0, sp, #0x100
    mov r2, r9, lsl #0x1
    ldr r1, [sp, #0x78]
    add r0, r0, #0x2
    strh r1, [r0, r2]
    ldrh r1, [sp, #0xf2]
    add r9, r9, #0x1
    ldr r0, [sp, #0x7c]
    cmp r1, #0x0
    beq L_020e7088
L_020e7058:
    add r1, r6, r0, lsl #0x1
    ldrh r3, [r1, #0x8]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x2
    add r0, r0, #0x1
    strh r3, [r1, r2]
    add r1, r6, r0, lsl #0x1
    ldrh r1, [r1, #0x8]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_020e7058
L_020e7088:
    ldrh r1, [sp, #0xfa]
    ldr r0, [sp, #0x80]
    cmp r1, #0x0
    beq L_020e70c8
L_020e7098:
    add r1, r6, r0, lsl #0x1
    ldrh r3, [r1, #0x10]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x2
    add r0, r0, #0x1
    strh r3, [r1, r2]
    add r1, r6, r0, lsl #0x1
    ldrh r1, [r1, #0x10]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_020e7098
L_020e70c8:
    add r0, sp, #0x100
    ldr r1, [sp, #0x84]
    mov r2, r9, lsl #0x1
    add r0, r0, #0x2
    strh r1, [r0, r2]
    str r0, [sp, #0x0]
    mov r0, r1
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e70f8:
    ldr r0, =data_02146dbc
    add r3, sp, #0xcc
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [r3, #0x4a]
    mov r2, r3
    strh r1, [r2, #0x4c]
    mov r1, r3
    strh r0, [r1, #0x4e]
    ldr r0, =data_02146dbc
    ldrh r2, [r0, #0x6]
    ldrh r1, [r0, #0x8]
    ldr r0, =data_02146da4
    strh r2, [r3, #0x50]
    mov r2, r3
    strh r1, [r2, #0x52]
    ldrb r0, [r0, #0x0]
    add r1, sp, #0xcc
    add r3, sp, #0xcd
    swpb r0, r0, [r1]
    ldr r0, =data_02146da4
    ldrb r2, [r0, #0x1]
    ldrb r1, [r0, #0x2]
    ldrb r0, [r0, #0x3]
    swpb r2, r2, [r3]
    add r2, sp, #0xce
    swpb r1, r1, [r2]
    add r2, sp, #0xd0
    add r1, sp, #0xcf
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x88]
    ldr r0, =data_02146da4
    ldrb r3, [r0, #0x4]
    ldr r0, [sp, #0x8]
    swpb r3, r3, [r2]
    bl func_02027f40
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x8c]
L_020e7194:
    add r1, sp, #0x100
    mov r2, r0, lsl #0x1
    add r1, r1, #0x16
    ldrh r2, [r1, r2]
    ldr r1, [sp, #0x20]
    cmp r1, r2
    bgt L_020e729c
    add r1, sp, #0xcc
    ldrb r2, [r1, r0]
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3e
    ldr r0, [r0, #0xc]
    bl func_020c6534
    ldrh r2, [r0, #0x0]
    ldr r1, [sp, #0x90]
    mov r9, r1
    cmp r2, #0x0
    beq L_020e7204
L_020e71dc:
    mov r2, r1, lsl #0x1
    ldrh r3, [r0, r2]
    mov r2, r9, lsl #0x1
    add r1, r1, #0x1
    strh r3, [r5, r2]
    add r9, r9, #0x1
    mov r2, r1, lsl #0x1
    ldrh r2, [r0, r2]
    cmp r2, #0x0
    bne L_020e71dc
L_020e7204:
    ldr r0, [sp, #0x8]
    bl func_020273b8
    cmp r0, #0x0
    bne L_020e722c
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3f
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x94]
    bl func_020c6534
    b L_020e7240
L_020e722c:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3f
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x30]
    bl func_020c6534
L_020e7240:
    ldrh r2, [r0, #0x0]
    ldr r1, [sp, #0x98]
    cmp r2, #0x0
    beq L_020e7278
L_020e7250:
    mov r2, r1, lsl #0x1
    ldrh r3, [r0, r2]
    mov r2, r9, lsl #0x1
    add r1, r1, #0x1
    strh r3, [r5, r2]
    add r9, r9, #0x1
    mov r2, r1, lsl #0x1
    ldrh r2, [r0, r2]
    cmp r2, #0x0
    bne L_020e7250
L_020e7278:
    ldr r0, [sp, #0x9c]
    mov r1, r9, lsl #0x1
    strh r0, [r5, r1]
    str r5, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    mov r1, r4
    bl func_020a82fc
    ldr r0, [sp, #0x6c]
L_020e729c:
    add r0, r0, #0x1
    cmp r0, #0x5
    blt L_020e7194
    b L_020e74c4
L_020e72ac:
    ldr r0, =data_02146db4
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [sp, #0xd2]
    strh r1, [sp, #0xd4]
    strh r0, [sp, #0xd6]
    ldr r0, =data_02146db4
    ldrh r3, [r0, #0x6]
    ldr r0, =data_02146d9c
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, sp, #0xda
    swpb r1, r1, [r0]
    add r0, sp, #0xdb
    swpb r1, r2, [r0]
    ldr r0, =data_02146d9c
    strh r3, [sp, #0xd8]
    ldrb r2, [r0, #0x2]
    add r1, sp, #0xdc
    ldrb r3, [r0, #0x3]
    swpb r2, r2, [r1]
    add r1, sp, #0xdd
    swpb r2, r3, [r1]
    ldr r0, [sp, #0x8]
    ldr r1, [sp, #0xa0]
    bl func_02027f40
    ldr r2, [sp, #0xa4]
    mov r9, r0
L_020e7320:
    mov r1, r2, lsl #0x1
    add r0, sp, #0xd2
    ldrh r0, [r0, r1]
    cmp r9, r0
    bgt L_020e7368
    ldr r0, [r10, #0x0]
    add r3, sp, #0xda
    ldrb r2, [r3, r2]
    ldr r1, =0xf3d
    ldr r0, [r0, #0xc]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xa8]
    mov r1, r4
    bl func_020a82fc
    mov r2, r11
L_020e7368:
    add r2, r2, #0x1
    cmp r2, #0x4
    blt L_020e7320
    b L_020e74c4
L_020e7378:
    ldr r0, [sp, #0xc]
    ldrsh r1, [r0, #0x70]
    mvn r0, #0x0
    cmp r1, r0
    beq L_020e74c4
    ldr r2, [r10, #0x0]
    ldr r0, [sp, #0xac]
    ldr r9, [r2, #0x10]
    bl func_020b54bc
    mov r1, r0
    ldrh r1, [r1, #0x6]
    ldr r2, [sp, #0xb0]
    mov r0, r9
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xb4]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e73cc:
    ldr r0, [r10, #0x0]
    ldr r1, [sp, #0xb8]
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0xbc]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xc0]
    mov r1, r4
    bl func_020a82fc
    b L_020e74c4
L_020e73fc:
    ldr r0, =data_02146dac
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [sp, #0xde]
    strh r1, [sp, #0xe0]
    strh r0, [sp, #0xe2]
    ldr r0, =data_02146dac
    ldrh r3, [r0, #0x6]
    ldr r0, =data_02146da0
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, sp, #0xe6
    swpb r1, r1, [r0]
    add r0, sp, #0xe7
    swpb r1, r2, [r0]
    ldr r0, =data_02146da0
    strh r3, [sp, #0xe4]
    ldrb r2, [r0, #0x2]
    add r1, sp, #0xe8
    ldrb r3, [r0, #0x3]
    swpb r2, r2, [r1]
    add r1, sp, #0xe9
    swpb r2, r3, [r1]
    ldr r0, [sp, #0x8]
    mov r1, r11
    bl func_02027f40
    ldr r2, [sp, #0xc4]
    mov r9, r0
L_020e7470:
    mov r1, r2, lsl #0x1
    add r0, sp, #0xde
    ldrh r0, [r0, r1]
    cmp r9, r0
    bgt L_020e74b8
    ldr r0, [r10, #0x0]
    add r3, sp, #0xe6
    ldrb r2, [r3, r2]
    ldr r1, [sp, #0xb8]
    ldr r0, [r0, #0xc]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xc8]
    mov r1, r4
    bl func_020a82fc
    mov r2, r11
L_020e74b8:
    add r2, r2, #0x1
    cmp r2, #0x4
    blt L_020e7470
L_020e74c4:
    ldr r0, [sp, #0x4]
    add r8, r8, #0x1
    add r0, r0, #0x1
    add r7, r7, #0x1
    str r0, [sp, #0x4]
    cmp r0, #0xe
    blt L_020e6d04
    ldr r1, =data_02153740
    mov r3, #0x3
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0xb000
    str r3, [r0, #0x4a8]
    ldr r0, [r1, #0x0]
    ldr r4, =data_02146e8c
    add r0, r0, #0xb000
    str r2, [r0, #0x4ac]
    ldr r1, =data_02146e60
    ldr r2, =data_02146e74
    ldr r3, =data_02146e88
    mov r0, #0x40
    str r4, [sp, #0x0]
    bl func_020a3c40
    ldr r0, [sp, #0x8]
    bl func_020280c8
    cmp r0, #0x0
    bne L_020e7544
    mov r0, #0x2
    mov r1, r0
    mov r2, #0x0
    bl func_020b8b0c
    b L_020e7554
L_020e7544:
    mov r0, #0x2
    mov r1, #0x3
    mov r2, #0x0
    bl func_020b8b0c
L_020e7554:
    mov r0, #0x0
    bl func_020af728
    add sp, sp, #0x244
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
