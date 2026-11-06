#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020286ec();
extern void func_020352ec();
extern void func_02035454();
extern void func_02035710();
extern void func_020360a0();
extern void func_0203e2b8();
extern void func_0204fc98();
// clang-format off
asm void func_02047f5c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_020360a0
    add r1, r7, #0x100
    mov r4, r0
    cmp r7, #0x0
    ldrh r1, [r1, #0xa]
    beq L_02047fd0
    ldr r0, [r7, #0x4a8]
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_02047fc8
    cmp r0, #0x1
    beq L_02047fb8
    cmp r0, #0x2
    bne L_02047fd0
    cmp r1, #0x64
    movlo r1, #0x3
    movhs r1, #0x4
    b L_02047fd4
L_02047fb8:
    cmp r1, #0x1f4
    movlo r1, #0x5
    movhs r1, #0x6
    b L_02047fd4
L_02047fc8:
    mov r1, #0x1
    b L_02047fd4
L_02047fd0:
    mov r1, #0x1
L_02047fd4:
    add r2, r7, #0xb0
    mov r0, r7
    swpb r1, r1, [r2]
    bl func_02035710
    mov r0, r7
    mov r1, #0xf
    mov r2, #0x0
    bl func_020286ec
    cmp r0, #0x0
    beq L_0204808c
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_020481a8
L_02048008:
    b L_0204802c
    b L_0204802c
    b L_0204802c
    b L_0204802c
    b L_02048044
    b L_020481a8
    b L_020481a8
    b L_0204805c
    b L_02048074
L_0204802c:
    ldr r1, =0x2b5
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048044:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204805c:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048074:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204808c:
    mov r0, r7
    mov r1, #0x0
    bl func_02035454
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r7
    mov r1, #0x0
    bl func_020352ec
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    cmp r4, #0x0
    beq L_020480f8
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x295
    cmp r1, r0
    blt L_020480ec
    ldr r0, =0x299
    cmp r1, r0
    movle r0, #0x1
    ble L_020480f0
L_020480ec:
    mov r0, #0x0
L_020480f0:
    cmp r0, #0x0
    bne L_02048188
L_020480f8:
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_020481a8
L_02048104:
    b L_02048128
    b L_02048128
    b L_02048128
    b L_02048128
    b L_02048140
    b L_020481a8
    b L_020481a8
    b L_02048158
    b L_02048170
L_02048128:
    ldr r1, =0x2b5
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048140:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048158:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048170:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048188:
    cmp r5, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl func_0204fc98
L_020481a8:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
