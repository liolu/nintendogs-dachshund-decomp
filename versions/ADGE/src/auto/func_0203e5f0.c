#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02089e1c();
extern void func_02094e54();
extern void func_020c7a6c();
extern void func_020fe214();
extern void func_020fe4bc();
extern char data_0214da84[];
// clang-format off
asm void func_0203e5f0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r9, r0
    ldr r4, =data_0214da84
    ldrsb r0, [r9, #0x88]
    ldr r1, [r4, #0x0]
    mov r8, #0x0
    add r0, r1, r0, lsl #0x2
    ldr r7, [r0, #0x48]
    mov r5, r8
L_0203e618:
    add r6, r9, r8
    ldrsb r0, [r6, #0xba]
    cmp r0, #0x0
    beq L_0203e63c
    mov r0, r7
    mov r1, r8
    bl func_020c7a6c
    add r1, r6, #0xba
    swpb r0, r5, [r1]
L_0203e63c:
    ldrsb r0, [r6, #0xc2]
    cmp r0, #0x1
    bne L_0203e664
    ldr r0, [r4, #0x0]
    ldrsb r2, [r9, #0x88]
    add r1, r0, #0x11
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x0]
    add r1, r0, #0x12
    swpb r0, r8, [r1]
L_0203e664:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x18
    mov r8, r0, asr #0x18
    cmp r8, #0x4
    blt L_0203e618
    bl func_020fe4bc
    cmp r0, #0x0
    beq L_0203e68c
    ldrsb r0, [r9, #0x88]
    bl func_020fe214
L_0203e68c:
    ldrsb r0, [r9, #0x88]
    mov r1, #0x0
    bl func_02094e54
    ldr r0, =0x95c
    add r0, r9, r0
    bl func_02089e1c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
