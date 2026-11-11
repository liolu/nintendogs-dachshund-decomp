#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020062a4();
extern char data_0214d5e0[];
// clang-format off
asm void func_020061f4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214d5e0
    ldr ip, [r1, #0x14]
    ldr lr, [r1, #0x8]
    ldr r2, [r1, #0x4]
    add r3, lr, ip
    cmp r3, r2
    addhi sp, sp, #0x4
    ldmhifd sp!, {r4, r5, lr}
    bxhi lr
    cmp ip, #0x1
    bne L_02006270
    ldrh r3, [r1, #0x18]
    mov r5, #0x1
    mov r4, r5
    mov ip, #0x0
L_02006238:
    mov r1, r5, lsl #0x10
    mov r2, r1, lsr #0x10
    ands r1, r2, r3
    beq L_0200625c
    ands r1, r2, r0
    mov r1, r4, lsl #0x1
    orrne ip, ip, r4
    ands r4, r1, #0xff
    beq L_02006268
L_0200625c:
    mov r5, r5, lsl #0x1
    cmp r5, #0x10000
    blo L_02006238
L_02006268:
    swpb r0, ip, [lr]
    b L_02006274
L_02006270:
    strh r0, [lr, #0x0]
L_02006274:
    mov r0, #0x1
    mov r1, r0
    bl func_020062a4
    ldr r0, =data_0214d5e0
    ldr r2, [r0, #0x8]
    ldr r1, [r0, #0xc]
    cmp r2, r1
    strhi r2, [r0, #0xc]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
