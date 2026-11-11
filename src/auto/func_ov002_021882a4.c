#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009d50();
extern void func_02039038();
extern void func_0203e2b8();
extern void func_02069634();
extern char data_02153720[];
// clang-format off
asm void func_ov002_021882a4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r2, =data_02153720
    mov r6, r0
    ldr r2, [r2, #0x0]
    add r3, sp, #0x0
    ldr r0, [r2, #0x1c]
    mov r5, r1
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    mov r2, r3
    add r1, r6, #0x2a0
    bl func_02069634
    add r0, sp, #0x0
    add r1, r6, #0x1a4
    add r2, r6, #0x18c
    bl func_02009d50
    add r2, r6, #0xc1
    mov r4, r0
    swpb r1, r5, [r2]
    mov r0, r6
    bl func_02039038
    cmp r0, #0x0
    addne sp, sp, #0x10
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldrsb r0, [r6, #0xa6]
    cmp r0, #0x7
    bne L_021883a8
    cmp r5, #0x3
    addls pc, pc, r5, lsl #0x2
    b L_021883a8
L_02188330:
    b L_02188340
    b L_02188374
    b L_02188374
    b L_02188374
L_02188340:
    cmp r4, #0x1
    bne L_02188358
    mov r0, r6
    mov r1, #0x314
    bl func_0203e2b8
    b L_02188364
L_02188358:
    ldr r1, =0x315
    mov r0, r6
    bl func_0203e2b8
L_02188364:
    add sp, sp, #0x10
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02188374:
    cmp r4, #0x1
    bne L_0218838c
    ldr r1, =0x316
    mov r0, r6
    bl func_0203e2b8
    b L_02188398
L_0218838c:
    ldr r1, =0x317
    mov r0, r6
    bl func_0203e2b8
L_02188398:
    add sp, sp, #0x10
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021883a8:
    mov r0, r5, lsl #0x2
    add r0, r0, #0x318
    add r0, r4, r0
    mov r1, r0, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    mov r0, #0x1
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
