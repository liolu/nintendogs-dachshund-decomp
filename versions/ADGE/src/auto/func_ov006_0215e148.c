#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b9c();
extern void func_02034e44();
extern void func_0203535c();
extern void func_0203e5ac();
extern char data_0214da84[];
// clang-format off
asm void func_ov006_0215e148(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0203535c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsb r0, [r4, #0x8e]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215e850
L_0215e170:
    b L_0215e184
    b L_0215e5d4
    b L_0215e2f4
    b L_0215e460
    b L_0215e73c
L_0215e184:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0215e850
L_0215e1bc:
    b L_0215e1cc
    b L_0215e214
    b L_0215e25c
    b L_0215e2a4
L_0215e1cc:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e214:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x154
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e25c:
    ldr r2, =0x155
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e2a4:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e2f4:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0215e850
L_0215e32c:
    b L_0215e33c
    b L_0215e384
    b L_0215e3d4
    b L_0215e418
L_0215e33c:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e384:
    ldr r2, =0x162
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e3d4:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0x97
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e418:
    ldr r2, =0x155
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e460:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0215e850
L_0215e498:
    b L_0215e4a8
    b L_0215e4f0
    b L_0215e540
    b L_0215e590
L_0215e4a8:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e4f0:
    ldr r2, =0x162
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e540:
    ldr r2, =0x163
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e590:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0x97
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e5d4:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r1, [r2, #0x0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0215e850
L_0215e60c:
    b L_0215e61c
    b L_0215e660
    b L_0215e6ac
    b L_0215e6f4
L_0215e61c:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x84
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x97
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e660:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x97
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e6ac:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e6f4:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x8d
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e73c:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1d
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0215e784
    cmp r0, #0x1
    beq L_0215e7cc
    cmp r0, #0x2
    beq L_0215e810
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e784:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e7cc:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0x97
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215e810:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x84
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0215e850:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
