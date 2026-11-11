/* compiler: 2.0/sp1p5  */
/* func_0212202c from projets/nintendogs-dachshund/src/auto/func_0212202c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020c8a38();
extern void func_020c8a54();
extern void func_020c9848();
extern void func_020cd3d0();
extern char data_02153708[];
extern char data_02153720[];
extern char func_020a0ad0[];
// clang-format off
asm void func_020a0840(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    ldr r1, =data_02153708
    mov r6, r0
    ldr r0, [r1, #0x0]
    mov r4, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02122148
    bl func_020c8a54
    movs r5, r0
    beq L_02122148
    bl func_020c8a38
    mov r4, r0
    str r4, [r6, #0x13c]
    str r5, [r6, #0x140]
    ldrsb r0, [r5, #0xe]
    cmp r0, #0x1
    beq L_02122084
    cmp r0, #0x2
    beq L_021220ec
    b L_02122138
L_02122084:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x140]
    bl func_020c9848
    cmp r0, #0x0
    beq L_02122138
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_021220b4
    cmp r0, #0x4
    beq L_021220d0
    b L_02122138
L_021220b4:
    ldr r1, =0xd23
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d0
    b L_02122138
L_021220d0:
    ldr r1, =0xd22
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d0
    b L_02122138
L_021220ec:
    ldrsh r0, [r4, #0x0]
    cmp r0, #0x3
    beq L_02122104
    cmp r0, #0x4
    beq L_02122120
    b L_02122138
L_02122104:
    ldr r1, =0xd2b
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d0
    b L_02122138
L_02122120:
    ldr r1, =0xd2a
    mov r2, #0x0
    ldr r3, =func_020a0ad0
    mov r0, #0x2
    str r2, [sp, #0x0]
    bl func_020cd3d0
L_02122138:
    add r1, r5, #0xf
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r4, #0x1
L_02122148:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
