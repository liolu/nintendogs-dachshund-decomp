#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b54();
extern void func_02034c88();
extern void func_020351a0();
extern void func_0203e280();
extern char data_0214b484[];
// clang-format off
asm void func_ov005_0215bccc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_020351a0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsb r0, [r4, #0xa7]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215c3d4
L_0215bcf4:
    b L_0215bd08
    b L_0215c158
    b L_0215be78
    b L_0215bfe4
    b L_0215c2c0
L_0215bd08:
    ldr r1, =data_0214b484
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
    b L_0215c3d4
L_0215bd40:
    b L_0215bd50
    b L_0215bd98
    b L_0215bde0
    b L_0215be28
L_0215bd50:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bd98:
    ldr r2, =0x153
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bde0:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x154
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215be28:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215be78:
    ldr r1, =data_0214b484
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
    b L_0215c3d4
L_0215beb0:
    b L_0215bec0
    b L_0215bf08
    b L_0215bf58
    b L_0215bf9c
L_0215bec0:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bf08:
    ldr r2, =0x161
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bf58:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0xb0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bf9c:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x154
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215bfe4:
    ldr r1, =data_0214b484
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
    b L_0215c3d4
L_0215c01c:
    b L_0215c02c
    b L_0215c074
    b L_0215c0c4
    b L_0215c114
L_0215c02c:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c074:
    ldr r2, =0x161
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c0c4:
    ldr r2, =0x162
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c114:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0xb0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c158:
    ldr r1, =data_0214b484
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
    b L_0215c3d4
L_0215c190:
    b L_0215c1a0
    b L_0215c1e4
    b L_0215c230
    b L_0215c278
L_0215c1a0:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x84
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xb0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c1e4:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xb0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c230:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c278:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x8d
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c2c0:
    ldr r1, =data_0214b484
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
    beq L_0215c308
    cmp r0, #0x1
    beq L_0215c350
    cmp r0, #0x2
    beq L_0215c394
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c308:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c350:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x6
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r2, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0xb0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0215c394:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x84
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0215c3d4:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
