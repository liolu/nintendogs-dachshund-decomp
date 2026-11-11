#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020264bc();
extern void func_020276d0();
extern void func_02027a84();
extern void func_02027f08();
extern void func_0202f8b8();
extern void func_02035e14();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020442e8();
extern void func_02044370();
extern void func_0204d950();
extern void func_02050dfc();
extern char data_0214b484[];
// clang-format off
asm void func_ov003_0216619c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_0202f8b8
    add r1, r5, #0x100
    ldrh r1, [r1, #0xa]
    mov r4, r0
    cmp r1, #0x78
    bhs L_021661e4
    mov r2, #0x0
    mov r0, r5
    mov r1, r4
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0204d950
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021661e4:
    cmp r1, #0x87
    bhs L_02166210
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x8e
    bl func_0203e280
    mov r0, r5
    bl func_020264bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02166210:
    ldr r0, [r5, #0x4ac]
    cmp r0, #0x0
    bgt L_0216632c
    ldrb r1, [r5, #0xc0]
    add ip, r5, #0xc0
    ldr r2, =0x2710
    bic r3, r1, #0x2
    swpb r3, r3, [ip]
    mov r0, r5
    mov r1, #0x0
    bl func_02027f08
    mov r0, r5
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f08
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f08
    mov r0, r5
    mov r1, #0x5
    mov r2, #0x0
    bl func_02027f08
    ldr r2, =0x2710
    mov r0, r5
    mov r1, #0x1
    bl func_02027f08
    mov r0, r4
    bl func_020276d0
    mov r1, r0
    mov r0, r5
    mov r2, #0x0
    bl func_02027a84
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x0
    bl func_02027f08
    mov r0, r4
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f08
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f08
    mov r0, r4
    mov r1, #0x5
    mov r2, #0x0
    bl func_02027f08
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x1
    bl func_02027f08
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r2, #0x0
    bl func_02027a84
    mov r0, #0x10
    bl func_02044370
    mov r0, #0x2
    bl func_020442e8
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r5
    bl func_02050dfc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0216632c:
    cmp r0, #0x2
    blt L_021663d4
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3
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
    beq L_0216638c
    cmp r0, #0x1
    beq L_021663a4
    cmp r0, #0x2
    beq L_021663bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0216638c:
    ldr r1, =0x4cb
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021663a4:
    ldr r1, =0x4cc
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021663bc:
    ldr r1, =0x4cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021663d4:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02166418
    cmp r0, #0x1
    beq L_02166430
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02166418:
    ldr r1, =0x4cc
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02166430:
    ldr r1, =0x4cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
