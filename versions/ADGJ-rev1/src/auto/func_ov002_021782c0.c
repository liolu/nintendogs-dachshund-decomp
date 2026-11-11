#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b54();
extern void func_0202f8a4();
extern void func_02034c88();
extern void func_020351a0();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e280();
extern char data_02153720[];
// clang-format off
asm void func_ov002_021782c0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r1, r5, #0x100
    ldrsh r2, [r1, #0x50]
    mov r4, #0x0
    cmp r2, #0x90
    beq L_021782f0
    ldr r1, =0x111
    cmp r2, r1
    beq L_02178370
    b L_0217837c
L_021782f0:
    ldr r0, =data_02153720
    add r3, r5, #0x26c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_02038edc
    mov r0, r5
    mov r1, #0x300
    bl func_02036fbc
    mov r0, r5
    bl func_020351a0
    cmp r0, #0x0
    beq L_0217837c
    ldr r2, =0x111
    mov r0, r5
    mov r1, r4
    bl func_0203e280
    mov r0, r5
    bl func_02034c88
    mov r2, r0
    mov r0, r5
    mov r1, #0x3
    bl func_0203e280
    mov r0, r5
    bl func_02026b54
    add r1, r5, #0xac
    mov r0, #0xa
    swpb r0, r0, [r1]
    b L_0217837c
L_02178370:
    bl func_020351a0
    cmp r0, #0x0
    movne r4, #0x1
L_0217837c:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    bl func_0202f8a4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
