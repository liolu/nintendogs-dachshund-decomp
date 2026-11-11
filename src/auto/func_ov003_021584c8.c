#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov003_0216b888[];
extern char data_ov003_0216ba4c[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_021584c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    ldr r3, =data_ov003_0216be20
    mov ip, r2
    ldr r3, [r3, #0x0]
    ldr r4, =data_ov003_0216b888
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    mvn lr, #0x0
    add r2, r3, #0x2000
    ldrb r5, [r2, #0x305]
    ldrb r3, [r2, #0x306]
    add r2, r4, r5, lsl #0x2
    add r2, r2, r3, lsl #0x1
    ldrsb r0, [r0, r2]
    swpb r0, r0, [r1]
    ldrsb r6, [r1, #0x0]
    cmp r6, lr
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r5, =data_ov003_0216ba4c
    add r4, sp, #0x0
    ldmia r5!, {r0, r1, r2, r3}
    mov lr, r4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, [lr, r6, lsl #0x2]
    str r0, [ip, #0x0]
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
