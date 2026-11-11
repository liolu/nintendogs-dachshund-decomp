#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020091f8();
extern void func_0200938c();
extern void func_02022000();
extern void func_02022a4c();
extern void func_020240d0();
extern void func_02027ff4();
extern void func_020280f8();
extern void func_0202814c();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_020eabb4();
extern char data_0214b480[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_02185510(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r6, r0
    ldr r0, [r6, #0x48c]
    mov r5, r1
    cmp r0, #0x0
    mov r4, #0x0
    ble L_021855b4
    sub r0, r0, #0x1
    str r0, [r6, #0x48c]
    add r1, r6, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x48c]
    cmp r0, #0x54
    beq L_02185560
    cmp r0, #0x48
    beq L_02185560
    cmp r0, #0x3c
    bne L_02185574
L_02185560:
    ldr r0, =0x958
    mvn r1, #0x1
    add r0, r6, r0
    mov r2, #0x0
    bl func_020eabb4
L_02185574:
    ldr r0, [r6, #0x48c]
    cmp r0, #0x28
    bne L_021855a0
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    bl func_020091f8
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e280
L_021855a0:
    ldr r0, [r6, #0x48c]
    cmp r0, #0x0
    moveq r4, #0x1
    movne r4, #0x0
    b L_02185784
L_021855b4:
    ldr r0, =data_0214b480
    add r1, r6, #0x3d8
    ldr r0, [r0, #0x0]
    add r2, r6, #0x300
    bl func_02092ee8
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02185770
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    mov r0, r6
    bl func_020280f8
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r7, r2, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    ldr r2, =0x19a
    ldr r0, =data_0214b480
    mov ip, r4
    umull r9, r8, r7, r2
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r2, r8
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, r8, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x300
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_02185770
    ldrsb r0, [r6, #0x88]
    bl func_02022000
    mov r1, r0
    cmp r1, #0x14
    bne L_021856b0
    mov r0, r6
    mov r1, r4
    mvn r2, #0x18
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x18
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x19
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x3
    mov r2, #0x19
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x4
    mov r2, #0x19
    bl func_02027ff4
    b L_02185730
L_021856b0:
    cmp r1, #0x0
    bne L_02185700
    mov r0, r6
    bl func_020240d0
    movs r4, r0
    beq L_021856dc
    mov r0, r6
    bl func_0202814c
    ldrh r0, [r4, #0x2]
    add r0, r0, #0x32
    strh r0, [r4, #0x2]
L_021856dc:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ff4
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xa
    bl func_02027ff4
    b L_02185730
L_02185700:
    mvn r0, #0x0
    cmp r1, r0
    beq L_02185730
    mov r0, r6
    bl func_020240d0
    movs r4, r0
    beq L_02185730
    mov r0, r6
    bl func_0202814c
    ldrh r0, [r4, #0x2]
    add r0, r0, #0x32
    strh r0, [r4, #0x2]
L_02185730:
    bl func_02022a4c
    mov r4, #0x1
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    mov r3, #0x0
    str r4, [sp, #0x0]
    bl func_0200938c
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xd
    bl func_0203e280
    mov r0, #0x5a
    str r0, [r6, #0x48c]
    mov r4, #0x0
    b L_02185784
L_02185770:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    moveq r4, #0x1
L_02185784:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    bl func_02022a4c
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    bl func_020091f8
    add r0, r5, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
