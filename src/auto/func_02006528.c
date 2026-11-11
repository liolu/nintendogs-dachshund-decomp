#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006f74();
extern char data_0214b024[];
// clang-format off
asm void func_02006528(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    add r0, sp, #0x0
    mov r1, #0x1
    bl func_02006f74
    ldrh r5, [sp, #0x4]
    cmp r5, #0x0
    bne L_02006598
    ldr r2, =data_0214b024
    ldrh ip, [sp, #0x0]
    ldrh r1, [r2, #0x2]
    ldrh lr, [r2, #0x0]
    mov r0, #0x0
    strh r0, [r2, #0x2]
    ldrh r4, [sp, #0x2]
    strh r1, [sp, #0xa]
    swpb r0, ip, [r2]
    add r1, r2, #0x1
    ldrh r3, [sp, #0xa]
    swpb r0, r4, [r1]
    strh lr, [sp, #0x8]
    ands r0, r3, #0x1
    ldrneh r0, [r2, #0x2]
    add sp, sp, #0x14
    orrne r0, r0, #0x4
    strneh r0, [r2, #0x2]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02006598:
    ldrh r0, [sp, #0x6]
    cmp r0, #0x0
    addne sp, sp, #0x14
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r2, =data_0214b024
    ldrh ip, [sp, #0x0]
    ldrh r4, [r2, #0x0]
    ldrh lr, [r2, #0x2]
    mov r0, #0x8000
    ldrh r3, [sp, #0x2]
    strh r0, [r2, #0x2]
    swpb r0, ip, [r2]
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    cmp r5, #0x1
    ldreqh r0, [r2, #0x2]
    strh lr, [sp, #0xe]
    strh r4, [sp, #0xc]
    orreq r0, r0, #0x1
    streqh r0, [r2, #0x2]
    ldrh r0, [sp, #0xe]
    ands r0, r0, #0x1
    ldreq r0, =data_0214b024
    ldreqh r1, [r0, #0x2]
    orreq r1, r1, #0x2
    streqh r1, [r0, #0x2]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
