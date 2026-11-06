#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02105dc4();
extern void func_021060d4();
extern void func_0210634c();
extern char data_0214b484[];
// clang-format off
asm void func_0202c238(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r0, r7, #0x100
    ldrh r2, [r0, #0x20]
    mov r6, r1
    cmp r2, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsh r1, [r7, #0xf0]
    cmp r1, #0x8
    bgt L_0202c2a0
    cmp r1, #0x0
    addge pc, pc, r1, lsl #0x2
    b L_0202c2a4
L_0202c27c:
    b L_0202c2a4
    b L_0202c2a4
    b L_0202c2a4
    b L_0202c2a4
    b L_0202c2b4
    b L_0202c3a4
    b L_0202c3e8
    b L_0202c42c
    b L_0202c46c
L_0202c2a0:
    cmp r1, #0x6f
L_0202c2a4:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c2b4:
    ldrsb r4, [r7, #0x88]
    mov r5, #0x1
    bl func_021060d4
    cmp r4, r0
    beq L_0202c2dc
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r4, r0
    movne r5, #0x0
L_0202c2dc:
    cmp r5, #0x0
    beq L_0202c38c
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_0202c314
L_0202c2f0:
    b L_0202c314
    b L_0202c324
    b L_0202c334
    b L_0202c314
    b L_0202c344
    b L_0202c344
    b L_0202c344
    b L_0202c344
    b L_0202c344
L_0202c314:
    mov r1, r4
    mov r0, #0x5
    bl func_02105dc4
    b L_0202c350
L_0202c324:
    mov r1, r4
    mov r0, #0x7
    bl func_02105dc4
    b L_0202c350
L_0202c334:
    mov r1, r4
    mov r0, #0x9
    bl func_02105dc4
    b L_0202c350
L_0202c344:
    mov r1, r4
    mov r0, #0xb
    bl func_02105dc4
L_0202c350:
    ldr r0, =data_0214b484
    ldrsb r1, [r7, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r1, r0
    bne L_0202c37c
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202c38c
L_0202c37c:
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202c38c:
    add r0, r6, #0xec
    strh r0, [r7, #0xe8]
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c3a4:
    ldr r1, =0x122
    add r2, r7, #0xbe
    add r1, r6, r1
    mov r3, #0x0
    strh r1, [r7, #0xe8]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x20]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xc4
    swpb r0, r3, [r1]
    add r1, r7, #0xc5
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c3e8:
    ldr r1, =0x12b
    add r2, r7, #0xbe
    add r1, r6, r1
    mov r3, #0x0
    strh r1, [r7, #0xe8]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x20]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xc4
    swpb r0, r3, [r1]
    add r1, r7, #0xc5
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c42c:
    add r1, r6, #0x134
    add r2, r7, #0xbe
    mov r3, #0x0
    strh r1, [r7, #0xe8]
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    mov r1, #0x6f
    strh r3, [r0, #0x20]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xc4
    swpb r0, r3, [r1]
    add r1, r7, #0xc5
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c46c:
    ldr r1, =0x119
    add r2, r7, #0xbe
    add r1, r6, r1
    strh r1, [r7, #0xe8]
    mov r3, #0x0
    swpb r1, r3, [r2]
    mov r1, #0x6f
    strh r3, [r0, #0x20]
    strh r1, [r7, #0xf0]
    add r1, r7, #0xc4
    swpb r0, r3, [r1]
    add r1, r7, #0xc5
    swpb r0, r3, [r1]
    mov r0, #0x1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
