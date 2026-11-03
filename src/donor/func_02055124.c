/* compiler: 2.0/sp1p5  */
/* func_02055124 from projets/nintendogs-chihuahua-friends/src/auto/func_02055124.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027044();
extern void func_02027630();
extern void func_020276d0();
extern void func_0202785c();
extern void func_0202d9e0();
extern void func_0202f960();
extern void func_02035e14();
extern void func_020360a0();
extern void func_02038094();
extern void func_02038f0c();
extern void func_0203e2b8();
extern void func_02044358();
extern void func_02055d78();
extern void func_0205606c();
extern void func_0205652c();
extern void func_020567b4();
extern char data_0214b484[];
// clang-format off
asm void func_02055124(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    movs r5, r1
    mov r6, r0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldrsh r0, [r5, #0xe8]
    ldr r1, =0x295
    cmp r0, r1
    blt L_02055164
    ldr r1, =0x299
    cmp r0, r1
    movle r1, #0x1
    ble L_02055168
L_02055164:
    mov r1, #0x0
L_02055168:
    cmp r1, #0x0
    bne L_0205520c
    ldr r1, =0x2ab
    cmp r0, r1
    beq L_02055194
    ldr r1, =0x2b5
    cmp r0, r1
    beq L_02055194
    ldr r1, =0x2bf
    cmp r0, r1
    bne L_0205519c
L_02055194:
    mov r1, #0x0
    b L_020551b8
L_0205519c:
    ldr r1, =0x2a1
    cmp r0, r1
    blt L_020551b4
    cmp r0, #0x2cc
    movle r1, #0x1
    ble L_020551b8
L_020551b4:
    mov r1, #0x0
L_020551b8:
    cmp r1, #0x0
    bne L_0205520c
    ldr r1, =0x2cd
    cmp r0, r1
    blt L_020551dc
    ldr r1, =0x2d7
    cmp r0, r1
    movle r1, #0x1
    ble L_020551e0
L_020551dc:
    mov r1, #0x0
L_020551e0:
    cmp r1, #0x0
    bne L_0205520c
    ldr r1, =0x2d9
    cmp r0, r1
    blt L_02055200
    cmp r0, #0x2fc
    movle r1, #0x1
    ble L_02055204
L_02055200:
    mov r1, #0x0
L_02055204:
    cmp r1, #0x0
    beq L_02055214
L_0205520c:
    mov r1, #0x1
    b L_02055218
L_02055214:
    mov r1, #0x0
L_02055218:
    cmp r1, #0x0
    beq L_02055260
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055260:
    cmp r0, #0x278
    blt L_02055278
    ldr r1, =0x27b
    cmp r0, r1
    movle r1, #0x1
    ble L_0205527c
L_02055278:
    mov r1, #0x0
L_0205527c:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x282
    cmp r0, r1
    blt L_020552a0
    cmp r0, #0x284
    movle r1, #0x1
    ble L_020552a4
L_020552a0:
    mov r1, #0x0
L_020552a4:
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02055308
    ldr r1, =0x259
    cmp r0, r1
    blt L_020552cc
    ldr r1, =0x25f
    cmp r0, r1
    movle r1, #0x1
    ble L_020552d0
L_020552cc:
    mov r1, #0x0
L_020552d0:
    cmp r1, #0x0
    beq L_02055304
    ldrsh r2, [r5, #0xec]
    ldr r1, =0x282
    cmp r2, r1
    blt L_020552f4
    cmp r2, #0x284
    movle r1, #0x1
    ble L_020552f8
L_020552f4:
    mov r1, #0x0
L_020552f8:
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02055308
L_02055304:
    mov r1, #0x0
L_02055308:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x289
    cmp r0, r1
    blt L_02055330
    ldr r1, =0x28a
    cmp r0, r1
    movle r1, #0x1
    ble L_02055334
L_02055330:
    mov r1, #0x0
L_02055334:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x28f
    cmp r0, r1
    blt L_02055358
    cmp r0, #0x290
    movle r1, #0x1
    ble L_0205535c
L_02055358:
    mov r1, #0x0
L_0205535c:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x295
    cmp r0, r1
    blt L_02055384
    ldr r1, =0x299
    cmp r0, r1
    movle r1, #0x1
    ble L_02055388
L_02055384:
    mov r1, #0x0
L_02055388:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x2cd
    cmp r0, r1
    blt L_020553b0
    ldr r1, =0x2d7
    cmp r0, r1
    movle r1, #0x1
    ble L_020553b4
L_020553b0:
    mov r1, #0x0
L_020553b4:
    cmp r1, #0x0
    movne r0, #0x1
    bne L_020553d0
    ldr r1, =0x2fd
    cmp r0, r1
    moveq r0, #0x1
    movne r0, #0x0
L_020553d0:
    cmp r0, #0x0
    addne sp, sp, #0xc
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    bl func_02044358
    mvn r1, #0x0
    cmp r0, r1
    beq L_02055c4c
    mov r7, #0x0
    mov r4, #0x1
L_020553fc:
    bl func_02044358
    ands r0, r4, r0
    addne r0, r7, #0x1
    movne r0, r0, lsl #0x10
    mov r4, r4, lsl #0x1
    movne r7, r0, asr #0x10
    cmp r4, #0x8000
    blo L_020553fc
    ldr r0, =data_0214b484
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
L_02055464:
    bl func_02044358
    ands r0, r4, r0
    beq L_02055c40
    sub r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x0
    bgt L_02055c40
    cmp r4, #0x100
    bhi L_02055500
    cmp r4, #0x100
    bhs L_02055974
    cmp r4, #0x20
    bhi L_020554e0
    cmp r4, #0x20
    bhs L_0205579c
    cmp r4, #0x8
    addls pc, pc, r4, lsl #0x2
    b L_020554d4
L_020554b0:
    b L_02055c40
    b L_02055558
    b L_0205561c
    b L_02055c40
    b L_02055678
    b L_02055c40
    b L_02055c40
    b L_02055c40
    b L_020556d4
L_020554d4:
    cmp r4, #0x10
    beq L_02055730
    b L_02055c40
L_020554e0:
    cmp r4, #0x40
    bhi L_020554f4
    cmp r4, #0x40
    beq L_02055860
    b L_02055c40
L_020554f4:
    cmp r4, #0x80
    beq L_020558bc
    b L_02055c40
L_02055500:
    cmp r4, #0x800
    bhi L_02055530
    cmp r4, #0x800
    bhs L_02055b28
    cmp r4, #0x200
    bhi L_02055524
    cmp r4, #0x200
    beq L_02055a2c
    b L_02055c40
L_02055524:
    cmp r4, #0x400
    beq L_02055a6c
    b L_02055c40
L_02055530:
    cmp r4, #0x2000
    bhi L_0205554c
    cmp r4, #0x2000
    bhs L_02055bc0
    cmp r4, #0x1000
    beq L_02055b6c
    b L_02055c40
L_0205554c:
    cmp r4, #0x4000
    beq L_02055c00
    b L_02055c40
L_02055558:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x1
    bne L_02055584
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055584:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =data_0214b484
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
    beq L_020555d4
    cmp r0, #0x1
    beq L_020555f0
    b L_0205560c
L_020555d4:
    mov r0, r6
    mov r1, #0x278
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020555f0:
    ldr r1, =0x279
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205560c:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205561c:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x2
    bne L_02055648
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055648:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055678:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x4
    bne L_020556a4
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020556a4:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x289
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020556d4:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x8
    bne L_02055700
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055700:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x28f
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055730:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x10
    bne L_0205575c
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205575c:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    bl func_0202785c
    str r0, [r6, #0x4a8]
    ldr r1, =0x295
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205579c:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_020557c8
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020557c8:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =data_0214b484
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
    beq L_02055818
    cmp r0, #0x1
    beq L_02055834
    b L_02055850
L_02055818:
    ldr r1, =0x2cd
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055834:
    ldr r1, =0x2ce
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055850:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055860:
    mov r0, r6
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x40
    bne L_0205588c
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0205588c:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r1, =0x2fd
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020558bc:
    bl func_02044358
    ands r0, r0, #0x80
    bne L_020558dc
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020558dc:
    ldrsb r0, [r6, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_02055914
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02055924
L_02055914:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055924:
    ldrsb r1, [r5, #0x88]
    mov r0, r6
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x26e
    mov r0, r6
    bl func_0203e2b8
    ldrsb r1, [r6, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r5
    mov r1, #0x17
    bl func_02027044
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055974:
    bl func_02044358
    ands r0, r0, #0x100
    bne L_02055994
    mov r0, r6
    bl func_0202f960
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055994:
    ldrsb r0, [r6, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_020559cc
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_020559dc
L_020559cc:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020559dc:
    ldrsb r1, [r5, #0x88]
    mov r0, r6
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x26f
    mov r0, r6
    bl func_0203e2b8
    ldrsb r1, [r6, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r5
    mov r1, #0x18
    bl func_02027044
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a2c:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055a6c:
    cmp r5, #0x0
    beq L_02055b18
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    mov r0, r6
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02055b18
L_02055a98:
    b L_02055aa8
    b L_02055ac4
    b L_02055ae0
    b L_02055afc
L_02055aa8:
    mov r0, r6
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055ac4:
    ldr r1, =0x275
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055ae0:
    ldr r1, =0x276
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055afc:
    ldr r1, =0x277
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055b18:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055b28:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r5
    bl func_02027630
    mov r0, r5
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r6
    bl func_02038f0c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055b6c:
    cmp r5, #0x0
    beq L_02055bb0
    mov r0, r6
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02055bb0
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055bb0:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055bc0:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055c00:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r5
    bl func_020276d0
    add r1, r6, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055c40:
    mov r4, r4, lsl #0x1
    cmp r4, #0x8000
    blo L_02055464
L_02055c4c:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldrsb r0, [r6, #0xa4]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_02055cf0
L_02055c78:
    b L_02055c90
    b L_02055ca8
    b L_02055cc0
    b L_02055cd8
    b L_02055cd8
    b L_02055cd8
L_02055c90:
    mov r0, r6
    mov r1, r5
    bl func_020567b4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055ca8:
    mov r0, r6
    mov r1, r5
    bl func_0205652c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055cc0:
    mov r0, r6
    mov r1, r5
    bl func_0205606c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055cd8:
    mov r0, r6
    mov r1, r5
    bl func_02055d78
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02055cf0:
    mov r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
