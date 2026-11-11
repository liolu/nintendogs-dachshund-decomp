#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202d9e0();
extern void func_02034f40();
extern void func_0203e280();
extern void func_ov003_0216a084();
extern char data_02153720[];
// clang-format off
asm void func_ov003_02165bc4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_ov003_0216a084
    cmp r0, #0x0
    bne L_02165bf4
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    movne r0, #0x0
    strne r0, [r4, #0x4ac]
L_02165bf4:
    ldr r0, [r4, #0x4ac]
    cmp r0, #0x64
    bge L_02165ca8
    ldr r0, =data_02153720
    add r3, sp, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_0202d9e0
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02165ca8
L_02165c30:
    b L_02165c4c
    b L_02165c7c
    b L_02165c7c
    b L_02165c7c
    b L_02165c4c
    b L_02165c4c
    b L_02165c4c
L_02165c4c:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x9
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r3, r4, #0x3d8
    add r0, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_02165ca8
L_02165c7c:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x6
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0xa
    swpb r0, r0, [r1]
    add r3, r4, #0x3d8
    add r0, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02165ca8:
    mov r0, r4
    bl func_02034f40
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e280
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
