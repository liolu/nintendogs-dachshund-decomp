#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov015_02157c20();
extern void func_ov015_02157fa8();
extern char data_0214affc[];
extern char data_0214b024[];
extern char data_ov015_02158de0[];
// clang-format off
asm void func_ov015_02158324(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_0214b024
    ldrh r1, [r0, #0x2]
    ands r1, r1, #0x1
    beq L_0215a8b8
    ldrb r4, [r0, #0x0]
    ldrb r3, [r0, #0x1]
    mov r1, r4, asr #0x2
    mov r2, r3, asr #0x2
    add r1, r4, r1, lsr #0x1d
    add r2, r3, r2, lsr #0x1d
    mov r3, r1, asr #0x3
    mov r1, r2, asr #0x3
    subs r2, r3, #0x8
    sub r1, r1, #0x8
    bmi L_0215a8b8
    ldr r3, =data_ov015_02158de0
    ldr r4, [r3, #0x0]
    ldr r3, [r4, #0xd04]
    cmp r2, r3
    bge L_0215a8b8
    cmp r1, #0x0
    blt L_0215a8b8
    ldr r3, [r4, #0xd08]
    cmp r1, r3
    bge L_0215a8b8
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x2
    beq L_0215a838
    add r0, r4, r1, lsl #0x4
    add r0, r0, r2
    ldrb r0, [r0, #0xc04]
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r4, #0xe0c]
    movne r0, #0x0
    strne r0, [r4, #0xe0c]
L_0215a838:
    ldr ip, =data_ov015_02158de0
    ldr r3, [ip, #0x0]
    ldr r0, [r3, #0xe0c]
    cmp r0, #0x0
    beq L_0215a884
    add r3, r3, r1, lsl #0x4
    ldr r0, =0xc04
    add r3, r3, r2
    add r3, r3, r0
    mov r0, #0x1
    swpb r0, r0, [r3]
    add r0, r1, #0x8
    add r0, r2, r0, lsl #0x5
    ldr r1, [ip, #0x0]
    add r0, r0, #0x8
    add r0, r1, r0, lsl #0x1
    mov r1, #0x2
    strh r1, [r0, #0x4]
    b L_0215a8b8
L_0215a884:
    add r3, r3, r1, lsl #0x4
    ldr r0, =0xc04
    add r3, r3, r2
    add r3, r3, r0
    mov r0, #0x0
    swpb r0, r0, [r3]
    add r0, r1, #0x8
    add r0, r2, r0, lsl #0x5
    ldr r1, [ip, #0x0]
    add r0, r0, #0x8
    add r0, r1, r0, lsl #0x1
    mov r1, #0x1
    strh r1, [r0, #0x4]
L_0215a8b8:
    ldr r1, =data_0214affc
    ldrh r0, [r1, #0x2]
    and r0, r0, #0x200
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a8e8
    ldrh r0, [r1, #0x0]
    and r0, r0, #0x2
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a8e8
    bl func_ov015_02157fa8
L_0215a8e8:
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x20
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215a9e0
    ldr ip, =data_ov015_02158de0
    ldr r2, [ip, #0x0]
    ldr r0, [r2, #0xd04]
    cmp r0, #0x1
    ble L_0215a9e0
    ldr r1, [r2, #0xd08]
    mov r0, #0x0
    add r3, r1, #0x1
    add r3, r3, r3, lsr #0x1f
    add r4, r1, r3, asr #0x1
    cmp r4, #0x0
    mov r3, r3, asr #0x1
    ble L_0215a970
    mov lr, r0
L_0215a938:
    ldr r4, [ip, #0x0]
    add r1, r0, #0x8
    ldr r2, [r4, #0xd04]
    sub r1, r1, r3
    add r1, r2, r1, lsl #0x5
    add r1, r1, #0x7
    add r1, r4, r1, lsl #0x1
    strh lr, [r1, #0x4]
    ldr r2, [ip, #0x0]
    add r0, r0, #0x1
    ldr r1, [r2, #0xd08]
    add r4, r1, r3
    cmp r0, r4
    blt L_0215a938
L_0215a970:
    ldr r4, [r2, #0xd04]
    mov r3, r4, lsr #0x1f
    rsb r0, r3, r4, lsl #0x1f
    add r0, r3, r0, ror #0x1f
    cmp r0, #0x1
    bne L_0215a9d4
    add r0, r4, #0x1
    add r0, r0, r0, lsr #0x1f
    cmp r1, #0x0
    mov ip, r0, asr #0x1
    mov r4, #0x0
    ble L_0215a9d4
    ldr r0, =data_ov015_02158de0
    mov r3, r4
L_0215a9a8:
    add r1, r4, #0x8
    mov r1, r1, lsl #0x5
    add r1, r1, #0x8
    sub r1, r1, ip
    add r1, r2, r1, lsl #0x1
    strh r3, [r1, #0x4]
    ldr r2, [r0, #0x0]
    add r4, r4, #0x1
    ldr r1, [r2, #0xd08]
    cmp r4, r1
    blt L_0215a9a8
L_0215a9d4:
    ldr r0, [r2, #0xd04]
    sub r0, r0, #0x1
    str r0, [r2, #0xd04]
L_0215a9e0:
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215aa68
    ldr r1, =data_ov015_02158de0
    ldr r3, [r1, #0x0]
    ldr r0, [r3, #0xd04]
    cmp r0, #0x10
    bge L_0215aa68
    ldr r2, [r3, #0xd08]
    mov r0, #0x0
    cmp r2, #0x0
    ble L_0215aa5c
L_0215aa1c:
    ldr ip, [r1, #0x0]
    add r2, r0, #0x8
    ldr r4, [ip, #0xd04]
    add r3, ip, r0, lsl #0x4
    add r3, r4, r3
    ldrb r3, [r3, #0xc04]
    add r2, r4, r2, lsl #0x5
    add r2, r2, #0x8
    add r3, r3, #0x1
    add r2, ip, r2, lsl #0x1
    strh r3, [r2, #0x4]
    ldr r3, [r1, #0x0]
    add r0, r0, #0x1
    ldr r2, [r3, #0xd08]
    cmp r0, r2
    blt L_0215aa1c
L_0215aa5c:
    ldr r0, [r3, #0xd04]
    add r0, r0, #0x1
    str r0, [r3, #0xd04]
L_0215aa68:
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x40
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215ab60
    ldr ip, =data_ov015_02158de0
    ldr r2, [ip, #0x0]
    ldr r0, [r2, #0xd08]
    cmp r0, #0x1
    ble L_0215ab60
    ldr r1, [r2, #0xd04]
    mov r0, #0x0
    add r3, r1, #0x1
    add r3, r3, r3, lsr #0x1f
    add r4, r1, r3, asr #0x1
    cmp r4, #0x0
    mov r3, r3, asr #0x1
    ble L_0215aaf0
    mov r4, r0
L_0215aab8:
    ldr r2, [ip, #0x0]
    ldr r1, [r2, #0xd08]
    add r1, r1, #0x7
    add r1, r0, r1, lsl #0x5
    add r1, r1, #0x8
    sub r1, r1, r3
    add r1, r2, r1, lsl #0x1
    strh r4, [r1, #0x4]
    ldr r2, [ip, #0x0]
    add r0, r0, #0x1
    ldr r1, [r2, #0xd04]
    add lr, r1, r3
    cmp r0, lr
    blt L_0215aab8
L_0215aaf0:
    ldr ip, [r2, #0xd08]
    mov r3, ip, lsr #0x1f
    rsb r0, r3, ip, lsl #0x1f
    add r0, r3, r0, ror #0x1f
    cmp r0, #0x1
    bne L_0215ab54
    add r0, ip, #0x1
    add r0, r0, r0, lsr #0x1f
    cmp r1, #0x0
    mov r0, r0, asr #0x1
    mov r4, #0x0
    ble L_0215ab54
    rsb r0, r0, #0x8
    mov ip, r0, lsl #0x5
    ldr r0, =data_ov015_02158de0
    mov r3, r4
L_0215ab30:
    add r1, ip, #0x8
    add r1, r2, r1, lsl #0x1
    strh r3, [r1, #0x4]
    ldr r2, [r0, #0x0]
    add r4, r4, #0x1
    ldr r1, [r2, #0xd04]
    add ip, ip, #0x1
    cmp r4, r1
    blt L_0215ab30
L_0215ab54:
    ldr r0, [r2, #0xd08]
    sub r0, r0, #0x1
    str r0, [r2, #0xd08]
L_0215ab60:
    ldr r0, =data_0214affc
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x80
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq L_0215abe8
    ldr r1, =data_ov015_02158de0
    ldr r3, [r1, #0x0]
    ldr r0, [r3, #0xd08]
    cmp r0, #0x10
    bge L_0215abe8
    ldr r2, [r3, #0xd04]
    mov r0, #0x0
    cmp r2, #0x0
    ble L_0215abdc
L_0215ab9c:
    ldr lr, [r1, #0x0]
    ldr ip, [lr, #0xd08]
    add r2, lr, ip, lsl #0x4
    add r3, r0, r2
    add r2, ip, #0x8
    add r2, r0, r2, lsl #0x5
    ldrb r3, [r3, #0xc04]
    add r2, r2, #0x8
    add r2, lr, r2, lsl #0x1
    add r3, r3, #0x1
    strh r3, [r2, #0x4]
    ldr r3, [r1, #0x0]
    add r0, r0, #0x1
    ldr r2, [r3, #0xd04]
    cmp r0, r2
    blt L_0215ab9c
L_0215abdc:
    ldr r0, [r3, #0xd08]
    add r0, r0, #0x1
    str r0, [r3, #0xd08]
L_0215abe8:
    bl func_ov015_02157c20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
