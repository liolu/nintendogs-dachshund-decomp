#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026b54();
extern void func_0202a634();
extern void func_0202a76c();
extern void func_0202a7e0();
extern void func_02033cd8();
extern void func_020351a0();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_02036fbc();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02092d74();
extern void func_0210beb4();
extern void func_0210f81c();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153708[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0218b24c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02035ff4
    movs r4, r0
    beq L_0218b374
    ldr r0, =data_02153720
    add lr, r7, #0x278
    ldr r0, [r0, #0x0]
    ldr ip, =data_02150330
    ldr r0, [r0, #0x1c]
    ldr r3, =data_0214b480
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
    bl func_02092d74
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
    bl func_02036fbc
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218b368
    ldrsb r0, [r7, #0xb9]
    cmp r0, #0x0
    bne L_0218b368
    mov r0, r7
    mov r2, r5
    mov r1, #0x0
    bl func_0203e280
    mov r0, r7
    bl func_02026b54
    add r1, r7, #0xb1
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r7, #0x488]
    add r0, r0, #0x1
    str r0, [r7, #0x488]
    ldr r0, [r7, #0x488]
    cmp r0, #0x12c
    movgt r0, #0x0
    strgt r0, [r7, #0x488]
    ldr r0, [r7, #0x488]
    cmp r0, #0xc8
    addgt r0, r7, #0x278
    addgt r3, r7, #0x3d8
    ldmgtia r0, {r0, r1, r2}
    stmgtia r3, {r0, r1, r2}
    bgt L_0218b374
    mov r0, r4
    add r1, r7, #0x3d8
    bl func_0210f81c
    b L_0218b374
L_0218b368:
    mov r0, r4
    add r1, r7, #0x3d8
    bl func_0210f81c
L_0218b374:
    mvn r0, #0x0
    cmp r5, r0
    bne L_0218b390
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x20
    moveq r0, #0x0
    streqh r0, [r7, #0xfa]
L_0218b390:
    ldr r1, [r7, #0x4ac]
    ldr r0, =data_02153708
    add r1, r1, #0x1
    str r1, [r7, #0x4ac]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_0218b438
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_0218b438
    cmp r4, #0x0
    beq L_0218b418
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0218b3e4
    cmp r0, #0x2
    bne L_0218b3ec
L_0218b3e4:
    mov r0, #0x1
    b L_0218b410
L_0218b3ec:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_0218b40c
    mov r0, r4
    bl func_0210beb4
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0218b410
L_0218b40c:
    mov r0, #0x0
L_0218b410:
    cmp r0, #0x0
    beq L_0218b434
L_0218b418:
    mov r0, r7
    mov r1, #0x5d
    bl func_0203e2b8
    mov r0, r7
    bl func_02035e20
    mov r0, #0x1
    b L_0218b438
L_0218b434:
    mov r0, #0x0
L_0218b438:
    cmp r0, #0x0
    beq L_0218b454
    mov r0, r7
    bl func_02033cd8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218b454:
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218b488
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x20
    bne L_0218b488
    mov r0, r7
    bl func_0202a7e0
    mov r0, #0x0
    add sp, sp, #0xc
    strh r0, [r7, #0xfa]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218b488:
    cmp r6, #0x0
    bne L_0218b4c0
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x21
    bne L_0218b4c0
    mov r0, r7
    bl func_0202a634
    mov r1, #0x0
    mov r0, r7
    strh r1, [r7, #0xfa]
    bl func_02033cd8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0218b4c0:
    mvn r0, #0x0
    cmp r5, r0
    beq L_0218b4dc
    cmp r6, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_0218b4dc:
    mov r0, r7
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r7
    bl func_0202a76c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
