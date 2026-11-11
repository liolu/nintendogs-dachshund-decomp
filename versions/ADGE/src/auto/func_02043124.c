#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
extern char data_0215a04c[];
// clang-format off
asm void func_02043124(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_020433dc
    ldr r0, =data_0214da84
    mov r10, #0x0
    ldr r9, [r0, #0x0]
    mov lr, r10
    mov r6, r10
    mov r1, r10
    mov r2, r10
    mov r3, r10
    mov r4, r10
    mov r5, r10
    mov ip, #0x1
    ldr r0, =0x119
L_02043170:
    cmp r10, #0x0
    blt L_02043180
    cmp r10, #0x3
    blt L_02043188
L_02043180:
    mov r7, lr
    b L_02043190
L_02043188:
    add r7, r9, r10, lsl #0x2
    ldr r7, [r7, #0x54]
L_02043190:
    cmp r7, #0x0
    beq L_02043258
    ldrsh r8, [r7, #0xf0]
    cmp r8, #0x4
    blt L_020431b0
    cmp r8, #0x8
    movle r11, ip
    ble L_020431ec
L_020431b0:
    cmp r8, #0x57
    moveq r11, ip
    beq L_020431ec
    ldrsh r11, [r7, #0xea]
    cmp r11, #0xf
    blt L_020431d4
    cmp r11, #0x4b
    movle r11, ip
    ble L_020431ec
L_020431d4:
    cmp r11, r0
    blt L_020431e8
    cmp r11, #0x13c
    movle r11, ip
    ble L_020431ec
L_020431e8:
    mov r11, r6
L_020431ec:
    cmp r11, #0x0
    movne r7, r5
    bne L_0204324c
    ldrsh r7, [r7, #0xea]
    ldr r11, =0x478
    cmp r7, r11
    blt L_02043218
    ldr r11, =0x47e
    cmp r7, r11
    movle r7, r4
    ble L_0204324c
L_02043218:
    ldr r11, =0x4c7
    cmp r7, r11
    blt L_02043234
    ldr r11, =0x4ca
    cmp r7, r11
    movle r7, r3
    ble L_0204324c
L_02043234:
    cmp r8, #0x53
    moveq r7, r2
    beq L_0204324c
    cmp r8, #0x54
    moveq r7, r1
    movne r7, ip
L_0204324c:
    cmp r7, #0x0
    moveq r0, #0x0
    beq L_02043270
L_02043258:
    add r7, r10, #0x1
    mov r7, r7, lsl #0x18
    mov r10, r7, asr #0x18
    cmp r10, #0x3
    blt L_02043170
    mov r0, #0x1
L_02043270:
    cmp r0, #0x0
    beq L_020433dc
    mov r10, #0x0
    mov r6, r10
    mov r4, r10
    mov r1, r10
    mov r2, r10
    mov r3, r10
    mov ip, r10
    mov lr, r10
    mov r0, r10
    mov r5, #0x1
L_020432a0:
    cmp r10, #0x0
    blt L_020432b0
    cmp r10, #0x3
    blt L_020432b8
L_020432b0:
    mov r9, r6
    b L_020432c8
L_020432b8:
    ldr r7, =data_0214da84
    ldr r7, [r7, #0x0]
    add r7, r7, r10, lsl #0x2
    ldr r9, [r7, #0x54]
L_020432c8:
    cmp r9, #0x0
    beq L_020433c8
    add r8, r9, #0xaa
    swpb r7, r5, [r8]
    add r8, r9, #0xd2
    swpb r7, r5, [r8]
    ldr r8, [r9, #0x9e8]
    ldr r7, =0x2710
    strh r7, [r8, #0x24]
    ldrsh r8, [r9, #0xf0]
    cmp r8, #0x4
    blt L_02043304
    cmp r8, #0x8
    movle r7, r5
    ble L_02043344
L_02043304:
    cmp r8, #0x57
    moveq r7, r5
    beq L_02043344
    ldrsh r11, [r9, #0xea]
    cmp r11, #0xf
    blt L_02043328
    cmp r11, #0x4b
    movle r7, r5
    ble L_02043344
L_02043328:
    ldr r7, =0x119
    cmp r11, r7
    blt L_02043340
    cmp r11, #0x13c
    movle r7, r5
    ble L_02043344
L_02043340:
    mov r7, r4
L_02043344:
    cmp r7, #0x0
    movne r7, lr
    bne L_020433a4
    ldrsh r7, [r9, #0xea]
    ldr r11, =0x478
    cmp r7, r11
    blt L_02043370
    ldr r11, =0x47e
    cmp r7, r11
    movle r7, ip
    ble L_020433a4
L_02043370:
    ldr r11, =0x4c7
    cmp r7, r11
    blt L_0204338c
    ldr r11, =0x4ca
    cmp r7, r11
    movle r7, r3
    ble L_020433a4
L_0204338c:
    cmp r8, #0x53
    moveq r7, r2
    beq L_020433a4
    cmp r8, #0x54
    moveq r7, r1
    movne r7, r5
L_020433a4:
    cmp r7, #0x0
    beq L_020433c8
    add r8, r9, #0xa8
    swpb r7, r5, [r8]
    add r7, r9, #0x100
    strh r0, [r7, #0x12]
    strh r5, [r9, #0xf0]
    add r8, r9, #0xa5
    swpb r7, r0, [r8]
L_020433c8:
    add r7, r10, #0x1
    mov r7, r7, lsl #0x18
    mov r10, r7, asr #0x18
    cmp r10, #0x3
    blt L_020432a0
L_020433dc:
    ldr r0, =data_0214da84
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    strh r1, [r0, #0x26]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
