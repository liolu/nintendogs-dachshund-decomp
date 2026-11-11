#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_0200c03c();
extern void func_020280f8();
extern void func_020444e8();
extern void func_02092f20();
extern void func_ov004_02159844();
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov004_02159428(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_0214b480
    mov r4, r0
    ldr r0, [r1, #0x0]
    add r1, r4, #0x3d8
    bl func_02092f20
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r4, #0x100
    ldreqh r1, [r0, #0x28]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x28]
    addne r0, r4, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x28]
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x2a]
    mov r1, #0x0
    strh r1, [r0, #0x2c]
    ldr r1, [r4, #0x4ac]
    ldr r0, =data_02153720
    add r1, r1, #0x1
    str r1, [r4, #0x4ac]
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_021594b4
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_021594bc
L_021594b4:
    mov r0, #0x0
    b L_021594c4
L_021594bc:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_021594c4:
    cmp r0, #0x0
    beq L_021594dc
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_021594e0
L_021594dc:
    mov r0, #0x0
L_021594e0:
    cmp r0, #0x0
    beq L_02159500
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x12c
    ble L_02159624
L_02159500:
    ldrsb r0, [r4, #0xac]
    cmp r0, #0x0
    beq L_02159520
    cmp r0, #0x3
    beq L_02159580
    cmp r0, #0x5
    beq L_021595c8
    b L_0215964c
L_02159520:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3c
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02159570
    cmp r0, #0x1
    addeq r1, r4, #0xac
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_0215964c
L_02159570:
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_0215964c
L_02159580:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0xac
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_0215964c
L_021595c8:
    bl func_020444e8
    cmp r0, #0x0
    beq L_021595dc
    add r1, r4, #0x3d8
    bl func_0200c03c
L_021595dc:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0xac
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_0215964c
L_02159624:
    mov r0, r4
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020280f8
    mov r0, r0, lsl #0x2
    add r1, r4, #0x1a4
    add r2, r4, #0x2a0
    add r3, r4, #0x3d8
    bl func_01ff832c
L_0215964c:
    mov r0, r4
    mov r1, #0x1
    bl func_ov004_02159844
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
