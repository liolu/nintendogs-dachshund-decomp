#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_0202761c();
extern void func_02027630();
extern void func_020276d0();
extern void func_020286ec();
extern void func_0202f8a4();
extern void func_02032510();
extern void func_020352ec();
extern void func_02035454();
extern void func_020355c8();
extern void func_02035710();
extern void func_020360a0();
extern void func_02036fbc();
extern void func_02038f0c();
extern void func_0203e2b8();
extern char data_0214b484[];
extern char data_02153704[];
// clang-format off
asm void func_0204c094(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mvn r8, #0x0
    mov r6, r0
    mov r5, r1
    mov r11, r2
    mov r7, r8
    bl func_020360a0
    movs r4, r0
    beq L_0204c2c4
    add r1, sp, #0x0
    bl func_02027630
    mov r0, r4
    add r1, r6, #0x278
    bl func_0202761c
    ldr r0, =data_02153704
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
    strlt ip, [r6, #0x488]
    blt L_0204c220
    ldr r9, =data_0214b484
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
    bne L_0204c220
    cmp r11, #0x0
    beq L_0204c1e8
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
    str r0, [r6, #0x488]
    b L_0204c220
L_0204c1e8:
    ldr r0, [r6, #0x488]
    cmp r0, #0x0
    bne L_0204c220
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
    str r0, [r6, #0x488]
L_0204c220:
    ldr r0, [r6, #0x488]
    cmp r0, #0x0
    beq L_0204c240
    cmp r0, #0x1
    beq L_0204c264
    cmp r0, #0x2
    beq L_0204c284
    b L_0204c2a0
L_0204c240:
    ldr r1, [r6, #0x2a0]
    mov r0, #0x0
    sub r1, r1, r2, lsl #0x1
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [r6, #0x2a8]
    sub r0, r0, r10, lsl #0x1
    str r0, [r6, #0x274]
    b L_0204c2a0
L_0204c264:
    ldr r1, [sp, #0x8]
    mov r0, #0x0
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [sp, #0x0]
    rsb r0, r0, #0x0
    str r0, [r6, #0x274]
    b L_0204c2a0
L_0204c284:
    ldr r1, [sp, #0x8]
    mov r0, #0x0
    rsb r1, r1, #0x0
    str r1, [r6, #0x26c]
    str r0, [r6, #0x270]
    ldr r0, [sp, #0x0]
    str r0, [r6, #0x274]
L_0204c2a0:
    ldr r1, =0x302
    mov r0, r6
    bl func_02036fbc
    mov r0, r6
    bl func_02032510
    mov r8, r0
    mov r0, r4
    bl func_020276d0
    mov r7, r0
L_0204c2c4:
    mov r0, r6
    bl func_02035710
    cmp r5, #0x0
    addeq r0, r6, #0x278
    addeq r3, r6, #0x3d8
    ldmeqia r0, {r0, r1, r2}
    stmeqia r3, {r0, r1, r2}
    beq L_0204c2ec
    mov r0, r6
    bl func_020355c8
L_0204c2ec:
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x1
    bl func_020286ec
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x0
    bl func_02035454
    cmp r0, #0x0
    beq L_0204c358
    cmp r4, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c358:
    mov r0, r6
    mov r1, #0x0
    bl func_020352ec
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r4, #0x0
    bne L_0204c390
    mov r0, r6
    bl func_0202f8a4
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c390:
    ldrsh r2, [r4, #0xe8]
    ldrsb r0, [r6, #0x88]
    cmp r2, #0x26c
    blt L_0204c3c0
    ldr r1, =0x26f
    cmp r2, r1
    bgt L_0204c3c0
    add r1, r4, #0x100
    ldrsh r1, [r1, #0x46]
    cmp r1, r0
    moveq r1, #0x1
    beq L_0204c3c4
L_0204c3c0:
    mov r1, #0x0
L_0204c3c4:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_0204c438
    ldr r1, =0x259
    cmp r2, r1
    blt L_0204c3ec
    ldr r1, =0x25f
    cmp r2, r1
    movle r1, #0x1
    ble L_0204c3f0
L_0204c3ec:
    mov r1, #0x0
L_0204c3f0:
    cmp r1, #0x0
    beq L_0204c434
    ldrsh r2, [r4, #0xec]
    cmp r2, #0x26c
    blt L_0204c424
    ldr r1, =0x26f
    cmp r2, r1
    bgt L_0204c424
    add r1, r4, #0x100
    ldrsh r1, [r1, #0x46]
    cmp r1, r0
    moveq r0, #0x1
    beq L_0204c428
L_0204c424:
    mov r0, #0x0
L_0204c428:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0204c438
L_0204c434:
    mov r0, #0x0
L_0204c438:
    cmp r0, #0x0
    bne L_0204c478
    cmp r4, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0204c478:
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
    bl func_01ffda04
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, sp, #0xc
    bl func_02027630
    add r1, sp, #0xc
    mov r0, r6
    mov r2, r8
    bl func_02038f0c
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
