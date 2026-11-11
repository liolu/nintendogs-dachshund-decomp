#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202706c();
extern void func_02027658();
extern void func_020276f8();
extern void func_02027884();
extern void func_0202daec();
extern void func_0202fa5c();
extern void func_02035fcc();
extern void func_02036258();
extern void func_020382c4();
extern void func_0203913c();
extern void func_0203e5e8();
extern void func_0204469c();
extern void func_02056110();
extern void func_02056404();
extern void func_020568c4();
extern void func_02056b4c();
extern char data_0214da84[];
// clang-format off
asm void func_020554bc(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    movs r5, r1
    mov r6, r0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldrsh r0, [r5, #0xea]
    ldr r1, =0x295
    cmp r0, r1
    blt L_020554fc
    ldr r1, =0x299
    cmp r0, r1
    movle r1, #0x1
    ble L_02055500
L_020554fc:
    mov r1, #0x0
L_02055500:
    cmp r1, #0x0
    bne L_020555a4
    ldr r1, =0x2ab
    cmp r0, r1
    beq L_0205552c
    ldr r1, =0x2b5
    cmp r0, r1
    beq L_0205552c
    ldr r1, =0x2bf
    cmp r0, r1
    bne L_02055534
L_0205552c:
    mov r1, #0x0
    b L_02055550
L_02055534:
    ldr r1, =0x2a1
    cmp r0, r1
    blt L_0205554c
    cmp r0, #0x2cc
    movle r1, #0x1
    ble L_02055550
L_0205554c:
    mov r1, #0x0
L_02055550:
    cmp r1, #0x0
    bne L_020555a4
    ldr r1, =0x2cd
    cmp r0, r1
    blt L_02055574
    ldr r1, =0x2d7
    cmp r0, r1
    movle r1, #0x1
    ble L_02055578
L_02055574:
    mov r1, #0x0
L_02055578:
    cmp r1, #0x0
    bne L_020555a4
    ldr r1, =0x2d9
    cmp r0, r1
    blt L_02055598
    cmp r0, #0x2fc
    movle r1, #0x1
    ble L_0205559c
L_02055598:
    mov r1, #0x0
L_0205559c:
    cmp r1, #0x0
    beq L_020555ac
L_020555a4:
    mov r1, #0x1
    b L_020555b0
L_020555ac:
    mov r1, #0x0
L_020555b0:
    cmp r1, #0x0
    beq L_020555f8
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020555f8:
    cmp r0, #0x278
    blt L_02055610
    ldr r1, =0x27b
    cmp r0, r1
    movle r1, #0x1
    ble L_02055614
L_02055610:
    mov r1, #0x0
L_02055614:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x282
    cmp r0, r1
    blt L_02055638
    cmp r0, #0x284
    movle r1, #0x1
    ble L_0205563c
L_02055638:
    mov r1, #0x0
L_0205563c:
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020556a0
    ldr r1, =0x259
    cmp r0, r1
    blt L_02055664
    ldr r1, =0x25f
    cmp r0, r1
    movle r1, #0x1
    ble L_02055668
L_02055664:
    mov r1, #0x0
L_02055668:
    cmp r1, #0x0
    beq L_0205569c
    ldrsh r2, [r5, #0xee]
    ldr r1, =0x282
    cmp r2, r1
    blt L_0205568c
    cmp r2, #0x284
    movle r1, #0x1
    ble L_02055690
L_0205568c:
    mov r1, #0x0
L_02055690:
    cmp r1, #0x0
    movne r1, #0x1
    bne L_020556a0
L_0205569c:
    mov r1, #0x0
L_020556a0:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x289
    cmp r0, r1
    blt L_020556c8
    ldr r1, =0x28a
    cmp r0, r1
    movle r1, #0x1
    ble L_020556cc
L_020556c8:
    mov r1, #0x0
L_020556cc:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x28f
    cmp r0, r1
    blt L_020556f0
    cmp r0, #0x290
    movle r1, #0x1
    ble L_020556f4
L_020556f0:
    mov r1, #0x0
L_020556f4:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x295
    cmp r0, r1
    blt L_0205571c
    ldr r1, =0x299
    cmp r0, r1
    movle r1, #0x1
    ble L_02055720
L_0205571c:
    mov r1, #0x0
L_02055720:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x2cd
    cmp r0, r1
    blt L_02055748
    ldr r1, =0x2d7
    cmp r0, r1
    movle r1, #0x1
    ble L_0205574c
L_02055748:
    mov r1, #0x0
L_0205574c:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_02055768
    ldr r1, =0x2fd
    cmp r0, r1
    moveq r0, #0x1
    movne r0, #0x0
L_02055768:
    cmp r0, #0x0
    addne sp, sp, #0xc
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    bl func_0204469c
    mvn r1, #0x0
    cmp r0, r1
    beq L_02055fe4
    mov r7, #0x0
    mov r4, #0x1
L_02055794:
    bl func_0204469c
    ands r0, r4, r0
    addne r0, r7, #0x1
    movne r0, r0, lsl #0x10
    mov r4, r4, lsl #0x1
    movne r7, r0, asr #0x10
    cmp r4, #0x8000
    blo L_02055794
    ldr r0, =data_0214da84
    mov r2, r7, lsl #0x10
    ldr r0, [r0, #0x0]
    ldr r1, =0x10dcd
    ldr r3, [r0, #0x0]
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r7, r1, asr #0x10
    mov r4, #0x1
L_020557fc:
    bl func_0204469c
    ands r0, r4, r0
    beq L_02055fd8
    sub r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x0
    bgt L_02055fd8
    cmp r4, #0x100
    bhi L_02055898
    cmp r4, #0x100
    bhs L_02055d0c
    cmp r4, #0x20
    bhi L_02055878
    cmp r4, #0x20
    bhs L_02055b34
    cmp r4, #0x8
    addls pc, pc, r4, lsl #0x2
    b L_0205586c
L_02055848:
    b L_02055fd8
    b L_020558f0
    b L_020559b4
    b L_02055fd8
    b L_02055a10
    b L_02055fd8
    b L_02055fd8
    b L_02055fd8
    b L_02055a6c
L_0205586c:
    cmp r4, #0x10
    beq L_02055ac8
    b L_02055fd8
L_02055878:
    cmp r4, #0x40
    bhi L_0205588c
    cmp r4, #0x40
    beq L_02055bf8
    b L_02055fd8
L_0205588c:
    cmp r4, #0x80
    beq L_02055c54
    b L_02055fd8
L_02055898:
    cmp r4, #0x800
    bhi L_020558c8
    cmp r4, #0x800
    bhs L_02055ec0
    cmp r4, #0x200
    bhi L_020558bc
    cmp r4, #0x200
    beq L_02055dc4
    b L_02055fd8
L_020558bc:
    cmp r4, #0x400
    beq L_02055e04
    b L_02055fd8
L_020558c8:
    cmp r4, #0x2000
    bhi L_020558e4
    cmp r4, #0x2000
    bhs L_02055f58
    cmp r4, #0x1000
    beq L_02055f04
    b L_02055fd8
L_020558e4:
    cmp r4, #0x4000
    beq L_02055f98
    b L_02055fd8
L_020558f0:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x1
    bne L_0205591c
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205591c:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
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
    beq L_0205596c
    cmp r0, #0x1
    beq L_02055988
    b L_020559a4
L_0205596c:
    mov r0, r6
    mov r1, #0x278
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055988:
    ldr r1, =0x279
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020559a4:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020559b4:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x2
    bne L_020559e0
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020559e0:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a10:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x4
    bne L_02055a3c
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a3c:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x289
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a6c:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x8
    bne L_02055a98
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a98:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x28f
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055ac8:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x10
    bne L_02055af4
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055af4:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    bl func_02027884
    str r0, [r6, #0x484]
    ldr r1, =0x295
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055b34:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_02055b60
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055b60:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
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
    beq L_02055bb0
    cmp r0, #0x1
    beq L_02055bcc
    b L_02055be8
L_02055bb0:
    ldr r1, =0x2cd
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055bcc:
    ldr r1, =0x2ce
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055be8:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055bf8:
    mov r0, r6
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x40
    bne L_02055c24
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055c24:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x2fd
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055c54:
    bl func_0204469c
    ands r0, r0, #0x80
    bne L_02055c74
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055c74:
    ldrsb r0, [r6, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_02055cac
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02055cbc
L_02055cac:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055cbc:
    ldrsb r1, [r5, #0x88]
    mov r0, r6
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x26e
    mov r0, r6
    bl func_0203e5e8
    ldrsb r1, [r6, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r5
    mov r1, #0x17
    bl func_0202706c
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055d0c:
    bl func_0204469c
    ands r0, r0, #0x100
    bne L_02055d2c
    mov r0, r6
    bl func_0202fa5c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055d2c:
    ldrsb r0, [r6, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_02055d64
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02055d74
L_02055d64:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055d74:
    ldrsb r1, [r5, #0x88]
    mov r0, r6
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x26f
    mov r0, r6
    bl func_0203e5e8
    ldrsb r1, [r6, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r5
    mov r1, #0x18
    bl func_0202706c
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055dc4:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055e04:
    cmp r5, #0x0
    beq L_02055eb0
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    mov r0, r6
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02055eb0
L_02055e30:
    b L_02055e40
    b L_02055e5c
    b L_02055e78
    b L_02055e94
L_02055e40:
    mov r0, r6
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055e5c:
    ldr r1, =0x275
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055e78:
    ldr r1, =0x276
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055e94:
    ldr r1, =0x277
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055eb0:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055ec0:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r5
    bl func_02027658
    mov r0, r5
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r6
    bl func_0203913c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055f04:
    cmp r5, #0x0
    beq L_02055f48
    mov r0, r6
    bl func_0202daec
    cmp r0, #0x0
    bne L_02055f48
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055f48:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055f58:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055f98:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276f8
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055fd8:
    mov r4, r4, lsl #0x1
    cmp r4, #0x8000
    blo L_020557fc
L_02055fe4:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldrsb r0, [r6, #0x8b]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_02056088
L_02056010:
    b L_02056028
    b L_02056040
    b L_02056058
    b L_02056070
    b L_02056070
    b L_02056070
L_02056028:
    mov r0, r6
    mov r1, r5
    bl func_02056b4c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02056040:
    mov r0, r6
    mov r1, r5
    bl func_020568c4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02056058:
    mov r0, r6
    mov r1, r5
    bl func_02056404
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02056070:
    mov r0, r6
    mov r1, r5
    bl func_02056110
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02056088:
    mov r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
