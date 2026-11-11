#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02044644();
extern void func_020894f4();
extern void func_020ef740();
extern void func_020ef814();
extern void func_020efb80();
extern void func_020f07bc();
extern void func_ov003_0215c7b8();
extern void func_ov003_0215c8e8();
extern void func_ov003_0215e5c8();
extern void func_ov003_0215e818();
extern void func_ov003_0215e9f0();
extern char data_0214b024[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215b11c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0214b024
    mvn r6, #0x0
    ldrb r7, [r0, #0x0]
    mov r4, #0x0
    ldrb r11, [r0, #0x1]
    mov r5, r6
    mov r10, r6
    mov r9, r4
    mov r8, #0x1
L_0215d66c:
    mov r0, r9
    bl func_02044644
    cmp r0, #0x0
    movne r9, r8
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x1
    blt L_0215d66c
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c8]
    cmp r0, #0x0
    bne L_0215d6cc
    ldrb r0, [r1, #0x3b8]
    add sp, sp, #0x4
    cmp r0, #0x0
    ldreq r0, =0x3cd
    moveq r2, #0x1
    addeq r1, r1, r0
    swpeqb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215d6cc:
    ldrb r0, [r1, #0x3b9]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    beq L_0215d704
    ldr r0, [r1, #0x3d0]
    mov r1, r7
    mov r2, r11
    bl func_020894f4
    mov r10, r0
L_0215d704:
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r1, r0, #0x2
    beq L_0215d750
    cmp r10, #0x0
    bne L_0215d750
    bl func_ov003_0215e9f0
    ldr r1, =data_ov003_0216be20
    ldr r0, =0x3b9
    ldr r1, [r1, #0x0]
    mov r3, #0x14
    add r1, r1, #0x3000
    add r2, r1, r0
    swpb r1, r3, [r2]
    mov r0, #0x2
    bl func_020efb80
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215d750:
    cmp r1, #0x0
    beq L_0215d79c
    cmp r10, #0x1
    bne L_0215d79c
    ldr r1, =data_ov003_0216be20
    mov r2, #0x0
    ldr r0, [r1, #0x0]
    mov r3, #0x14
    add r0, r0, #0x3000
    str r2, [r0, #0x6c8]
    ldr r1, [r1, #0x0]
    mov r0, #0x4
    add r1, r1, #0x3000
    add r2, r1, #0x3b8
    swpb r1, r3, [r2]
    bl func_020f07bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215d79c:
    ands r0, r0, #0x1
    beq L_0215d83c
    ldr r0, =data_ov003_0216be20
    cmp r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r3, [r0, #0x2]
    ldrsh r2, [r0, #0x4]
    add r3, r7, r3
    add r2, r11, r2
    mov r6, r3, asr #0x3
    mov r5, r2, asr #0x3
    bne L_0215d83c
    and r8, r7, #0x7
    cmp r8, #0x1
    bgt L_0215d7f0
    ldrb r3, [r0, #0x0]
    add r2, r3, #0x1
    cmp r6, r2
    moveq r6, r3
L_0215d7f0:
    cmp r8, #0x6
    blt L_0215d808
    ldrb r3, [r0, #0x0]
    sub r2, r3, #0x1
    cmp r6, r2
    moveq r6, r3
L_0215d808:
    and r8, r11, #0x7
    cmp r8, #0x1
    bgt L_0215d824
    ldrb r3, [r0, #0x1]
    add r2, r3, #0x1
    cmp r5, r2
    moveq r5, r3
L_0215d824:
    cmp r8, #0x6
    blt L_0215d83c
    ldrb r2, [r0, #0x1]
    sub r0, r2, #0x1
    cmp r5, r0
    moveq r5, r2
L_0215d83c:
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r2, r0, #0x3000
    ldr r8, [r2, #0x6c4]
    ldrsh r3, [r8, #0x2]
    sub r2, r6, r3, asr #0x3
    cmp r2, #0x2
    mov r2, r3, asr #0x3
    addlt r6, r2, #0x2
    cmp r1, #0x0
    beq L_0215d89c
    ldrb r1, [r8, #0x0]
    sub r2, r6, r1
    ldrb r1, [r8, #0x1]
    cmp r2, #0x0
    rsble r2, r2, #0x0
    sub r1, r5, r1
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r2, #0x1
    bgt L_0215d89c
    cmp r1, #0x1
    movle r1, #0x1
    strle r1, [r0, #0x20]
L_0215d89c:
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    bne L_0215d8d8
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x20]
    cmp r0, #0x0
    addne r0, r1, #0x1000
    movne r1, #0x0
    strne r1, [r0, #0x2ec]
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x20]
L_0215d8d8:
    mvn r0, #0x0
    cmp r6, r0
    beq L_0215d97c
    cmp r5, r0
    beq L_0215d97c
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x20]
    cmp r0, #0x0
    beq L_0215d97c
    add r0, r1, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrb r0, [r2, #0x0]
    sub r3, r6, r0
    ldrb r0, [r2, #0x1]
    cmp r3, #0x0
    rsble r3, r3, #0x0
    sub r0, r5, r0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r3, #0x0
    bne L_0215d938
    cmp r0, #0x0
    beq L_0215d97c
L_0215d938:
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    and r2, r6, #0xff
    add r1, r0, #0x1
    and r3, r5, #0xff
    ldr r8, [r0, #0x8]
    bl func_ov003_0215c8e8
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r0, [r0, #0x8]
    cmp r0, r8
    ble L_0215d97c
    mov r1, r7
    sub r0, r0, r8
    bl func_020ef740
L_0215d97c:
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2f8]
    cmp r1, #0x0
    subgt r1, r1, #0x1
    strgt r1, [r0, #0x2f8]
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    ldreq r0, =data_ov003_0216be20
    moveq r1, #0x0
    ldreq r0, [r0, #0x0]
    addeq r0, r0, #0x1000
    streq r1, [r0, #0x2f8]
    mvn r0, #0x0
    cmp r6, r0
    beq L_0215dbd8
    cmp r5, r0
    beq L_0215dbd8
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x20]
    cmp r0, #0x0
    bne L_0215dbd8
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x2
    bne L_0215da00
    add r0, r1, #0x1000
    ldr r0, [r0, #0x2f4]
    cmp r0, #0x0
    beq L_0215db74
L_0215da00:
    add r0, r1, #0x1000
    ldr r0, [r0, #0x2f8]
    cmp r0, #0x0
    bne L_0215db74
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r2, [r0, #0x8]
    str r2, [sp, #0x0]
    cmp r2, #0x0
    ble L_0215db74
    ldr r8, [sp, #0x0]
    mov r3, #0x0
    mov r2, r3
    mov lr, r3
    cmp r8, #0x0
    mvn ip, #0x0
    ble L_0215dac0
    mov r9, #0x1
L_0215da48:
    add r8, r0, lr, lsl #0x1
    add r10, r0, lr, lsl #0x1
    ldrb r8, [r8, #0xc]
    ldrb r10, [r10, #0xd]
    sub r8, r6, r8
    cmp r8, #0x0
    sub r10, r5, r10
    rsble r8, r8, #0x0
    cmp r10, #0x0
    rsble r10, r10, #0x0
    adds r8, r8, r10
    moveq ip, lr
    moveq r3, r9
    beq L_0215dab0
    cmp r8, #0x1
    bne L_0215da98
    cmp r3, #0x0
    moveq ip, lr
    moveq r2, r9
    beq L_0215dab0
L_0215da98:
    cmp r8, #0x2
    bne L_0215dab0
    cmp r3, #0x0
    bne L_0215dab0
    cmp r2, #0x0
    moveq ip, lr
L_0215dab0:
    add lr, lr, #0x1
    ldr r8, [r0, #0x8]
    cmp lr, r8
    blt L_0215da48
L_0215dac0:
    mvn r0, #0x0
    cmp ip, r0
    beq L_0215db38
    ldr r0, [sp, #0x0]
    sub r0, r0, #0x1
    cmp ip, r0
    bne L_0215dae4
    cmp ip, #0x0
    bne L_0215db38
L_0215dae4:
    bl func_ov003_0215e5c8
    ldr r1, =data_ov003_0216be20
    mov r3, #0x1
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x2f4]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    streq r3, [r2, #0x20]
    ldreq r0, [r1, #0x0]
    moveq r1, #0x0
    addeq r0, r0, #0x1000
    streq r1, [r0, #0x2f4]
    mov r0, #0x1
    bl func_020ef814
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215db38:
    add r1, r1, #0x1000
    mov r0, #0x0
    ldr r2, =data_ov003_0216be20
    str r0, [r1, #0x2f4]
    ldr r3, [r2, #0x0]
    add r1, r3, #0x3000
    ldr r1, [r1, #0x6c4]
    ldr r1, [r1, #0x8]
    sub r1, r1, #0x1
    cmp ip, r1
    moveq r1, #0x1
    streq r1, [r3, #0x20]
    ldreq r1, [r2, #0x0]
    addeq r1, r1, #0x1000
    streq r0, [r1, #0x2f4]
L_0215db74:
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    beq L_0215dba4
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x2f4]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0215dba4:
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2f4]
    cmp r1, #0x0
    movne r1, #0x0
    strne r1, [r0, #0x2ec]
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0x2f4]
    b L_0215dc08
L_0215dbd8:
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2f4]
    cmp r1, #0x0
    movne r1, #0x0
    strne r1, [r0, #0x2ec]
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0x2f4]
L_0215dc08:
    ldr r0, =data_0214b024
    ldrh r0, [r0, #0x2]
    ands r0, r0, #0x1
    bne L_0215dc50
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x2ec]
    cmp r0, #0x0
    bne L_0215dc50
    mov r0, #0x1
    bl func_ov003_0215e818
    movs r4, r0
    ldrne r0, =data_ov003_0216be20
    movne r1, #0x0
    ldrne r0, [r0, #0x0]
    addne r0, r0, #0x1000
    strne r1, [r0, #0x2ec]
L_0215dc50:
    cmp r4, #0x0
    bne L_0215dd98
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x20]
    cmp r1, #0x0
    bne L_0215dd98
    add r1, r0, #0x1000
    ldr r1, [r1, #0x2f4]
    cmp r1, #0x0
    bne L_0215dd98
    ldr r1, =data_0214b024
    ldrh r1, [r1, #0x2]
    ands r1, r1, #0x2
    beq L_0215dd98
    mov r5, r7, asr #0x3
    cmp r5, #0x5
    mov r2, r11, asr #0x3
    mov r1, #0x0
    bge L_0215dcbc
    ldrb r3, [r0, #0x10]
    cmp r3, #0x0
    subne r4, r3, #0x1
    addne r3, r0, #0x10
    swpneb r0, r4, [r3]
    movne r4, #0x1
    moveq r1, #0x1
L_0215dcbc:
    cmp r5, #0x1d
    blt L_0215dce8
    ldr r0, =data_ov003_0216be20
    ldr r3, [r0, #0x0]
    ldrb r0, [r3, #0x10]
    cmp r0, #0x2
    addlo r0, r0, #0x1
    addlo r3, r3, #0x10
    swplob r0, r0, [r3]
    movlo r4, #0x1
    movhs r1, #0x1
L_0215dce8:
    cmp r2, #0x3
    bge L_0215dd14
    ldr r0, =data_ov003_0216be20
    ldr r3, [r0, #0x0]
    ldrb r0, [r3, #0x11]
    cmp r0, #0x0
    subne r0, r0, #0x1
    addne r3, r3, #0x11
    swpneb r0, r0, [r3]
    movne r4, #0x1
    moveq r1, #0x1
L_0215dd14:
    cmp r2, #0x15
    blt L_0215dd40
    ldr r0, =data_ov003_0216be20
    ldr r2, [r0, #0x0]
    ldrb r0, [r2, #0x11]
    cmp r0, #0x2
    addlo r0, r0, #0x1
    addlo r2, r2, #0x11
    swplob r0, r0, [r2]
    movlo r4, #0x1
    movhs r1, #0x1
L_0215dd40:
    cmp r4, #0x0
    bne L_0215dd50
    cmp r1, #0x0
    beq L_0215dd68
L_0215dd50:
    ldr r0, =data_ov003_0216be20
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0x2ec]
    b L_0215dd98
L_0215dd68:
    mov r0, #0x0
    bl func_ov003_0215e818
    cmp r0, #0x0
    beq L_0215dd98
    mov r0, #0x1
    bl func_ov003_0215e818
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    mov r4, #0x1
    add r0, r0, #0x1000
    str r1, [r0, #0x2ec]
L_0215dd98:
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x20]
    cmp r0, #0x0
    bne L_0215dde0
    add r0, r1, #0x1000
    ldr r0, [r0, #0x2f4]
    cmp r0, #0x0
    bne L_0215dde0
    cmp r4, #0x0
    bne L_0215dde0
    bl func_ov003_0215c7b8
    movs r4, r0
    ldrne r0, =data_ov003_0216be20
    movne r1, #0x1
    ldrne r0, [r0, #0x0]
    addne r0, r0, #0x1000
    strne r1, [r0, #0x2ec]
L_0215dde0:
    cmp r4, #0x0
    beq L_0215dec0
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215de1c
    cmp r0, #0x1
    beq L_0215de28
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_0215de30
L_0215de1c:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_0215de30
L_0215de28:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_0215de30:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215de54
    cmp r0, #0x1
    beq L_0215de60
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0215de68
L_0215de54:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0215de68
L_0215de60:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0215de68:
    ldr r1, =data_ov003_0216be20
    mov r4, #0x0
    ldr r2, [r1, #0x0]
    mov r3, #0x1
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    add sp, sp, #0x4
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r0, [r1, #0x0]
    str r4, [r0, #0x8]
    ldr r2, [r1, #0x0]
    swpb r0, r3, [r2]
    ldr r0, [r1, #0x0]
    str r4, [r0, #0x20]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215dec0:
    ldr r1, =data_ov003_0216be20
    ldr r4, [r1, #0x0]
    add r0, r4, #0x3000
    ldr r3, [r0, #0x6c4]
    ldr r0, [r3, #0x8]
    cmp r0, #0x1
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    ldrb r2, [r3, #0x0]
    ldrb r0, [r4, #0x1c]
    cmp r2, r0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrb r2, [r3, #0x1]
    ldrb r0, [r4, #0x1d]
    cmp r2, r0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    add r0, r4, #0x1000
    mov r3, #0x0
    str r3, [r0, #0x2f0]
    ldr r2, [r1, #0x0]
    mov r0, #0x2
    swpb r0, r0, [r2]
    ldr r1, [r1, #0x0]
    ldr r0, =0x6cc
    add r1, r1, #0x3000
    add r1, r1, r0
    swpb r0, r3, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
