#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02070ed4();
extern void func_02073328();
extern void func_02094814();
extern void func_020958c8();
extern void func_02097a2c();
extern void func_02097ac0();
extern void func_020998e8();
extern void func_020999c8();
extern char data_0213d170[];
extern char data_0213d174[];
extern char data_0213d178[];
extern char data_0213d17c[];
extern char data_021545d8[];
extern char data_021545e8[];
extern char data_021545fc[];
extern char data_02154600[];
extern char data_02154604[];
extern char data_02154608[];
extern char data_0215460c[];
extern char data_02154620[];
extern char data_02154638[];
extern char data_0215464c[];
extern char data_02154658[];
extern char data_0215465c[];
extern char data_02154670[];
extern char data_0215467c[];
extern char data_021546a4[];
extern char data_0215483c[];
extern char data_021548bc[];
extern char data_021548c0[];
// clang-format off
asm void func_02096518(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r0, =data_021545e8
    ldrb r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_020966ac
    mov r9, #0x0
    ldr r1, =data_0215467c
    ldr lr, =data_02154670
    ldr r11, =data_0213d17c
    str r9, [sp, #0x8]
    mov r3, r9
    mov ip, r9
    mov r5, #0x1
L_02096550:
    mov r0, r5, lsl r9
    ldr r2, [r11, #0x0]
    ands r0, r2, r0
    beq L_020965b4
    ldr r8, [lr, r9, lsl #0x2]
    mov r7, ip
    cmp r8, #0x0
    mov r4, r9, lsl #0x2
    beq L_020965a8
    mov r6, ip
L_02096578:
    ands r0, r8, #0x1
    ldr r0, [r1, r4]
    movne r10, r5
    add r2, r0, r6
    ldr r0, [r2, #0x98]
    moveq r10, r3
    cmp r0, #0x1
    streq r10, [r2, #0x94]
    movs r8, r8, lsr #0x1
    add r6, r6, #0x18
    add r7, r7, #0x1
    bne L_02096578
L_020965a8:
    ldr r0, [lr, r9, lsl #0x2]
    cmp r0, #0x0
    strne r5, [sp, #0x8]
L_020965b4:
    add r9, r9, #0x1
    cmp r9, #0x3
    blo L_02096550
    bl func_020998e8
    cmp r0, #0x0
    bne L_02096678
    ldr r1, =data_021545fc
    ldr r0, =data_021545d8
    ldrsh r3, [r1, #0x0]
    ldr r1, =data_0215465c
    ldr r2, =data_02154658
    str r3, [sp, #0x0]
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x0]
    mov r3, #0x0
    bl func_02094814
    cmp r0, #0x0
    bne L_02096844
    ldr r1, =data_0213d17c
    ldr r0, =data_0215483c
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    bl func_020958c8
    ldr r0, =data_0213d17c
    ldr r6, =data_0215483c
    ldr r4, [r0, #0x0]
    ldr r5, =data_021546a4
    mov r7, #0x0
    mov r11, #0x1
L_02096628:
    mov r0, r11, lsl r7
    ands r0, r4, r0
    beq L_02096658
    mov r10, r6
    mov r9, r5
    mov r8, #0x8
L_02096640:
    ldmia r10!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    subs r8, r8, #0x1
    bne L_02096640
    ldmia r10, {r0, r1}
    stmia r9, {r0, r1}
L_02096658:
    add r7, r7, #0x1
    cmp r7, #0x3
    add r6, r6, #0x88
    add r5, r5, #0x88
    blt L_02096628
    ldr r0, =data_0213d170
    str r4, [r0, #0x0]
    b L_02096844
L_02096678:
    ldr r0, [sp, #0x8]
    cmp r0, #0x1
    bne L_02096844
    ldr r0, =data_0213d17c
    ldr r2, =data_02154638
    ldr r0, [r0, #0x0]
    mov r1, #0x20000000
    str r0, [r2, #0x0]
    bl func_020999c8
    ldr r0, =data_02154620
    mov r1, #0x1
    str r1, [r0, #0x0]
    b L_02096844
L_020966ac:
    ldr lr, =data_0213d174
    mov r11, #0x0
    ldr r0, [lr, #0x0]
    ldr r1, =data_0215467c
    mov r0, r0, lsr #0x1
    ldr r5, =data_02154670
    str r0, [sp, #0xc]
    mov r3, r11
    mov r4, r11
    mov r7, #0x1
L_020966d4:
    mov r0, r7, lsl r11
    ldr r2, [lr, #0x0]
    ands r0, r2, r0
    beq L_0209672c
    ldr r10, [r5, r11, lsl #0x2]
    mov r9, r4
    cmp r10, #0x0
    mov r6, r11, lsl #0x2
    beq L_0209672c
    mov r8, r4
L_020966fc:
    ands r0, r10, #0x1
    ldr r0, [r1, r6]
    movne ip, r7
    add r2, r0, r8
    ldr r0, [r2, #0x98]
    moveq ip, r3
    cmp r0, #0x1
    streq ip, [r2, #0x94]
    movs r10, r10, lsr #0x1
    add r8, r8, #0x18
    add r9, r9, #0x1
    bne L_020966fc
L_0209672c:
    add r11, r11, #0x1
    cmp r11, #0x3
    blo L_020966d4
    bl func_020998e8
    cmp r0, #0x0
    bne L_02096820
    ldr r1, =data_021545fc
    ldr r0, =data_021545d8
    ldrsh r3, [r1, #0x0]
    ldr r1, =data_0215465c
    ldr r2, =data_02154658
    str r3, [sp, #0x0]
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x0]
    mov r3, #0x0
    bl func_02094814
    mov r2, #0x0
    ldr r1, =data_02154658
    str r2, [sp, #0x0]
    ldr r3, [r1, #0x0]
    ldr r1, =data_02154608
    str r3, [sp, #0x4]
    mov r4, r0
    ldr r0, [r1, #0x0]
    mov r1, #0x1
    mov r3, #0x1f40
    bl func_02097a2c
    ldr r1, =data_02154608
    mov r0, #0x39
    ldr r3, [r1, #0x0]
    mov r1, #0x1
    mov r2, #0x3c
    bl func_02097ac0
    ldr r0, =data_0215460c
    mov r1, #0x13
    mov r2, #0x7c
    bl func_02073328
    ldr r0, =data_0215460c
    mov r1, #0x40
    bl func_02070ed4
    cmp r4, #0x0
    bne L_020967e8
    ldr r1, =data_0213d174
    ldr r0, =data_0215483c
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    bl func_020958c8
L_020967e8:
    ldr r0, [sp, #0xc]
    mov r1, #0x88
    mul r2, r0, r1
    ldr r0, =data_021548bc
    ldr r0, [r0, r2]
    cmp r0, #0x0
    ldrne r1, =data_0215483c
    ldrne r0, =data_0213d178
    ldrne r1, [r1, r2]
    strne r1, [r0, #0x0]
    ldreq r1, =data_021548c0
    ldreq r0, =data_0213d178
    ldreq r1, [r1, r2]
    streq r1, [r0, #0x0]
L_02096820:
    ldr r0, =data_0213d174
    ldr r2, =data_02154638
    ldr r0, [r0, #0x0]
    mov r1, #0x10000000
    str r0, [r2, #0x0]
    bl func_020999c8
    ldr r0, =data_02154620
    mov r1, #0x1
    str r1, [r0, #0x0]
L_02096844:
    bl func_020998e8
    cmp r0, #0x0
    bne L_02096880
    ldr r2, =data_0215465c
    ldr r1, =data_021545e8
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr r4, [r2, #0x0]
    ldr r2, =data_02154604
    ldr r1, =data_02154600
    mov r3, #0x0
    ldr r0, =data_0215464c
    str r4, [r2, #0x0]
    strh r3, [r1, #0x0]
    str r3, [r0, #0x0]
L_02096880:
    mov r0, #0x1
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
