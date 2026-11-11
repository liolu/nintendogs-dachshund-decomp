#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02081174();
extern void func_0208129c();
extern void func_ov004_0215a2f8();
extern char data_0215a02c[];
extern char data_0215a03c[];
// clang-format off
asm void func_0210561c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_0215a02c
    mov r6, r0
    ldr r0, [r2, #0x0]
    mov r5, r1
    cmp r0, #0x0
    ldrne r4, [r0, #0x0]
    ldr r0, =data_0215a03c
    moveq r4, #0x0
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x2c]
    cmp r1, #0x0
    beq L_02105668
    mov r0, r4
    bl func_02081174
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x2c]
L_02105668:
    ldr r0, =data_0215a03c
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x30]
    cmp r1, #0x0
    beq L_02105694
    mov r0, r4
    bl func_02081174
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x30]
L_02105694:
    ldr r0, =data_0215a03c
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x34]
    cmp r1, #0x0
    beq L_021056c0
    mov r0, r4
    bl func_02081174
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x34]
L_021056c0:
    ldr r0, =data_0215a03c
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x38]
    cmp r1, #0x0
    beq L_021056ec
    mov r0, r4
    bl func_02081174
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x38]
L_021056ec:
    ldr r0, =data_0215a03c
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x3c]
    cmp r1, #0x0
    beq L_02105718
    mov r0, r4
    bl func_02081174
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x3c]
L_02105718:
    mov r0, r4
    mov r2, r6
    mov r1, #0x3d
    bl func_0208129c
    ldr r4, =data_0215a03c
    ldr r1, [r4, #0x0]
    str r0, [r1, #0x2c]
    ldr r0, [r4, #0x0]
    ldr r1, [r0, #0x2c]
    cmp r1, #0x0
    beq L_0210579c
    mov r0, r5, lsl #0x10
    mov r3, r0, asr #0x10
    str r3, [r1, #0x54]
    ldr r0, [r4, #0x0]
    ldr r1, =0xffff
    ldr r0, [r0, #0x2c]
    ldr r5, =0x19a
    strh r1, [r0, #0x58]
    ldr ip, [r4, #0x0]
    ldmia r6, {r0, r1, r2}
    add r6, ip, #0x1c
    stmia r6, {r0, r1, r2}
    str r5, [ip, #0x20]
    ldr r0, [r4, #0x0]
    mov r1, #0x28
    strh r3, [r0, #0x28]
    ldr r0, [r4, #0x0]
    mov r2, #0x0
    strh r1, [r0, #0x40]
    ldr r0, [r4, #0x0]
    add r1, r0, #0x42
    swpb r0, r2, [r1]
L_0210579c:
    ldr r0, =data_0215a03c
    mov r1, #0x1e
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x44]
    bl func_ov004_0215a2f8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
