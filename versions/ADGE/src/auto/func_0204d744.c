#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202507c();
extern void func_02025538();
extern void func_02025ba0();
extern void func_0202644c();
extern void func_02026a9c();
extern void func_0202706c();
extern void func_02027484();
extern void func_02027644();
extern void func_02027658();
extern void func_020276f8();
extern void func_02028114();
extern void func_020325d0();
extern void func_0203278c();
extern void func_0203535c();
extern void func_02035450();
extern void func_02037130();
extern void func_02037ed0();
extern void func_0203910c();
extern void func_0203e5ac();
extern char data_0214da84[];
// clang-format off
asm void func_0204d744(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    movs r5, r1
    mov r8, r0
    mov r4, r2
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r1, [r8, #0x464]
    cmp r1, #0x0
    beq L_0204d78c
    cmp r1, #0x1
    beq L_0204db80
    cmp r1, #0x2
    beq L_0204dbc0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d78c:
    add r1, sp, #0x0
    mov r0, r5
    bl func_02027658
    mov r0, r5
    add r1, r8, #0x3b4
    bl func_02027644
    ldr r0, [r8, #0x2a0]
    ldr r1, [sp, #0x0]
    ldr r3, [sp, #0x8]
    ldr r2, [r8, #0x2a8]
    sub r7, r1, r0
    sub r6, r3, r2
    ldr r1, [r8, #0x18c]
    ldr r2, [r8, #0x194]
    smull r3, r4, r7, r1
    mov r1, #0x800
    adds r5, r3, r1
    smull r3, r2, r6, r2
    adc r4, r4, #0x0
    adds r3, r3, r1
    mov r5, r5, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r1, r5, r2
    cmp r1, #0x0
    mov r5, r6, asr #0x1f
    mov r4, r7, asr #0x1f
    ble L_0204d82c
    add r0, r0, r7, lsl #0x1
    sub r0, r0, r6
    str r0, [r8, #0x26c]
    ldr r0, [r8, #0x2a4]
    str r0, [r8, #0x270]
    ldr r0, [r8, #0x2a8]
    add r0, r0, r6, lsl #0x1
    add r0, r7, r0
    str r0, [r8, #0x274]
    b L_0204d850
L_0204d82c:
    add r0, r0, r7, lsl #0x1
    add r0, r6, r0
    str r0, [r8, #0x26c]
    ldr r0, [r8, #0x2a4]
    str r0, [r8, #0x270]
    ldr r0, [r8, #0x2a8]
    add r0, r0, r6, lsl #0x1
    sub r0, r0, r7
    str r0, [r8, #0x274]
L_0204d850:
    mov r0, r8
    bl func_0203910c
    mov r0, r8
    mov r1, #0x304
    bl func_02037130
    mov r0, r8
    bl func_02037ed0
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r1, [r1, #0x0]
    mov r3, #0x64
    ldr r2, [r1, #0x0]
    mul r0, r2, r0
    add r0, r0, #0x1
    mov r2, r0, lsl #0x10
    mov r2, r2, lsr #0x10
    mul r3, r2, r3
    mov r2, r3, lsr #0x10
    mov r2, r2, lsl #0x10
    str r0, [r1, #0x0]
    movs r0, r2, lsr #0x10
    beq L_0204d8c0
    mov r0, r8
    bl func_020325d0
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
L_0204d8c0:
    mov r0, r8
    bl func_02028114
    mov r2, r7, asr #0x1f
    umull r9, r1, r7, r7
    mla r1, r7, r2, r1
    mov ip, #0x19
    mov r3, #0x800
    adds r2, r9, r3
    mla r1, r4, r7, r1
    mov r7, r6, asr #0x1f
    umull r9, lr, r6, r6
    mul r4, r0, ip
    mla lr, r6, r7, lr
    adc r7, r1, #0x0
    adds r1, r9, r3
    mla lr, r5, r6, lr
    mov r2, r2, lsr #0xc
    adc r0, lr, #0x0
    mov r1, r1, lsr #0xc
    orr r2, r2, r7, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    cmp r0, r4
    mov r1, #0x0
    ble L_0204d93c
    ldr r2, =0x11f
    mov r3, #0x1
    mov r0, r8
    str r3, [r8, #0x464]
    bl func_0203e5ac
    b L_0204d950
L_0204d93c:
    ldr r2, =0x11e
    mov r3, #0x2
    mov r0, r8
    str r3, [r8, #0x464]
    bl func_0203e5ac
L_0204d950:
    add r1, r8, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r8
    bl func_0202644c
    mov r0, r8
    bl func_02025538
    ldrsb r0, [r8, #0x8b]
    cmp r0, #0x2
    bne L_0204da7c
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x6
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0204dce0
L_0204d9bc:
    b L_0204d9d4
    b L_0204d9f0
    b L_0204da0c
    b L_0204da28
    b L_0204da44
    b L_0204da60
L_0204d9d4:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3a
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d9f0:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3b
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204da0c:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3c
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204da28:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3d
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204da44:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3e
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204da60:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3f
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204da7c:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x6
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0204dce0
L_0204dac0:
    b L_0204dad8
    b L_0204daf4
    b L_0204db10
    b L_0204db2c
    b L_0204db48
    b L_0204db64
L_0204dad8:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3a
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204daf4:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3d
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204db10:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3e
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204db2c:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3f
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204db48:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x40
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204db64:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x41
    bl func_0203e5ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204db80:
    bl func_02028114
    ldr r1, =0x117
    mov r3, #0x0
    umull r7, r6, r0, r1
    mla r6, r0, r3, r6
    mov r0, r0, asr #0x1f
    mla r6, r0, r1, r6
    mov r2, #0x800
    adds r2, r7, r2
    mov r3, r2, lsr #0xc
    adc r1, r6, #0x0
    orr r3, r3, r1, lsl #0x14
    mov r0, r8
    mov r1, #0x10
    mov r2, #0x26
    bl func_0202507c
L_0204dbc0:
    mov r0, r5
    add r1, r8, #0x26c
    bl func_02027658
    mov r0, r8
    bl func_0203910c
    mov r0, r8
    mov r1, #0x300
    bl func_02037130
    mov r0, r8
    bl func_0203535c
    cmp r0, #0x0
    beq L_0204dc34
    mov r0, r8
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e5ac
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r8
    bl func_02026a9c
    mov r0, r8
    bl func_02025ba0
    add r1, r8, #0x93
    mov r0, #0x7
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r8, #0x464]
L_0204dc34:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r8
    mov r1, #0xa
    bl func_02035450
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r5
    bl func_020276f8
    mov r1, r0
    mov r0, r8
    bl func_0203278c
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0xa
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
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r5
    mov r1, #0x5
    bl func_0202706c
    mov r0, r5
    add r1, r8, #0x2a0
    bl func_02027484
L_0204dce0:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
