#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202daec();
extern void func_020350fc();
extern void func_0203e5ac();
extern void func_ov004_0216c608();
extern char data_0215a064[];
// clang-format off
asm void func_ov004_02168094(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_ov004_0216c608
    cmp r0, #0x0
    bne L_021680c4
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    movne r0, #0x0
    strne r0, [r4, #0x488]
L_021680c4:
    ldr r0, [r4, #0x488]
    cmp r0, #0x64
    bge L_02168178
    ldr r0, =data_0215a064
    add r3, sp, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_0202daec
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02168178
L_02168100:
    b L_0216811c
    b L_0216814c
    b L_0216814c
    b L_0216814c
    b L_0216811c
    b L_0216811c
    b L_0216811c
L_0216811c:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x9
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r3, r4, #0x3b4
    add r0, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_02168178
L_0216814c:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x6
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0xa
    swpb r0, r0, [r1]
    add r3, r4, #0x3b4
    add r0, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02168178:
    mov r0, r4
    bl func_020350fc
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e5ac
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
