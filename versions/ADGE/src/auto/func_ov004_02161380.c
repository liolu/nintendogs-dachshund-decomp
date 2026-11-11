#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_020280d4();
extern void func_0207ca98();
extern char data_0215a078[];
extern char data_ov004_0216ddc4[];
extern char data_ov004_0216ddcc[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02161380(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r1, =data_ov004_0216e3c0
    mov r9, #0x0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1000
    str r9, [r0, #0x300]
    ldr ip, =data_ov004_0216ddcc
    mov r11, r9
    str r9, [sp, #0x0]
    ldr r0, =0x305
L_021613ac:
    ldr r7, [sp, #0x0]
    mov r6, r7
L_021613b4:
    mov r8, r11
    mov r5, r11
    mov r4, r6, lsl #0x1
L_021613c0:
    ldr r2, [r1, #0x0]
    add r3, r2, r9, lsl #0x2
    add r3, r3, #0x3000
    ldr r3, [r3, #0x408]
    add r10, r2, #0x1100
    add r3, r3, #0xc
    add r3, r3, r4
    ldrh r10, [r10, #0x2a]
    add lr, r3, r5
    ldrh r3, [r3, r5]
    cmp r10, r3
    bne L_0216145c
    add r3, r2, #0x1000
    ldr r3, [r3, #0x300]
    ldrb r10, [ip, r9, lsl #0x1]
    add r2, r2, r3, lsl #0x1
    add r2, r2, #0x1000
    add r3, r8, r10
    add r2, r2, #0x304
    swpb r3, r3, [r2]
    add r2, ip, r9, lsl #0x1
    ldr r3, [r1, #0x0]
    ldrb r2, [r2, #0x1]
    add r10, r3, #0x1000
    ldr r10, [r10, #0x300]
    add r2, r7, r2
    add r3, r3, r10, lsl #0x1
    add r3, r3, #0x1000
    add r3, r3, r0
    swpb r2, r2, [r3]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x1000
    ldr r3, [r2, #0x300]
    add r3, r3, #0x1
    str r3, [r2, #0x300]
    ldr r2, [r1, #0x0]
    add r2, r2, #0xc00
    ldrh r2, [r2, #0xaa]
    strh r2, [lr, #0x0]
L_0216145c:
    add r8, r8, #0x1
    cmp r8, #0x20
    add r5, r5, #0x2
    blt L_021613c0
    add r7, r7, #0x1
    cmp r7, #0x18
    add r6, r6, #0x20
    blt L_021613b4
    add r9, r9, #0x1
    cmp r9, #0x4
    blt L_021613ac
    ldr r1, =data_ov004_0216e3c0
    mov r4, #0x0
L_02161490:
    ldr r3, [r1, #0x0]
    add r0, r3, #0x1300
    ldrh r2, [r0, #0x84]
    add r0, r3, r4, lsl #0x1
    add r0, r0, #0x1300
    add r4, r4, #0x1
    strh r2, [r0, #0x94]
    cmp r4, #0x1000
    blt L_02161490
    ldr r0, =data_0215a078
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffdb08
    mov r6, r0
    mov r5, #0x0
    ldr r7, =data_ov004_0216e3c0
    ldr r4, =data_ov004_0216ddc4
L_021614d4:
    mov r1, r5, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_020280d4
    ldrb r2, [r0, #0x1]
    ldrb r3, [r0, #0x2]
    cmp r2, #0x20
    bhs L_02161514
    cmp r3, #0x20
    addlo r1, r2, r3, lsl #0x5
    movlo r1, r1, lsl #0x1
    subhs r1, r3, #0x20
    addhs r1, r2, r1, lsl #0x5
    movhs r1, r1, lsl #0x1
    addhs r1, r1, #0x1000
    b L_0216153c
L_02161514:
    cmp r3, #0x20
    sublo r1, r2, #0x20
    addlo r1, r1, r3, lsl #0x5
    movlo r1, r1, lsl #0x1
    addlo r1, r1, #0x800
    subhs r2, r2, #0x20
    subhs r1, r3, #0x20
    addhs r1, r2, r1, lsl #0x5
    movhs r1, r1, lsl #0x1
    addhs r1, r1, #0x1800
L_0216153c:
    ldrb r0, [r0, #0x3]
    add r5, r5, #0x1
    ldr r3, [r7, #0x0]
    ldrsb r2, [r4, r0]
    mov r0, r1, asr #0x1
    add r1, r3, r0, lsl #0x1
    add r0, r3, r2, lsl #0x1
    add r0, r0, #0x1300
    ldrh r2, [r0, #0x84]
    add r0, r1, #0x1300
    cmp r5, #0x40
    strh r2, [r0, #0x94]
    blt L_021614d4
    ldr r2, [r7, #0x0]
    ldr r1, =0x1394
    mov r0, #0x1b
    add r2, r2, r1
    mov r1, #0x0
    mov r3, #0x2000
    bl func_0207ca98
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
