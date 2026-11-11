#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020e1758();
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_02158308(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    add r1, r1, #0x3000
    ldr r3, [r1, #0x6c4]
    add r1, r3, #0x2200
    ldrsb r2, [r1, #0x74]
    cmp r2, #0x0
    blt L_0215a7e0
    add r1, r3, r2
    add r1, r1, #0x2000
    add r2, r1, #0x270
    mov r1, #0x0
    swpb r1, r1, [r2]
    mvn r2, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, #0x274
    swpb r0, r2, [r1]
    b L_0215a85c
L_0215a7e0:
    ldrsb r1, [r1, #0x95]
    cmp r1, #0x0
    blt L_0215a85c
    add r2, r3, r1
    ldr r1, =0x285
    add r2, r2, #0x2000
    add r2, r2, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r2, =0x28d
    ldr r1, [r0, #0x0]
    mov lr, #0x1
    add r1, r1, #0x3000
    ldr r4, [r1, #0x6c4]
    ldr ip, =0x295
    add r1, r4, #0x2200
    ldrsb r3, [r1, #0x95]
    mvn r1, #0x0
    add r3, r4, r3
    add r3, r3, #0x2000
    add r3, r3, r2
    swpb r2, lr, [r3]
    ldr r2, [r0, #0x0]
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, #0x2000
    add r3, r2, ip
    swpb r2, r1, [r3]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    str r1, [r0, #0x3ac]
L_0215a85c:
    ldr r0, =data_ov003_0216be20
    ldr r1, =0x315
    ldr r0, [r0, #0x0]
    mov r2, #0x0
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    add r1, r0, r1
    swpb r0, r2, [r1]
    bl func_020e1758
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
