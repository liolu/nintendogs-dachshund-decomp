/* compiler: 2.0/sp1p5  */
/* func_020fb3b8 from projets/nintendogs-dachshund/src/auto/func_020fb3b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern char data_0212db24[];
extern char data_0212db25[];
extern char data_0212db26[];
extern char data_0212db2d[];
extern char data_0212db2e[];
extern char data_0212db2f[];
extern char data_0212db36[];
extern char data_0212db37[];
extern char data_0212db38[];
extern char data_0212db3f[];
extern char data_0212db40[];
extern char data_0212db41[];
extern char data_027c045c[];
extern char data_027c0464[];
extern char data_027c0468[];
// clang-format off
asm void func_020d73c0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r2, =data_027c045c
    ldrsb r8, [r2, #0x0]
    cmp r8, #0x3
    beq L_020fb3d8
    cmp r8, #0x1
    bne L_020fb43c
L_020fb3d8:
    mov r3, #0x24
    mul r6, r0, r3
    mov r2, #0x9
    mov r4, #0x3
    ldr r0, =data_0212db25
    mul r7, r8, r2
    ldr r3, =data_0212db24
    add r0, r0, r6
    mul r4, r1, r4
    add r2, r3, r6
    ldr r5, =data_0212db26
    add r1, r7, r2
    add r3, r5, r6
    add r0, r7, r0
    add r2, r7, r3
    ldrb r1, [r4, r1]
    ldrb r0, [r4, r0]
    ldrb r2, [r4, r2]
    add sp, sp, #0xc
    orr r0, r1, r0, lsl #0x5
    orr r0, r0, r2, lsl #0xa
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_020fb43c:
    ldr r2, =data_027c0464
    ldr ip, [r2, #0x0]
    cmp ip, #0x1e
    mov lr, ip, lsl #0x7
    subhs r2, ip, #0x1e
    movhs lr, r2, lsl #0x7
    ldr r2, =data_027c0468
    ldr r3, [r2, #0x0]
    cmp r3, #0x6
    bne L_020fb580
    cmp ip, #0x1e
    bhs L_020fb4f8
    mov r4, #0x24
    mov r2, #0x3
    mul r7, r0, r4
    ldr r4, =data_0212db40
    mul r2, r1, r2
    add r4, r4, r7
    ldr r5, =data_0212db3f
    ldr r8, =data_0212db25
    add r5, r5, r7
    ldr r9, =data_0212db41
    ldr r6, =data_0212db24
    ldrb r4, [r2, r4]
    add r11, sp, #0x1
    ldr r10, =data_0212db26
    swpb r4, r4, [r11]
    add r8, r8, r7
    ldrb r4, [r2, r8]
    add r8, sp, #0x7
    ldrb r5, [r2, r5]
    add r9, r9, r7
    add r6, r6, r7
    add r7, r10, r7
    add r10, sp, #0x0
    swpb r5, r5, [r10]
    ldrb r10, [r2, r9]
    ldrb r9, [r2, r6]
    ldrb r7, [r2, r7]
    add r5, sp, #0x2
    swpb r4, r4, [r8]
    add r2, sp, #0x8
    add r6, sp, #0x6
    swpb r10, r10, [r5]
    swpb r5, r9, [r6]
    swpb r4, r7, [r2]
    b L_020fb580
L_020fb4f8:
    mov r4, #0x24
    mov r2, #0x3
    mul r7, r0, r4
    ldr r4, =data_0212db25
    mul r2, r1, r2
    add r4, r4, r7
    ldr r5, =data_0212db24
    ldr r8, =data_0212db2e
    add r5, r5, r7
    ldr r9, =data_0212db26
    ldr r6, =data_0212db2d
    ldrb r4, [r2, r4]
    add r11, sp, #0x1
    ldr r10, =data_0212db2f
    swpb r4, r4, [r11]
    add r8, r8, r7
    ldrb r4, [r2, r8]
    add r8, sp, #0x7
    ldrb r5, [r2, r5]
    add r9, r9, r7
    add r6, r6, r7
    add r7, r10, r7
    add r10, sp, #0x0
    swpb r5, r5, [r10]
    ldrb r10, [r2, r9]
    ldrb r9, [r2, r6]
    ldrb r7, [r2, r7]
    add r5, sp, #0x2
    swpb r4, r4, [r8]
    add r2, sp, #0x8
    add r6, sp, #0x6
    swpb r10, r10, [r5]
    swpb r5, r9, [r6]
    swpb r4, r7, [r2]
L_020fb580:
    cmp r3, #0x12
    bne L_020fb6a4
    cmp ip, #0x1e
    bhs L_020fb61c
    mov r3, #0x24
    mul r6, r0, r3
    mov r2, #0x3
    ldr r0, =data_0212db37
    ldr r4, =data_0212db2d
    ldr r3, =data_0212db2e
    ldr r7, =data_0212db38
    mul r5, r1, r2
    add r11, r7, r6
    add r0, r0, r6
    ldr r9, =data_0212db2f
    ldr r8, =data_0212db36
    add r2, r9, r6
    add r1, r8, r6
    add r4, r4, r6
    add r3, r3, r6
    ldrb r0, [r5, r0]
    add r10, sp, #0x7
    ldrb r4, [r5, r4]
    add r6, sp, #0x0
    ldrb r3, [r5, r3]
    add r7, sp, #0x1
    ldrb r2, [r5, r2]
    add r8, sp, #0x2
    ldrb r1, [r5, r1]
    ldrb r11, [r5, r11]
    add r9, sp, #0x6
    swpb r0, r0, [r10]
    add r5, sp, #0x8
    swpb r4, r4, [r6]
    swpb r3, r3, [r7]
    swpb r2, r2, [r8]
    swpb r1, r1, [r9]
    swpb r0, r11, [r5]
    b L_020fb6a4
L_020fb61c:
    mov r3, #0x24
    mul r6, r0, r3
    mov r2, #0x3
    ldr r0, =data_0212db40
    ldr r4, =data_0212db36
    ldr r3, =data_0212db37
    ldr r7, =data_0212db41
    mul r5, r1, r2
    add r11, r7, r6
    add r0, r0, r6
    ldr r9, =data_0212db38
    ldr r8, =data_0212db3f
    add r2, r9, r6
    add r1, r8, r6
    add r4, r4, r6
    add r3, r3, r6
    ldrb r0, [r5, r0]
    add r10, sp, #0x7
    ldrb r4, [r5, r4]
    add r6, sp, #0x0
    ldrb r3, [r5, r3]
    add r7, sp, #0x1
    ldrb r2, [r5, r2]
    add r8, sp, #0x2
    ldrb r1, [r5, r1]
    ldrb r11, [r5, r11]
    add r9, sp, #0x6
    swpb r0, r0, [r10]
    add r5, sp, #0x8
    swpb r4, r4, [r6]
    swpb r3, r3, [r7]
    swpb r2, r2, [r8]
    swpb r1, r1, [r9]
    swpb r0, r11, [r5]
L_020fb6a4:
    add r7, sp, #0x6
    add r6, sp, #0x0
    add r5, sp, #0x3
    rsb r4, lr, #0x1000
    mov r8, #0x0
    mov r1, #0x1f
L_020fb6bc:
    ldrb r0, [r7, #0x0]
    ldrb r3, [r6, #0x0]
    add r8, r8, #0x1
    mul r2, r0, lr
    mla r0, r3, r4, r2
    mov r0, r0, asr #0xc
    cmp r0, #0x1f
    movgt r0, r1
    swpb r0, r0, [r5]
    cmp r8, #0x3
    add r7, r7, #0x1
    add r6, r6, #0x1
    add r5, r5, #0x1
    blt L_020fb6bc
    ldrb r1, [sp, #0x3]
    ldrb r0, [sp, #0x4]
    ldrb r2, [sp, #0x5]
    orr r0, r1, r0, lsl #0x5
    orr r0, r0, r2, lsl #0xa
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
