#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
extern char data_02153708[];
// clang-format off
asm void func_02042ddc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r0, =data_02153708
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02043094
    ldr r0, =data_0214b484
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
L_02042e28:
    cmp r10, #0x0
    blt L_02042e38
    cmp r10, #0x3
    blt L_02042e40
L_02042e38:
    mov r7, lr
    b L_02042e48
L_02042e40:
    add r7, r9, r10, lsl #0x2
    ldr r7, [r7, #0x50]
L_02042e48:
    cmp r7, #0x0
    beq L_02042f10
    ldrsh r8, [r7, #0xf0]
    cmp r8, #0x4
    blt L_02042e68
    cmp r8, #0x8
    movle r11, ip
    ble L_02042ea4
L_02042e68:
    cmp r8, #0x57
    moveq r11, ip
    beq L_02042ea4
    ldrsh r11, [r7, #0xe8]
    cmp r11, #0xf
    blt L_02042e8c
    cmp r11, #0x4b
    movle r11, ip
    ble L_02042ea4
L_02042e8c:
    cmp r11, r0
    blt L_02042ea0
    cmp r11, #0x13c
    movle r11, ip
    ble L_02042ea4
L_02042ea0:
    mov r11, r6
L_02042ea4:
    cmp r11, #0x0
    movne r7, r5
    bne L_02042f04
    ldrsh r7, [r7, #0xe8]
    ldr r11, =0x477
    cmp r7, r11
    blt L_02042ed0
    ldr r11, =0x47d
    cmp r7, r11
    movle r7, r4
    ble L_02042f04
L_02042ed0:
    ldr r11, =0x4c6
    cmp r7, r11
    blt L_02042eec
    ldr r11, =0x4c9
    cmp r7, r11
    movle r7, r3
    ble L_02042f04
L_02042eec:
    cmp r8, #0x53
    moveq r7, r2
    beq L_02042f04
    cmp r8, #0x54
    moveq r7, r1
    movne r7, ip
L_02042f04:
    cmp r7, #0x0
    moveq r0, #0x0
    beq L_02042f28
L_02042f10:
    add r7, r10, #0x1
    mov r7, r7, lsl #0x18
    mov r10, r7, asr #0x18
    cmp r10, #0x3
    blt L_02042e28
    mov r0, #0x1
L_02042f28:
    cmp r0, #0x0
    beq L_02043094
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
L_02042f58:
    cmp r10, #0x0
    blt L_02042f68
    cmp r10, #0x3
    blt L_02042f70
L_02042f68:
    mov r9, r6
    b L_02042f80
L_02042f70:
    ldr r7, =data_0214b484
    ldr r7, [r7, #0x0]
    add r7, r7, r10, lsl #0x2
    ldr r9, [r7, #0x50]
L_02042f80:
    cmp r9, #0x0
    beq L_02043080
    add r8, r9, #0xcd
    swpb r7, r5, [r8]
    add r8, r9, #0x8b
    swpb r7, r5, [r8]
    ldr r8, [r9, #0x9e4]
    ldr r7, =0x2710
    strh r7, [r8, #0x24]
    ldrsh r8, [r9, #0xf0]
    cmp r8, #0x4
    blt L_02042fbc
    cmp r8, #0x8
    movle r7, r5
    ble L_02042ffc
L_02042fbc:
    cmp r8, #0x57
    moveq r7, r5
    beq L_02042ffc
    ldrsh r11, [r9, #0xe8]
    cmp r11, #0xf
    blt L_02042fe0
    cmp r11, #0x4b
    movle r7, r5
    ble L_02042ffc
L_02042fe0:
    ldr r7, =0x119
    cmp r11, r7
    blt L_02042ff8
    cmp r11, #0x13c
    movle r7, r5
    ble L_02042ffc
L_02042ff8:
    mov r7, r4
L_02042ffc:
    cmp r7, #0x0
    movne r7, lr
    bne L_0204305c
    ldrsh r7, [r9, #0xe8]
    ldr r11, =0x477
    cmp r7, r11
    blt L_02043028
    ldr r11, =0x47d
    cmp r7, r11
    movle r7, ip
    ble L_0204305c
L_02043028:
    ldr r11, =0x4c6
    cmp r7, r11
    blt L_02043044
    ldr r11, =0x4c9
    cmp r7, r11
    movle r7, r3
    ble L_0204305c
L_02043044:
    cmp r8, #0x53
    moveq r7, r2
    beq L_0204305c
    cmp r8, #0x54
    moveq r7, r1
    movne r7, r5
L_0204305c:
    cmp r7, #0x0
    beq L_02043080
    add r8, r9, #0xbe
    swpb r7, r5, [r8]
    add r7, r9, #0x100
    strh r0, [r7, #0x20]
    strh r5, [r9, #0xf0]
    add r8, r9, #0xc4
    swpb r7, r0, [r8]
L_02043080:
    add r7, r10, #0x1
    mov r7, r7, lsl #0x18
    mov r10, r7, asr #0x18
    cmp r10, #0x3
    blt L_02042f58
L_02043094:
    ldr r0, =data_0214b484
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    strh r1, [r0, #0x26]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
