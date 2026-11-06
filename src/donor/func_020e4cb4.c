/* compiler: 2.0/sp1p5  */
/* func_020e4cbc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020e4cbc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020039d0();
extern void func_02003b9c();
extern void func_020a5240();
extern void func_020b86c0();
extern void func_020b8b0c();
extern void func_020b8dbc();
extern void func_020bdb98();
extern void func_020bdca0();
extern void func_020bdd48();
extern void func_020c99b8();
extern void func_020cd3d0();
extern void func_020f07b4();
extern char data_0212fe50[];
extern char data_0212fe60[];
extern char data_0212fe68[];
extern char data_0214b024[];
extern char data_02153740[];
extern char data_02154c70[];
// clang-format off
asm void func_020e4cb4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xd4
    mov r4, r0
    ldr r0, [r4, #0x4]
    add r5, r4, #0x910
    str r0, [r4, #0x0]
    ldr r0, [r4, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_020e4ff4
L_020e4ce4:
    b L_020e4cf8
    b L_020e4d50
    b L_020e4ec8
    b L_020e4f38
    b L_020e4f84
L_020e4cf8:
    ldr r1, [r4, #0xc]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    movle r0, #0x0
    strle r0, [r4, #0xc]
    ldr r0, [r4, #0x10]
    movgt r2, #0x0
    add r0, r0, #0xb60
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x10000
    movge r0, #0x10000
    movlt r2, #0x0
    strge r0, [r4, #0x10]
    cmp r2, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x4]
    b L_020e4ff4
L_020e4d50:
    ldr r0, =data_02153740
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x4d0]
    cmp r0, #0x0
    beq L_020e4ff4
    ldr r1, =data_0214b024
    mov r0, #0x2
    ldrb r6, [r1, #0x0]
    ldrb r5, [r1, #0x1]
    mov r1, r6
    mov r2, r5
    bl func_020b86c0
    ldr r1, =data_0214b024
    mov r7, r0
    ldrh r0, [r1, #0x2]
    ands r0, r0, #0x2
    beq L_020e4ff4
    cmp r7, #0x0
    bne L_020e4e10
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    str r2, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    add r0, r4, #0x34
    mov r1, #0x2
    mov r3, #0x1
    str r2, [sp, #0x18]
    bl func_020bdd48
    mov r1, r6, lsl #0x10
    mov r2, r5, lsl #0x10
    add r0, r4, #0x34
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020bdca0
    add r2, r4, #0x70
    mov r0, #0x0
    swpb r1, r0, [r2]
    mov r1, #0x2
    str r1, [r4, #0x4]
    bl func_020f07b4
    b L_020e4ff4
L_020e4e10:
    cmp r7, #0x1
    bne L_020e4e8c
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    mov r2, #0x1
    str r0, [sp, #0x10]
    mov r7, #0xa
    str r7, [sp, #0x14]
    mov r3, r2
    add r0, r4, #0x34
    mov r1, #0x2
    str r7, [sp, #0x18]
    bl func_020bdd48
    mov r1, r6, lsl #0x10
    mov r2, r5, lsl #0x10
    add r0, r4, #0x34
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020bdca0
    add r2, r4, #0x70
    mov r0, #0x1
    swpb r1, r0, [r2]
    mov r1, #0x2
    str r1, [r4, #0x4]
    bl func_020f07b4
    b L_020e4ff4
L_020e4e8c:
    ldr r6, =data_0212fe60
    mov r8, #0x0
    mov r5, #0x32
L_020e4e98:
    ldrb r0, [r6, #0x0]
    cmp r7, r0
    bne L_020e4eb4
    add r1, r8, #0x1
    mov r0, r5
    strh r1, [r4, #0xcc]
    bl func_020f07b4
L_020e4eb4:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r6, r6, #0x1
    blt L_020e4e98
    b L_020e4ff4
L_020e4ec8:
    add r0, r4, #0x34
    bl func_020bdb98
    cmp r0, #0x0
    beq L_020e4ff4
    add r0, sp, #0x1c
    bl func_020c99b8
    ldrh r0, [sp, #0x74]
    cmp r0, #0x9
    blo L_020e4f1c
    ldrh r0, [r4, #0xcc]
    cmp r0, #0x9
    bhs L_020e4f1c
    mov r2, #0x0
    ldr r1, =0x2f79
    mov r3, r2
    mov r0, #0xb
    str r2, [sp, #0x0]
    bl func_020cd3d0
    mov r0, #0x3
    str r0, [r4, #0x4]
    b L_020e4ff4
L_020e4f1c:
    mov r0, #0x14
    bl func_02003b9c
    mov r1, #0x4
    mov r0, #0x31
    str r1, [r4, #0x4]
    bl func_020f07b4
    b L_020e4ff4
L_020e4f38:
    ldr r0, =data_02154c70
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0xa4]
    cmp r0, #0x0
    beq L_020e4ff4
    ldrsh r0, [r1, #0x9a]
    cmp r0, #0x1
    bne L_020e4f68
    add r0, sp, #0x78
    bl func_020c99b8
    ldrh r0, [sp, #0xd0]
    strh r0, [r4, #0xcc]
L_020e4f68:
    mov r0, #0x14
    bl func_02003b9c
    mov r1, #0x4
    mov r0, #0x31
    str r1, [r4, #0x4]
    bl func_020f07b4
    b L_020e4ff4
L_020e4f84:
    mov r6, #0x1
    bl func_020039d0
    cmp r0, #0x0
    ldr r1, [r4, #0xc]
    ldr r0, =0x6aaa
    moveq r6, #0x0
    add r0, r1, r0
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0x64000
    movge r0, #0x64000
    strge r0, [r4, #0xc]
    ldr r1, [r4, #0x10]
    ldr r0, =0x1111
    movlt r6, #0x0
    sub r0, r1, r0
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r6, #0x0
    strle r0, [r4, #0x10]
    cmp r6, #0x0
    beq L_020e4ff4
    mvn r1, #0x0
    mov r0, #0x11
    str r1, [r5, #0x0]
    bl func_020a5240
L_020e4ff4:
    ldr r8, =data_0212fe68
    mov r9, #0x0
    mov r5, r9
    mov r7, #0x2
    mov r6, #0x1
L_020e5008:
    ldrb r1, [r8, #0x0]
    mov r0, r7
    mov r2, r6
    bl func_020b8b0c
    ldr r0, [r4, #0xc]
    ldrb r1, [r8, #0x0]
    mov r3, r0, lsl #0x4
    mov r0, r7
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_020b8dbc
    add r9, r9, #0x1
    cmp r9, #0x14
    add r8, r8, #0x1
    blt L_020e5008
    ldrh r5, [r4, #0xcc]
    cmp r5, #0x1
    blo L_020e50c8
    cmp r5, #0x8
    bhi L_020e50c8
    mov r0, #0x2
    mov r1, #0x14
    mov r2, #0x1
    bl func_020b8b0c
    sub r5, r5, #0x1
    add r2, r4, r5, lsl #0x2
    ldrsh r0, [r2, #0x16]
    ldr r1, [r4, #0xc]
    ldrsh r2, [r2, #0x14]
    add r0, r0, r1, asr #0xc
    mov r0, r0, lsl #0x10
    mov r3, r0, asr #0x10
    mov r0, #0x2
    mov r1, #0x14
    bl func_020b8dbc
    ldr r0, [r4, #0xc]
    ldr r1, =data_0212fe50
    mov r0, r0, asr #0xc
    add r0, r0, #0x2
    mov r3, r0, lsl #0x10
    mov r0, #0x2
    ldrb r1, [r1, r5]
    mov r2, r0
    mov r3, r3, asr #0x10
    bl func_020b8dbc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_020e50c8:
    mov r0, #0x2
    mov r1, #0x14
    mov r2, #0x0
    bl func_020b8b0c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
