#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov003_02157ed4();
extern void func_ov003_02157f0c();
extern void func_ov003_02157f44();
// clang-format off
asm void func_ov003_0216899c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r0, [r4, #0xce]
    cmp r0, #0x1
    beq L_021689c4
    cmp r0, #0x2
    beq L_021689cc
    cmp r0, #0x3
    beq L_021689d8
    b L_021689dc
L_021689c4:
    bl func_ov003_02157f0c
    b L_021689dc
L_021689cc:
    mov r0, r1
    bl func_ov003_02157f44
    b L_021689dc
L_021689d8:
    bl func_ov003_02157ed4
L_021689dc:
    add r1, r4, #0xce
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
