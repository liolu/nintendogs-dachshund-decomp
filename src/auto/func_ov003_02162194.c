#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025480();
extern void func_02025d80();
extern void func_020361ac();
extern void func_02068038();
extern void func_0206823c();
extern void func_020abb3c();
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02162194(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r2, =0x159
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    mov r3, #0x1
    strh r3, [r1, #0x56]
    add r2, r4, #0x93
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r4, #0x9e
    swpb r1, r3, [r2]
    bl func_02025d80
    mov r0, r4
    bl func_02025480
    ldr r1, [r4, #0x948]
    add r0, r4, #0x2e8
    orr r1, r1, #0x4
    str r1, [r4, #0x948]
    add r3, r4, #0x390
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x0
    str r0, [r4, #0x490]
    str r0, [r4, #0x494]
    str r0, [r4, #0x498]
    ldr r1, [r4, #0x484]
    mov r0, r4
    str r1, [r4, #0x464]
    bl func_020361ac
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsh r1, [r0, #0x90]
    cmp r1, #0x0
    beq L_02162234
    cmp r1, #0x2
    bne L_0216223c
L_02162234:
    mov r0, #0x1
    b L_0216225c
L_0216223c:
    ldrsh r1, [r0, #0x94]
    cmp r1, #0x35
    bne L_02162258
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0216225c
L_02162258:
    mov r0, #0x0
L_0216225c:
    cmp r0, #0x0
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_0215a064
    add r3, sp, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, sp, #0xc
    mov r0, r3
    add r1, r4, #0x2e8
    bl func_0206823c
    add r0, sp, #0xc
    bl func_02068038
    str r0, [r4, #0x464]
    add sp, sp, #0x18
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
