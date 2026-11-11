#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_02022a80(void) {
    mov r1, #0x0
    ldr r3, =data_0214da84
    mov r0, r1
L_02022a8c:
    ldr r2, [r3, #0x0]
    add r2, r2, r1, lsl #0x2
    add r2, r2, #0x7000
    ldr r2, [r2, #0x3e0]
    cmp r2, #0x0
    beq L_02022b14
    ldr ip, [r2, #0x8]
    cmp ip, #0x0
    beq L_02022ac4
L_02022ab0:
    ldrh r2, [ip, #0x2c]
    strh r2, [ip, #0x2e]
    ldr ip, [ip, #0x0]
    cmp ip, #0x0
    bne L_02022ab0
L_02022ac4:
    ldr r2, [r3, #0x0]
    add r2, r2, r1, lsl #0x2
    add r2, r2, #0x7000
    ldr r2, [r2, #0x3e0]
    ldr ip, [r2, #0x10]
    cmp ip, #0x0
    beq L_02022af4
L_02022ae0:
    ldrh r2, [ip, #0x2c]
    strh r2, [ip, #0x2e]
    ldr ip, [ip, #0x0]
    cmp ip, #0x0
    bne L_02022ae0
L_02022af4:
    ldr r2, [r3, #0x0]
    add r2, r2, r1, lsl #0x2
    add r2, r2, #0x7000
    ldr ip, [r2, #0x3e0]
    ldr r2, [ip, #0x1c]
    bic r2, r2, #0x1
    orr r2, r2, #0x1
    str r2, [ip, #0x1c]
L_02022b14:
    ldr ip, [r3, #0x0]
    add r2, r1, #0x1
    add ip, ip, r1, lsl #0x2
    mov r1, r2, lsl #0x10
    add r2, ip, #0x7000
    mov r1, r1, asr #0x10
    str r0, [r2, #0x3e0]
    cmp r1, #0x9
    blt L_02022a8c
    ldr r1, [r3, #0x0]
    mvn ip, #0x0
    add r2, r1, #0xc
    swpb r1, r0, [r2]
    ldr r1, [r3, #0x0]
    strh r0, [r1, #0x2a]
    ldr r0, [r3, #0x0]
    add r1, r0, #0xa
    swpb r0, ip, [r1]
    ldr r0, [r3, #0x0]
    strh ip, [r0, #0x20]
    bx lr
}
// clang-format on
