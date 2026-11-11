#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02153734[];
extern char data_ov003_0216b850[];
extern char data_ov003_0216b864[];
extern char data_ov003_0216b870[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215f08c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2cc
    mov r1, #0x0
    add r0, sp, #0x24
    mov r6, r1
L_021615c4:
    str r6, [r0, r1, lsl #0x2]
    add r1, r1, #0x1
    cmp r1, #0x4
    blt L_021615c4
    ldr r0, =data_ov003_0216b864
    ldrb r3, [r0, #0x7]
    add r1, sp, #0x24
    ldr r7, =data_ov003_0216be20
    mov r0, #0x0
    str r0, [sp, #0xc]
L_021615ec:
    ldr r11, [sp, #0xc]
    mov r0, r11
    str r0, [sp, #0x0]
L_021615f8:
    ldr r4, [sp, #0xc]
    mov r0, r4
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x0]
    mov r0, r0, lsl #0x1
    str r0, [sp, #0x8]
L_02161610:
    ldr r0, [r7, #0x0]
    cmp r3, #0x0
    add r0, r0, r6, lsl #0x2
    add r0, r0, #0x3000
    ldr r0, [r0, #0x408]
    ldr r5, [sp, #0xc]
    add r2, r0, #0xc
    ldr r0, [sp, #0x8]
    add r2, r2, r0
    ldr r0, [sp, #0x4]
    add lr, r2, r0
    ldrh ip, [r2, r0]
    ble L_021616c8
    add r2, sp, #0x48
L_02161648:
    ldr r0, [r7, #0x0]
    add r0, r0, r5, lsl #0x1
    add r0, r0, #0x1000
    ldrh r0, [r0, #0xa]
    cmp ip, r0
    bne L_021616b8
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_021616a8
    ldr r8, =data_ov003_0216b850
    ldr r0, [r1, r5, lsl #0x2]
    ldrb r10, [r8, r6, lsl #0x1]
    add r9, r8, r6, lsl #0x1
    add r8, r2, r0, lsl #0x3
    add r10, r4, r10
    str r10, [r2, r0, lsl #0x3]
    ldrb r0, [r9, #0x1]
    add r0, r11, r0
    str r0, [r8, #0x4]
    ldr r0, [r1, r5, lsl #0x2]
    add r0, r0, #0x1
    str r0, [r1, r5, lsl #0x2]
L_021616a8:
    ldr r0, [r7, #0x0]
    add r0, r0, #0xc00
    ldrh r0, [r0, #0xaa]
    strh r0, [lr, #0x0]
L_021616b8:
    add r2, r2, #0xa0
    add r5, r5, #0x1
    cmp r5, r3
    blt L_02161648
L_021616c8:
    ldr r0, [sp, #0x4]
    add r4, r4, #0x1
    add r0, r0, #0x2
    cmp r4, #0x20
    str r0, [sp, #0x4]
    blt L_02161610
    ldr r0, [sp, #0x0]
    add r11, r11, #0x1
    add r0, r0, #0x20
    cmp r11, #0x18
    str r0, [sp, #0x0]
    blt L_021615f8
    add r6, r6, #0x1
    cmp r6, #0x4
    blt L_021615ec
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x2cc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mvn r0, #0x0
    mov r6, #0x0
    str r0, [sp, #0x20]
    ldr r1, =data_ov003_0216be20
    ldr r0, =0x10dcd
    add r9, sp, #0x48
    mov r8, r6
    add r4, sp, #0x34
    str r6, [sp, #0x14]
    mov lr, r6
    str r6, [sp, #0x1c]
    str r6, [sp, #0x18]
    str r6, [sp, #0x10]
    mov r3, #0x1
L_02161758:
    ldr r7, [sp, #0x10]
    mov r5, r4
L_02161760:
    ldr r2, [sp, #0x14]
    add r7, r7, #0x1
    swpb r2, r2, [r5]
    add r5, r5, #0x1
    cmp r7, #0x14
    blt L_02161760
    cmp r6, #0x4
    bge L_0216182c
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r5, [r2, #0x6c0]
    mul r7, r5, r0
    add r5, r7, #0x1
    str r5, [r2, #0x6c0]
    mov r2, r5, lsl #0x10
    mov r5, r2, lsr #0x10
    add r2, sp, #0x24
    ldr r2, [r2, r6, lsl #0x2]
    ldr r7, [r1, #0x0]
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mul r5, r2, r5
    mov r2, r5, lsr #0x10
    mov r5, r2, lsl #0x10
    add r2, r7, #0x3000
    add r10, r4, r5, lsr #0x10
    mov r7, r5, lsr #0x10
    swpb r5, r3, [r10]
    ldr r2, [r2, #0x6c4]
    add r5, r9, r7, lsl #0x3
    add r2, r2, r6, lsl #0x1
    add r2, r2, #0x2000
    ldr r7, [r9, r7, lsl #0x3]
    add r10, r2, #0x268
    swpb r2, r7, [r10]
    ldr r2, [r5, #0x4]
    ldr r5, [r1, #0x0]
    add r5, r5, #0x3000
    ldr r5, [r5, #0x6c4]
    add r5, r5, r6, lsl #0x1
    add r7, r5, #0x2000
    ldr r5, =0x269
    add r5, r7, r5
    swpb r2, r2, [r5]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r6
    add r2, r2, #0x2000
    add r5, r2, #0x270
    swpb r2, r3, [r5]
L_0216182c:
    ldr r5, [sp, #0x18]
L_02161830:
    add r7, sp, #0x24
    ldr r7, [r7, r6, lsl #0x2]
    ldr r2, [sp, #0x1c]
    mov r7, r7, lsl #0x10
    mov r7, r7, lsr #0x10
L_02161844:
    ldr r10, [r1, #0x0]
    add r10, r10, #0x3000
    ldr r11, [r10, #0x6c0]
    mul ip, r11, r0
    add r11, ip, #0x1
    str r11, [r10, #0x6c0]
    mov r10, r11, lsl #0x10
    mov r10, r10, lsr #0x10
    mul r10, r7, r10
    mov r10, r10, lsr #0x10
    mov r10, r10, lsl #0x10
    mov r11, r10, lsr #0x10
    ldrsb r10, [r4, r11]
    cmp r10, #0x0
    moveq r2, r3
    cmp r2, #0x0
    beq L_02161844
    add r10, r4, r11
    swpb r2, r3, [r10]
    ldr r10, [r1, #0x0]
    ldr r2, [r9, r11, lsl #0x3]
    add r10, r10, #0x3000
    ldr r10, [r10, #0x6c4]
    add ip, r9, r11, lsl #0x3
    add r10, r10, r8, lsl #0x1
    add r10, r10, r5, lsl #0x1
    add r11, r10, #0x2000
    ldr r10, =0x275
    add r10, r11, r10
    swpb r2, r2, [r10]
    ldr r10, [r1, #0x0]
    ldr r2, [ip, #0x4]
    add r10, r10, #0x3000
    ldr r10, [r10, #0x6c4]
    add r10, r10, r8, lsl #0x1
    add r10, r10, r5, lsl #0x1
    add r11, r10, #0x2000
    ldr r10, =0x276
    add r10, r11, r10
    swpb r2, r2, [r10]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r6, lsl #0x1
    add r2, r5, r2
    add r10, r2, #0x2000
    ldr r2, =0x285
    add r10, r10, r2
    swpb r2, r3, [r10]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r6, lsl #0x1
    add r2, r5, r2
    add r10, r2, #0x2000
    ldr r2, =0x28d
    add r5, r5, #0x1
    add r10, r10, r2
    swpb r2, lr, [r10]
    cmp r5, #0x2
    blt L_02161830
    cmp r6, #0x8
    bge L_02161a34
    mov r5, lr
L_02161944:
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r10, [r2, #0x6c0]
    mul r11, r10, r0
    add r10, r11, #0x1
    str r10, [r2, #0x6c0]
    mov r2, r10, lsl #0x10
    mov r2, r2, lsr #0x10
    mul r2, r7, r2
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    ldrsb r10, [r4, r2]
    cmp r10, #0x0
    moveq r5, r3
    cmp r5, #0x0
    beq L_02161944
    add r7, r4, r2
    swpb r5, r3, [r7]
    ldr r7, [r1, #0x0]
    ldr r5, [r9, r2, lsl #0x3]
    add r7, r7, #0x3000
    ldr r7, [r7, #0x6c4]
    add r2, r9, r2, lsl #0x3
    add r7, r7, r6, lsl #0x1
    add r10, r7, #0x2000
    ldr r7, =0x296
    add r7, r10, r7
    swpb r5, r5, [r7]
    ldr r5, [r1, #0x0]
    ldr r2, [r2, #0x4]
    add r5, r5, #0x3000
    ldr r5, [r5, #0x6c4]
    add r5, r5, r6, lsl #0x1
    add r7, r5, #0x2000
    ldr r5, =0x297
    add r5, r7, r5
    swpb r2, r2, [r5]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r5, r2, #0x2000
    ldrb r7, [r5, #0x305]
    ldr r5, =data_ov003_0216b870
    add r5, r5, r7, lsl #0x2
    ldrsb r5, [r6, r5]
    cmp r5, #0x0
    blt L_02161a1c
    add r2, r2, r6
    add r5, r2, #0x2000
    ldr r2, =0x29e
    add r5, r5, r2
    swpb r2, r3, [r5]
    b L_02161a34
L_02161a1c:
    add r2, r2, r6
    add r5, r2, #0x2000
    ldr r2, =0x29e
    add r5, r5, r2
    ldr r2, [sp, #0x20]
    swpb r2, r2, [r5]
L_02161a34:
    add r9, r9, #0xa0
    add r8, r8, #0x2
    add r6, r6, #0x1
    cmp r6, #0x4
    blt L_02161758
    add sp, sp, #0x2cc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
