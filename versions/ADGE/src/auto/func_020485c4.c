#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028714();
extern void func_0203535c();
extern void func_020354a8();
extern void func_0203560c();
extern void func_020358c8();
extern void func_02036258();
extern void func_0203e5e8();
extern void func_02050044();
// clang-format off
asm void func_020485c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_02036258
    mov r4, r0
    cmp r6, #0x0
    ldrh r1, [r6, #0xfc]
    beq L_0204862c
    ldr r0, [r6, #0x484]
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_02048624
    cmp r0, #0x1
    beq L_02048614
    cmp r0, #0x2
    bne L_0204862c
    cmp r1, #0x64
    movlo r1, #0x3
    movhs r1, #0x4
    b L_02048630
L_02048614:
    cmp r1, #0x1f4
    movlo r1, #0x5
    movhs r1, #0x6
    b L_02048630
L_02048624:
    mov r1, #0x1
    b L_02048630
L_0204862c:
    mov r1, #0x1
L_02048630:
    add r2, r6, #0x97
    mov r0, r6
    swpb r1, r1, [r2]
    bl func_020358c8
    mov r0, r6
    mov r1, #0xf
    mov r2, #0x0
    bl func_02028714
    cmp r0, #0x0
    beq L_020486d8
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_020487e0
L_02048664:
    b L_02048688
    b L_02048688
    b L_02048688
    b L_02048688
    b L_0204869c
    b L_020487e0
    b L_020487e0
    b L_020486b0
    b L_020486c4
L_02048688:
    ldr r1, =0x2b5
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204869c:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020486b0:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020486c4:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020486d8:
    mov r0, r6
    mov r1, #0x0
    bl func_0203560c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x0
    bl func_020354a8
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0204873c
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x295
    cmp r1, r0
    blt L_02048730
    ldr r0, =0x299
    cmp r1, r0
    movle r0, #0x1
    ble L_02048734
L_02048730:
    mov r0, #0x0
L_02048734:
    cmp r0, #0x0
    bne L_020487bc
L_0204873c:
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_020487e0
L_02048748:
    b L_0204876c
    b L_0204876c
    b L_0204876c
    b L_0204876c
    b L_02048780
    b L_020487e0
    b L_020487e0
    b L_02048794
    b L_020487a8
L_0204876c:
    ldr r1, =0x2b5
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02048780:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02048794:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020487a8:
    ldr r1, =0x2bf
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020487bc:
    mov r0, r6
    bl func_0203535c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_02050044
L_020487e0:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
