#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039588();
extern void func_020395c4();
extern void func_02039600();
extern void func_0203e5ac();
extern char data_0213aa2d[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02189b1c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r1, [r4, #0x8b]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02189c98
L_02189b34:
    b L_02189bdc
    b L_02189bdc
    b L_02189b90
    b L_02189b84
    b L_02189b78
    b L_02189b4c
L_02189b4c:
    add r0, r4, #0x278
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, r4, #0x98
    mov r1, #0x9
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_02039588
    ldmfd sp!, {r4, lr}
    bx lr
L_02189b78:
    bl func_020395c4
    ldmfd sp!, {r4, lr}
    bx lr
L_02189b84:
    bl func_02039600
    ldmfd sp!, {r4, lr}
    bx lr
L_02189b90:
    ldr r0, =data_0215a064
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x10
    bl func_0203e5ac
    add r1, r4, #0x98
    mov r0, #0x9
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02189bdc:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x1e]
    cmp r0, #0x0
    beq L_02189c50
    add r1, r4, #0x97
    mov ip, #0x2
    swpb r0, ip, [r1]
    add r3, r4, #0x3b4
    add r0, r4, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, ip
    mov r2, #0x4
    bl func_0203e5ac
    ldr r0, [r4, #0x9e8]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213aa2d
    mov r0, r4
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e5ac
    ldmfd sp!, {r4, lr}
    bx lr
L_02189c50:
    add r1, r4, #0x97
    mov ip, #0x0
    swpb r0, ip, [r1]
    ldr r0, =data_0215a064
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r2, ip
    mov r1, #0x2
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
L_02189c98:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
