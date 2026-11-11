#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02029190();
extern char data_02139acc[];
extern char data_0214da84[];
// clang-format off
asm void func_02042a40(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r0, =data_0214da84
    ldr r2, [r0, #0x0]
    ldrh r1, [r2, #0x26]
    cmp r1, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    sub r1, r1, #0x1
    strh r1, [r2, #0x26]
    ldrh r1, [r2, #0x26]
    cmp r1, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r10, [r0, #0x0]
    mov r11, #0x0
    mov r7, r11
    mov r5, r11
    mov r0, r11
    mov r1, r11
    mov r2, r11
    mov r3, r11
    mov r4, r11
    mov r6, #0x1
    ldr lr, =0x119
L_02042aac:
    cmp r11, #0x0
    blt L_02042abc
    cmp r11, #0x3
    blt L_02042ac4
L_02042abc:
    mov r8, r7
    b L_02042acc
L_02042ac4:
    add r8, r10, r11, lsl #0x2
    ldr r8, [r8, #0x54]
L_02042acc:
    cmp r8, #0x0
    beq L_02042b94
    ldrsh r9, [r8, #0xf0]
    cmp r9, #0x4
    blt L_02042aec
    cmp r9, #0x8
    movle ip, r6
    ble L_02042b28
L_02042aec:
    cmp r9, #0x57
    moveq ip, r6
    beq L_02042b28
    ldrsh ip, [r8, #0xea]
    cmp ip, #0xf
    blt L_02042b10
    cmp ip, #0x4b
    movle ip, r6
    ble L_02042b28
L_02042b10:
    cmp ip, lr
    blt L_02042b24
    cmp ip, #0x13c
    movle ip, r6
    ble L_02042b28
L_02042b24:
    mov ip, r5
L_02042b28:
    cmp ip, #0x0
    movne r8, r4
    bne L_02042b88
    ldrsh r8, [r8, #0xea]
    ldr ip, =0x478
    cmp r8, ip
    blt L_02042b54
    ldr ip, =0x47e
    cmp r8, ip
    movle r8, r3
    ble L_02042b88
L_02042b54:
    ldr ip, =0x4c7
    cmp r8, ip
    blt L_02042b70
    ldr ip, =0x4ca
    cmp r8, ip
    movle r8, r2
    ble L_02042b88
L_02042b70:
    cmp r9, #0x53
    moveq r8, r1
    beq L_02042b88
    cmp r9, #0x54
    moveq r8, r0
    movne r8, r6
L_02042b88:
    cmp r8, #0x0
    moveq r0, #0x0
    beq L_02042bac
L_02042b94:
    add r8, r11, #0x1
    mov r8, r8, lsl #0x18
    mov r11, r8, asr #0x18
    cmp r11, #0x3
    blt L_02042aac
    mov r0, #0x1
L_02042bac:
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r10, #0x0
    ldr r5, =data_0214da84
    ldr r4, =0x10dcd
    mov r9, r10
    mov r7, r10
    str r10, [sp, #0x8]
    str r10, [sp, #0x4]
    str r10, [sp, #0x0]
    mov r11, r10
    mov r6, r10
    str r10, [sp, #0xc]
    str r10, [sp, #0x20]
    str r10, [sp, #0x1c]
    mov r8, #0x1
    str r10, [sp, #0x18]
    str r10, [sp, #0x14]
    str r10, [sp, #0x10]
    str r10, [sp, #0x24]
L_02042c04:
    cmp r10, #0x0
    blt L_02042c14
    cmp r10, #0x3
    blt L_02042c1c
L_02042c14:
    mov r0, r9
    b L_02042c28
L_02042c1c:
    ldr r0, [r5, #0x0]
    add r0, r0, r10, lsl #0x2
    ldr r0, [r0, #0x54]
L_02042c28:
    cmp r0, #0x0
    beq L_02042ed8
    ldr r2, [r0, #0x9e8]
    ldrb r1, [r2, #0x72]
    cmp r1, #0x0
    beq L_02042ed8
    ldrsh r1, [r2, #0x1c]
    ldrb r2, [r2, #0x11]
    sub r2, r2, #0x1
    mov r3, r2, lsl #0x1
    ldr r2, =data_02139acc
    ldrh r2, [r2, r3]
    add r2, r2, #0x3e8
    cmp r1, r2
    bgt L_02042ed8
    ldrsh r2, [r0, #0xf0]
    cmp r2, #0x4
    blt L_02042c7c
    cmp r2, #0x8
    movle r1, r8
    ble L_02042cbc
L_02042c7c:
    cmp r2, #0x57
    moveq r1, r8
    beq L_02042cbc
    ldrsh r3, [r0, #0xea]
    cmp r3, #0xf
    blt L_02042ca0
    cmp r3, #0x4b
    movle r1, r8
    ble L_02042cbc
L_02042ca0:
    ldr r1, =0x119
    cmp r3, r1
    blt L_02042cb8
    cmp r3, #0x13c
    movle r1, r8
    ble L_02042cbc
L_02042cb8:
    mov r1, r7
L_02042cbc:
    cmp r1, #0x0
    movne r1, r6
    bne L_02042d1c
    ldrsh r1, [r0, #0xea]
    ldr r3, =0x478
    cmp r1, r3
    blt L_02042ce8
    ldr r3, =0x47e
    cmp r1, r3
    movle r1, r11
    ble L_02042d1c
L_02042ce8:
    ldr r3, =0x4c7
    cmp r1, r3
    blt L_02042d04
    ldr r3, =0x4ca
    cmp r1, r3
    ldrle r1, [sp, #0x0]
    ble L_02042d1c
L_02042d04:
    cmp r2, #0x53
    ldreq r1, [sp, #0x4]
    beq L_02042d1c
    cmp r2, #0x54
    ldreq r1, [sp, #0x8]
    movne r1, r8
L_02042d1c:
    cmp r1, #0x0
    beq L_02042ed8
    add r2, r0, #0xaa
    swpb r1, r8, [r2]
    add r2, r0, #0xd2
    swpb r1, r8, [r2]
    ldr r2, [r0, #0x9e8]
    ldr r1, =0x2710
    strh r1, [r2, #0x24]
    ldrsb r1, [r0, #0x8d]
    cmp r1, #0x3
    beq L_02042d90
    cmp r1, #0x4
    beq L_02042dd0
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
    b L_02042e0c
L_02042d90:
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
    b L_02042e0c
L_02042dd0:
    ldr r1, [r5, #0x0]
    mov r2, #0x5
    ldr r3, [r1, #0x0]
    mul ip, r3, r4
    add r3, ip, #0x1
    str r3, [r1, #0x0]
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    mov r3, r1, asr #0x10
L_02042e0c:
    ldrsh r2, [r0, #0xf0]
    cmp r2, #0x4
    blt L_02042e24
    cmp r2, #0x8
    movle r1, r8
    ble L_02042e64
L_02042e24:
    cmp r2, #0x57
    moveq r1, r8
    beq L_02042e64
    ldrsh ip, [r0, #0xea]
    cmp ip, #0xf
    blt L_02042e48
    cmp ip, #0x4b
    movle r1, r8
    ble L_02042e64
L_02042e48:
    ldr r1, =0x119
    cmp ip, r1
    blt L_02042e60
    cmp ip, #0x13c
    movle r1, r8
    ble L_02042e64
L_02042e60:
    ldr r1, [sp, #0xc]
L_02042e64:
    cmp r1, #0x0
    ldrne r1, [sp, #0x10]
    bne L_02042ec4
    ldrsh r1, [r0, #0xea]
    ldr ip, =0x478
    cmp r1, ip
    blt L_02042e90
    ldr ip, =0x47e
    cmp r1, ip
    ldrle r1, [sp, #0x14]
    ble L_02042ec4
L_02042e90:
    ldr ip, =0x4c7
    cmp r1, ip
    blt L_02042eac
    ldr ip, =0x4ca
    cmp r1, ip
    ldrle r1, [sp, #0x18]
    ble L_02042ec4
L_02042eac:
    cmp r2, #0x53
    ldreq r1, [sp, #0x1c]
    beq L_02042ec4
    cmp r2, #0x54
    ldreq r1, [sp, #0x20]
    movne r1, r8
L_02042ec4:
    cmp r1, #0x0
    beq L_02042ed8
    ldr r2, [sp, #0x24]
    mov r1, r8
    bl func_02029190
L_02042ed8:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x18
    mov r10, r0, asr #0x18
    cmp r10, #0x3
    blt L_02042c04
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
