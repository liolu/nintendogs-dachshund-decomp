#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_020428cc(void) {
    ldr r2, =data_0214da84
    mvn r1, #0x0
    ldr r3, [r2, #0x0]
    ldrsb r2, [r3, #0x9]
    cmp r2, r1
    bne L_02042990
    ldr r1, =data_0215a064
    mov ip, #0x0
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x26]
    cmp r1, #0x2
    bne L_02042908
    ldrsh r1, [r2, #0x2e]
    cmp r1, #0x1
    moveq ip, #0x1
L_02042908:
    cmp ip, #0x0
    beq L_02042990
    cmp r0, #0x0
    blt L_02042920
    cmp r0, #0x3
    blt L_02042928
L_02042920:
    mov r1, #0x0
    b L_02042930
L_02042928:
    add r1, r3, r0, lsl #0x2
    ldr r1, [r1, #0x54]
L_02042930:
    cmp r1, #0x0
    beq L_02042990
    add r2, r3, #0x9
    swpb r0, r0, [r2]
    mov ip, #0x0
    ldr r0, =data_0214da84
    add r3, r1, #0x100
    ldr r2, [r0, #0x0]
    ldr r0, =0x478
    str ip, [r2, #0x40]
    add r2, r1, #0xa4
    strh r0, [r1, #0xea]
    swpb r0, ip, [r2]
    add r2, r1, #0xa6
    strh ip, [r1, #0xf2]
    swpb r0, ip, [r2]
    add r2, r1, #0xa3
    strh ip, [r3, #0x16]
    swpb r0, ip, [r2]
    mvn r0, #0x0
    strh r0, [r1, #0xf8]
    strh ip, [r3, #0x18]
    mov r0, #0x1
    bx lr
L_02042990:
    mov r0, #0x0
    bx lr
}
// clang-format on
