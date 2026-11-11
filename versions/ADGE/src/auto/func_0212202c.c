#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020ce1d4();
extern void func_020ce1f0();
extern void func_020cf000();
extern void func_020d2c64();
extern char data_0215a04c[];
extern char data_0215a064[];
extern char func_021222bc[];
// clang-format off
asm void func_0212202c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    ldr r1, =data_0215a04c
    mov r6, r0
    ldr r0, [r1, #0x0]
    mov r4, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02122148
    bl func_020ce1f0
    movs r5, r0
    beq L_02122148
    bl func_020ce1d4
    mov r4, r0
    str r4, [r6, #0x13c]
    str r5, [r6, #0x140]
    ldrsb r0, [r5, #0xe]
    cmp r0, #0x1
    beq L_02122084
    cmp r0, #0x2
    beq L_021220ec
    b L_02122138
L_02122084:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x140]
    bl func_020cf000
    cmp r0, #0x0
    beq L_02122138
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_021220b4
    cmp r0, #0x4
    beq L_021220d0
    b L_02122138
L_021220b4:
    ldr r1, =0xd23
    mov r2, #0x0
    ldr r3, =func_021222bc
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020d2c64
    b L_02122138
L_021220d0:
    ldr r1, =0xd22
    mov r2, #0x0
    ldr r3, =func_021222bc
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020d2c64
    b L_02122138
L_021220ec:
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_02122104
    cmp r0, #0x4
    beq L_02122120
    b L_02122138
L_02122104:
    ldr r1, =0xd2b
    mov r2, #0x0
    ldr r3, =func_021222bc
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020d2c64
    b L_02122138
L_02122120:
    ldr r1, =0xd2a
    mov r2, #0x0
    ldr r3, =func_021222bc
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020d2c64
L_02122138:
    add r1, r5, #0xf
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r4, #0x1
L_02122148:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
