/* compiler: 2.0/sp1p5  */
/* func_0200cf38 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0200cf38.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_01ffda04();
extern void func_0200c3ec();
extern void func_02022dd0();
extern void func_020280ec();
extern void func_02029204();
extern void func_0202f8a4();
extern void func_02034f40();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e2b8();
extern void func_02040b14();
extern void func_02042370();
extern void func_02105dc4();
extern void func_0210634c();
extern char data_0214b47c[];
// clang-format off
asm void func_0200cf38(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, #0x0
    mov r7, r0
    mov r1, r6
    mov r0, #0xc
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_0200d05c
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r3, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r3, #0x18]
    adds r5, r1, r0
    beq L_0200d05c
    ldrsh r2, [r5, #0x0]
    ldr r1, [r7, #0x488]
    mov r0, #0x44
    add r1, r2, r1
    smulbb r0, r1, r0
    ldr r1, [r3, #0x1c]
    adds r4, r1, r0
    beq L_0200d05c
    ldr r0, [r7, #0x48c]
    mov r1, #0x800
    add r0, r0, #0x20
    str r0, [r7, #0x48c]
    ldr r0, [r7, #0x930]
    ldr r3, [r4, #0x4]
    ldr r2, [r7, #0x48c]
    sub r3, r3, r0
    smull r8, r2, r3, r2
    adds r3, r8, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [r7, #0x930]
    add r3, r7, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r7
    bl func_02038edc
    ldr r1, =0x102
    mov r0, r7
    bl func_02036fbc
    mov r8, r0
    mov r0, r7
    bl func_020280ec
    mov r1, #0x24
    mul r1, r0, r1
    cmp r8, r1
    bge L_0200d05c
    ldr r1, [r7, #0x488]
    mov r0, r6
    add r1, r1, #0x1
    str r1, [r7, #0x488]
    str r0, [r7, #0x48c]
    ldr r0, [r4, #0x24]
    cmp r0, #0x1
    bne L_0200d04c
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    ldrsb r1, [r7, #0x88]
    mov r0, #0xd
    bl func_02105dc4
L_0200d04c:
    ldrsh r0, [r5, #0x2]
    ldr r1, [r7, #0x488]
    cmp r1, r0
    movge r6, #0x1
L_0200d05c:
    ldrb r0, [r7, #0xc0]
    add r1, r7, #0xc0
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x6f
    beq L_0200d094
    mov r0, r7
    mov r1, #0x4d
    bl func_02022dd0
    cmp r0, #0x0
    bne L_0200d094
    mov r0, r7
    bl func_02029204
L_0200d094:
    cmp r6, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    mov r0, #0x0
    str r0, [r7, #0x930]
    ldrb r1, [r7, #0xcc]
    add r2, r7, #0xcc
    mov r0, r7
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    add r2, r7, #0xc0
    ldrb r1, [r7, #0xc0]
    orr r1, r1, #0x10
    swpb r1, r1, [r2]
    bl func_02029204
    mov r4, #0x0
L_0200d0d4:
    mov r0, r4
    bl func_01ffda04
    cmp r0, #0x0
    beq L_0200d0e8
    bl func_02040b14
L_0200d0e8:
    add r0, r4, #0x1
    mov r0, r0, lsl #0x18
    mov r4, r0, asr #0x18
    cmp r4, #0x3
    blt L_0200d0d4
    mov r0, r7
    bl func_02034f40
    cmp r0, #0x0
    beq L_0200d120
    ldr r1, =0x47a
    mov r0, r7
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0200d120:
    ldrb r0, [r7, #0xcc]
    add r1, r7, #0xcc
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
    ldrb r0, [r7, #0xcc]
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldrsb r0, [r7, #0x88]
    bl func_02042370
    mov r0, #0x1
    mvn r1, #0x0
    bl func_02105dc4
    bl func_0210634c
    add r2, r0, #0x88
    mov r1, #0x0
    mov r0, r7
    str r1, [r2, #0x6c]
    bl func_0202f8a4
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
