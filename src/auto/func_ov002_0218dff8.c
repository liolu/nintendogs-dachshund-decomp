#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020266a0();
extern void func_02026b54();
extern void func_02026c08();
extern void func_020280ec();
extern void func_020286ec();
extern void func_0202f960();
extern void func_02035454();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_020360f0();
extern void func_020366bc();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_0210beb4();
extern void func_ov002_02195f40();
extern char data_02153708[];
// clang-format off
asm void func_ov002_0218dff8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_02035ff4
    movs r6, r0
    beq L_0218e10c
    add r0, r6, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x3d8
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_02038edc
    ldr r1, =0x312
    mov r0, r5
    bl func_02036fbc
    mov r0, r5
    mov r1, r4
    bl func_020366bc
    ldr r1, [r5, #0x488]
    mov r4, r0
    cmp r1, #0x0
    ldr r6, [r6, #0xf8]
    beq L_0218e0b4
    mov r0, r5
    bl func_020280ec
    add r1, r6, #0x10000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    ble L_0218e10c
    mov r0, r5
    mov r2, #0x11
    str r1, [r5, #0x488]
    bl func_0203e280
    mov r0, r5
    bl func_020266a0
    add r1, r5, #0xbc
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0218e10c
L_0218e0b4:
    mov r0, r5
    bl func_020280ec
    add r1, r6, #0x9000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    bge L_0218e10c
    mov r3, #0x1
    mov r0, r5
    mov r2, r1
    str r3, [r5, #0x488]
    bl func_0203e280
    mov r0, r5
    bl func_02026b54
    add r1, r5, #0xbc
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0218e10c:
    mov r0, r5
    bl func_02035ff4
    mov r4, r0
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1
    bl func_020286ec
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r5
    mov r1, r4
    bl func_02035454
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r1, [r5, #0x4ac]
    ldr r0, =data_02153708
    add r1, r1, #0x1
    str r1, [r5, #0x4ac]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_0218e21c
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_0218e21c
    cmp r4, #0x0
    beq L_0218e1d4
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0218e1a0
    cmp r0, #0x2
    bne L_0218e1a8
L_0218e1a0:
    mov r0, #0x1
    b L_0218e1cc
L_0218e1a8:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_0218e1c8
    mov r0, r4
    bl func_0210beb4
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0218e1cc
L_0218e1c8:
    mov r0, #0x0
L_0218e1cc:
    cmp r0, #0x0
    beq L_0218e1f0
L_0218e1d4:
    mov r0, r5
    mov r1, #0x5d
    bl func_0203e2b8
    mov r0, r5
    bl func_02035e20
    mov r0, #0x1
    b L_0218e21c
L_0218e1f0:
    mov r0, r5
    mov r1, r4
    bl func_02026c08
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0218e21c
    mov r0, r5
    bl func_0202f960
    mov r0, r5
    bl func_02035e20
    mov r0, #0x1
L_0218e21c:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0218e254
    mov r0, r5
    mov r1, r4
    bl func_020360f0
    cmp r0, #0x0
    bne L_0218e254
    mov r0, r5
    bl func_ov002_02195f40
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0218e254:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x64
    ldmlsfd sp!, {r4, r5, r6, lr}
    bxls lr
    mov r0, r5
    bl func_ov002_02195f40
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
