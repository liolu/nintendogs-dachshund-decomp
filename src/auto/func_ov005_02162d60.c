#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_020066f0();
extern void func_0205ece8();
extern void func_020782bc();
extern void func_02078714();
extern void func_0207e0d0();
extern void func_0207e124();
extern void func_020c78f4();
extern void func_020c93d4();
extern void func_020c9f18();
extern void func_020ca3a8();
extern void func_020ca4b0();
extern void func_020ca4f4();
extern void func_020ca944();
extern void func_020caa6c();
extern void func_ov005_021616d0();
extern char data_ov005_02165ec4[];
extern char data_ov005_02165ec8[];
extern char data_ov005_02165ee0[];
extern char data_ov005_02165ef4[];
extern char data_ov005_02165ef8[];
extern char data_ov005_02165f0c[];
extern char data_ov005_02165fa4[];
extern char func_ov005_02162308[];
extern char func_ov005_0216231c[];
// clang-format off
asm void func_ov005_02162d60(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x44
    ldr r1, =data_ov005_02165fa4
    mov r4, r0
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    addne sp, sp, #0x44
    movne r0, r1
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r1, #0x90
    bl func_020038a8
    ldr r1, =data_ov005_02165fa4
    str r0, [r1, #0x0]
    bl func_020c9f18
    ldr r0, =data_ov005_02165fa4
    ldr r1, =func_ov005_0216231c
    ldr r0, [r0, #0x0]
    bl func_020ca4b0
    ldr r1, =data_ov005_02165fa4
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
    bl func_ov005_021616d0
    ldr r1, =data_ov005_02165ec4
    ldr r2, =data_ov005_02165ec8
    mov r0, r4
    bl func_020c78f4
    mov r5, r0
    ldr r2, =data_ov005_02165ee0
    ldr r3, =data_ov005_02165ef4
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    mov r1, r0
    mov r0, r4
    bl func_020ca3a8
    ldr r2, =data_ov005_02165fa4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02165ef8
    str r0, [r3, #0x7c]
    ldr r3, =data_ov005_02165f0c
    add r0, sp, #0x0
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    mov r1, #0x0
    bl func_02078714
    ldr r1, =data_ov005_02165fa4
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x80]
    mov r0, r5
    bl func_0207e124
    ldr r2, =data_ov005_02165fa4
    mov r0, r4
    ldr r2, [r2, #0x0]
    mov r1, #0x88
    ldr r2, [r2, #0x7c]
    bl func_020caa6c
    ldr r1, =data_ov005_02165fa4
    ldr r2, [r1, #0x0]
    str r0, [r2, #0x84]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x84]
    bl func_020ca4f4
    ldr r0, =data_ov005_02165fa4
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x1f0000
    ldr r0, [r0, #0x84]
    ldr r0, [r0, #0x1c]
    ldr r0, [r0, #0x8]
    bl func_020782bc
    ldr r0, =data_ov005_02165fa4
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x3f000000
    ldr r0, [r0, #0x84]
    ldr r0, [r0, #0x1c]
    ldr r0, [r0, #0x8]
    bl func_020782bc
    ldr r0, =data_ov005_02165fa4
    mov r1, r4
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    ldr r0, [r0, #0x84]
    bl func_020ca944
    ldr r0, =data_ov005_02165fa4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x84]
    ldr r1, [r1, #0x80]
    ldr r4, [r0, #0x78]
    mov r0, r4
    bl func_020c93d4
    mov r0, #0x0
    swpb r0, r0, [r4]
    ldr r1, =func_ov005_02162308
    mov r0, #0x1000
    str r0, [r4, #0x8]
    mov r0, #0xb
    bl func_020066f0
    ldr r0, =data_ov005_02165fa4
    ldr r0, [r0, #0x0]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
