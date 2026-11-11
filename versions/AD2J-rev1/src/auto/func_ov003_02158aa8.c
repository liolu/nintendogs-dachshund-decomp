#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020b1f04();
extern char data_02153700[];
extern char data_ov003_0216bafc[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_02158aa8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x48
    ldr r1, =data_ov003_0216be20
    ldr r0, =0x1b4e81b5
    ldr r3, [r1, #0x0]
    ldr r4, =data_ov003_0216bafc
    add r2, r3, #0x3000
    ldr r2, [r2, #0x6c4]
    ldr r5, [r3, #0x24]
    ldr r2, [r2, #0x8]
    add r3, r3, #0x3500
    sub r2, r5, r2
    rsb r2, r2, #0x12c
    mov r5, r2, lsl #0x7
    smull r2, r6, r0, r5
    mov r6, r6, asr #0x5
    mov r2, r5, lsr #0x1f
    add r6, r2, r6
    mov r2, r6, lsl #0x10
    mov r5, r2, asr #0x10
    strh r5, [r3, #0x64]
    ldr r2, [r1, #0x0]
    add lr, sp, #0x4
    add r2, r2, #0x3500
    strh r5, [r2, #0x74]
    ldr r2, [r1, #0x0]
    mov ip, #0x4
    add r2, r2, #0x3500
    strh r5, [r2, #0x84]
    ldr r2, [r1, #0x0]
    add r2, r2, #0x3500
    strh r5, [r2, #0x94]
    ldr r3, [r1, #0x0]
    ldr r2, [r3, #0x24]
    add r3, r3, #0x3500
    rsb r2, r2, #0x12c
    mov r5, r2, lsl #0x7
    smull r2, r6, r0, r5
    mov r6, r6, asr #0x5
    mov r0, r5, lsr #0x1f
    add r6, r0, r6
    mov r0, r6, lsl #0x10
    mov r2, r0, asr #0x10
    strh r2, [r3, #0x24]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3500
    strh r2, [r0, #0x34]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3500
    strh r2, [r0, #0x44]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3500
    strh r2, [r0, #0x54]
L_0215affc:
    ldmia r4!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs ip, ip, #0x1
    bne L_0215affc
    ldr r1, [r4, #0x0]
    mov r0, #0x0
    str r1, [lr, #0x0]
    add r4, sp, #0x4
    ldr r2, =data_ov003_0216be20
    mov ip, r0
    mov r3, #0x1
L_0215b028:
    ldr lr, [r2, #0x0]
    ldrsb r1, [lr, #0x0]
    sub r1, r1, #0x2
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    and r1, r1, #0xff
    cmp r1, #0x2
    ldrls r1, [r4, r0, lsl #0x2]
    addls r1, lr, r1, lsl #0x4
    addls r1, r1, #0x3000
    strls ip, [r1, #0x41c]
    ldrhi r1, [r4, r0, lsl #0x2]
    add r0, r0, #0x1
    addhi r1, lr, r1, lsl #0x4
    addhi r1, r1, #0x3000
    strhi r3, [r1, #0x41c]
    cmp r0, #0x11
    blt L_0215b028
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x0]
    cmp r0, #0x1
    bhi L_0215b1e8
    add r0, r1, #0x3000
    ldrb r1, [r0, #0x3b8]
    cmp r1, #0x0
    subne r2, r1, #0x1
    addne r1, r0, #0x3b8
    swpneb r0, r2, [r1]
    ldr r1, =data_ov003_0216be20
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldrb r2, [r0, #0x3b8]
    cmp r2, #0xa
    bhs L_0215b10c
    ldr r2, [r3, #0xc]
    cmp r2, #0x0
    beq L_0215b0dc
    mov r2, #0x0
    str r2, [r0, #0x5ec]
    ldr r0, [r1, #0x0]
    mov r1, #0x1
    add r0, r0, #0x3000
    str r1, [r0, #0x5fc]
    b L_0215b0f4
L_0215b0dc:
    mov r2, #0x1
    str r2, [r0, #0x5ec]
    ldr r0, [r1, #0x0]
    mov r1, #0x0
    add r0, r0, #0x3000
    str r1, [r0, #0x5fc]
L_0215b0f4:
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    str r1, [r0, #0x60c]
    b L_0215b130
L_0215b10c:
    mov r2, #0x1
    str r2, [r0, #0x60c]
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0x3000
    str r2, [r0, #0x5ec]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3000
    str r2, [r0, #0x5fc]
L_0215b130:
    ldr r0, =data_ov003_0216be20
    ldr r0, [r0, #0x0]
    add r1, r0, #0x3000
    ldrb r2, [r1, #0x3b9]
    cmp r2, #0x0
    ldrne r0, =0x3b9
    subne r2, r2, #0x1
    addne r1, r1, r0
    swpneb r0, r2, [r1]
    ldr r1, =data_ov003_0216be20
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldrb r2, [r0, #0x3b9]
    cmp r2, #0xa
    bhs L_0215b1c4
    ldr r2, [r3, #0xc]
    cmp r2, #0x0
    beq L_0215b194
    mov r2, #0x1
    str r2, [r0, #0x5bc]
    ldr r0, [r1, #0x0]
    mov r1, #0x0
    add r0, r0, #0x3000
    str r1, [r0, #0x5cc]
    b L_0215b1ac
L_0215b194:
    mov r2, #0x0
    str r2, [r0, #0x5bc]
    ldr r0, [r1, #0x0]
    mov r1, #0x1
    add r0, r0, #0x3000
    str r1, [r0, #0x5cc]
L_0215b1ac:
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    str r1, [r0, #0x5dc]
    b L_0215b1e8
L_0215b1c4:
    mov r2, #0x1
    str r2, [r0, #0x5dc]
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0x3000
    str r2, [r0, #0x5bc]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3000
    str r2, [r0, #0x5cc]
L_0215b1e8:
    ldr r0, =data_ov003_0216be20
    mov r1, #0x0
    ldr r4, [r0, #0x0]
    ldr r0, =data_02153700
    str r1, [sp, #0x0]
    ldr r2, [r0, #0x0]
    add r1, r4, #0x3000
    ldr r3, =0x341c
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    add r3, r4, r3
    bl func_020b1f04
    add sp, sp, #0x48
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
