#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020286ec();
extern void func_020351a0();
extern void func_020352ec();
extern void func_02035454();
extern void func_02035710();
extern void func_020360a0();
extern void func_0203e2b8();
extern void func_0204fc98();
// clang-format off
asm void func_020481c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_020360a0
    add r1, r6, #0x100
    mov r4, r0
    cmp r6, #0x0
    ldrh r1, [r1, #0xa]
    beq L_02048230
    ldr r0, [r6, #0x4a8]
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_02048228
    cmp r0, #0x1
    beq L_02048218
    cmp r0, #0x2
    bne L_02048230
    cmp r1, #0x64
    movlo r1, #0x3
    movhs r1, #0x4
    b L_02048234
L_02048218:
    cmp r1, #0x1f4
    movlo r1, #0x5
    movhs r1, #0x6
    b L_02048234
L_02048228:
    mov r1, #0x1
    b L_02048234
L_02048230:
    mov r1, #0x1
L_02048234:
    add r2, r6, #0xb0
    mov r0, r6
    swpb r1, r1, [r2]
    bl func_02035710
    mov r0, r6
    mov r1, #0xf
    mov r2, #0x0
    bl func_020286ec
    cmp r0, #0x0
    beq L_020482dc
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_020483e4
L_02048268:
    b L_0204828c
    b L_0204828c
    b L_0204828c
    b L_0204828c
    b L_020482a0
    b L_020483e4
    b L_020483e4
    b L_020482b4
    b L_020482c8
L_0204828c:
    ldr r1, =0x2b5
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020482a0:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020482b4:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020482c8:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020482dc:
    mov r0, r6
    mov r1, #0x0
    bl func_02035454
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x0
    bl func_020352ec
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02048340
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x295
    cmp r1, r0
    blt L_02048334
    ldr r0, =0x299
    cmp r1, r0
    movle r0, #0x1
    ble L_02048338
L_02048334:
    mov r0, #0x0
L_02048338:
    cmp r0, #0x0
    bne L_020483c0
L_02048340:
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_020483e4
L_0204834c:
    b L_02048370
    b L_02048370
    b L_02048370
    b L_02048370
    b L_02048384
    b L_020483e4
    b L_020483e4
    b L_02048398
    b L_020483ac
L_02048370:
    ldr r1, =0x2b5
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02048384:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02048398:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020483ac:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020483c0:
    mov r0, r6
    bl func_020351a0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_0204fc98
L_020483e4:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
