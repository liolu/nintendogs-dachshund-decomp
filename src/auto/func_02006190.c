#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006240();
extern char data_0214afe0[];
// clang-format off
asm void func_02006190(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214afe0
    ldr ip, [r1, #0x14]
    ldr lr, [r1, #0x8]
    ldr r2, [r1, #0x4]
    add r3, lr, ip
    cmp r3, r2
    addhi sp, sp, #0x4
    ldmhifd sp!, {r4, r5, lr}
    bxhi lr
    cmp ip, #0x1
    bne L_0200620c
    ldrh r3, [r1, #0x18]
    mov r5, #0x1
    mov r4, r5
    mov ip, #0x0
L_020061d4:
    mov r1, r5, lsl #0x10
    mov r2, r1, lsr #0x10
    ands r1, r2, r3
    beq L_020061f8
    ands r1, r2, r0
    mov r1, r4, lsl #0x1
    orrne ip, ip, r4
    ands r4, r1, #0xff
    beq L_02006204
L_020061f8:
    mov r5, r5, lsl #0x1
    cmp r5, #0x10000
    blo L_020061d4
L_02006204:
    swpb r0, ip, [lr]
    b L_02006210
L_0200620c:
    strh r0, [lr, #0x0]
L_02006210:
    mov r0, #0x1
    mov r1, r0
    bl func_02006240
    ldr r0, =data_0214afe0
    ldr r2, [r0, #0x8]
    ldr r1, [r0, #0xc]
    cmp r2, r1
    strhi r2, [r0, #0xc]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
