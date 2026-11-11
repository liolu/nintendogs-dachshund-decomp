#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021549d4[];
extern char data_021549d8[];
extern char data_021549dc[];
extern char data_021549e0[];
extern char data_021549f0[];
// clang-format off
asm void func_02097004(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r8, #0x0
    str r8, [r2, #0x0]
    str r8, [r2, #0x4]
    mov r7, r8
    mov r6, r8
    mov r5, r8
    mov r10, r8
    strh r8, [r2, #0x8]
    ldr r9, =data_021549f0
L_02097030:
    add r3, r10, #0x1
    add r4, r9, r10
    and r10, r3, #0xff
    cmp r10, #0x10
    swpb r3, r8, [r4]
    blo L_02097030
    add r3, r5, #0x1
    mov r3, r3, lsl #0x10
    ldr r4, =data_021549dc
    mov r5, r3, lsr #0x10
    cmp r5, r1
    str r0, [r4, #0x0]
    addlt r3, r0, #0x2
    strlt r3, [r4, #0x0]
    cmp r5, r1
    bge L_02097120
    ldr lr, =data_021549f0
    ldr r3, =data_021549d4
    ldr ip, =data_021549dc
    mov r4, #0x1f
L_02097080:
    ldrsh r9, [r0, #0x0]
    cmp r9, #0x0
    blt L_02097100
    ldr r10, [ip, #0x0]
    ldrsh r10, [r10, #0x0]
    cmp r10, #0x0
    blt L_02097100
    cmp r9, r10
    ble L_02097100
    ldr r10, =0x5dc0
    cmp r9, #0x0
    rsblt r9, r9, #0x0
    cmp r9, r10
    ble L_02097100
    ldr r11, [r3, #0x0]
    cmp r11, #0x0
    beq L_020970f4
    cmp r0, r11
    subhi r10, r0, r11
    movhi r11, r10, lsr #0x1
    addls r10, r0, #0x20000
    subls r10, r10, r11
    movls r11, r10, lsr #0x1
    cmp r11, #0x1f
    movhi r11, r4
    ldrb r10, [lr, r11, lsr #0x1]
    add r11, lr, r11, lsr #0x1
    add r10, r10, #0x1
    swpb r10, r10, [r11]
L_020970f4:
    cmp r8, r9
    str r0, [r3, #0x0]
    movlt r8, r9
L_02097100:
    add r5, r5, #0x1
    ldr r0, [ip, #0x0]
    mov r5, r5, lsl #0x10
    add r9, r0, #0x2
    str r9, [ip, #0x0]
    mov r5, r5, lsr #0x10
    cmp r5, r1
    blt L_02097080
L_02097120:
    ldr r1, =data_021549f0
    mov r3, #0x0
L_02097128:
    ldrb r4, [r1, r3]
    cmp r4, #0x0
    addeq r0, r7, #0x1
    andeq r7, r0, #0xff
    cmp r3, #0xf
    beq L_02097148
    cmp r4, #0x0
    movne r6, r3
L_02097148:
    add r0, r3, #0x1
    and r3, r0, #0xff
    cmp r3, #0x10
    blo L_02097128
    ldr r1, =data_021549f0
    ldr r0, =0x5dc0
    ldrb r3, [r1, #0x0]
    ldrb r1, [r1, #0x1]
    cmp r8, r0
    add r0, r3, r1
    and r0, r0, #0xff
    blt L_020971d4
    cmp r0, #0x3c
    bhs L_020971d4
    cmp r7, #0xa
    bls L_02097198
    cmp r0, #0x19
    bhs L_02097198
    cmp r6, #0xd
    blo L_020971d4
L_02097198:
    ldrh r0, [r2, #0xa]
    add r0, r0, #0x1
    strh r0, [r2, #0xa]
    ldrh r0, [r2, #0xa]
    cmp r0, #0x5
    movhs r0, #0x1
    strhs r0, [r2, #0x4]
    ldr r0, =data_021549e0
    ldr r1, [r0, #0x0]
    cmp r1, r8
    strlt r8, [r0, #0x0]
    ldr r0, =data_021549d8
    mov r1, #0x1
    str r1, [r0, #0x0]
    b L_0209724c
L_020971d4:
    ldr r0, =data_021549d8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02097224
    ldrh r0, [r2, #0xa]
    cmp r0, #0x6
    bls L_02097210
    cmp r0, #0x3c
    bhs L_02097210
    ldr r1, =data_021549e0
    ldr r0, =0x7530
    ldr r1, [r1, #0x0]
    cmp r1, r0
    movge r0, #0x1
    strge r0, [r2, #0x0]
L_02097210:
    mov r1, #0x0
    ldr r0, =data_021549e0
    strh r1, [r2, #0xa]
    str r1, [r0, #0x0]
    b L_02097240
L_02097224:
    ldrh r0, [r2, #0xa]
    add r0, r0, #0x1
    strh r0, [r2, #0xa]
    ldrh r0, [r2, #0xa]
    cmp r0, #0x5
    movhs r0, #0x1
    strhs r0, [r2, #0x4]
L_02097240:
    ldr r0, =data_021549d8
    mov r1, #0x0
    str r1, [r0, #0x0]
L_0209724c:
    strh r8, [r2, #0x8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
