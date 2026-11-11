#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
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
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_0210bebc();
extern void func_ov002_02195f40();
extern char data_02153708[];
// clang-format off
asm void func_ov002_0218e284(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_02035ff4
    movs r6, r0
    beq L_0218e3f8
    add r0, r6, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x278
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, #0x300
    bl func_02036fbc
    mov r0, r5
    mov r1, r4
    bl func_020366bc
    ldr r1, [r5, #0x488]
    mov r4, r0
    cmp r1, #0x0
    ldr r6, [r6, #0xf8]
    beq L_0218e388
    mov r0, r5
    bl func_020280ec
    add r1, r6, #0x4000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    bge L_0218e3f8
    mov r0, r5
    str r1, [r5, #0x488]
    bl func_020280ec
    mvn r1, #0x4b
    mvn r2, #0x0
    umull ip, r4, r0, r1
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r2, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x8e
    str r3, [r5, #0x240]
    bl func_0203e280
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add r1, r5, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r5, #0xbc
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0218e3f8
L_0218e388:
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
    ble L_0218e3f8
    mov r0, #0x1
    str r0, [r5, #0x488]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x240]
    bl func_0203e280
    mov r1, #0x1
    mov r0, r5
    mov r2, r1
    bl func_0203e280
    add r1, r5, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r5, #0xbc
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0218e3f8:
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
    beq L_0218e508
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_0218e508
    cmp r4, #0x0
    beq L_0218e4c0
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0218e48c
    cmp r0, #0x2
    bne L_0218e494
L_0218e48c:
    mov r0, #0x1
    b L_0218e4b8
L_0218e494:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_0218e4b4
    mov r0, r4
    bl func_0210bebc
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0218e4b8
L_0218e4b4:
    mov r0, #0x0
L_0218e4b8:
    cmp r0, #0x0
    beq L_0218e4dc
L_0218e4c0:
    mov r0, r5
    mov r1, #0x5d
    bl func_0203e2b8
    mov r0, r5
    bl func_02035e20
    mov r0, #0x1
    b L_0218e508
L_0218e4dc:
    mov r0, r5
    mov r1, r4
    bl func_02026c08
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0218e508
    mov r0, r5
    bl func_0202f960
    mov r0, r5
    bl func_02035e20
    mov r0, #0x1
L_0218e508:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0218e540
    mov r0, r5
    mov r1, r4
    bl func_020360f0
    cmp r0, #0x0
    bne L_0218e540
    mov r0, r5
    bl func_ov002_02195f40
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0218e540:
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
