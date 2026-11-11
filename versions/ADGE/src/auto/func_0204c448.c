#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_02027644();
extern void func_02027658();
extern void func_020276f8();
extern void func_02028714();
extern void func_0202f9a0();
extern void func_0203260c();
extern void func_020354a8();
extern void func_0203560c();
extern void func_02035780();
extern void func_020358c8();
extern void func_02036258();
extern void func_02037130();
extern void func_0203913c();
extern void func_0203e5e8();
extern char data_0214da84[];
extern char data_0215a048[];
// clang-format off
asm void func_0204c448(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mvn r8, #0x0
    mov r6, r0
    mov r5, r1
    mov r11, r2
    mov r7, r8
    bl func_02036258
    movs r4, r0
    beq L_0204c678
    add r1, sp, #0x0
    bl func_02027658
    mov r0, r4
    add r1, r6, #0x278
    bl func_02027644
    ldr r0, =data_0215a048
    ldr r2, [r6, #0x2a0]
    ldr r0, [r0, #0x0]
    ldr r1, [r6, #0x2a8]
    ldr r10, [r0, #0xc]
    smull r0, r8, r2, r2
    mov r3, #0x800
    adds r9, r0, r3
    smull r7, r0, r1, r1
    adc r8, r8, #0x0
    adds r7, r7, r3
    mov r9, r9, lsr #0xc
    smull lr, ip, r10, r10
    adc r0, r0, #0x0
    mov r7, r7, lsr #0xc
    orr r9, r9, r8, lsl #0x14
    orr r7, r7, r0, lsl #0x14
    add r0, r9, r7
    adds r7, lr, r3
    adc r8, ip, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r8, lsl #0x14
    ldr r8, [sp, #0x8]
    ldr r9, [sp, #0x0]
    sub r10, r8, r1
    mov ip, #0x0
    mov r1, #0x334
    sub r2, r9, r2
    umull r9, r8, r7, r1
    adds r3, r9, r3
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r1, r8
    adc r1, r8, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    cmp r0, r3
    strlt ip, [r6, #0x464]
    blt L_0204c5d4
    ldr r9, =data_0214da84
    ldr r7, =0x10dcd
    ldr r1, [r9, #0x0]
    mov r8, #0x96
    ldr r0, [r1, #0x0]
    mul r3, r0, r7
    add r0, r3, #0x1
    mov r3, r0, lsl #0x10
    mov r3, r3, lsr #0x10
    mul r8, r3, r8
    mov r3, r8, lsr #0x10
    mov r3, r3, lsl #0x10
    str r0, [r1, #0x0]
    movs r0, r3, lsr #0x10
    bne L_0204c5d4
    cmp r11, #0x0
    beq L_0204c59c
    ldr r0, [r9, #0x0]
    mov r3, #0x3
    ldr r1, [r0, #0x0]
    mul r7, r1, r7
    add r7, r7, #0x1
    mov r1, r7, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    str r7, [r0, #0x0]
    mov r0, r1, lsr #0x10
    str r0, [r6, #0x464]
    b L_0204c5d4
L_0204c59c:
    ldr r0, [r6, #0x464]
    cmp r0, #0x0
    bne L_0204c5d4
    ldr r0, [r9, #0x0]
    ldr r1, [r0, #0x0]
    mul r3, r1, r7
    add r3, r3, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    add r0, r1, #0x1
    str r0, [r6, #0x464]
L_0204c5d4:
    ldr r0, [r6, #0x464]
    cmp r0, #0x0
    beq L_0204c5f4
    cmp r0, #0x1
    beq L_0204c618
    cmp r0, #0x2
    beq L_0204c638
    b L_0204c654
L_0204c5f4:
    ldr r1, [r6, #0x2a0]
    mov r0, #0x0
    sub r1, r1, r2, lsl #0x1
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [r6, #0x2a8]
    sub r0, r0, r10, lsl #0x1
    str r0, [r6, #0x274]
    b L_0204c654
L_0204c618:
    ldr r1, [sp, #0x8]
    mov r0, #0x0
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [sp, #0x0]
    rsb r0, r0, #0x0
    str r0, [r6, #0x274]
    b L_0204c654
L_0204c638:
    ldr r1, [sp, #0x8]
    mov r0, #0x0
    rsb r1, r1, #0x0
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [sp, #0x0]
    str r0, [r6, #0x274]
L_0204c654:
    ldr r1, =0x302
    mov r0, r6
    bl func_02037130
    mov r0, r6
    bl func_0203260c
    mov r8, r0
    mov r0, r4
    bl func_020276f8
    mov r7, r0
L_0204c678:
    mov r0, r6
    bl func_020358c8
    cmp r5, #0x0
    addeq r0, r6, #0x278
    addeq r3, r6, #0x3b4
    ldmeqia r0, {r0, r1, r2}
    stmeqia r3, {r0, r1, r2}
    beq L_0204c6a0
    mov r0, r6
    bl func_02035780
L_0204c6a0:
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x1
    bl func_02028714
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x0
    bl func_0203560c
    cmp r0, #0x0
    beq L_0204c70c
    cmp r4, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c70c:
    mov r0, r6
    mov r1, #0x0
    bl func_020354a8
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r4, #0x0
    bne L_0204c744
    mov r0, r6
    bl func_0202f9a0
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c744:
    ldrsh r2, [r4, #0xea]
    ldrsb r0, [r6, #0x88]
    cmp r2, #0x26c
    blt L_0204c774
    ldr r1, =0x26f
    cmp r2, r1
    bgt L_0204c774
    add r1, r4, #0x100
    ldrsh r1, [r1, #0x3e]
    cmp r1, r0
    moveq r1, #0x1
    beq L_0204c778
L_0204c774:
    mov r1, #0x0
L_0204c778:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_0204c7ec
    ldr r1, =0x259
    cmp r2, r1
    blt L_0204c7a0
    ldr r1, =0x25f
    cmp r2, r1
    movle r1, #0x1
    ble L_0204c7a4
L_0204c7a0:
    mov r1, #0x0
L_0204c7a4:
    cmp r1, #0x0
    beq L_0204c7e8
    ldrsh r2, [r4, #0xee]
    cmp r2, #0x26c
    blt L_0204c7d8
    ldr r1, =0x26f
    cmp r2, r1
    bgt L_0204c7d8
    add r1, r4, #0x100
    ldrsh r1, [r1, #0x3e]
    cmp r1, r0
    moveq r0, #0x1
    beq L_0204c7dc
L_0204c7d8:
    mov r0, #0x0
L_0204c7dc:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0204c7ec
L_0204c7e8:
    mov r0, #0x0
L_0204c7ec:
    cmp r0, #0x0
    bne L_0204c82c
    cmp r4, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c82c:
    mvn r0, #0x0
    cmp r8, r0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r8, r7
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r8
    bl func_01ffdb08
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, sp, #0xc
    bl func_02027658
    add r1, sp, #0xc
    mov r0, r6
    mov r2, r8
    bl func_0203913c
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
