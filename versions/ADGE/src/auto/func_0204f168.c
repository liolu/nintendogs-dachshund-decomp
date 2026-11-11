#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202706c();
extern void func_020276f8();
extern void func_02027700();
extern void func_02027884();
extern void func_0202fa5c();
extern void func_02035fcc();
extern void func_02035fd8();
extern void func_02036258();
extern void func_0203e5e8();
extern void func_0204469c();
extern char data_0214da84[];
// clang-format off
asm void func_0204f168(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldrsh r3, [r4, #0xea]
    ldr r2, =0x2fe
    mov r5, r0
    cmp r3, r2
    beq L_0204f204
    ldr r2, =0x2ff
    cmp r3, r2
    beq L_0204f214
    cmp r3, #0x300
    beq L_0204f714
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f1bc
    cmp r0, #0x0
    beq L_0204f1bc
    cmp r0, #0x1
    bne L_0204f744
L_0204f1bc:
    mov r0, r5
    bl func_02035fd8
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f204:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f214:
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f598
    cmp r0, #0x0
    beq L_0204f598
    cmp r0, #0x1
    bne L_0204f744
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
    b L_0204f744
L_0204f278:
    b L_0204f290
    b L_0204f354
    b L_0204f3b0
    b L_0204f40c
    b L_0204f468
    b L_0204f4d4
L_0204f290:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x1
    bne L_0204f2bc
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f2bc:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204f30c
    cmp r0, #0x1
    beq L_0204f328
    b L_0204f344
L_0204f30c:
    mov r0, r5
    mov r1, #0x278
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f328:
    ldr r1, =0x279
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f344:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f354:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x2
    bne L_0204f380
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f380:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f3b0:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x4
    bne L_0204f3dc
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f3dc:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x289
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f40c:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x8
    bne L_0204f438
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f438:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x28f
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f468:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x10
    bne L_0204f494
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f494:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    mov r1, r4
    bl func_02027884
    str r0, [r5, #0x484]
    ldr r1, =0x295
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f4d4:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_0204f500
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f500:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204f550
    cmp r0, #0x1
    beq L_0204f56c
    b L_0204f588
L_0204f550:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f56c:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f588:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f598:
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
    b L_0204f744
L_0204f5dc:
    b L_0204f5f4
    b L_0204f624
    b L_0204f654
    b L_0204f684
    b L_0204f6b4
    b L_0204f6e4
L_0204f5f4:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x7
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f624:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x9
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f654:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0xb
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f684:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0xd
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f6b4:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0xf
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f6e4:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x11
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f714:
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f734
    cmp r0, #0x0
    beq L_0204f734
    cmp r0, #0x1
    bne L_0204f744
L_0204f734:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f744:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
