#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_0200c488();
extern void func_02022e04();
extern void func_02028114();
extern void func_02029248();
extern void func_0202f9a0();
extern void func_020350fc();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5e8();
extern void func_02040e48();
extern void func_020426b8();
extern void func_020a5a1c();
extern void func_020a5fcc();
extern char data_0214da7c[];
// clang-format off
asm void func_0200cfc8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, #0x0
    mov r7, r0
    mov r1, r6
    mov r0, #0xc
    bl func_0200c488
    cmp r0, #0x0
    beq L_0200d0ec
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x20]
    ldr r3, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r3, #0x18]
    adds r5, r1, r0
    beq L_0200d0ec
    ldrsh r2, [r5, #0x0]
    ldr r1, [r7, #0x464]
    mov r0, #0x44
    add r1, r2, r1
    smulbb r0, r1, r0
    ldr r1, [r3, #0x1c]
    adds r4, r1, r0
    beq L_0200d0ec
    ldr r0, [r7, #0x468]
    mov r1, #0x800
    add r0, r0, #0x20
    str r0, [r7, #0x468]
    ldr r0, [r7, #0x918]
    ldr r3, [r4, #0x4]
    ldr r2, [r7, #0x468]
    sub r3, r3, r0
    smull r8, r2, r3, r2
    adds r3, r8, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [r7, #0x918]
    add r3, r7, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r7
    bl func_0203910c
    ldr r1, =0x102
    mov r0, r7
    bl func_02037130
    mov r8, r0
    mov r0, r7
    bl func_02028114
    mov r1, #0x24
    mul r1, r0, r1
    cmp r8, r1
    bge L_0200d0ec
    ldr r1, [r7, #0x464]
    mov r0, r6
    add r1, r1, #0x1
    str r1, [r7, #0x464]
    str r0, [r7, #0x468]
    ldr r0, [r4, #0x24]
    cmp r0, #0x1
    bne L_0200d0dc
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    ldrsb r1, [r7, #0x88]
    mov r0, #0xf
    bl func_020a5a1c
L_0200d0dc:
    ldrsh r0, [r5, #0x2]
    ldr r1, [r7, #0x464]
    cmp r1, r0
    movge r6, #0x1
L_0200d0ec:
    ldrb r0, [r7, #0xb0]
    add r1, r7, #0xb0
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x6f
    beq L_0200d124
    mov r0, r7
    mov r1, #0x4d
    bl func_02022e04
    cmp r0, #0x0
    bne L_0200d124
    mov r0, r7
    bl func_02029248
L_0200d124:
    cmp r6, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    mov r0, #0x0
    str r0, [r7, #0x918]
    ldrb r1, [r7, #0xb5]
    add r2, r7, #0xb5
    mov r0, r7
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    add r2, r7, #0xb0
    ldrb r1, [r7, #0xb0]
    orr r1, r1, #0x10
    swpb r1, r1, [r2]
    bl func_02029248
    mov r4, #0x0
L_0200d164:
    mov r0, r4
    bl func_01ffdb08
    cmp r0, #0x0
    beq L_0200d178
    bl func_02040e48
L_0200d178:
    add r0, r4, #0x1
    mov r0, r0, lsl #0x18
    mov r4, r0, asr #0x18
    cmp r4, #0x3
    blt L_0200d164
    mov r0, r7
    bl func_020350fc
    cmp r0, #0x0
    beq L_0200d1b0
    ldr r1, =0x47b
    mov r0, r7
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0200d1b0:
    ldrb r0, [r7, #0xb5]
    add r1, r7, #0xb5
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
    ldrb r0, [r7, #0xb5]
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldrsb r0, [r7, #0x88]
    bl func_020426b8
    mov r0, #0x1
    mvn r1, #0x0
    bl func_020a5a1c
    bl func_020a5fcc
    add r2, r0, #0x88
    mov r1, #0x0
    mov r0, r7
    str r1, [r2, #0x6c]
    bl func_0202f9a0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
