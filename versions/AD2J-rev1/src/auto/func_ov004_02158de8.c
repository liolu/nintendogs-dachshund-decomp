#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027b00();
extern void func_02027ea8();
extern void func_02027f40();
extern void func_020280f8();
extern void func_02035130();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020418b0();
extern void func_02092df4();
extern void func_ov004_02159844();
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov004_02158de8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r3, =0x4000304
    mov r6, r0
    ldrh r0, [r3, #0x0]
    mov r5, r1
    mov r4, r2
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02158ecc
    ldr r0, =data_02153720
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_02158ecc
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_02158e6c
    mov r0, r6
    mov r1, #0x1
    mov r2, #0x1e
    bl func_02027ea8
    mov r0, r6
    mov r1, #0x2
    mvn r2, #0x2
    bl func_02027ea8
    b L_02158ecc
L_02158e6c:
    add r2, r6, #0x100
    ldrh r0, [r2, #0x36]
    add r0, r0, #0x1
    strh r0, [r2, #0x36]
    ldrh r0, [r2, #0x36]
    cmp r0, #0x3c
    blo L_02158e9c
    mov r3, #0x0
    mov r0, r6
    mvn r1, #0x13
    strh r3, [r2, #0x36]
    bl func_02027b00
L_02158e9c:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ea8
    mov r0, r6
    mov r1, #0x5
    mvn r2, #0x9
    bl func_02027ea8
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x1
    bl func_02027ea8
L_02158ecc:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x28]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x28]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x28]
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    mov r0, r6
    bl func_020280f8
    smull r1, r2, r0, r7
    mov r0, #0x800
    adds r3, r1, r0
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    smull r4, r2, r3, r4
    adds r0, r4, r0
    adc r3, r2, #0x0
    mov r2, r0, lsr #0xc
    ldr r1, =data_0214b480
    orr r2, r2, r3, lsl #0x14
    ldr r0, [r1, #0x0]
    mov r1, r5
    bl func_02092df4
    cmp r0, #0x0
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x2a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x2a]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x2a]
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r6, #0x100
    ldrgth r1, [r0, #0x2c]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x2c]
    bgt L_02158fb8
    add r0, r6, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_02158fb8:
    add r0, r6, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x3c
    bls L_02159060
    ldrsh r0, [r0, #0x54]
    cmp r0, #0x0
    beq L_02159034
    cmp r0, #0x3
    beq L_02159034
    cmp r0, #0x4
    bne L_02159090
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3c
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    bne L_02159090
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e280
    b L_02159090
L_02159034:
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xa
    bl func_02035130
    cmp r0, #0x0
    beq L_02159090
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e280
    b L_02159090
L_02159060:
    cmp r1, #0x14
    bls L_02159090
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e280
    add r1, r6, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r6, #0xb1
    mov r0, #0x9
    swpb r0, r0, [r1]
L_02159090:
    ldr r1, [r6, #0x4ac]
    add r0, r6, #0x100
    add r1, r1, #0x1
    str r1, [r6, #0x4ac]
    ldrh r1, [r0, #0x2a]
    cmp r1, #0x14
    bls L_021590f0
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021590d8
    ldr r1, =0x43c
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021590d8:
    ldr r1, =0x43f
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021590f0:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    bne L_0215910c
    cmp r1, #0x1
    bls L_02159128
L_0215910c:
    mov r0, r6
    mov r1, #0x1
    bl func_ov004_02159844
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
L_02159128:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_02159150
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02159158
L_02159150:
    mov r1, #0x0
    b L_02159160
L_02159158:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_02159160:
    cmp r1, #0x0
    beq L_02159184
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_02159184
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_02159188
L_02159184:
    mov r0, #0x0
L_02159188:
    cmp r0, #0x0
    bne L_021591e8
    cmp r2, #0x0
    blt L_021591ac
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_021591b4
L_021591ac:
    mov r0, #0x0
    b L_021591bc
L_021591b4:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_021591bc:
    cmp r0, #0x0
    beq L_021591d4
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_021591d8
L_021591d4:
    mov r0, #0x0
L_021591d8:
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_021591e8:
    ldrsb r0, [r6, #0xa4]
    cmp r0, #0x2
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r6
    mov r1, #0x5
    bl func_02027f40
    mov r4, r0
    mov r0, r6
    bl func_020418b0
    cmp r4, r0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    ldr r1, =0x43f
    mov r0, r6
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
