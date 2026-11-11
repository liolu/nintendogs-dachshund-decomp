#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_020280ac();
extern void func_0207d0e0();
extern char data_02153734[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_021586ac(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffda04
    mov r9, r0
    mov r10, #0x0
    ldr r4, =data_ov003_0216be20
    mov r5, r10
    mov r7, r10
    mvn r6, #0x0
    ldr r11, =0x2c5
L_0215ab60:
    ldr r0, [r4, #0x0]
    mov r3, r10, lsl #0x10
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    mov r0, r9
    add r1, r1, r10
    add r1, r1, #0x2000
    add r2, r1, r11
    swpb r1, r7, [r2]
    mov r1, r3, asr #0x10
    mov r8, r6
    bl func_020280ac
    ldrb r1, [r0, #0x1]
    ldrb r2, [r0, #0x2]
    cmp r1, #0x20
    bhs L_0215abc0
    cmp r2, #0x20
    addlo r0, r1, r2, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_0215abe8
L_0215abc0:
    cmp r2, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_0215abe8:
    ldr r0, [r4, #0x0]
    mov r1, r1, asr #0x1
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0x1300
    ldrh r2, [r2, #0x94]
    mov r3, r5
L_0215ac00:
    add ip, r0, r3, lsl #0x1
    add ip, ip, #0x1300
    ldrh ip, [ip, #0x84]
    cmp r2, ip
    moveq r8, r3
    add r3, r3, #0x1
    cmp r3, #0x8
    blt L_0215ac00
    cmp r8, #0x4
    blt L_0215ac44
    ldr r3, [r4, #0x0]
    add r0, r3, r8, lsl #0x1
    add r0, r0, #0x1300
    ldrh r2, [r0, #0x7c]
    add r0, r3, r1, lsl #0x1
    add r0, r0, #0x1300
    strh r2, [r0, #0x94]
L_0215ac44:
    add r10, r10, #0x1
    cmp r10, #0x40
    blt L_0215ab60
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x1394
    ldr r2, [r0, #0x0]
    mov r0, #0x1b
    add r2, r2, r1
    mov r1, #0x0
    mov r3, #0x2000
    bl func_0207d0e0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
