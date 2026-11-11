#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020bfa64();
extern void func_020bfa74();
extern void func_020bff2c();
extern void func_020bfff4();
extern void func_020c0448();
extern void func_020c081c();
extern char data_ov007_0215e7e0[];
extern char data_ov007_0215e7e4[];
extern char func_ov007_0215a540[];
extern char func_ov007_0215b140[];
extern char func_ov007_0215b548[];
// clang-format off
asm void func_ov007_0215a7d8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    bl func_020bfff4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_ov007_0215e7e0
    ldr r2, [r0, #0x0]
    ldr r1, [r2, #0x2c]
    cmp r1, #0x1
    beq L_0215a824
    cmp r1, #0x2
    beq L_0215a83c
    cmp r1, #0x3
    beq L_0215a958
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215a824:
    ldr r0, =func_ov007_0215b548
    add r1, sp, #0x0
    bl func_020c0448
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215a83c:
    mov r1, #0x0
    strh r1, [r2, #0x44]
    ldr r0, [r0, #0x0]
    mov r1, #0x65
    strh r1, [r0, #0x46]
    mov r4, #0x1
    bl func_020bfa64
    cmp r0, #0x8000
    moveq r3, #0x3
    beq L_0215a8b8
    cmp r0, #0x0
    moveq r3, #0x15
    beq L_0215a8b8
    ands r1, r0, #0x1
    bne L_0215a8a4
    mov r2, r4
L_0215a87c:
    add r1, r4, #0x1
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    cmp r4, #0x10
    movhi r3, #0x16
    bhi L_0215a8b8
    sub r1, r4, #0x1
    mov r1, r2, lsl r1
    ands r1, r1, r0
    beq L_0215a87c
L_0215a8a4:
    ldr r0, =func_ov007_0215b140
    add r2, sp, #0x4
    mov r1, r4
    bl func_020bfa74
    ldrh r3, [sp, #0x4]
L_0215a8b8:
    cmp r3, #0x16
    bne L_0215a904
    ldr r0, =data_ov007_0215e7e0
    ldr r2, [r0, #0x0]
    ldr r1, [r2, #0x34]
    cmp r1, #0x1
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r1, #0x1
    str r1, [r2, #0x34]
    ldr r2, [r0, #0x0]
    mov r1, #0x1e
    strh r3, [r2, #0x30]
    ldr r0, [r0, #0x0]
    add sp, sp, #0xc
    strh r1, [r0, #0x32]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215a904:
    cmp r3, #0x2
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_ov007_0215e7e0
    ldr r2, [r0, #0x0]
    ldr r1, [r2, #0x34]
    cmp r1, #0x1
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r1, #0x1
    str r1, [r2, #0x34]
    ldr r2, [r0, #0x0]
    mov r1, #0x1e
    strh r3, [r2, #0x30]
    ldr r0, [r0, #0x0]
    add sp, sp, #0xc
    strh r1, [r0, #0x32]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215a958:
    ldr r1, =data_ov007_0215e7e4
    mov r3, #0x3
    swpb r3, r3, [r1]
    add ip, r1, #0x1
    mov r5, #0x6
    swpb r3, r5, [ip]
    add lr, r1, #0x2
    mov r4, #0x0
    swpb r3, r4, [lr]
    ldr r0, =func_ov007_0215a540
    add r2, sp, #0x2
    bl func_020bff2c
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    bl func_020c081c
    ldr r1, =data_ov007_0215e7e0
    ldrh r2, [r0, #0x36]
    ldr r0, [r1, #0x0]
    strh r2, [r0, #0x44]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
