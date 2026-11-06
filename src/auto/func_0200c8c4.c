#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cc34();
extern void func_02022dd0();
extern void func_02029204();
extern void func_0202c938();
extern void func_02034f40();
extern void func_020351a0();
extern void func_0203e280();
extern char data_0214b484[];
// clang-format off
asm void func_0200c8c4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02034f40
    cmp r0, #0x0
    bne L_0200ca20
    ldr r0, [r4, #0x488]
    cmp r0, #0x3c
    bge L_0200c974
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x3c
    bne L_0200ca20
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_0203e280
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr ip, [r0, #0x0]
    mov r2, #0x3
    ldr r3, [ip, #0x0]
    mov r0, r4
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x9c
    mov r1, r1, lsl #0x10
    mov r2, r1, asr #0x10
    mov r1, #0x0
    str r3, [ip, #0x0]
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    b L_0200ca20
L_0200c974:
    cmp r0, #0x3d
    bne L_0200c9ac
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    beq L_0200ca20
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x9a
    bl func_0203e280
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    b L_0200ca20
L_0200c9ac:
    cmp r0, #0x3e
    bne L_0200ca20
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x12c
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0200c9fc
    cmp r0, #0x1
    beq L_0200ca10
    b L_0200ca20
L_0200c9fc:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x95
    bl func_0203e280
    b L_0200ca20
L_0200ca10:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x9a
    bl func_0203e280
L_0200ca20:
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x6f
    beq L_0200ca5c
    mov r0, r4
    mov r1, #0x46
    bl func_02022dd0
    cmp r0, #0x0
    bne L_0200ca5c
    mov r0, r4
    mov r1, #0x4d
    bl func_02022dd0
    cmp r0, #0x0
    bne L_0200ca5c
    mov r0, r4
    bl func_02029204
L_0200ca5c:
    mov r0, r4
    bl func_0200cc34
    mov r0, r4
    mov r1, #0x0
    bl func_0202c938
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02029204
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
