#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ff89d0();
extern void func_0200b598();
extern void func_0200b7f4();
extern void func_02027180();
extern void func_02027b00();
extern void func_02027ea8();
extern void func_020280f8();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02069634();
extern void func_ov004_02163140();
extern char data_02150330[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov004_0215aa64(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xb8
    mov r6, r0
    add r0, r6, #0x100
    ldrh r0, [r0, #0xa]
    mov r5, #0x0
    ldr r4, [r6, #0x488]
    cmp r0, #0x3
    movlo r5, #0x1
    blo L_0215ad78
    ldr r0, =data_02153720
    ldr r3, [r0, #0x0]
    ldrsh r0, [r3, #0x7a]
    cmp r0, #0x0
    blt L_0215aab4
    ldr r1, =data_02156080
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r0
    bgt L_0215aabc
L_0215aab4:
    mov r1, #0x0
    b L_0215aac4
L_0215aabc:
    add r1, r2, r0, lsl #0x2
    ldr r1, [r1, #0x4]
L_0215aac4:
    cmp r1, #0x0
    beq L_0215aadc
    ldrsh r1, [r1, #0x96]
    cmp r1, #0x8
    moveq r1, #0x1
    beq L_0215aae0
L_0215aadc:
    mov r1, #0x0
L_0215aae0:
    cmp r1, #0x0
    beq L_0215ad78
    ldrh r1, [r3, #0x84]
    ands r1, r1, #0x1
    beq L_0215ad78
    cmp r0, #0x0
    blt L_0215ab10
    ldr r1, =data_02156080
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r0
    bgt L_0215ab18
L_0215ab10:
    mov r0, #0x0
    b L_0215ab20
L_0215ab18:
    add r0, r2, r0, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215ab20:
    cmp r0, #0x0
    beq L_0215ad78
    add r1, sp, #0x28
    bl func_ov004_02163140
    cmp r0, #0x0
    beq L_0215ad78
    add r1, sp, #0x40
    mov r0, r6
    mov r2, #0x2
    bl func_02027180
    add r1, sp, #0x70
    mov r0, r6
    mov r2, #0x4
    bl func_02027180
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x68]
    str r1, [sp, #0xa0]
    ldr r1, [sp, #0x6c]
    ldr r0, =data_02153720
    str r1, [sp, #0xa8]
    ldr r1, [sp, #0x98]
    str r2, [sp, #0xa4]
    ldr r2, [sp, #0x94]
    str r1, [sp, #0xb0]
    ldr r1, [sp, #0x9c]
    ldr r3, =data_02150330
    ldr r0, [r0, #0x0]
    str r2, [sp, #0xac]
    str r1, [sp, #0xb4]
    ldr r0, [r0, #0x1c]
    add r8, sp, #0x4
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    ldr r7, [r3, #0x54]
    ldr r2, [r3, #0x60]
    ldr r0, [r3, #0x6c]
    str r2, [sp, #0x14]
    str r0, [sp, #0x18]
    str r7, [sp, #0x10]
    add r2, sp, #0x10
    str r2, [sp, #0x0]
    mov r1, r8
    add r0, sp, #0x34
    add r2, sp, #0x28
    add r3, sp, #0xa0
    bl func_0200b598
    mov r0, r6
    bl func_020280f8
    mov r8, r0
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    add r0, sp, #0xac
    add r1, sp, #0x28
    add r2, sp, #0x34
    bl func_0200b7f4
    smull ip, r1, r7, r8
    mov r2, #0x800
    adds ip, ip, r2
    adc r1, r1, #0x0
    mov lr, ip, lsr #0xc
    orr lr, lr, r1, lsl #0x14
    ldr r1, =0x2008
    mov r3, #0x0
    umull r8, r7, lr, r1
    adds r2, r8, r2
    mla r7, lr, r3, r7
    mov ip, lr, asr #0x1f
    mla r7, ip, r1, r7
    adc r1, r7, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_0215ad78
    add r0, sp, #0x34
    add r1, sp, #0xa0
    add r2, sp, #0x1c
    bl func_02069634
    mov r0, r6
    bl func_020280f8
    mov r1, #0x200
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r2, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    mov r3, #0x800
    adds r3, lr, r3
    adc r1, ip, #0x0
    mov r2, r3, lsr #0xc
    ldr r0, [sp, #0x1c]
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    add r0, sp, #0x1c
    strgt r2, [sp, #0x1c]
    bl func_01ff89d0
    mov r0, r6
    bl func_020280f8
    ldr r3, =0x414
    add r1, sp, #0x1c
    add r2, sp, #0xa0
    add r3, r6, r3
    mov r0, r0, lsl #0x1
    bl func_01ff832c
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r1, [r0, #0x88]
    cmp r1, #0x1e
    ble L_0215ad04
    mov r1, #0x2
    ldr r2, =0x1c3
    mov r0, r6
    str r1, [r6, #0x488]
    add r5, r6, #0xac
    mov r1, #0x0
    swpb r3, r1, [r5]
    bl func_0203e280
    mov r5, #0x1
    b L_0215ad78
L_0215ad04:
    mvn r0, #0x13
    cmp r1, r0
    ble L_0215ad40
    mov r0, #0x1
    str r0, [r6, #0x488]
    cmp r4, #0x1
    bgt L_0215ad78
    ldr r2, =0x1c2
    mov r0, r6
    add r5, r6, #0xac
    mov r1, #0x0
    swpb r3, r1, [r5]
    bl func_0203e280
    mov r5, #0x1
    b L_0215ad78
L_0215ad40:
    mov r5, #0x0
    str r5, [r6, #0x488]
    add r1, r6, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r3, r6, #0x3d8
    add r0, sp, #0x28
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r6
    mov r1, r5
    mov r2, #0x2d
    bl func_0203e280
    mov r5, #0x1
L_0215ad78:
    ldr r0, =data_02153720
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_0215ae04
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_0215adc4
    mov r0, r6
    mov r1, #0x1
    mov r2, #0x1e
    bl func_02027ea8
    b L_0215ae04
L_0215adc4:
    add r2, r6, #0x100
    ldrh r0, [r2, #0x36]
    add r0, r0, #0x1
    strh r0, [r2, #0x36]
    ldrh r0, [r2, #0x36]
    cmp r0, #0x3c
    blo L_0215adf4
    mov r3, #0x0
    mov r0, r6
    mvn r1, #0x13
    strh r3, [r2, #0x36]
    bl func_02027b00
L_0215adf4:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ea8
L_0215ae04:
    ldr r0, =data_02153720
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x28]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x28]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x28]
    add r0, r6, #0x100
    ldr r1, =data_02153720
    strh r2, [r0, #0x2a]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r6, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x2c]
    bgt L_0215ae88
    add r0, r6, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_0215ae88:
    cmp r5, #0x0
    addne sp, sp, #0xb8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0215aebc
    cmp r4, #0x1
    beq L_0215aed4
    cmp r4, #0x2
    beq L_0215aeec
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215aebc:
    ldr r1, =0x458
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215aed4:
    ldr r1, =0x45a
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215aeec:
    ldr r1, =0x457
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
