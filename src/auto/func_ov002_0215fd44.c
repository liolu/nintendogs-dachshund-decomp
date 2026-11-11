#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025438();
extern void func_02025d38();
extern void func_02035ff4();
extern void func_02069430();
extern void func_02069634();
extern void func_0210beb4();
extern char data_02153720[];
// clang-format off
asm void func_ov002_0215fd44(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x158
    strh r2, [r1, #0x50]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r4, #0xb7
    swpb r1, r3, [r2]
    bl func_02025d38
    mov r0, r4
    bl func_02025438
    ldr r1, [r4, #0x188]
    add r0, r4, #0x300
    orr r1, r1, #0x4
    str r1, [r4, #0x188]
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x0
    str r0, [r4, #0x3a8]
    str r0, [r4, #0x3ac]
    str r0, [r4, #0x3b0]
    ldr r1, [r4, #0x4a8]
    mov r0, r4
    str r1, [r4, #0x488]
    bl func_02035ff4
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsh r1, [r0, #0x90]
    cmp r1, #0x0
    beq L_0215fde4
    cmp r1, #0x2
    bne L_0215fdec
L_0215fde4:
    mov r0, #0x1
    b L_0215fe0c
L_0215fdec:
    ldrsh r1, [r0, #0x94]
    cmp r1, #0x35
    bne L_0215fe08
    bl func_0210beb4
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0215fe0c
L_0215fe08:
    mov r0, #0x0
L_0215fe0c:
    cmp r0, #0x0
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_02153720
    add r3, sp, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, sp, #0xc
    mov r0, r3
    add r1, r4, #0x300
    bl func_02069634
    add r0, sp, #0xc
    bl func_02069430
    str r0, [r4, #0x488]
    add sp, sp, #0x18
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
