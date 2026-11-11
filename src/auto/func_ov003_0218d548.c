#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026b9c();
extern void func_0202a688();
extern void func_0202a7c4();
extern void func_0202a838();
extern void func_02033dd4();
extern void func_0203535c();
extern void func_02035fd8();
extern void func_020361ac();
extern void func_02037130();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_020abb3c();
extern void func_020af650();
extern void func_021144e4();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_0215a04c[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0218d548(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_020361ac
    movs r4, r0
    beq L_0218d670
    ldr r0, =data_0215a064
    add lr, r7, #0x278
    ldr r0, [r0, #0x0]
    ldr ip, =data_02150e58
    ldr r0, [r0, #0x1c]
    ldr r3, =data_0214da80
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r2, [ip, #0x54]
    ldr r0, [ip, #0x6c]
    ldr r1, [ip, #0x60]
    str r0, [sp, #0x8]
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    ldrsb r1, [r7, #0x88]
    ldr r0, [r3, #0x0]
    bl func_021144e4
    mov r1, #0x6
    smulbb r1, r0, r1
    mvn r0, #0xd
    sub r0, r0, r1
    add r1, sp, #0x0
    mov r0, r0, lsl #0xc
    add r2, r7, #0x278
    add r3, r7, #0x26c
    bl func_01ff832c
    ldr r1, =0x392
    mov r0, r7
    bl func_02037130
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218d664
    ldrsb r0, [r7, #0xa0]
    cmp r0, #0x0
    bne L_0218d664
    mov r0, r7
    mov r2, r5
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r7
    bl func_02026b9c
    add r1, r7, #0x98
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r7, #0x464]
    add r0, r0, #0x1
    str r0, [r7, #0x464]
    ldr r0, [r7, #0x464]
    cmp r0, #0x12c
    movgt r0, #0x0
    strgt r0, [r7, #0x464]
    ldr r0, [r7, #0x464]
    cmp r0, #0xc8
    addgt r0, r7, #0x278
    addgt r3, r7, #0x3b4
    ldmgtia r0, {r0, r1, r2}
    stmgtia r3, {r0, r1, r2}
    bgt L_0218d670
    mov r0, r4
    add r1, r7, #0x3b4
    bl func_020af650
    b L_0218d670
L_0218d664:
    mov r0, r4
    add r1, r7, #0x3b4
    bl func_020af650
L_0218d670:
    mvn r0, #0x0
    cmp r5, r0
    bne L_0218d68c
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x20
    moveq r0, #0x0
    streqh r0, [r7, #0xfa]
L_0218d68c:
    ldr r1, [r7, #0x488]
    ldr r0, =data_0215a04c
    add r1, r1, #0x1
    str r1, [r7, #0x488]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_0218d734
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_0218d734
    cmp r4, #0x0
    beq L_0218d714
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0218d6e0
    cmp r0, #0x2
    bne L_0218d6e8
L_0218d6e0:
    mov r0, #0x1
    b L_0218d70c
L_0218d6e8:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_0218d708
    mov r0, r4
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0218d70c
L_0218d708:
    mov r0, #0x0
L_0218d70c:
    cmp r0, #0x0
    beq L_0218d730
L_0218d714:
    mov r0, r7
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r7
    bl func_02035fd8
    mov r0, #0x1
    b L_0218d734
L_0218d730:
    mov r0, #0x0
L_0218d734:
    cmp r0, #0x0
    beq L_0218d750
    mov r0, r7
    bl func_02033dd4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218d750:
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218d784
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x20
    bne L_0218d784
    mov r0, r7
    bl func_0202a838
    mov r0, #0x0
    add sp, sp, #0xc
    strh r0, [r7, #0xfa]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218d784:
    cmp r6, #0x0
    bne L_0218d7bc
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x21
    bne L_0218d7bc
    mov r0, r7
    bl func_0202a688
    mov r1, #0x0
    mov r0, r7
    strh r1, [r7, #0xfa]
    bl func_02033dd4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218d7bc:
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218d7d8
    cmp r6, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_0218d7d8:
    mov r0, r7
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r7
    bl func_0202a7c4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
