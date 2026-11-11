#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov019_0215ad78();
extern void func_ov019_0215f240();
extern void r1();
extern void r2();
extern char data_ov019_0215f548[];
extern char data_ov019_0215f580[];
extern char data_ov019_0215f5b8[];
// clang-format off
asm void func_ov019_0215ae78(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldrsh r1, [r4, #0x20]
    strh r1, [r4, #0x22]
    ldrsh r1, [r4, #0x28]
    cmp r1, #0xe
    beq L_0215af00
    strh r1, [r4, #0x24]
    bl func_ov019_0215ad78
    cmp r0, #0x0
    ldrneb r2, [r0, #0x1]
    addne r1, r0, #0x1
    bicne r0, r2, #0x1
    swpneb r0, r0, [r1]
    ldrsh r5, [r4, #0x2c]
    bl func_ov019_0215f240
    add r1, r0, r5, lsl #0x2
    ldrsh r2, [r4, #0x24]
    ldr r0, =data_ov019_0215f548
    ldr r1, [r1, #0xcc]
    ldr r2, [r0, r2, lsl #0x2]
    mov r0, r4
    blx r2
    ldrsh r2, [r4, #0x24]
    ldr r1, =data_ov019_0215f580
    mov r0, r4
    ldr r1, [r1, r2, lsl #0x2]
    blx r1
    ldrsh r0, [r4, #0x24]
    strh r0, [r4, #0x26]
    ldrsh r0, [r4, #0x1e]
    strh r0, [r4, #0x20]
    b L_0215af28
L_0215af00:
    ldrsh r2, [r4, #0x1e]
    ldrsh r1, [r4, #0x20]
    cmp r2, r1
    beq L_0215af28
    ldrsh r2, [r4, #0x24]
    ldr r1, =data_ov019_0215f580
    ldr r1, [r1, r2, lsl #0x2]
    blx r1
    ldrsh r0, [r4, #0x1e]
    strh r0, [r4, #0x20]
L_0215af28:
    mov r0, #0xe
    strh r0, [r4, #0x28]
    ldrsh r2, [r4, #0x24]
    ldr r1, =data_ov019_0215f5b8
    mov r0, r4
    ldr r1, [r1, r2, lsl #0x2]
    blx r1
    mov r0, r4
    bl func_ov019_0215ad78
    mov r3, r0
    mov r5, #0x0
L_0215af54:
    add r0, r4, r5, lsl #0x2
    ldr r2, [r0, #0x78]
    add r0, r5, #0x1
    ldrb r1, [r2, #0x1]
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    orr r0, r1, #0x1
    add r1, r2, #0x1
    cmp r5, #0xc
    swpb r0, r0, [r1]
    blt L_0215af54
    cmp r3, #0x0
    beq L_0215afc8
    ldrb r0, [r3, #0x1]
    add r1, r3, #0x1
    add r2, r4, #0x3c
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    add ip, r3, #0x30
    ldmia r2, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add lr, r4, #0x48
    add ip, r3, #0x3c
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
L_0215afc8:
    ldr r0, [r4, #0xa8]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrsh r1, [r4, #0x1e]
    cmp r1, #0x0
    ldreqh r1, [r0, #0x20]
    addeq sp, sp, #0x4
    orreq r1, r1, #0x1
    streqh r1, [r0, #0x20]
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrsh r1, [r4, #0x24]
    cmp r1, #0x1
    bne L_0215b058
    ldrh r2, [r0, #0x20]
    add r1, r4, #0x3c
    mov r3, #0x0
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldr ip, [r4, #0xa8]
    ldmia r1, {r0, r1, r2}
    add ip, ip, #0x30
    stmia ip, {r0, r1, r2}
    ldr r1, [r4, #0xa8]
    mov r0, #0x7d0
    str r3, [r1, #0x34]
    ldr r1, [r4, #0xa8]
    add sp, sp, #0x4
    str r0, [r1, #0x24]
    add r1, r1, #0x24
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b058:
    cmp r1, #0x3
    bne L_0215b0b0
    ldrh r2, [r0, #0x20]
    add r1, r4, #0x3c
    mov r3, #0x0
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldr ip, [r4, #0xa8]
    ldmia r1, {r0, r1, r2}
    add ip, ip, #0x30
    stmia ip, {r0, r1, r2}
    ldr r1, [r4, #0xa8]
    mov r0, #0x960
    str r3, [r1, #0x34]
    ldr r1, [r4, #0xa8]
    add sp, sp, #0x4
    str r0, [r1, #0x24]
    add r1, r1, #0x24
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b0b0:
    cmp r1, #0x4
    bne L_0215b108
    ldrh r2, [r0, #0x20]
    add r1, r4, #0x3c
    mov r3, #0x0
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldr ip, [r4, #0xa8]
    ldmia r1, {r0, r1, r2}
    add ip, ip, #0x30
    stmia ip, {r0, r1, r2}
    ldr r1, [r4, #0xa8]
    mov r0, #0xc8
    str r3, [r1, #0x34]
    ldr r1, [r4, #0xa8]
    add sp, sp, #0x4
    str r0, [r1, #0x24]
    add r1, r1, #0x24
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b108:
    cmp r1, #0x5
    bne L_0215b160
    ldrh r2, [r0, #0x20]
    add r1, r4, #0x3c
    mov r3, #0x0
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldr ip, [r4, #0xa8]
    ldmia r1, {r0, r1, r2}
    add ip, ip, #0x30
    stmia ip, {r0, r1, r2}
    ldr r1, [r4, #0xa8]
    mov r0, #0xc8
    str r3, [r1, #0x34]
    ldr r1, [r4, #0xa8]
    add sp, sp, #0x4
    str r0, [r1, #0x24]
    add r1, r1, #0x24
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b160:
    cmp r1, #0x6
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrh r2, [r0, #0x20]
    add r1, r4, #0x3c
    mov r3, #0x0
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldr ip, [r4, #0xa8]
    ldmia r1, {r0, r1, r2}
    add ip, ip, #0x30
    stmia ip, {r0, r1, r2}
    ldr r1, [r4, #0xa8]
    mov r0, #0xc8
    str r3, [r1, #0x34]
    ldr r1, [r4, #0xa8]
    str r0, [r1, #0x24]
    add r1, r1, #0x24
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
