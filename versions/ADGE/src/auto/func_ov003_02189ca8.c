#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039588();
extern void func_020395c4();
extern void func_02039600();
extern void func_0203968c();
extern void func_020396cc();
extern void func_0203e5ac();
extern void func_ov003_02189e10();
// clang-format off
asm void func_ov003_02189ca8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldrsb r2, [r4, #0x8b]
    cmp r2, #0x5
    addls pc, pc, r2, lsl #0x2
    b L_02189e04
L_02189cc4:
    b L_02189dd8
    b L_02189da0
    b L_02189d5c
    b L_02189d4c
    b L_02189d14
    b L_02189cdc
L_02189cdc:
    mov ip, #0x2
    mov r2, #0x3c
    mov r3, #0xc8
    str ip, [sp, #0x0]
    bl func_ov003_02189e10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02039588
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02189d14:
    mov ip, #0x1
    mov r2, #0x3c
    mov r3, #0x32
    str ip, [sp, #0x0]
    bl func_ov003_02189e10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_020395c4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02189d4c:
    bl func_02039600
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02189d5c:
    add r1, r4, #0x100
    ldrh r1, [r1, #0x1e]
    cmp r1, #0x14
    bls L_02189d7c
    mov r1, #0x2
    mov r2, #0x10
    bl func_0203e5ac
    b L_02189d88
L_02189d7c:
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e5ac
L_02189d88:
    add r1, r4, #0x97
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02189da0:
    mov ip, #0x0
    mov r2, #0x1e
    mov r3, #0x6
    str ip, [sp, #0x0]
    bl func_ov003_02189e10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_0203968c
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02189dd8:
    mov ip, #0x0
    mov r2, #0x3c
    mov r3, #0xc
    str ip, [sp, #0x0]
    bl func_ov003_02189e10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_020396cc
L_02189e04:
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
