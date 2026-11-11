#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026504();
extern void func_020276f8();
extern void func_02027aac();
extern void func_02027f30();
extern void func_0202f9b4();
extern void func_02035fcc();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0204462c();
extern void func_020446b0();
extern void func_0204dd00();
extern void func_020511a8();
extern char data_0214da84[];
// clang-format off
asm void func_ov004_02168664(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_0202f9b4
    ldrh r1, [r5, #0xfc]
    mov r4, r0
    cmp r1, #0x78
    bhs L_021686a8
    mov r2, #0x0
    mov r0, r5
    mov r1, r4
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0204dd00
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021686a8:
    cmp r1, #0x87
    bhs L_021686d4
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x8e
    bl func_0203e5ac
    mov r0, r5
    bl func_02026504
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021686d4:
    ldr r0, [r5, #0x488]
    cmp r0, #0x0
    bgt L_021687f0
    ldrb r1, [r5, #0xb0]
    add ip, r5, #0xb0
    ldr r2, =0x2710
    bic r3, r1, #0x2
    swpb r3, r3, [ip]
    mov r0, r5
    mov r1, #0x0
    bl func_02027f30
    mov r0, r5
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f30
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f30
    mov r0, r5
    mov r1, #0x5
    mov r2, #0x0
    bl func_02027f30
    ldr r2, =0x2710
    mov r0, r5
    mov r1, #0x1
    bl func_02027f30
    mov r0, r4
    bl func_020276f8
    mov r1, r0
    mov r0, r5
    mov r2, #0x0
    bl func_02027aac
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x0
    bl func_02027f30
    mov r0, r4
    mov r1, #0x6
    mov r2, #0x0
    bl func_02027f30
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02027f30
    mov r0, r4
    mov r1, #0x5
    mov r2, #0x0
    bl func_02027f30
    ldr r2, =0x2710
    mov r0, r4
    mov r1, #0x1
    bl func_02027f30
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r2, #0x0
    bl func_02027aac
    mov r0, #0x10
    bl func_020446b0
    mov r0, #0x2
    bl func_0204462c
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r5
    bl func_020511a8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021687f0:
    cmp r0, #0x2
    blt L_02168898
    ldr r1, =data_0214da84
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
    beq L_02168850
    cmp r0, #0x1
    beq L_02168868
    cmp r0, #0x2
    beq L_02168880
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168850:
    ldr r1, =0x4cc
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168868:
    ldr r1, =0x4cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168880:
    ldr r1, =0x4ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168898:
    ldr r1, =data_0214da84
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
    beq L_021688dc
    cmp r0, #0x1
    beq L_021688f4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021688dc:
    ldr r1, =0x4cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_021688f4:
    ldr r1, =0x4ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
