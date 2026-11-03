/* compiler: 2.0/sp1p5  */
/* func_020430d0 from projets/nintendogs-chihuahua-friends/src/auto/func_020430d0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_020430d0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0214b484
    mov r3, #0x0
    ldr r0, [r0, #0x0]
    ldr r2, =data_02153720
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_02043114
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0204311c
L_02043114:
    mov r1, #0x0
    b L_02043124
L_0204311c:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_02043124:
    cmp r1, #0x0
    beq L_02043358
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq L_020431c8
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_02043174
L_02043150:
    b L_02043174
    b L_02043174
    b L_02043174
    b L_02043174
    b L_0204319c
    b L_0204319c
    b L_0204319c
    b L_0204319c
    b L_0204319c
L_02043174:
    ldr r2, =data_0214b484
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204319c:
    ldr r2, =data_0214b484
    mov r4, #0x2
    ldr r0, [r2, #0x0]
    mov r3, #0x0
    add r1, r0, #0x4
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020431c8:
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x0
    beq L_020431e8
    cmp r0, #0x2
    beq L_02043210
    cmp r0, #0x3
    beq L_02043210
    b L_0204323c
L_020431e8:
    ldr r2, =data_0214b484
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043210:
    ldr r2, =data_0214b484
    mov r4, #0x2
    ldr r0, [r2, #0x0]
    mov r3, #0x1f4
    add r1, r0, #0x4
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0204323c:
    ldr r1, =data_0214b484
    ldr r0, =data_02156080
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    mov ip, #0x0
    mov r0, ip
    mov r6, ip
    mov r4, ip
    mov r5, #0x1
L_02043260:
    cmp ip, #0x0
    blt L_02043270
    cmp ip, #0x3
    blt L_02043278
L_02043270:
    mov r3, r0
    b L_02043280
L_02043278:
    add r3, r1, ip, lsl #0x2
    ldr r3, [r3, #0x50]
L_02043280:
    cmp r3, #0x0
    beq L_02043308
    add lr, r3, #0x100
    ldrsh r7, [lr, #0x46]
    sub r7, r7, #0x3
    mov lr, r7, lsl #0x10
    movs r7, lr, asr #0x10
    bmi L_020432ac
    ldrsh lr, [r2, #0x20]
    cmp lr, r7
    bgt L_020432b4
L_020432ac:
    mov r7, r6
    b L_020432bc
L_020432b4:
    add lr, r2, r7, lsl #0x2
    ldr r7, [lr, #0x4]
L_020432bc:
    cmp r7, #0x0
    movne r3, r5
    bne L_020432d8
    ldr r3, [r3, #0x954]
    cmp r3, #0x0
    movne r3, r5
    moveq r3, r4
L_020432d8:
    cmp r3, #0x0
    beq L_02043308
    add r1, r1, #0x4
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r1, #0xc8
    ldr r0, =data_0214b484
    add sp, sp, #0x4
    ldr r0, [r0, #0x0]
    strh r1, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043308:
    add r3, ip, #0x1
    mov r3, r3, lsl #0x18
    mov ip, r3, asr #0x18
    cmp ip, #0x3
    blt L_02043260
    ldrh r0, [r1, #0x28]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    sub r2, r0, #0x1
    strh r2, [r1, #0x28]
    ldr r0, =data_0214b484
    mov r2, #0x2
    ldr r0, [r0, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043358:
    ldr r2, =data_0214b484
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
