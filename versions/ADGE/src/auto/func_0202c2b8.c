#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_020a5fcc();
extern char data_0214da84[];
// clang-format off
asm void func_0202c2b8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r0, r7, #0x100
    ldrh r2, [r0, #0x12]
    mov r6, r1
    cmp r2, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsh r1, [r7, #0xf0]
    cmp r1, #0x8
    bgt L_0202c320
    cmp r1, #0x0
    addge pc, pc, r1, lsl #0x2
    b L_0202c324
L_0202c2fc:
    b L_0202c324
    b L_0202c324
    b L_0202c324
    b L_0202c324
    b L_0202c334
    b L_0202c440
    b L_0202c484
    b L_0202c4c8
    b L_0202c508
L_0202c320:
    cmp r1, #0x6f
L_0202c324:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c334:
    ldrsb r4, [r7, #0x88]
    mov r5, #0x1
    bl func_020a5d54
    cmp r4, r0
    beq L_0202c35c
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r4, r0
    movne r5, #0x0
L_0202c35c:
    cmp r5, #0x0
    beq L_0202c428
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_0202c394
L_0202c370:
    b L_0202c394
    b L_0202c3a4
    b L_0202c3d0
    b L_0202c394
    b L_0202c3e0
    b L_0202c3e0
    b L_0202c3e0
    b L_0202c3e0
    b L_0202c3e0
L_0202c394:
    mov r1, r4
    mov r0, #0x5
    bl func_020a5a1c
    b L_0202c3ec
L_0202c3a4:
    ldrh r0, [r7, #0xf2]
    cmp r0, #0x1c
    bne L_0202c3c0
    mov r1, r4
    mov r0, #0xb
    bl func_020a5a1c
    b L_0202c3ec
L_0202c3c0:
    mov r1, r4
    mov r0, #0x7
    bl func_020a5a1c
    b L_0202c3ec
L_0202c3d0:
    mov r1, r4
    mov r0, #0x9
    bl func_020a5a1c
    b L_0202c3ec
L_0202c3e0:
    mov r1, r4
    mov r0, #0xd
    bl func_020a5a1c
L_0202c3ec:
    ldr r0, =data_0214da84
    ldrsb r1, [r7, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x7]
    cmp r1, r0
    bne L_0202c418
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202c428
L_0202c418:
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202c428:
    add r0, r6, #0xec
    strh r0, [r7, #0xea]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c440:
    ldr r1, =0x122
    add r2, r7, #0xa8
    add r1, r6, r1
    mov r3, #0x0
    strh r1, [r7, #0xea]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x12]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xa5
    swpb r0, r3, [r1]
    add r1, r7, #0xa3
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c484:
    ldr r1, =0x12b
    add r2, r7, #0xa8
    add r1, r6, r1
    mov r3, #0x0
    strh r1, [r7, #0xea]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x12]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xa5
    swpb r0, r3, [r1]
    add r1, r7, #0xa3
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c4c8:
    add r1, r6, #0x134
    add r2, r7, #0xa8
    mov r3, #0x0
    strh r1, [r7, #0xea]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x12]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xa5
    swpb r0, r3, [r1]
    add r1, r7, #0xa3
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c508:
    ldr r1, =0x119
    add r2, r7, #0xa8
    add r1, r6, r1
    strh r1, [r7, #0xea]
    mov r3, #0x0
    swpb r1, r3, [r2]
    mov r1, #0x6f
    strh r3, [r0, #0x12]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xa5
    swpb r0, r3, [r1]
    add r1, r7, #0xa3
    swpb r0, r3, [r1]
    mov r0, #0x1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
