#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffee18();
extern void func_020eb380();
extern void func_020c2490();
extern void func_020c24c0();
extern void func_020c250c();
extern void func_020c2538();
extern void func_020c51c0();
extern char data_0214affc[];
extern char data_ov010_02158f40[];
extern char data_ov010_02158f44[];
// clang-format off
asm void func_ov010_02158a4c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r5, =data_ov010_02158f44
    mov r4, r0
    ldr r0, [r5, #0x0]
    ldr r11, [r4, #0x74]
    add r1, r0, #0x800
    ldrsh r3, [r1, #0x66]
    ldrsh r2, [r1, #0x68]
    add r0, r11, #0x14
    str r0, [sp, #0x0]
    mov r0, #0x1000
    str r0, [sp, #0x4]
    cmp r2, r3
    beq L_0215af68
    strh r3, [r1, #0x68]
    ldr r2, [r5, #0x0]
    ldr r1, =0x87c
    add r0, r2, #0x800
    ldrh r9, [r0, #0x64]
    add r10, r2, r1
    mov r8, #0x0
    mov r7, r8
    mov r6, r8
L_0215af2c:
    ldr r0, [r5, #0x0]
    mov r2, r9
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215af4c
    cmp r8, r0
    movne r2, r7
L_0215af4c:
    mov r0, r10
    mov r1, r8
    mov r3, r6
    bl func_020eb380
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_0215af2c
L_0215af68:
    ldr r0, =data_ov010_02158f44
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_020c2538
    cmp r0, #0x0
    beq L_0215b034
    ldr r0, =data_ov010_02158f44
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_020c2490
    mov r1, r0
    mov r0, r4
    bl func_020c51c0
    ldr r5, =data_ov010_02158f44
    ldr r1, =0x87c
    ldr r2, [r5, #0x0]
    mov r8, #0x0
    add r0, r2, #0x800
    ldrh r9, [r0, #0x64]
    add r10, r2, r1
    mov r7, r8
    mov r6, r8
L_0215afc8:
    ldr r0, [r5, #0x0]
    mov r2, r9
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215afe8
    cmp r8, r0
    movne r2, r7
L_0215afe8:
    mov r0, r10
    mov r1, r8
    mov r3, r6
    bl func_020eb380
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_0215afc8
    add r2, r11, #0x14
    mov r1, #0x0
    swpb r0, r1, [r2]
    ldr r0, =data_ov010_02158f44
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_020c24c0
    ldr r0, =data_ov010_02158f44
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_020c250c
L_0215b034:
    ldr r0, =data_ov010_02158f44
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x870]
    cmp r0, #0x0
    beq L_0215b174
    ldr r1, =data_0214affc
    mov r0, #0x0
    ldrh r1, [r1, #0x6]
    str r0, [sp, #0x4]
    and r0, r1, #0x400
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    movne r0, #0x1000
    strne r0, [sp, #0x4]
    and r0, r1, #0x800
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    movne r0, #0x1000
    rsbne r0, r0, #0x0
    strne r0, [sp, #0x4]
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x400
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215b0fc
    ldr r5, =data_ov010_02158f44
    ldr r1, =0x87c
    ldr r2, [r5, #0x0]
    mov r8, #0x0
    add r0, r2, #0x800
    ldrh r9, [r0, #0x64]
    add r10, r2, r1
    mov r7, r8
    mov r6, r8
L_0215b0c0:
    ldr r0, [r5, #0x0]
    mov r2, r9
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215b0e0
    cmp r8, r0
    movne r2, r7
L_0215b0e0:
    mov r0, r10
    mov r1, r8
    mov r3, r6
    bl func_020eb380
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_0215b0c0
L_0215b0fc:
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x800
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215b174
    ldr r5, =data_ov010_02158f44
    ldr r1, =0x87c
    ldr r2, [r5, #0x0]
    mov r8, #0x0
    add r0, r2, #0x800
    ldrh r9, [r0, #0x64]
    add r10, r2, r1
    mov r7, r8
    mov r6, #0x1
L_0215b138:
    ldr r0, [r5, #0x0]
    mov r2, r9
    add r0, r0, #0x800
    ldrsh r0, [r0, #0x66]
    cmp r0, #0x3
    bge L_0215b158
    cmp r8, r0
    movne r2, r7
L_0215b158:
    mov r0, r10
    mov r1, r8
    mov r3, r6
    bl func_020eb380
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_0215b138
L_0215b174:
    ldr r1, [sp, #0x4]
    ldr r0, [sp, #0x0]
    str r1, [r0, #0x8]
    ldr r5, [r4, #0x9c]
    ldr r0, [r4, #0x98]
    rsb r1, r5, #0x0
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r5, r2
    str r1, [r4, #0x9c]
    ldr r5, [r4, #0xa0]
    ldr r1, [r4, #0x98]
    rsb r2, r5, #0x0
    smull r3, r1, r2, r1
    adds r2, r3, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r5, r1
    str r0, [r4, #0xa0]
    ldrh r2, [r4, #0x94]
    ldr r1, =data_ov010_02158f40
    mov r0, r4
    add r2, r2, #0x1
    strh r2, [r4, #0x94]
    ldr r1, [r1, #0x0]
    rsb r1, r1, #0x0
    str r1, [r4, #0x34]
    bl func_01ffee18
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
