#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd7f4();
extern void func_020c3ff4();
extern void func_020eb380();
extern char data_0213836c[];
extern char data_02138564[];
extern char data_02138688[];
extern char data_0214b484[];
// clang-format off
asm void func_01ffd7f4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r7, r0
    ldr r4, [r7, #0x74]
    mov r6, r1
    mov r0, #0x24
    smlabb r8, r6, r0, r4
    mov r11, r2
    mov r0, r8
    mov r1, r11
    mov r5, r3
    ldr r4, [sp, #0x38]
    bl func_020c3ff4
    ldrsh r2, [sp, #0x3c]
    ldrsh r0, [sp, #0x44]
    ldr r1, [sp, #0x40]
    mov r2, r2, lsl #0xc
    str r2, [r8, #0x1c]
    add r2, r8, #0x14
    swpb r1, r1, [r2]
    mov r2, #0x0
    add r3, r0, #0x1
    ldrsh r1, [sp, #0x48]
    strh r2, [r8, #0x4]
    cmp r3, #0x3
    strh r1, [r8, #0x6]
    addls pc, pc, r3, lsl #0x2
    b L_01ffd8e0
L_01ffd864:
    b L_01ffd874
    b L_01ffd8ec
    b L_01ffd880
    b L_01ffd890
L_01ffd874:
    mov r0, r4, lsl #0xc
    str r0, [r8, #0x20]
    b L_01ffd8ec
L_01ffd880:
    ldrsh r0, [r8, #0x18]
    mov r0, r0, lsl #0xc
    str r0, [r8, #0x20]
    b L_01ffd8ec
L_01ffd890:
    mvn r0, #0x0
    cmp r4, r0
    bne L_01ffd8d4
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr r0, [r0, #0x0]
    ldrh r1, [r8, #0x18]
    ldr r3, [r0, #0x0]
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r4, r1, lsr #0x10
L_01ffd8d4:
    mov r0, r4, lsl #0xc
    str r0, [r8, #0x20]
    b L_01ffd8ec
L_01ffd8e0:
    sub r0, r0, #0x3
    mov r0, r0, lsl #0xc
    str r0, [r8, #0x20]
L_01ffd8ec:
    mov r10, #0x0
    mov r8, r10
    mov r9, #0x1
L_01ffd8f8:
    ldr r0, =data_02138564
    mov r1, r10, lsl #0x1
    add r0, r0, r6, lsl #0x2
    ldrsh r1, [r1, r0]
    mvn r0, #0x0
    cmp r1, r0
    beq L_01ffd948
    ldrsh r0, [sp, #0x3c]
    mov r2, r5
    cmp r0, #0x0
    ldr r0, =0x958
    movlt r3, r9
    movge r3, r8
    add r0, r7, r0
    bl func_020eb380
    add r0, r10, #0x1
    mov r0, r0, lsl #0x18
    mov r10, r0, asr #0x18
    cmp r10, #0x2
    blt L_01ffd8f8
L_01ffd948:
    mov r0, #0xc
    mul r2, r6, r0
    ldr r0, =data_02138688
    mvn r6, #0x0
    ldrsh r1, [r0, r2]
    add r8, r0, r2
    mov r9, #0x0
    cmp r1, r6
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r10, =data_0213836c
L_01ffd978:
    mov r0, r1, lsl #0x1
    ldrsh r0, [r10, r0]
    add r0, r7, r0, lsl #0x2
    ldr r0, [r0, #0x178]
    cmp r0, #0x0
    bne L_01ffd9c4
    ldrsh r0, [sp, #0x3c]
    str r4, [sp, #0x0]
    ldr r2, [sp, #0x40]
    str r0, [sp, #0x4]
    ldrsh r0, [sp, #0x44]
    str r2, [sp, #0x8]
    ldrsh ip, [sp, #0x48]
    str r0, [sp, #0xc]
    mov r0, r7
    mov r2, r11
    mov r3, r5
    str ip, [sp, #0x10]
    bl func_01ffd7f4
L_01ffd9c4:
    mov r0, r9, lsl #0x1
    ldrsh r1, [r8, r0]
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r6
    mov r9, r0, asr #0x10
    bne L_01ffd978
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
