#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_020273e0();
extern void func_02027f68();
extern void func_020280f0();
extern void func_0202816c();
extern void func_020cbbe8();
extern void func_020cf098();
extern void func_020cf170();
extern void func_020d0298();
extern void func_020d5de4();
extern void func_020d6240();
extern void func_020da98c();
extern void func_020daae8();
extern void func_020db0fc();
extern void func_020db55c();
extern void func_020e23fc();
extern void func_020e7ec4();
extern void func_020e7f9c();
extern void func_020e8384();
extern void func_020eb9fc();
extern void func_020ec0d8();
extern void func_020ec134();
extern void func_020ec2f4();
extern void func_020ec328();
extern char data_02131994[];
extern char data_021319a4[];
extern char data_0214b67c[];
extern char data_0214b680[];
extern char data_0214b684[];
extern char data_0214b68c[];
extern char data_0214b694[];
extern char data_0214b69c[];
extern char data_0214b6dc[];
extern char data_0214b6ec[];
extern char data_0214b6fc[];
extern char data_0214b718[];
extern char data_0214b728[];
extern char data_0214b740[];
extern char data_0214b754[];
extern char data_0214b768[];
extern char data_0214b76c[];
extern char data_02159e30[];
extern char data_02159e70[];
// clang-format off
asm void func_0210ac24(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24c
    mov r4, r0
    add r0, r4, #0x1d00
    ldr r0, [r0, #0x4]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_01ffdb08
    str r0, [sp, #0x8]
    bl func_0202816c
    mov r1, #0x0
    str r1, [r4, #0x8]
    str r1, [r4, #0x0]
    ldr r1, [r4, #0x0]
    str r0, [sp, #0xc]
    str r1, [r4, #0x4]
    add r1, r4, #0x1000
    mvn r2, #0x1
    mov r0, #0x40
    str r2, [r1, #0xd00]
    bl func_020e7f9c
    ldr r1, =data_0214b6dc
    mov r0, #0x40
    bl func_020e7ec4
    mov r5, r0
    ldr r1, =data_0214b6ec
    mov r0, #0x40
    bl func_020e7ec4
    str r0, [sp, #0x10]
    ldr r1, =data_0214b6fc
    mov r0, #0x40
    bl func_020e7ec4
    str r0, [sp, #0x14]
    ldr r1, =data_0214b718
    mov r0, #0x40
    bl func_020e7ec4
    mov r4, r0
    ldr r1, =data_0214b728
    mov r0, #0x40
    bl func_020e7ec4
    mov r1, r5
    mov r5, r0
    mov r0, #0x2
    bl func_020ec2f4
    ldr r1, [sp, #0x10]
    mov r0, #0x2
    bl func_020ec328
    ldr r1, [sp, #0x14]
    mov r0, #0x2
    bl func_020ec134
    mov r1, r5
    mov r0, #0x2
    bl func_020ec0d8
    bl func_020db55c
    mov r0, #0x0
    str r0, [sp, #0x4]
    str r0, [sp, #0x90]
    mov r0, #0x1
    str r0, [sp, #0x98]
    ldr r0, [sp, #0x4]
    ldr r8, =data_02131994
    str r0, [sp, #0x94]
    str r0, [sp, #0x9c]
    str r0, [sp, #0xa0]
    mov r0, #0x5
    str r0, [sp, #0x6c]
    ldr r0, [sp, #0x4]
    ldr r7, =data_021319a4
    str r0, [sp, #0xac]
    mov r0, #0xf40
    str r0, [sp, #0xbc]
    ldr r0, [sp, #0x4]
    ldr r10, =data_02159e30
    str r0, [sp, #0xcc]
    mov r0, #0x9
    str r0, [sp, #0x70]
    ldr r0, [sp, #0x4]
    add r6, sp, #0xee
    str r0, [sp, #0x68]
    str r0, [sp, #0x74]
    mov r0, #0x3a
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x4]
    add r5, sp, #0x180
    str r0, [sp, #0x7c]
    str r0, [sp, #0x80]
    mov r0, #0x7
    str r0, [sp, #0x88]
    ldr r0, [sp, #0x4]
    mov r11, #0x4
    str r0, [sp, #0x8c]
    mov r0, #0x3
    str r0, [sp, #0xa4]
    ldr r0, [sp, #0x4]
    str r0, [sp, #0xa8]
    str r0, [sp, #0xc8]
    str r0, [sp, #0xc0]
    str r0, [sp, #0xc4]
    str r0, [sp, #0xb0]
    str r0, [sp, #0xb4]
    str r0, [sp, #0xb8]
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
    str r0, [sp, #0x30]
    str r0, [sp, #0x34]
    str r0, [sp, #0x2c]
    str r0, [sp, #0x24]
    str r0, [sp, #0x28]
L_0210ae00:
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x14]
    str r0, [sp, #0x0]
    ldrb r3, [r8, #0x0]
    ldr r2, [sp, #0x10]
    bl func_020db0fc
    ldrb r1, [r8, #0x0]
    ldr r0, [sp, #0x28]
    bl func_020daae8
    ldr r0, [sp, #0x4]
    cmp r0, #0xd
    addls pc, pc, r0, lsl #0x2
    b L_0210b5c0
L_0210ae34:
    b L_0210ae6c
    b L_0210ae90
    b L_0210aecc
    b L_0210aefc
    b L_0210af2c
    b L_0210af5c
    b L_0210af8c
    b L_0210afbc
    b L_0210b024
    b L_0210b1f4
    b L_0210b3a8
    b L_0210b474
    b L_0210b4c8
    b L_0210b4f8
L_0210ae6c:
    ldr r0, [sp, #0xc]
    mov r1, r4
    add r0, r0, #0x78
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x2c]
    bl func_020da98c
    b L_0210b5c0
L_0210ae90:
    ldr r0, [sp, #0xc]
    ldr r1, [r10, #0x0]
    ldrh r3, [r0, #0x0]
    ldr r0, [r1, #0x24]
    ldr r1, =0x2396
    ldr r2, [sp, #0x30]
    add r1, r3, r1
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x34]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210aecc:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf5b
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x38]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x3c]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210aefc:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf5c
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x40]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x44]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210af2c:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3e
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x48]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x4c]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210af5c:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3d
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x50]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x54]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210af8c:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf46
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x58]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x5c]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210afbc:
    ldr r0, [sp, #0xc]
    bl func_020d0298
    cmp r0, #0x0
    beq L_0210aff4
    add r0, sp, #0x124
    bl func_020cf170
    add r0, sp, #0x130
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x60]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210aff4:
    ldr r0, [sp, #0xc]
    bl func_020cf098
    cmp r0, #0x0
    beq L_0210b5c0
    add r0, r0, #0xc
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0x64]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210b024:
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
    bl func_020d5de4
    ldr r0, [sp, #0x18]
    add r1, sp, #0xf6
    bl func_020d5de4
    ldr r0, [sp, #0x1c]
    add r1, sp, #0xfe
    bl func_020d5de4
    ldrh r1, [sp, #0xee]
    ldr r0, [sp, #0x74]
    cmp r1, #0x0
    beq L_0210b12c
L_0210b0fc:
    mov r1, r0, lsl #0x1
    ldrh r3, [r6, r1]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x6
    add r0, r0, #0x1
    strh r3, [r1, r2]
    mov r1, r0, lsl #0x1
    ldrh r1, [r6, r1]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_0210b0fc
L_0210b12c:
    add r0, sp, #0x100
    mov r2, r9, lsl #0x1
    ldr r1, [sp, #0x78]
    add r0, r0, #0x6
    strh r1, [r0, r2]
    ldrh r1, [sp, #0xf6]
    add r9, r9, #0x1
    ldr r0, [sp, #0x7c]
    cmp r1, #0x0
    beq L_0210b184
L_0210b154:
    add r1, r6, r0, lsl #0x1
    ldrh r3, [r1, #0x8]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x6
    add r0, r0, #0x1
    strh r3, [r1, r2]
    add r1, r6, r0, lsl #0x1
    ldrh r1, [r1, #0x8]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_0210b154
L_0210b184:
    ldrh r1, [sp, #0xfe]
    ldr r0, [sp, #0x80]
    cmp r1, #0x0
    beq L_0210b1c4
L_0210b194:
    add r1, r6, r0, lsl #0x1
    ldrh r3, [r1, #0x10]
    add r1, sp, #0x100
    mov r2, r9, lsl #0x1
    add r1, r1, #0x6
    add r0, r0, #0x1
    strh r3, [r1, r2]
    add r1, r6, r0, lsl #0x1
    ldrh r1, [r1, #0x10]
    add r9, r9, #0x1
    cmp r1, #0x0
    bne L_0210b194
L_0210b1c4:
    add r0, sp, #0x100
    ldr r1, [sp, #0x84]
    mov r2, r9, lsl #0x1
    add r0, r0, #0x6
    strh r1, [r0, r2]
    str r0, [sp, #0x0]
    mov r0, r1
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210b1f4:
    ldr r0, =data_0214b69c
    add r3, sp, #0xd0
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [r3, #0x4a]
    mov r2, r3
    strh r1, [r2, #0x4c]
    mov r1, r3
    strh r0, [r1, #0x4e]
    ldr r0, =data_0214b69c
    ldrh r2, [r0, #0x6]
    ldrh r1, [r0, #0x8]
    ldr r0, =data_0214b684
    strh r2, [r3, #0x50]
    mov r2, r3
    strh r1, [r2, #0x52]
    ldrb r0, [r0, #0x0]
    add r1, sp, #0xd0
    add r3, sp, #0xd1
    swpb r0, r0, [r1]
    ldr r0, =data_0214b684
    ldrb r2, [r0, #0x1]
    ldrb r1, [r0, #0x2]
    ldrb r0, [r0, #0x3]
    swpb r2, r2, [r3]
    add r2, sp, #0xd2
    swpb r1, r1, [r2]
    add r2, sp, #0xd4
    add r1, sp, #0xd3
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x88]
    ldr r0, =data_0214b684
    ldrb r3, [r0, #0x4]
    ldr r0, [sp, #0x8]
    swpb r3, r3, [r2]
    bl func_02027f68
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x8c]
L_0210b290:
    add r1, sp, #0x100
    mov r2, r0, lsl #0x1
    add r1, r1, #0x1a
    ldrh r2, [r1, r2]
    ldr r1, [sp, #0x20]
    cmp r1, r2
    bgt L_0210b398
    add r1, sp, #0xd0
    ldrb r2, [r1, r0]
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3e
    ldr r0, [r0, #0xc]
    bl func_020cbbe8
    ldrh r2, [r0, #0x0]
    ldr r1, [sp, #0x90]
    mov r9, r1
    cmp r2, #0x0
    beq L_0210b300
L_0210b2d8:
    mov r2, r1, lsl #0x1
    ldrh r3, [r0, r2]
    mov r2, r9, lsl #0x1
    add r1, r1, #0x1
    strh r3, [r5, r2]
    add r9, r9, #0x1
    mov r2, r1, lsl #0x1
    ldrh r2, [r0, r2]
    cmp r2, #0x0
    bne L_0210b2d8
L_0210b300:
    ldr r0, [sp, #0x8]
    bl func_020273e0
    cmp r0, #0x0
    bne L_0210b328
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3f
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x94]
    bl func_020cbbe8
    b L_0210b33c
L_0210b328:
    ldr r0, [r10, #0x0]
    ldr r1, =0xf3f
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x98]
    bl func_020cbbe8
L_0210b33c:
    ldrh r2, [r0, #0x0]
    ldr r1, [sp, #0x9c]
    cmp r2, #0x0
    beq L_0210b374
L_0210b34c:
    mov r2, r1, lsl #0x1
    ldrh r3, [r0, r2]
    mov r2, r9, lsl #0x1
    add r1, r1, #0x1
    strh r3, [r5, r2]
    add r9, r9, #0x1
    mov r2, r1, lsl #0x1
    ldrh r2, [r0, r2]
    cmp r2, #0x0
    bne L_0210b34c
L_0210b374:
    ldr r0, [sp, #0xa0]
    mov r1, r9, lsl #0x1
    strh r0, [r5, r1]
    str r5, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    mov r1, r4
    bl func_020da98c
    ldr r0, [sp, #0x6c]
L_0210b398:
    add r0, r0, #0x1
    cmp r0, #0x5
    blt L_0210b290
    b L_0210b5c0
L_0210b3a8:
    ldr r0, =data_0214b694
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [sp, #0xd6]
    strh r1, [sp, #0xd8]
    strh r0, [sp, #0xda]
    ldr r0, =data_0214b694
    ldrh r3, [r0, #0x6]
    ldr r0, =data_0214b67c
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, sp, #0xde
    swpb r1, r1, [r0]
    add r0, sp, #0xdf
    swpb r1, r2, [r0]
    ldr r0, =data_0214b67c
    strh r3, [sp, #0xdc]
    ldrb r2, [r0, #0x2]
    add r1, sp, #0xe0
    ldrb r3, [r0, #0x3]
    swpb r2, r2, [r1]
    add r1, sp, #0xe1
    swpb r2, r3, [r1]
    ldr r0, [sp, #0x8]
    ldr r1, [sp, #0xa4]
    bl func_02027f68
    ldr r2, [sp, #0xa8]
    mov r9, r0
L_0210b41c:
    mov r1, r2, lsl #0x1
    add r0, sp, #0xd6
    ldrh r0, [r0, r1]
    cmp r9, r0
    bgt L_0210b464
    ldr r0, [r10, #0x0]
    add r3, sp, #0xde
    ldrb r2, [r3, r2]
    ldr r1, =0xf3d
    ldr r0, [r0, #0xc]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xac]
    mov r1, r4
    bl func_020da98c
    mov r2, r11
L_0210b464:
    add r2, r2, #0x1
    cmp r2, #0x4
    blt L_0210b41c
    b L_0210b5c0
L_0210b474:
    ldr r0, [sp, #0xc]
    ldrsh r1, [r0, #0x70]
    mvn r0, #0x0
    cmp r1, r0
    beq L_0210b5c0
    ldr r2, [r10, #0x0]
    ldr r0, [sp, #0xb0]
    ldr r9, [r2, #0x10]
    bl func_020e8384
    mov r1, r0
    ldrh r1, [r1, #0x6]
    ldr r2, [sp, #0xb4]
    mov r0, r9
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xb8]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210b4c8:
    ldr r0, [r10, #0x0]
    ldr r1, [sp, #0xbc]
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0xc0]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xc4]
    mov r1, r4
    bl func_020da98c
    b L_0210b5c0
L_0210b4f8:
    ldr r0, =data_0214b68c
    ldrh r2, [r0, #0x0]
    ldrh r1, [r0, #0x2]
    ldrh r0, [r0, #0x4]
    strh r2, [sp, #0xe2]
    strh r1, [sp, #0xe4]
    strh r0, [sp, #0xe6]
    ldr r0, =data_0214b68c
    ldrh r3, [r0, #0x6]
    ldr r0, =data_0214b680
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, sp, #0xea
    swpb r1, r1, [r0]
    add r0, sp, #0xeb
    swpb r1, r2, [r0]
    ldr r0, =data_0214b680
    strh r3, [sp, #0xe8]
    ldrb r2, [r0, #0x2]
    add r1, sp, #0xec
    ldrb r3, [r0, #0x3]
    swpb r2, r2, [r1]
    add r1, sp, #0xed
    swpb r2, r3, [r1]
    ldr r0, [sp, #0x8]
    mov r1, r11
    bl func_02027f68
    ldr r2, [sp, #0xc8]
    mov r9, r0
L_0210b56c:
    mov r1, r2, lsl #0x1
    add r0, sp, #0xe2
    ldrh r0, [r0, r1]
    cmp r9, r0
    bgt L_0210b5b4
    ldr r0, [r10, #0x0]
    add r3, sp, #0xea
    ldrb r2, [r3, r2]
    ldr r1, [sp, #0xbc]
    ldr r0, [r0, #0xc]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r8, #0x0]
    ldrb r3, [r7, #0x0]
    ldr r0, [sp, #0xcc]
    mov r1, r4
    bl func_020da98c
    mov r2, r11
L_0210b5b4:
    add r2, r2, #0x1
    cmp r2, #0x4
    blt L_0210b56c
L_0210b5c0:
    ldr r0, [sp, #0x4]
    add r8, r8, #0x1
    add r0, r0, #0x1
    add r7, r7, #0x1
    str r0, [sp, #0x4]
    cmp r0, #0xe
    blt L_0210ae00
    ldr r1, =data_02159e70
    mov r3, #0x3
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0xc000
    str r3, [r0, #0x838]
    ldr r0, [r1, #0x0]
    ldr r4, =data_0214b76c
    add r0, r0, #0xc000
    str r2, [r0, #0x83c]
    ldr r1, =data_0214b740
    ldr r2, =data_0214b754
    ldr r3, =data_0214b768
    mov r0, #0x40
    str r4, [sp, #0x0]
    bl func_020d6240
    ldr r0, [sp, #0x8]
    bl func_020280f0
    cmp r0, #0x0
    bne L_0210b640
    mov r0, #0x2
    mov r1, r0
    mov r2, #0x0
    bl func_020eb9fc
    b L_0210b650
L_0210b640:
    mov r0, #0x2
    mov r1, #0x3
    mov r2, #0x0
    bl func_020eb9fc
L_0210b650:
    mov r0, #0x0
    bl func_020e23fc
    add sp, sp, #0x24c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
