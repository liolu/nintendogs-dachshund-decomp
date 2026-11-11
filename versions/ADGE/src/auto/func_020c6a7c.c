#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003850();
extern void func_02006b68();
extern void func_0205ece8();
extern void func_0207e0d0();
extern void func_0207e124();
extern void func_0207e154();
extern void func_02087e70();
extern void func_02087f84();
extern void func_02087fcc();
extern void func_0208831c();
extern char data_02130388[];
extern char data_02140e10[];
extern char data_02140e14[];
extern char data_02140e18[];
extern char data_02140e2c[];
extern char data_02140e38[];
extern char data_02140e48[];
// clang-format off
asm void func_020c6a7c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x94
    mov r4, #0xc
    mul r5, r1, r4
    mov r7, r0
    mov r4, r2
    ldr r0, =data_02130388
    mov r6, r3
    ldr r3, [r0, r5]
    ldr r2, =data_02140e14
    add r0, sp, #0x4
    mov r1, #0x6
    ldr r5, =data_02140e10
    bl func_0205ece8
    ldrb r1, [sp, #0x8]
    add r2, sp, #0x8
    add r0, sp, #0xa
    add r1, r1, r4
    swpb r1, r1, [r2]
    ldr r2, =data_02140e18
    add r3, sp, #0x4
    mov r1, #0x40
    bl func_0205ece8
    mov r4, #0x0
    str r4, [r6, #0x0]
    str r4, [r6, #0x4]
    add r0, sp, #0x4c
    str r4, [r6, #0x8]
    bl func_0208831c
    add r0, sp, #0x4c
    add r1, sp, #0xa
    bl func_02087fcc
    cmp r0, #0x0
    beq L_020c6b6c
    ldr r2, [sp, #0x70]
    ldr r1, [sp, #0x6c]
    mov r0, r7
    sub r8, r2, r1
    add r1, r8, #0xf
    bic r1, r1, #0xf
    add r1, r1, #0x60
    mov r2, #0x10
    bl func_02003850
    movs r7, r0
    beq L_020c6b64
    add r9, r7, #0x60
    add r0, sp, #0x4c
    mov r1, r9
    mov r2, r8
    bl func_02087e70
    cmp r8, r0
    bne L_020c6b64
    mov r0, r7
    mov r1, r5
    mov r2, r9
    bl func_0207e154
    cmp r0, #0x0
    movne r4, r7
L_020c6b64:
    add r0, sp, #0x4c
    bl func_02087f84
L_020c6b6c:
    ldr r2, =data_02140e2c
    add r7, sp, #0x4
    add r0, sp, #0xa
    mov r3, r5
    mov r1, #0x40
    str r7, [sp, #0x0]
    bl func_0205ece8
    add r0, sp, #0xa
    bl func_0207e0d0
    str r0, [r6, #0x0]
    mov r1, r7
    str r1, [sp, #0x0]
    ldr r2, =data_02140e38
    add r0, sp, #0xa
    mov r3, r5
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0xa
    bl func_0207e0d0
    str r0, [r6, #0x4]
    mov r1, r7
    str r1, [sp, #0x0]
    ldr r2, =data_02140e48
    mov r3, r5
    add r0, sp, #0xa
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0xa
    bl func_0207e0d0
    bl func_02006b68
    str r0, [r6, #0x8]
    mov r0, r4
    bl func_0207e124
    add sp, sp, #0x94
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
