#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022dc0();
extern void func_02022ddc();
extern void func_02022e04();
extern void func_020234f8();
extern void func_02026d2c();
extern void func_02026de0();
extern void func_02026e58();
extern void func_02027ed0();
extern void func_02028ec4();
extern void func_02029248();
extern void func_020298c0();
extern void func_0202a520();
extern void func_0202c55c();
extern void func_0202d804();
extern void func_0202fa5c();
extern void func_02033dd4();
extern void func_020350fc();
extern void func_020382c4();
extern void func_020394f8();
extern void func_02039948();
extern void func_020399a4();
extern void func_0203df68();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_ov003_0218a0f0();
extern void func_ov003_021964c0();
extern char data_02139d70[];
extern char data_02139e0c[];
extern char data_0214da84[];
extern char data_0215a04c[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02177c58(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldrsb r0, [r9, #0x8b]
    mov r8, r1
    mov r10, r2
    mov r7, r3
    cmp r0, #0x1
    mov r6, #0x0
    mov r5, #0x3c
    beq L_02177c94
    cmp r0, #0x2
    addeq r0, r5, #0xf0
    moveq r0, r0, lsl #0x10
    moveq r5, r0, asr #0x10
    b L_02177ca0
L_02177c94:
    add r0, r5, #0x3c
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
L_02177ca0:
    ldrsb r0, [r9, #0x8e]
    cmp r0, #0x0
    beq L_02177cb4
    cmp r0, #0x1
    bne L_02177cc0
L_02177cb4:
    add r0, r5, #0x78
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
L_02177cc0:
    mov r1, #0x0
    ldr r0, =0x4000304
    str r1, [r9, #0x464]
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02177f2c
    bl func_020a5d54
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_02177f2c
    bl func_0204496c
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_02177f2c
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_02177d24
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x5
    bl func_02027ed0
    b L_02177d34
L_02177d24:
    mov r0, r9
    mov r1, #0x1
    mvn r2, #0x31
    bl func_02027ed0
L_02177d34:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_02177d48
    mov r0, r9
    bl func_020394f8
L_02177d48:
    mov r0, r9
    bl func_02026e58
    mov r4, r0
    mov r0, r9
    mov r1, r4
    bl func_ov003_0218a0f0
    cmp r4, #0x0
    beq L_02177da4
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r9, #0x100
    ldrgth r1, [r0, #0x1e]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x1e]
    bgt L_02177db8
L_02177da4:
    add r0, r9, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_02177db8:
    ldr r0, [sp, #0x28]
    cmp r0, #0x0
    beq L_02177e40
    str r4, [r9, #0x464]
    add r0, r9, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x14
    bls L_02177e04
    sub r0, r5, #0x14
    cmp r1, r0
    ble L_02177e04
    ldrsh r2, [sp, #0x30]
    mov r0, r9
    mov r1, #0x1
    bl func_0203e5ac
    ldrsb r0, [sp, #0x38]
    add r1, r9, #0x97
    swpb r0, r0, [r1]
    b L_02177e20
L_02177e04:
    ldrsh r2, [sp, #0x34]
    mov r0, r9
    mov r1, #0x1
    bl func_0203e5ac
    ldrsb r0, [sp, #0x3c]
    add r1, r9, #0x97
    swpb r0, r0, [r1]
L_02177e20:
    ldr r0, [r9, #0x464]
    cmp r0, #0x0
    addne r1, r9, #0xb9
    movne r0, #0x1
    swpneb r0, r0, [r1]
    addeq r1, r9, #0xb9
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_02177e40:
    mov r0, r9
    mov r1, #0x25
    bl func_02022e04
    cmp r0, #0x0
    beq L_02177e7c
    mov r0, r9
    bl func_020399a4
    cmp r0, #0x0
    beq L_02177f2c
    ldrsb r1, [r9, #0x88]
    mov r0, #0x8
    bl func_020a5a1c
    mov r0, r9
    bl func_02039948
    b L_02177f2c
L_02177e7c:
    cmp r7, #0x0
    beq L_02177f2c
    add r0, r9, #0x100
    ldrh r0, [r0, #0x1a]
    cmp r0, #0x64
    bls L_02177ea4
    mov r0, r9
    mov r1, #0x0
    bl func_0202d804
    b L_02177f2c
L_02177ea4:
    ldr r1, =data_0215a064
    mvn r0, #0x45
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x86]
    cmp r1, r0
    ble L_02177f10
    cmp r1, #0x46
    bge L_02177f10
    ldrsh r0, [r2, #0x88]
    cmp r0, #0x4b
    ble L_02177f10
    mov r0, r9
    bl func_020399a4
    cmp r0, #0x0
    beq L_02177ef4
    ldrsb r1, [r9, #0x88]
    mov r0, #0xe
    bl func_020a5a1c
    mov r0, r9
    bl func_02039948
L_02177ef4:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r6, #0x1
    moveq r6, #0x0
    b L_02177f2c
L_02177f10:
    ldrsh r1, [r2, #0x88]
    mvn r0, #0x9
    cmp r1, r0
    bge L_02177f2c
    mov r0, r9
    mov r1, #0x0
    bl func_0202d804
L_02177f2c:
    ldrsb r0, [r9, #0x8b]
    cmp r0, #0x1
    beq L_02177f50
    mov r0, r9
    bl func_02022dc0
    cmp r0, #0x0
    ldreq r0, [r9, #0x488]
    addeq r0, r0, #0x1
    streq r0, [r9, #0x488]
L_02177f50:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02177f64
    mov r0, r9
    bl func_02029248
L_02177f64:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_02177fd4
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x11
    beq L_02177fcc
    ldrsh r1, [r9, #0xf0]
    ldrb r2, [r9, #0xa5]
    mov r0, r9
    sub r1, r1, #0xc
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020234f8
    mov r1, r0
    mov r0, r9
    bl func_0203df68
    add r1, r8, #0x1
    mov r0, r9
    and r2, r1, #0xff
    mov r1, #0xe
    bl func_02028ec4
    b L_02177fd4
L_02177fcc:
    mov r0, r9
    bl func_02029248
L_02177fd4:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_02178010
    ldrsh r1, [r9, #0xf2]
    ldrb r2, [r9, #0xa6]
    mov r0, r9
    bl func_02022ddc
    cmp r0, #0x0
    bne L_02178010
    mov r0, r9
    mov r1, r8
    bl func_0202c55c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
L_02178010:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    mov r3, #0x0
    bl func_020298c0
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldrsh r1, [r9, #0xf2]
    ldrb r2, [r9, #0xa6]
    mov r0, r9
    bl func_02022ddc
    cmp r0, #0x0
    bne L_02178154
    mov r0, r9
    bl func_02026de0
    cmp r0, #0x0
    bne L_02178068
    mov r0, r9
    bl func_02026d2c
    cmp r0, #0x0
    beq L_02178154
L_02178068:
    mov r0, r9
    bl func_02026de0
    cmp r0, #0x0
    beq L_021780b0
    mov r0, r9
    bl func_020350fc
    movs r1, r0
    beq L_021780a0
    ldr r2, =data_02139d70
    mov r0, r9
    ldr r2, [r2, r8, lsl #0x2]
    bl func_ov003_021964c0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021780a0:
    mov r0, r9
    bl func_0202fa5c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021780b0:
    mov r0, r9
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02178110
L_021780c4:
    b L_021780d4
    b L_021780e4
    b L_021780f4
    b L_02178104
L_021780d4:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e5e8
    b L_02178110
L_021780e4:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e5e8
    b L_02178110
L_021780f4:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e5e8
    b L_02178110
L_02178104:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e5e8
L_02178110:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217812c
    mov r0, r9
    bl func_02029248
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0217812c:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02178154:
    mov r0, r9
    bl func_0202a520
    cmp r0, #0x0
    beq L_02178190
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r1, =0x35a
    mov r0, r9
    bl func_0203e5e8
    mov r0, r9
    bl func_02033dd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02178190:
    add r0, r9, #0x100
    ldrh r0, [r0, #0x1e]
    cmp r0, r5
    ble L_0217821c
    ldr r0, [r9, #0x464]
    cmp r0, #0x1
    beq L_021781c4
    cmp r0, #0x2
    beq L_021781e0
    cmp r0, #0x3
    beq L_021781fc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021781c4:
    add r0, r8, #0xf5
    mov r1, r0, lsl #0x10
    mov r0, r9
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021781e0:
    add r0, r8, #0xfe
    mov r1, r0, lsl #0x10
    mov r0, r9
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021781fc:
    ldr r1, =0x107
    mov r0, r9
    add r1, r8, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0217821c:
    cmp r6, #0x0
    beq L_021782bc
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r4, [r1, #0x0]
    mov r1, #0x14
    ldr r3, [r4, #0x0]
    ldr r2, =data_02139e0c
    mul r0, r3, r0
    add r3, r0, #0x1
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    str r3, [r4, #0x0]
    ldrsb r3, [r9, #0x8d]
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    ldrb r1, [r2, r3]
    cmp r1, r0, lsr #0x10
    ble L_021782bc
    ldrsb r0, [r9, #0x8b]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_02178368
L_0217827c:
    b L_02178294
    b L_021782a8
    b L_02178294
    b L_02178294
    b L_02178368
    b L_02178368
L_02178294:
    ldr r1, =0x38f
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021782a8:
    ldr r1, =0x391
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021782bc:
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x1
    beq L_021782e8
    cmp r0, #0x4
    bne L_021782fc
L_021782e8:
    ldr r1, =0x3ab
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021782fc:
    mov r0, r9
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02178368
L_02178310:
    b L_02178320
    b L_02178334
    b L_02178348
    b L_0217835c
L_02178320:
    ldr r1, =0x3ab
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02178334:
    ldr r1, =0x3ad
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02178348:
    ldr r1, =0x3ae
    mov r0, r9
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0217835c:
    ldr r1, =0x3af
    mov r0, r9
    bl func_0203e5e8
L_02178368:
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
