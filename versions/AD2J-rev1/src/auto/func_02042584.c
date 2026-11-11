#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_02042584(void) {
    ldr r2, =data_0214b484
    mvn r1, #0x0
    ldr r3, [r2, #0x0]
    ldrsb r2, [r3, #0xe]
    cmp r2, r1
    bne L_02042648
    ldr r1, =data_02153720
    mov ip, #0x0
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x26]
    cmp r1, #0x2
    bne L_020425c0
    ldrsh r1, [r2, #0x2e]
    cmp r1, #0x1
    moveq ip, #0x1
L_020425c0:
    cmp ip, #0x0
    beq L_02042648
    cmp r0, #0x0
    blt L_020425d8
    cmp r0, #0x3
    blt L_020425e0
L_020425d8:
    mov r1, #0x0
    b L_020425e8
L_020425e0:
    add r1, r3, r0, lsl #0x2
    ldr r1, [r1, #0x50]
L_020425e8:
    cmp r1, #0x0
    beq L_02042648
    add r2, r3, #0xe
    swpb r0, r0, [r2]
    mov ip, #0x0
    ldr r0, =data_0214b484
    add r3, r1, #0x100
    ldr r2, [r0, #0x0]
    ldr r0, =0x477
    str ip, [r2, #0x40]
    add r2, r1, #0xc6
    strh r0, [r1, #0xe8]
    swpb r0, ip, [r2]
    add r2, r1, #0xc7
    strh ip, [r1, #0xf2]
    swpb r0, ip, [r2]
    add r2, r1, #0xc5
    strh ip, [r3, #0x24]
    swpb r0, ip, [r2]
    mvn r0, #0x0
    strh r0, [r1, #0xf8]
    strh ip, [r3, #0x26]
    mov r0, #0x1
    bx lr
L_02042648:
    mov r0, #0x0
    bx lr
}
// clang-format on
