/* compiler: 2.0/sp1p5  */
/* func_020426f8 from projets/nintendogs-chihuahua-friends/src/auto/func_020426f8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_0202914c();
extern char data_021383b4[];
extern char data_0214b484[];
// clang-format off
asm void func_020426f8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r0, =data_0214b484
    ldr r2, [r0, #0x0]
    ldrh r1, [r2, #0x26]
    cmp r1, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    sub r1, r1, #0x1
    strh r1, [r2, #0x26]
    ldrh r1, [r2, #0x26]
    cmp r1, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r10, [r0, #0x0]
    mov r11, #0x0
    mov r7, r11
    mov r5, r11
    mov r0, r11
    mov r1, r11
    mov r2, r11
    mov r3, r11
    mov r4, r11
    mov r6, #0x1
    ldr lr, =0x119
L_02042764:
    cmp r11, #0x0
    blt L_02042774
    cmp r11, #0x3
    blt L_0204277c
L_02042774:
    mov r8, r7
    b L_02042784
L_0204277c:
    add r8, r10, r11, lsl #0x2
    ldr r8, [r8, #0x50]
L_02042784:
    cmp r8, #0x0
    beq L_0204284c
    ldrsh r9, [r8, #0xf0]
    cmp r9, #0x4
    blt L_020427a4
    cmp r9, #0x8
    movle ip, r6
    ble L_020427e0
L_020427a4:
    cmp r9, #0x57
    moveq ip, r6
    beq L_020427e0
    ldrsh ip, [r8, #0xe8]
    cmp ip, #0xf
    blt L_020427c8
    cmp ip, #0x4b
    movle ip, r6
    ble L_020427e0
L_020427c8:
    cmp ip, lr
    blt L_020427dc
    cmp ip, #0x13c
    movle ip, r6
    ble L_020427e0
L_020427dc:
    mov ip, r5
L_020427e0:
    cmp ip, #0x0
    movne r8, r4
    bne L_02042840
    ldrsh r8, [r8, #0xe8]
    ldr ip, =0x477
    cmp r8, ip
    blt L_0204280c
    ldr ip, =0x47d
    cmp r8, ip
    movle r8, r3
    ble L_02042840
L_0204280c:
    ldr ip, =0x4c6
    cmp r8, ip
    blt L_02042828
    ldr ip, =0x4c9
    cmp r8, ip
    movle r8, r2
    ble L_02042840
L_02042828:
    cmp r9, #0x53
    moveq r8, r1
    beq L_02042840
    cmp r9, #0x54
    moveq r8, r0
    movne r8, r6
L_02042840:
    cmp r8, #0x0
    moveq r0, #0x0
    beq L_02042864
L_0204284c:
    add r8, r11, #0x1
    mov r8, r8, lsl #0x18
    mov r11, r8, asr #0x18
    cmp r11, #0x3
    blt L_02042764
    mov r0, #0x1
L_02042864:
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r10, #0x0
    ldr r5, =data_0214b484
    ldr r4, =0x10dcd
    mov r9, r10
    mov r7, r10
    str r10, [sp, #0x8]
    str r10, [sp, #0x4]
    str r10, [sp, #0x0]
    mov r11, r10
    mov r6, r10
    str r10, [sp, #0xc]
    str r10, [sp, #0x20]
    str r10, [sp, #0x1c]
    mov r8, #0x1
    str r10, [sp, #0x18]
    str r10, [sp, #0x14]
    str r10, [sp, #0x10]
    str r10, [sp, #0x24]
L_020428bc:
    cmp r10, #0x0
    blt L_020428cc
    cmp r10, #0x3
    blt L_020428d4
L_020428cc:
    mov r0, r9
    b L_020428e0
L_020428d4:
    ldr r0, [r5, #0x0]
    add r0, r0, r10, lsl #0x2
    ldr r0, [r0, #0x50]
L_020428e0:
    cmp r0, #0x0
    beq L_02042b90
    ldr r2, [r0, #0x9e4]
    ldrb r1, [r2, #0x72]
    cmp r1, #0x0
    beq L_02042b90
    ldrsh r1, [r2, #0x1c]
    ldrb r2, [r2, #0x11]
    sub r2, r2, #0x1
    mov r3, r2, lsl #0x1
    ldr r2, =data_021383b4
    ldrh r2, [r2, r3]
    add r2, r2, #0x3e8
    cmp r1, r2
    bgt L_02042b90
    ldrsh r2, [r0, #0xf0]
    cmp r2, #0x4
    blt L_02042934
    cmp r2, #0x8
    movle r1, r8
    ble L_02042974
L_02042934:
    cmp r2, #0x57
    moveq r1, r8
    beq L_02042974
    ldrsh r3, [r0, #0xe8]
    cmp r3, #0xf
    blt L_02042958
    cmp r3, #0x4b
    movle r1, r8
    ble L_02042974
L_02042958:
    ldr r1, =0x119
    cmp r3, r1
    blt L_02042970
    cmp r3, #0x13c
    movle r1, r8
    ble L_02042974
L_02042970:
    mov r1, r7
L_02042974:
    cmp r1, #0x0
    movne r1, r6
    bne L_020429d4
    ldrsh r1, [r0, #0xe8]
    ldr r3, =0x477
    cmp r1, r3
    blt L_020429a0
    ldr r3, =0x47d
    cmp r1, r3
    movle r1, r11
    ble L_020429d4
L_020429a0:
    ldr r3, =0x4c6
    cmp r1, r3
    blt L_020429bc
    ldr r3, =0x4c9
    cmp r1, r3
    ldrle r1, [sp, #0x0]
    ble L_020429d4
L_020429bc:
    cmp r2, #0x53
    ldreq r1, [sp, #0x4]
    beq L_020429d4
    cmp r2, #0x54
    ldreq r1, [sp, #0x8]
    movne r1, r8
L_020429d4:
    cmp r1, #0x0
    beq L_02042b90
    add r2, r0, #0xcd
    swpb r1, r8, [r2]
    add r2, r0, #0x8b
    swpb r1, r8, [r2]
    ldr r2, [r0, #0x9e4]
    ldr r1, =0x2710
    strh r1, [r2, #0x24]
    ldrsb r1, [r0, #0xa6]
    cmp r1, #0x3
    beq L_02042a48
    cmp r1, #0x4
    beq L_02042a88
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
    b L_02042ac4
L_02042a48:
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
    b L_02042ac4
L_02042a88:
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
L_02042ac4:
    ldrsh r2, [r0, #0xf0]
    cmp r2, #0x4
    blt L_02042adc
    cmp r2, #0x8
    movle r1, r8
    ble L_02042b1c
L_02042adc:
    cmp r2, #0x57
    moveq r1, r8
    beq L_02042b1c
    ldrsh ip, [r0, #0xe8]
    cmp ip, #0xf
    blt L_02042b00
    cmp ip, #0x4b
    movle r1, r8
    ble L_02042b1c
L_02042b00:
    ldr r1, =0x119
    cmp ip, r1
    blt L_02042b18
    cmp ip, #0x13c
    movle r1, r8
    ble L_02042b1c
L_02042b18:
    ldr r1, [sp, #0xc]
L_02042b1c:
    cmp r1, #0x0
    ldrne r1, [sp, #0x10]
    bne L_02042b7c
    ldrsh r1, [r0, #0xe8]
    ldr ip, =0x477
    cmp r1, ip
    blt L_02042b48
    ldr ip, =0x47d
    cmp r1, ip
    ldrle r1, [sp, #0x14]
    ble L_02042b7c
L_02042b48:
    ldr ip, =0x4c6
    cmp r1, ip
    blt L_02042b64
    ldr ip, =0x4c9
    cmp r1, ip
    ldrle r1, [sp, #0x18]
    ble L_02042b7c
L_02042b64:
    cmp r2, #0x53
    ldreq r1, [sp, #0x1c]
    beq L_02042b7c
    cmp r2, #0x54
    ldreq r1, [sp, #0x20]
    movne r1, r8
L_02042b7c:
    cmp r1, #0x0
    beq L_02042b90
    ldr r2, [sp, #0x24]
    mov r1, r8
    bl func_0202914c
L_02042b90:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x18
    mov r10, r0, asr #0x18
    cmp r10, #0x3
    blt L_020428bc
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
