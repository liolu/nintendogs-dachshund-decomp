#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024ce8();
extern void func_020280f8();
extern void func_0202d9b0();
extern void func_0202f1d0();
extern void func_0202f2c0();
extern void func_0202f3ac();
extern void func_0202f49c();
extern void func_0202f588();
extern void func_020351a0();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_ov002_021879a8();
extern char data_0214b480[];
// clang-format off
asm void func_ov002_0217f508(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r4, r2
    mov r5, r1
    mov r1, r3
    ldrsh r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    mov r6, r0
    bl func_02024ce8
    cmp r0, #0x0
    bne L_0217f548
    ldrsh r1, [sp, #0x28]
    ldrsh r2, [sp, #0x2c]
    ldr r3, [sp, #0x30]
    mov r0, r6
    bl func_02024ce8
L_0217f548:
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    mov r0, r6
    bl func_020280f8
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r8, r2, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    ldr r2, =0x1004
    ldr r0, =data_0214b480
    mov ip, #0x0
    umull lr, r9, r8, r2
    mla r9, r8, ip, r9
    mov r7, r8, asr #0x1f
    mla r9, r7, r2, r9
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x390
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_0217f68c
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    mov r0, r6
    bl func_020280f8
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r8, r2, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    ldr r2, =0x14d2
    ldr r0, =data_0214b480
    mov ip, #0x0
    umull lr, r9, r8, r2
    mla r9, r8, ip, r9
    mov r7, r8, asr #0x1f
    mla r9, r7, r2, r9
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x39c
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_0217f68c
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
    ldr r2, =0x14d2
    ldr r0, =data_0214b480
    mov ip, #0x0
    umull r9, r8, r7, r2
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r2, r8
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, r8, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x360
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_0217f6a4
L_0217f68c:
    add r0, r6, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x2a]
    mov r1, #0x1
    strh r1, [r0, #0x2c]
    b L_0217f6b8
L_0217f6a4:
    add r0, r6, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x2a]
    mov r1, #0x0
    strh r1, [r0, #0x2c]
L_0217f6b8:
    add r0, r6, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x0
    addeq r1, r6, #0xa2
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xa2
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r0, r6
    bl func_0202d9b0
    mov r1, r0
    mov r0, r6
    bl func_ov002_021879a8
    cmp r5, #0x5
    addls pc, pc, r5, lsl #0x2
    b L_0217f74c
L_0217f6fc:
    b L_0217f74c
    b L_0217f714
    b L_0217f720
    b L_0217f72c
    b L_0217f738
    b L_0217f744
L_0217f714:
    mov r0, r6
    bl func_0202f588
    b L_0217f74c
L_0217f720:
    mov r0, r6
    bl func_0202f49c
    b L_0217f74c
L_0217f72c:
    mov r0, r6
    bl func_0202f3ac
    b L_0217f74c
L_0217f738:
    mov r0, r6
    bl func_0202f2c0
    b L_0217f74c
L_0217f744:
    mov r0, r6
    bl func_0202f1d0
L_0217f74c:
    mov r0, r6
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
