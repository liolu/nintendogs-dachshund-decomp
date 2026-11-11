#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_02087e70();
extern void func_02087f84();
extern void func_02087fcc();
extern void func_0208831c();
extern void func_020883f4();
extern char data_02140fbc[];
extern char data_02140fd0[];
extern char data_02140fe8[];
extern char data_02158ac8[];
// clang-format off
asm void func_020c75d0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x88
    mov r1, #0x1c
    mov r5, r0
    bl func_020038a8
    movs r4, r0
    addeq sp, sp, #0x88
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, #0x0
    mov r1, r0
    bl func_020883f4
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl func_020038a8
    str r6, [r4, #0x0]
    str r0, [r4, #0x4]
    ldr r1, =0xffff
    mov r0, #0x0
    strh r1, [r4, #0x8]
    strh r0, [r4, #0xa]
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0x0]
    bl func_020883f4
    ldr r6, =data_02140fbc
    add r0, sp, #0x0
    bl func_0208831c
    mov r1, r6
    add r0, sp, #0x0
    bl func_02087fcc
    ldr r2, [sp, #0x24]
    ldr r1, [sp, #0x20]
    mov r0, r5
    sub r6, r2, r1
    mov r1, r6
    bl func_020038a8
    mov r2, r6
    mov r6, r0
    add r0, sp, #0x0
    mov r1, r6
    bl func_02087e70
    add r0, sp, #0x0
    str r6, [r4, #0x14]
    bl func_02087f84
    add r0, sp, #0x44
    bl func_0208831c
    ldr r1, =data_02140fd0
    add r0, sp, #0x44
    bl func_02087fcc
    cmp r0, #0x0
    beq L_020c7710
    ldr r2, [sp, #0x68]
    ldr r1, [sp, #0x64]
    mov r0, r5
    sub r5, r2, r1
    mov r1, r5
    bl func_020038a8
    mov r6, r0
    add r0, sp, #0x44
    mov r1, r6
    mov r2, r5
    bl func_02087e70
    add r0, sp, #0x44
    bl func_02087f84
    str r6, [r4, #0x18]
    b L_020c76f0
L_020c76ec:
    add r6, r6, #0x1
L_020c76f0:
    ldrb r0, [r6, #0x0]
    cmp r0, #0xd
    beq L_020c7704
    cmp r0, #0x0
    bne L_020c76ec
L_020c7704:
    mov r0, #0x0
    swpb r0, r0, [r6]
    b L_020c7718
L_020c7710:
    ldr r0, =data_02140fe8
    str r0, [r4, #0x18]
L_020c7718:
    ldr r0, =data_02158ac8
    str r4, [r0, #0x0]
    add sp, sp, #0x88
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
