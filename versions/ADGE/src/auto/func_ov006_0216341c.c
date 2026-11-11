#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0205ece8();
extern void func_02073978();
extern void func_020739e8();
extern void func_02073a38();
extern void func_0207e0d0();
extern void func_0207e124();
extern void func_020c78f4();
extern char data_ov006_02164024[];
extern char data_ov006_0216402c[];
extern char data_ov006_02164044[];
extern char data_ov006_02164054[];
extern char data_ov006_0216406c[];
extern char data_ov006_02164080[];
extern char data_ov006_02164094[];
extern char data_ov006_021640a8[];
extern char data_ov006_02164264[];
// clang-format off
asm void func_ov006_0216341c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x40
    mov r1, #0x188
    mov r4, r0
    bl func_020038a8
    ldr r1, =data_ov006_02164024
    ldr r2, =data_ov006_02164264
    ldr r1, [r1, #0x0]
    str r0, [r2, #0x0]
    ldr r2, =data_ov006_0216402c
    mov r0, r4
    bl func_020c78f4
    ldr r1, =data_ov006_02164024
    mov r4, r0
    ldr r3, [r1, #0x0]
    ldr r2, =data_ov006_02164044
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r2, =data_ov006_02164264
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov006_02164054
    str r0, [r3, #0x158]
    ldr r3, =data_ov006_02164024
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r2, =data_ov006_02164264
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov006_0216406c
    str r0, [r3, #0x15c]
    ldr r3, =data_ov006_02164024
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r2, =data_ov006_02164264
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov006_02164080
    str r0, [r3, #0x160]
    ldr r3, =data_ov006_02164024
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r2, =data_ov006_02164264
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov006_02164094
    str r0, [r3, #0x164]
    ldr r3, =data_ov006_02164024
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r2, =data_ov006_02164264
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov006_021640a8
    str r0, [r3, #0x168]
    ldr r3, =data_ov006_02164024
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    ldr r1, =data_ov006_02164264
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x16c]
    mov r0, r4
    bl func_0207e124
    ldr r0, =data_ov006_02164264
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x160]
    add r1, r1, #0x170
    bl func_020739e8
    ldr r0, =data_ov006_02164264
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x164]
    add r1, r1, #0x174
    bl func_02073978
    ldr r0, =data_ov006_02164264
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x168]
    add r1, r1, #0x178
    bl func_020739e8
    ldr r0, =data_ov006_02164264
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x16c]
    add r1, r1, #0x17c
    bl func_02073a38
    ldr r1, =data_ov006_02164264
    mov r3, #0x0
    ldr r2, [r1, #0x0]
    swpb r0, r3, [r2]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x180]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x184]
    add sp, sp, #0x40
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
