#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203574c();
extern void func_02039588();
extern void func_020395c4();
extern void func_02039600();
extern void func_0203964c();
extern void func_0203968c();
extern void func_020396cc();
// clang-format off
asm void func_0201d1e0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r1, [r4, #0x8b]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0201d368
L_0201d1f8:
    b L_0201d364
    b L_0201d358
    b L_0201d34c
    b L_0201d260
    b L_0201d254
    b L_0201d210
L_0201d210:
    bl func_02039588
    mov r0, r4
    bl func_0203574c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r1, r4, #0x97
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r4, #0x94
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x93
    ldrsb r0, [r4, #0x94]
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d254:
    bl func_020395c4
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d260:
    bl func_02039600
    ldrsb r0, [r4, #0x93]
    cmp r0, #0x14
    addls pc, pc, r0, lsl #0x2
    b L_0201d368
L_0201d274:
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d2c8
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d368
    b L_0201d2c8
L_0201d2c8:
    add r0, r4, #0x100
    ldrsh r0, [r0, #0x54]
    cmp r0, #0xa
    bgt L_0201d308
    cmp r0, #0x7
    blt L_0201d2f8
    cmp r0, #0x7
    beq L_0201d32c
    cmp r0, #0xa
    beq L_0201d32c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d2f8:
    cmp r0, #0x1
    beq L_0201d32c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d308:
    cmp r0, #0x32
    bgt L_0201d320
    cmp r0, #0x32
    beq L_0201d32c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d320:
    cmp r0, #0x33
    ldmnefd sp!, {r4, lr}
    bxne lr
L_0201d32c:
    add r1, r4, #0x94
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x93
    ldrsb r0, [r4, #0x94]
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d34c:
    bl func_0203964c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d358:
    bl func_0203968c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d364:
    bl func_020396cc
L_0201d368:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
