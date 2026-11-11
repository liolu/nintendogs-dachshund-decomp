#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0200668c();
extern void func_0205e950();
extern void func_02078b34();
extern void func_02078f8c();
extern void func_0207e718();
extern void func_0207e76c();
extern void func_020c2348();
extern void func_020c3dcc();
extern void func_020c4910();
extern void func_020c4da0();
extern void func_020c4ea8();
extern void func_020c4eec();
extern void func_020c533c();
extern void func_020c5464();
extern void func_ov004_0215f298();
extern char data_ov004_02163be4[];
extern char data_ov004_02163be8[];
extern char data_ov004_02163c00[];
extern char data_ov004_02163c14[];
extern char data_ov004_02163c18[];
extern char data_ov004_02163c2c[];
extern char data_ov004_02163cc4[];
extern char func_ov004_0216012c[];
extern char func_ov004_02160140[];
// clang-format off
asm void func_ov004_02160b84(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x44
    ldr r1, =data_ov004_02163cc4
    mov r4, r0
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    addne sp, sp, #0x44
    movne r0, r1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r1, #0x90
    bl func_02003844
    ldr r1, =data_ov004_02163cc4
    str r0, [r1, #0x0]
    bl func_020c4910
    ldr r0, =data_ov004_02163cc4
    ldr r1, =func_ov004_02160140
    ldr r0, [r0, #0x0]
    bl func_020c4ea8
    ldr r1, =data_ov004_02163cc4
    mvn r2, #0x0
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    strh r2, [r0, #0x24]
    mov r3, r5
L_02162dc4:
    add r0, r5, #0x1
    ldr r2, [r1, #0x0]
    mov r0, r0, lsl #0x10
    add r2, r2, r5, lsl #0x2
    mov r5, r0, asr #0x10
    str r3, [r2, #0x60]
    cmp r5, #0x6
    blt L_02162dc4
    mov r0, r4
    bl func_ov004_0215f298
    ldr r1, =data_ov004_02163be4
    ldr r2, =data_ov004_02163be8
    mov r0, r4
    bl func_020c2348
    mov r5, r0
    ldr r2, =data_ov004_02163c00
    ldr r3, =data_ov004_02163c14
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    mov r1, r0
    mov r0, r4
    bl func_020c4da0
    ldr r2, =data_ov004_02163cc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov004_02163c18
    str r0, [r3, #0x7c]
    ldr r3, =data_ov004_02163c2c
    add r0, sp, #0x0
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    mov r1, #0x0
    bl func_02078f8c
    ldr r1, =data_ov004_02163cc4
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x80]
    mov r0, r5
    bl func_0207e76c
    ldr r2, =data_ov004_02163cc4
    mov r0, r4
    ldr r2, [r2, #0x0]
    mov r1, #0x88
    ldr r2, [r2, #0x7c]
    bl func_020c5464
    ldr r1, =data_ov004_02163cc4
    ldr r2, [r1, #0x0]
    str r0, [r2, #0x84]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x84]
    bl func_020c4eec
    ldr r0, =data_ov004_02163cc4
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x1f0000
    ldr r0, [r0, #0x84]
    ldr r0, [r0, #0x1c]
    ldr r0, [r0, #0x8]
    bl func_02078b34
    ldr r0, =data_ov004_02163cc4
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x3f000000
    ldr r0, [r0, #0x84]
    ldr r0, [r0, #0x1c]
    ldr r0, [r0, #0x8]
    bl func_02078b34
    ldr r0, =data_ov004_02163cc4
    mov r1, r4
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    ldr r0, [r0, #0x84]
    bl func_020c533c
    ldr r0, =data_ov004_02163cc4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x84]
    ldr r1, [r1, #0x80]
    ldr r4, [r0, #0x78]
    mov r0, r4
    bl func_020c3dcc
    mov r0, #0x0
    swpb r0, r0, [r4]
    ldr r1, =func_ov004_0216012c
    mov r0, #0x1000
    str r0, [r4, #0x8]
    mov r0, #0xb
    bl func_0200668c
    ldr r0, =data_ov004_02163cc4
    ldr r0, [r0, #0x0]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
