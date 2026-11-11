#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_020280ac();
extern void func_020280c8();
extern void func_0202814c();
extern void func_0207d0e0();
extern void func_020e1758();
extern void func_ov003_0215c688();
extern char data_02153734[];
extern char data_ov003_0216b838[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_02157f44(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    cmp r0, #0x0
    beq L_0215a5b4
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2200
    ldrsb r0, [r0, #0xc4]
    add r0, r1, r0, lsl #0x2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x2a8]
    add r0, r1, r0, lsl #0x1
    ldrb r8, [r0, #0xc]
    ldrb r7, [r0, #0xd]
    cmp r8, #0x20
    bhs L_0215a428
    cmp r7, #0x20
    addlo r0, r8, r7, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r7, #0x20
    addhs r0, r8, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215a450
L_0215a428:
    cmp r7, #0x20
    sublo r0, r8, #0x20
    addlo r0, r0, r7, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r8, #0x20
    subhs r0, r7, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215a450:
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffda04
    mov r6, r0
    mvn r5, #0x0
    mov r10, #0x0
    mov r9, #0x40
L_0215a470:
    mov r1, r10, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_020280ac
    ldrb r1, [r0, #0x1]
    cmp r1, r8
    bne L_0215a49c
    ldrb r0, [r0, #0x2]
    cmp r0, r7
    moveq r5, r10
    moveq r10, r9
L_0215a49c:
    add r10, r10, #0x1
    cmp r10, #0x40
    blt L_0215a470
    mvn r0, #0x0
    cmp r5, r0
    bne L_0215a4e8
    mov r10, #0x0
    mov r9, #0x40
L_0215a4bc:
    mov r1, r10, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_020280ac
    ldrb r0, [r0, #0x3]
    cmp r0, #0x0
    moveq r5, r10
    moveq r10, r9
    add r10, r10, #0x1
    cmp r10, #0x40
    blt L_0215a4bc
L_0215a4e8:
    mov r1, r5, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_020280ac
    mov r5, r0
    mov r0, r6
    bl func_020280c8
    cmp r0, #0x0
    addeq r1, r5, #0x3
    moveq r0, #0x6
    swpeqb r0, r0, [r1]
    addne r1, r5, #0x3
    movne r0, #0x4
    swpneb r0, r0, [r1]
    ldrb r1, [r5, #0x3]
    ldr r0, =data_ov003_0216b838
    add r2, r5, #0x1
    ldrsb r3, [r0, r1]
    swpb r1, r8, [r2]
    add r5, r5, #0x2
    swpb r1, r7, [r5]
    ldr r0, =data_ov003_0216be20
    mov r2, r4, asr #0x1
    ldr r7, [r0, #0x0]
    mov r1, r4
    add r3, r7, r3, lsl #0x1
    add r3, r3, #0x1300
    ldrh r4, [r3, #0x84]
    add r3, r7, r2, lsl #0x1
    add r3, r3, #0x1300
    strh r4, [r3, #0x94]
    ldr r3, [r0, #0x0]
    ldr r5, =0x1394
    mov r0, #0x1b
    add r3, r3, r5
    add r2, r3, r2, lsl #0x1
    mov r3, #0x2
    bl func_0207d0e0
    mov r0, r6
    bl func_0202814c
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x2a5
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    ldrb r2, [r0, #0x2a5]
    add r1, r0, r1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    b L_0215a5b8
L_0215a5b4:
    bl func_ov003_0215c688
L_0215a5b8:
    ldr r3, =data_ov003_0216be20
    mvn r5, #0x0
    ldr r0, [r3, #0x0]
    ldr r2, =0x315
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    mov r4, #0x0
    add r0, r0, #0x2000
    add r1, r0, #0x2c4
    swpb r0, r5, [r1]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r2
    swpb r0, r4, [r1]
    bl func_020e1758
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
