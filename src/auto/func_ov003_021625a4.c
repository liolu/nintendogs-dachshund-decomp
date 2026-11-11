#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022d8c();
extern void func_02022dd0();
extern void func_02029204();
extern void func_0202d824();
extern void func_020324fc();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203b6e4();
extern void func_0203e2b8();
extern void func_0204248c();
extern void func_020e17d8();
extern void func_020e2e1c();
extern void func_ov003_02157d28();
// clang-format off
asm void func_ov003_021625a4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x4a8]
    ldr r1, [r4, #0x2a0]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x2a0]
    ldr r1, [r4, #0x414]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x414]
    ldr r1, [r4, #0x420]
    ldr r0, [r4, #0x4a8]
    sub r0, r1, r0
    str r0, [r4, #0x420]
    ldr r0, [r4, #0x4ac]
    add r0, r0, #0x1
    str r0, [r4, #0x4ac]
    bl func_020e2e1c
    cmp r0, #0x0
    beq L_02162608
    ldr r0, [r4, #0x4a8]
    bl func_020e17d8
L_02162608:
    mov r0, #0x64000
    str r0, [r4, #0x26c]
    mov r1, #0x0
    str r1, [r4, #0x270]
    mov r0, r4
    str r1, [r4, #0x274]
    bl func_02038edc
    add r0, r4, #0x26c
    add r3, r4, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x100
    bl func_02036fbc
    mov r0, r4
    mov r1, #0x47
    bl func_02022dd0
    cmp r0, #0x0
    bne L_021626f4
    mov r0, r4
    mov r1, #0x48
    bl func_02022dd0
    cmp r0, #0x0
    bne L_021626f4
    add r0, r4, #0x100
    ldrh r0, [r0, #0x20]
    cmp r0, #0x0
    movne r0, #0x0
    bne L_021626e4
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x0
    beq L_02162698
    cmp r0, #0x6f
    bne L_02162698
    mov r0, #0x0
    b L_021626e4
L_02162698:
    mov r0, r4
    bl func_02022d8c
    cmp r0, #0x0
    beq L_021626d8
    mov r0, r4
    bl func_0203b6e4
    ldrb ip, [r4, #0xc4]
    mov r1, #0x0
    mov r3, r0
    mov r0, r4
    mov r2, r1
    str ip, [sp, #0x0]
    mov ip, #0x1
    str ip, [sp, #0x4]
    bl func_0202d824
    b L_021626e4
L_021626d8:
    mov r0, r4
    bl func_02029204
    mov r0, #0x0
L_021626e4:
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
L_021626f4:
    mov r0, r4
    bl func_020324fc
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x53
    beq L_0216272c
    cmp r0, #0x54
    beq L_0216274c
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0216272c:
    ldrsb r0, [r4, #0x88]
    bl func_0204248c
    ldr r1, =0x47a
    mov r0, r4
    bl func_0203e2b8
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0216274c:
    bl func_ov003_02157d28
    mov r0, r4
    bl func_02029204
    ldrb r0, [r4, #0xc0]
    add r1, r4, #0xc0
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
