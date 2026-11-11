#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020352ec();
extern void func_0203e5ac();
extern char data_0213aa2d[];
extern char data_0214da84[];
// clang-format off
asm void func_ov005_0215e07c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r4, r7, #0x100
    ldrh ip, [r4, #0x1e]
    mov r6, r1
    mov r5, r2
    mov r4, r3
    cmp ip, #0x3c
    mov r1, #0x0
    bls L_0215e248
    ldr r1, [r7, #0x9e8]
    mov r2, #0x64
    ldrh ip, [r1, #0x0]
    ldr r3, =data_0213aa2d
    mov r1, #0x3
    mul r2, ip, r2
    ldrsb r2, [r3, r2]
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e5ac
    add r1, r7, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r0, r7, #0x100
    ldrsh r0, [r0, #0x56]
    cmp r0, #0x12
    bgt L_0215e124
    cmp r0, #0x12
    bge L_0215e140
    cmp r0, #0x4
    bgt L_0215e240
    cmp r0, #0x0
    blt L_0215e240
    cmp r0, #0x0
    beq L_0215e18c
    cmp r0, #0x3
    beq L_0215e18c
    cmp r0, #0x4
    beq L_0215e140
    b L_0215e240
L_0215e124:
    cmp r0, #0x14
    bgt L_0215e138
    cmp r0, #0x14
    beq L_0215e140
    b L_0215e240
L_0215e138:
    cmp r0, #0x15
    bne L_0215e240
L_0215e140:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r0, r6, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    bne L_0215e240
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e5ac
    b L_0215e240
L_0215e18c:
    mov r0, r7
    mov r1, #0x2
    mov r2, #0xa
    bl func_020352ec
    cmp r0, #0x0
    beq L_0215e240
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r5, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r2, [r0, #0x0]
    adds r0, r4, r1
    beq L_0215e1f4
    cmp r0, #0x1
    beq L_0215e208
    cmp r0, #0x2
    beq L_0215e21c
    b L_0215e230
L_0215e1f4:
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x15
    bl func_0203e5ac
    b L_0215e240
L_0215e208:
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x12
    bl func_0203e5ac
    b L_0215e240
L_0215e21c:
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e5ac
    b L_0215e240
L_0215e230:
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
L_0215e240:
    mov r1, #0x1
    b L_0215e26c
L_0215e248:
    cmp ip, #0x14
    bls L_0215e26c
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
    add r1, r7, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r1, #0x1
L_0215e26c:
    mov r0, r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
