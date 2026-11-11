#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0205e950();
extern void func_02080f5c();
extern void func_020c1a70();
extern void func_020c1af4();
extern void func_020c3dd0();
extern void func_020c4914();
extern void func_020c4da4();
extern void func_020c4ef0();
extern void func_020c519c();
extern void func_020c5314();
extern void func_020c5340();
extern void func_020c5468();
extern void func_020d78ec();
extern void func_020e1a00();
extern char data_0212fd08[];
extern char data_0212fd0c[];
extern char data_0212fd38[];
extern char data_0212fd50[];
extern char data_02146890[];
extern char data_021468f0[];
extern char data_02146908[];
extern char data_0214691c[];
extern char data_02146930[];
extern char data_02146940[];
extern char data_02146950[];
extern char data_02146968[];
extern char data_02154cac[];
// clang-format off
asm void func_020e2804(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14c
    str r1, [sp, #0x0]
    mov r1, #0x258
    mov r10, r0
    bl func_02003844
    ldr r1, =data_02154cac
    str r0, [r1, #0x0]
    bl func_02080f5c
    ldr r2, =data_02154cac
    ldr r1, =data_021468f0
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x254]
    mov r0, r10
    bl func_020c1af4
    mov r1, r0
    mov r0, r10
    bl func_020c4da4
    ldr r3, =data_0212fd50
    ldr r1, [sp, #0x0]
    mov r2, #0x18
    mla r2, r1, r2, r3
    str r2, [sp, #0x1c]
    str r0, [sp, #0x4]
    mov r9, #0x2
    add r5, sp, #0x48
    mov r6, #0x1
    mov r4, #0x40
    mov r7, #0x0
L_020e2878:
    ldr r0, =data_0212fd0c
    mov r8, r7
    str r0, [sp, #0x20]
    mov r0, r9, lsl #0x3
    str r0, [sp, #0x24]
    ldr r0, =data_0212fd38
    add r11, r0, r9, lsl #0x3
L_020e2894:
    ldr r0, [sp, #0x0]
    cmp r0, #0x8
    mov r0, r7
    moveq r0, r6
    beq L_020e28d4
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x24]
    mov r1, r7
    add r3, r3, r2
L_020e28b8:
    ldrsb r2, [r3, #0x0]
    add r1, r1, #0x1
    add r3, r3, #0x1
    cmp r8, r2
    moveq r0, r6
    cmp r1, #0x8
    blt L_020e28b8
L_020e28d4:
    cmp r0, #0x0
    beq L_020e29d8
    ldr r0, =data_02146890
    add r0, r0, r9, lsl #0x5
    ldr r3, [r0, r8, lsl #0x2]
    cmp r3, #0x0
    beq L_020e29d8
    cmp r9, #0x2
    bne L_020e2958
    ldr r0, [sp, #0x20]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020e2958
    mov r0, r6
    bl func_020d78ec
    cmp r0, #0x1
    bne L_020e2938
    ldr r3, =data_02146890
    ldr r2, =data_02146908
    add r3, r3, r9, lsl #0x5
    ldr r3, [r3, r8, lsl #0x2]
    mov r0, r5
    mov r1, r4
    bl func_0205e950
    b L_020e2968
L_020e2938:
    ldr r3, =data_02146890
    ldr r2, =data_0214691c
    add r3, r3, r9, lsl #0x5
    ldr r3, [r3, r8, lsl #0x2]
    mov r0, r5
    mov r1, r4
    bl func_0205e950
    b L_020e2968
L_020e2958:
    ldr r2, =data_02146930
    mov r0, r5
    mov r1, r4
    bl func_0205e950
L_020e2968:
    mov r0, r10
    mov r1, r5
    bl func_020c1af4
    mov r1, r0
    mov r0, r10
    bl func_020c4da4
    add r3, sp, #0x88
    add r3, r3, r9, lsl #0x5
    str r0, [r3, r8, lsl #0x2]
    ldrb r0, [r11, #0x0]
    mov r2, r9, lsl #0x5
    mov r1, r8, lsl #0x2
    cmp r0, #0x0
    beq L_020e29e4
    ldr r0, =data_02146890
    add r0, r0, r2
    ldr r3, [r1, r0]
    ldr r2, =data_02146940
    mov r0, r5
    mov r1, r4
    bl func_0205e950
    mov r0, r10
    mov r1, r5
    bl func_020c1a70
    add r1, sp, #0xe8
    add r1, r1, r9, lsl #0x5
    str r0, [r1, r8, lsl #0x2]
    b L_020e29e4
L_020e29d8:
    add r0, sp, #0x88
    add r0, r0, r9, lsl #0x5
    str r7, [r0, r8, lsl #0x2]
L_020e29e4:
    ldr r0, [sp, #0x20]
    add r8, r8, #0x1
    add r0, r0, #0x1
    str r0, [sp, #0x20]
    add r11, r11, #0x1
    cmp r8, #0x8
    blt L_020e2894
    subs r9, r9, #0x1
    bpl L_020e2878
    ldr r1, =data_02146950
    mov r0, r10
    bl func_020c1af4
    mov r1, r0
    mov r0, r10
    bl func_020c4da4
    ldr r1, =data_02154cac
    mov r4, r0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x230
    bl func_020c4914
    mov r0, r10
    mov r2, r4
    mov r1, #0x88
    bl func_020c5468
    ldr r1, =data_02154cac
    mvn r2, #0x198
    ldr r3, [r1, #0x0]
    str r0, [r3, #0x48]
    ldr r0, [r1, #0x0]
    ldr r0, [r0, #0x48]
    str r2, [r0, #0x34]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x230
    ldr r1, [r1, #0x48]
    bl func_020c4ef0
    ldr r0, =data_02154cac
    mov r1, r10
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    ldr r0, [r0, #0x48]
    bl func_020c5340
    ldr r1, =data_02154cac
    mov r0, r10
    ldr r2, [r1, #0x0]
    ldr r1, =data_02146968
    ldr r2, [r2, #0x48]
    ldr r4, [r2, #0x78]
    bl func_020c1a70
    mov r1, r0
    mov r0, r4
    bl func_020c3dd0
    mov r0, #0x0
    str r0, [r4, #0x8]
    swpb r0, r0, [r4]
    ldr r2, [sp, #0x4]
    mov r0, r10
    mov r1, #0x88
    bl func_020c5468
    ldr r1, =data_02154cac
    ldr r2, [r1, #0x0]
    str r0, [r2, #0x4c]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x230
    ldr r1, [r1, #0x4c]
    bl func_020c4ef0
    mov r7, #0x0
    ldr r0, =data_0212fd08
    ldr r4, =data_02154cac
    str r0, [sp, #0x8]
    mov r0, #0x88
    str r0, [sp, #0x30]
    mvn r0, #0x198
    str r0, [sp, #0x34]
    mov r0, #0x1000
    str r7, [sp, #0xc]
    str r7, [sp, #0x38]
    str r7, [sp, #0x44]
    str r7, [sp, #0x3c]
    str r7, [sp, #0x2c]
    str r7, [sp, #0x28]
    mov r11, #0x1
    str r0, [sp, #0x40]
L_020e2b2c:
    ldr r6, [sp, #0x28]
    mov r0, r6
    str r0, [sp, #0x10]
    ldr r0, =data_0212fd38
    add r0, r0, r7, lsl #0x3
    str r0, [sp, #0x14]
L_020e2b44:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldr r5, [sp, #0x2c]
    add r8, r1, r0
    add r0, r7, r6
    add r0, r0, #0xf
    str r0, [sp, #0x18]
L_020e2b60:
    ldr r0, [sp, #0x8]
    ldrb r0, [r0, #0x0]
    cmp r5, r0
    bge L_020e2ccc
    add r0, sp, #0x88
    add r0, r0, r7, lsl #0x5
    ldr r2, [r0, r6, lsl #0x2]
    cmp r2, #0x0
    beq L_020e2ccc
    ldr r1, [sp, #0x30]
    mov r0, r10
    bl func_020c5468
    ldr r1, [r4, #0x0]
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    str r0, [r1, #0x50]
    ldr r0, [r4, #0x0]
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r1, [r0, #0x50]
    ldr r0, [sp, #0x34]
    str r0, [r1, #0x34]
    ldr r1, [r4, #0x0]
    add r0, r1, #0x230
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r1, [r1, #0x50]
    bl func_020c4ef0
    ldr r1, [r4, #0x0]
    cmp r7, #0x0
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r2, [r1, #0x50]
    mov r0, r5, lsl #0x2
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    beq L_020e2c10
    cmp r7, #0x1
    beq L_020e2c10
    cmp r7, #0x2
    beq L_020e2c30
    b L_020e2c4c
L_020e2c10:
    ldr r0, [r4, #0x0]
    add r1, r7, #0xf
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r0, [r0, #0x50]
    and r1, r1, #0xff
    bl func_020c519c
    b L_020e2c4c
L_020e2c30:
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x18]
    add r2, r8, r2
    add r0, r0, r2
    ldr r0, [r0, #0x50]
    and r1, r1, #0xff
    bl func_020c519c
L_020e2c4c:
    ldr r0, [sp, #0x14]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020e2ce0
    ldr r0, [r4, #0x0]
    mov r1, r10
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r0, [r0, #0x50]
    mov r2, r11
    bl func_020c5314
    ldr r1, [r4, #0x0]
    add r0, sp, #0xe8
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r2, [r1, #0x50]
    add r0, r0, r7, lsl #0x5
    ldr r9, [r2, #0x80]
    ldr r1, [r0, r6, lsl #0x2]
    mov r0, r9
    bl func_020c3dd0
    ldr r0, [sp, #0x38]
    str r0, [r9, #0x8]
    swpb r0, r0, [r9]
    mov r0, r11
    bl func_020d78ec
    cmp r0, #0x1
    ldreq r0, [sp, #0x3c]
    streq r0, [r9, #0xc]
    ldrne r0, [sp, #0x40]
    strne r0, [r9, #0xc]
    b L_020e2ce0
L_020e2ccc:
    ldr r0, [r4, #0x0]
    add r0, r8, r0
    add r1, r0, r5, lsl #0x2
    ldr r0, [sp, #0x44]
    str r0, [r1, #0x50]
L_020e2ce0:
    add r5, r5, #0x1
    cmp r5, #0x5
    blt L_020e2b60
    ldr r0, [sp, #0x10]
    add r6, r6, #0x1
    add r0, r0, #0x14
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    cmp r6, #0x8
    add r0, r0, #0x1
    str r0, [sp, #0x14]
    blt L_020e2b44
    ldr r0, [sp, #0x8]
    add r7, r7, #0x1
    add r0, r0, #0x1
    str r0, [sp, #0x8]
    ldr r0, [sp, #0xc]
    cmp r7, #0x3
    add r0, r0, #0xa0
    str r0, [sp, #0xc]
    blt L_020e2b2c
    ldr r0, [sp, #0x0]
    cmp r0, #0x8
    bne L_020e2d5c
    mov r0, #0x0
    bl func_020e1a00
    ldr r0, =data_02154cac
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x0]
    b L_020e2d70
L_020e2d5c:
    bl func_020e1a00
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x0]
L_020e2d70:
    ldr r3, =data_02154cac
    mov r0, #0x0
    ldr r1, [r3, #0x0]
    mov r4, #0x1
    str r0, [r1, #0xc]
    ldr r2, [r3, #0x0]
    ldr r1, [r2, #0x48]
    ldr r2, [r2, #0xc]
    ldr r1, [r1, #0x78]
    str r2, [r1, #0x8]
    ldr r1, [r3, #0x0]
    str r4, [r1, #0x8]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x2c]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x30]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x34]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x38]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x3c]
    ldr r1, [r3, #0x0]
    strh r0, [r1, #0x40]
    ldr r1, [r3, #0x0]
    add r2, r1, #0x42
    swpb r1, r4, [r2]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x44]
    add sp, sp, #0x14c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
