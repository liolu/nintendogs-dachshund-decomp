#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028714();
extern void func_020354a8();
extern void func_0203560c();
extern void func_020358c8();
extern void func_02036258();
extern void func_0203e5e8();
extern void func_02050044();
// clang-format off
asm void func_02048360(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02036258
    mov r4, r0
    cmp r7, #0x0
    ldrh r1, [r7, #0xfc]
    beq L_020483d0
    ldr r0, [r7, #0x484]
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_020483c8
    cmp r0, #0x1
    beq L_020483b8
    cmp r0, #0x2
    bne L_020483d0
    cmp r1, #0x64
    movlo r1, #0x3
    movhs r1, #0x4
    b L_020483d4
L_020483b8:
    cmp r1, #0x1f4
    movlo r1, #0x5
    movhs r1, #0x6
    b L_020483d4
L_020483c8:
    mov r1, #0x1
    b L_020483d4
L_020483d0:
    mov r1, #0x1
L_020483d4:
    add r2, r7, #0x97
    mov r0, r7
    swpb r1, r1, [r2]
    bl func_020358c8
    mov r0, r7
    mov r1, #0xf
    mov r2, #0x0
    bl func_02028714
    cmp r0, #0x0
    beq L_0204848c
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_020485a8
L_02048408:
    b L_0204842c
    b L_0204842c
    b L_0204842c
    b L_0204842c
    b L_02048444
    b L_020485a8
    b L_020485a8
    b L_0204845c
    b L_02048474
L_0204842c:
    ldr r1, =0x2b5
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048444:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204845c:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048474:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204848c:
    mov r0, r7
    mov r1, #0x0
    bl func_0203560c
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r7
    mov r1, #0x0
    bl func_020354a8
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    cmp r4, #0x0
    beq L_020484f8
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x295
    cmp r1, r0
    blt L_020484ec
    ldr r0, =0x299
    cmp r1, r0
    movle r0, #0x1
    ble L_020484f0
L_020484ec:
    mov r0, #0x0
L_020484f0:
    cmp r0, #0x0
    bne L_02048588
L_020484f8:
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_020485a8
L_02048504:
    b L_02048528
    b L_02048528
    b L_02048528
    b L_02048528
    b L_02048540
    b L_020485a8
    b L_020485a8
    b L_02048558
    b L_02048570
L_02048528:
    ldr r1, =0x2b5
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048540:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048558:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048570:
    ldr r1, =0x2bf
    mov r0, r7
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02048588:
    cmp r5, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl func_02050044
L_020485a8:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
