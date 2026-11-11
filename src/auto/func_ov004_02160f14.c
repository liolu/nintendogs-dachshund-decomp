#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206cbc4();
extern void func_0207ca98();
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02160f14(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r0, =data_ov004_0216e3c0
    ldr r2, [r0, #0x0]
    ldrb r0, [r2, #0x10]
    cmp r0, #0x1
    bne L_02160f3c
    ldrb r0, [r2, #0x11]
    cmp r0, #0x1
    beq L_0216101c
L_02160f3c:
    add r1, r2, #0x10
    mov r3, #0x1
    swpb r0, r3, [r1]
    ldr r2, =data_ov004_0216e3c0
    ldr r0, [r2, #0x0]
    add r1, r0, #0x11
    swpb r0, r3, [r1]
    ldr r1, [r2, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_02160f88
    cmp r0, #0x1
    beq L_02160f94
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_02160f9c
L_02160f88:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_02160f9c
L_02160f94:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_02160f9c:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_02160fc0
    cmp r0, #0x1
    beq L_02160fcc
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_02160fd4
L_02160fc0:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_02160fd4
L_02160fcc:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_02160fd4:
    ldr r1, =data_ov004_0216e3c0
    mov r3, #0x0
    ldr ip, [r1, #0x0]
    mov r2, #0x1
    add r0, ip, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [ip, #0x12]
    ldr ip, [r1, #0x0]
    add r0, ip, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [ip, #0x14]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x8]
    ldr r1, [r1, #0x0]
    swpb r0, r2, [r1]
    b L_0216109c
L_0216101c:
    add r0, r2, #0x3000
    ldrb r1, [r2, #0x10]
    ldr r0, [r0, #0x6c4]
    add r3, r2, #0x10
    cmp r1, #0x0
    add r2, r0, #0x2
    beq L_02161050
    cmp r1, #0x1
    beq L_0216105c
    cmp r1, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_02161064
L_02161050:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_02161064
L_0216105c:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_02161064:
    ldrb r0, [r3, #0x1]
    cmp r0, #0x0
    beq L_02161088
    cmp r0, #0x1
    beq L_02161094
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0216109c
L_02161088:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0216109c
L_02161094:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0216109c:
    ldr r0, =data_ov004_0216e3c0
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    mov r1, r2
    add r3, r3, #0x3000
    ldr r3, [r3, #0x6c4]
    str r2, [r3, #0x8]
    ldr ip, [r0, #0x0]
    add r3, ip, #0x3000
    ldrb lr, [ip, #0x1c]
    ldr ip, [r3, #0x6c4]
    swpb r3, lr, [ip]
    ldr ip, [r0, #0x0]
    add r3, ip, #0x3000
    ldr r3, [r3, #0x6c4]
    ldrb lr, [ip, #0x1d]
    add ip, r3, #0x1
    swpb r3, lr, [ip]
    ldr ip, [r0, #0x0]
    add r3, ip, #0x3000
    ldr r3, [r3, #0x6c4]
    add ip, ip, #0x1a
    ldrb r3, [r3, #0x0]
    swpb r3, r3, [ip]
    ldr ip, [r0, #0x0]
    add r3, ip, #0x3000
    ldr r3, [r3, #0x6c4]
    add ip, ip, #0x1b
    ldrb r3, [r3, #0x1]
    swpb r3, r3, [ip]
    ldr r3, [r0, #0x0]
    str r2, [r3, #0x20]
    mvn lr, #0x0
L_02161120:
    ldr r3, [r0, #0x0]
    add r2, r2, #0x1
    add r3, r3, r1
    add r3, r3, #0x1000
    add ip, r3, #0x2dc
    cmp r2, #0x5
    swpb r3, lr, [ip]
    add r1, r1, #0x3
    blt L_02161120
    ldr r3, [r0, #0x0]
    mov r2, #0x2000
    add r0, r3, #0xb00
    ldrh r1, [r0, #0xe0]
    add r0, r3, #0x3000
    strh r1, [sp, #0x0]
    ldr r1, [r0, #0x6c4]
    ldrh r0, [sp, #0x0]
    add r1, r1, #0x264
    bl func_0206cbc4
    ldr r1, =data_ov004_0216e3c0
    mov r0, #0x19
    ldr r2, [r1, #0x0]
    mov r1, #0x0
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    mov r3, #0x2000
    add r2, r2, #0x264
    bl func_0207ca98
    mov r5, #0x0
    mov lr, r5
    ldr r1, =data_ov004_0216e3c0
    mov ip, r5
L_021611a0:
    mov r4, ip
L_021611a4:
    ldr r3, [r1, #0x0]
    add r0, r3, #0xb00
    ldrh r2, [r0, #0xe0]
    add r0, lr, r3
    add r0, r0, r4, lsl #0x1
    add r4, r4, #0x1
    strh r2, [r0, #0x28]
    cmp r4, #0x5
    blt L_021611a4
    add r5, r5, #0x1
    cmp r5, #0x12c
    add lr, lr, #0xa
    blt L_021611a0
    ldr r1, [r1, #0x0]
    mov r0, #0x19
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c4]
    mov r1, #0x0
    add r2, r2, #0x264
    mov r3, #0x2000
    bl func_0207ca98
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
