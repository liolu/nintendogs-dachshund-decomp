#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_020a5fcc();
extern char data_0214da84[];
// clang-format off
asm void func_0202c0c0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r0, r7, #0x100
    ldrh r0, [r0, #0x12]
    mov r6, r1
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0xb
    bgt L_0202c134
    cmp r0, #0x0
    addge pc, pc, r0, lsl #0x2
    b L_0202c250
L_0202c104:
    b L_0202c250
    b L_0202c250
    b L_0202c250
    b L_0202c250
    b L_0202c14c
    b L_0202c14c
    b L_0202c14c
    b L_0202c14c
    b L_0202c14c
    b L_0202c250
    b L_0202c14c
    b L_0202c14c
L_0202c134:
    cmp r0, #0x6f
    bne L_0202c250
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c14c:
    ldrsb r4, [r7, #0x88]
    mov r5, #0x1
    bl func_020a5d54
    cmp r4, r0
    beq L_0202c174
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r4, r0
    movne r5, #0x0
L_0202c174:
    cmp r5, #0x0
    beq L_0202c240
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_0202c1ac
L_0202c188:
    b L_0202c1ac
    b L_0202c1bc
    b L_0202c1e8
    b L_0202c1ac
    b L_0202c1f8
    b L_0202c1f8
    b L_0202c1f8
    b L_0202c1f8
    b L_0202c1f8
L_0202c1ac:
    mov r1, r4
    mov r0, #0x5
    bl func_020a5a1c
    b L_0202c204
L_0202c1bc:
    ldrh r0, [r7, #0xf2]
    cmp r0, #0x1c
    bne L_0202c1d8
    mov r1, r4
    mov r0, #0xb
    bl func_020a5a1c
    b L_0202c204
L_0202c1d8:
    mov r1, r4
    mov r0, #0x7
    bl func_020a5a1c
    b L_0202c204
L_0202c1e8:
    mov r1, r4
    mov r0, #0x9
    bl func_020a5a1c
    b L_0202c204
L_0202c1f8:
    mov r1, r4
    mov r0, #0xd
    bl func_020a5a1c
L_0202c204:
    ldr r0, =data_0214da84
    ldrsb r1, [r7, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r1, r0
    bne L_0202c230
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202c240
L_0202c230:
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202c240:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c250:
    ldrsh r0, [r7, #0xf0]
    mov r1, #0x0
    cmp r0, #0xc
    ble L_0202c268
    cmp r0, #0x6f
    movlt r1, #0x1
L_0202c268:
    cmp r1, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    add r2, r7, #0xa8
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r1, r7, #0x100
    strh r0, [r1, #0x12]
    mov r1, #0x6f
    strh r1, [r7, #0xf0]
    add r2, r7, #0xa5
    swpb r1, r0, [r2]
    add r2, r7, #0xa3
    swpb r1, r0, [r2]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
