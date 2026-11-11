#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c8a3c();
extern void func_020c8a58();
extern void func_020c984c();
extern void func_020cd3d8();
extern char data_02153708[];
extern char data_02153720[];
extern char func_020a0ad0[];
// clang-format off
asm void func_020a0840(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    ldr r1, =data_02153708
    mov r6, r0
    ldr r0, [r1, #0x0]
    mov r4, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_020a095c
    bl func_020c8a58
    movs r5, r0
    beq L_020a095c
    bl func_020c8a3c
    mov r4, r0
    str r4, [r6, #0x13c]
    str r5, [r6, #0x140]
    ldrsb r0, [r5, #0xe]
    cmp r0, #0x1
    beq L_020a0898
    cmp r0, #0x2
    beq L_020a0900
    b L_020a094c
L_020a0898:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x140]
    bl func_020c984c
    cmp r0, #0x0
    beq L_020a094c
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_020a08c8
    cmp r0, #0x4
    beq L_020a08e4
    b L_020a094c
L_020a08c8:
    ldr r1, =0xd23
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d8
    b L_020a094c
L_020a08e4:
    ldr r1, =0xd22
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d8
    b L_020a094c
L_020a0900:
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_020a0918
    cmp r0, #0x4
    beq L_020a0934
    b L_020a094c
L_020a0918:
    ldr r1, =0xd2b
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d8
    b L_020a094c
L_020a0934:
    ldr r1, =0xd2a
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d8
L_020a094c:
    add r1, r5, #0xf
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r4, #0x1
L_020a095c:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
