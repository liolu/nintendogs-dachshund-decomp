/* compiler: 2.0/sp1p5  */
/* func_02120028 from projets/nintendogs-dachshund/src/auto/func_02120028.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02002de4();
extern void func_02002dec();
extern void func_02003844();
extern void func_02004274();
extern void func_0200588c();
extern void func_0200668c();
extern void func_0200684c();
extern void func_02006850();
extern void func_02007554();
extern void func_020e98c4();
extern void func_020f07bc();
extern void func_020c2278();
extern void func_020c67ac();
extern void func_020cb90c();
extern void func_020cba34();
extern void func_020cd3d8();
extern void func_020cec68();
extern void func_0209e9b4();
extern char data_02129268[];
extern char data_02153738[];
extern char func_020066c0[];
extern char func_02006764[];
extern char func_0200682c[];
// clang-format off
asm void func_0209e844(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    bl func_02002dec
    bl func_02002de4
    mov r3, #0xff
    mov r2, #0x0
    add r1, sp, #0x4
    mov r5, r0
    strh r3, [sp, #0x4]
    strh r2, [sp, #0x6]
    bl func_02006850
    mov r0, r5
    mov r1, #0x4
    bl func_0200684c
    ldr r1, =func_0200682c
    mov r0, #0x0
    bl func_0200668c
    ldr r1, =func_02006764
    mov r0, #0x1
    bl func_0200668c
    ldr r1, =func_020066c0
    mov r0, #0x2
    bl func_0200668c
    mov r0, r5
    mov r1, #0x0
    bl func_020c2278
    mov r0, r5
    mov r1, #0x1
    bl func_020c67ac
    bl func_020e98c4
    cmp r0, #0x0
    beq L_021200b8
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_020cb90c
L_021200b8:
    mov r0, r5
    bl func_0209e9b4
    mov r4, r0
    mov r0, r5
    bl func_02007554
    mov r0, r5
    mov r1, #0x10
    bl func_02003844
    mov r2, #0x0
    strh r2, [r0, #0x0]
    strh r2, [r0, #0x2]
    str r2, [r0, #0x4]
    ldr r1, =data_02129268
    str r2, [r0, #0x8]
    ldrb r1, [r1, #0x0]
    add r2, r0, #0xc
    ldr r3, =data_02153738
    swpb r1, r1, [r2]
    str r0, [r3, #0x0]
    mov r0, r4
    bl func_02004274
    bl func_020cec68
    bl func_020cba34
    cmp r0, #0x0
    beq L_02120140
    mov r0, #0x0
    ldr r1, =0x4b1
    mov r2, r0
    mov r3, r0
    str r0, [sp, #0x0]
    bl func_020cd3d8
    mov r0, #0x43
    bl func_020f07bc
    b L_0212016c
L_02120140:
    ldr r1, =data_02153738
    mov r2, #0x0
    ldr r3, [r1, #0x0]
    mov r0, #0x1
    strh r0, [r3, #0x0]
    ldr r3, [r1, #0x0]
    ldr r1, =0x838
    strh r2, [r3, #0x2]
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_020cd3d8
L_0212016c:
    bl func_0200588c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
