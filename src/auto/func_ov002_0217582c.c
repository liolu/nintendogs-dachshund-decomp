#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022d8c();
extern void func_02022da8();
extern void func_02022dd0();
extern void func_020234c4();
extern void func_02026d04();
extern void func_02026db8();
extern void func_02026e30();
extern void func_02027ea8();
extern void func_02028e80();
extern void func_02029204();
extern void func_0202986c();
extern void func_0202a4cc();
extern void func_0202c4c0();
extern void func_0202d6f8();
extern void func_0202f960();
extern void func_02033cd8();
extern void func_02034f40();
extern void func_02038094();
extern void func_020392c8();
extern void func_02039708();
extern void func_02039764();
extern void func_0203dc40();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_02105dc4();
extern void func_021060d4();
extern void func_ov002_02187df0();
extern void func_ov002_02194020();
extern char data_02138664[];
extern char data_02138700[];
extern char data_0214b484[];
extern char data_02153708[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0217582c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldrsb r0, [r9, #0xa4]
    mov r8, r1
    mov r10, r2
    mov r7, r3
    cmp r0, #0x1
    mov r6, #0x0
    mov r5, #0x3c
    beq L_02175868
    cmp r0, #0x2
    addeq r0, r5, #0xf0
    moveq r0, r0, lsl #0x10
    moveq r5, r0, asr #0x10
    b L_02175874
L_02175868:
    add r0, r5, #0x3c
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
L_02175874:
    ldrsb r0, [r9, #0xa7]
    cmp r0, #0x0
    beq L_02175888
    cmp r0, #0x1
    bne L_02175894
L_02175888:
    add r0, r5, #0x78
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
L_02175894:
    mov r1, #0x0
    ldr r0, =0x4000304
    str r1, [r9, #0x488]
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02175b00
    bl func_021060d4
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_02175b00
    bl func_02044630
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_02175b00
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021758f8
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x5
    bl func_02027ea8
    b L_02175908
L_021758f8:
    mov r0, r9
    mov r1, #0x1
    mvn r2, #0x31
    bl func_02027ea8
L_02175908:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0217591c
    mov r0, r9
    bl func_020392c8
L_0217591c:
    mov r0, r9
    bl func_02026e30
    mov r4, r0
    mov r0, r9
    mov r1, r4
    bl func_ov002_02187df0
    cmp r4, #0x0
    beq L_02175978
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
    addgt r0, r9, #0x100
    ldrgth r1, [r0, #0x2c]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x2c]
    bgt L_0217598c
L_02175978:
    add r0, r9, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_0217598c:
    ldr r0, [sp, #0x28]
    cmp r0, #0x0
    beq L_02175a14
    str r4, [r9, #0x488]
    add r0, r9, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x14
    bls L_021759d8
    sub r0, r5, #0x14
    cmp r1, r0
    ble L_021759d8
    ldrsh r2, [sp, #0x30]
    mov r0, r9
    mov r1, #0x1
    bl func_0203e280
    ldrsb r0, [sp, #0x38]
    add r1, r9, #0xb0
    swpb r0, r0, [r1]
    b L_021759f4
L_021759d8:
    ldrsh r2, [sp, #0x34]
    mov r0, r9
    mov r1, #0x1
    bl func_0203e280
    ldrsb r0, [sp, #0x3c]
    add r1, r9, #0xb0
    swpb r0, r0, [r1]
L_021759f4:
    ldr r0, [r9, #0x488]
    cmp r0, #0x0
    addne r1, r9, #0xa2
    movne r0, #0x1
    swpneb r0, r0, [r1]
    addeq r1, r9, #0xa2
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_02175a14:
    mov r0, r9
    mov r1, #0x25
    bl func_02022dd0
    cmp r0, #0x0
    beq L_02175a50
    mov r0, r9
    bl func_02039764
    cmp r0, #0x0
    beq L_02175b00
    ldrsb r1, [r9, #0x88]
    mov r0, #0x8
    bl func_02105dc4
    mov r0, r9
    bl func_02039708
    b L_02175b00
L_02175a50:
    cmp r7, #0x0
    beq L_02175b00
    add r0, r9, #0x100
    ldrh r0, [r0, #0x28]
    cmp r0, #0x64
    bls L_02175a78
    mov r0, r9
    mov r1, #0x0
    bl func_0202d6f8
    b L_02175b00
L_02175a78:
    ldr r1, =data_02153720
    mvn r0, #0x45
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x86]
    cmp r1, r0
    ble L_02175ae4
    cmp r1, #0x46
    bge L_02175ae4
    ldrsh r0, [r2, #0x88]
    cmp r0, #0x4b
    ble L_02175ae4
    mov r0, r9
    bl func_02039764
    cmp r0, #0x0
    beq L_02175ac8
    ldrsb r1, [r9, #0x88]
    mov r0, #0xc
    bl func_02105dc4
    mov r0, r9
    bl func_02039708
L_02175ac8:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    movne r6, #0x1
    moveq r6, #0x0
    b L_02175b00
L_02175ae4:
    ldrsh r1, [r2, #0x88]
    mvn r0, #0x9
    cmp r1, r0
    bge L_02175b00
    mov r0, r9
    mov r1, #0x0
    bl func_0202d6f8
L_02175b00:
    ldrsb r0, [r9, #0xa4]
    cmp r0, #0x1
    beq L_02175b24
    mov r0, r9
    bl func_02022d8c
    cmp r0, #0x0
    ldreq r0, [r9, #0x4ac]
    addeq r0, r0, #0x1
    streq r0, [r9, #0x4ac]
L_02175b24:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02175b38
    mov r0, r9
    bl func_02029204
L_02175b38:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_02175ba8
    ldr r0, =data_02153708
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x11
    beq L_02175ba0
    ldrsh r1, [r9, #0xf0]
    ldrb r2, [r9, #0xc4]
    mov r0, r9
    sub r1, r1, #0xc
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020234c4
    mov r1, r0
    mov r0, r9
    bl func_0203dc40
    add r1, r8, #0x1
    mov r0, r9
    and r2, r1, #0xff
    mov r1, #0xe
    bl func_02028e80
    b L_02175ba8
L_02175ba0:
    mov r0, r9
    bl func_02029204
L_02175ba8:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_02175be4
    ldrsh r1, [r9, #0xf2]
    ldrb r2, [r9, #0xc7]
    mov r0, r9
    bl func_02022da8
    cmp r0, #0x0
    bne L_02175be4
    mov r0, r9
    mov r1, r8
    bl func_0202c4c0
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
L_02175be4:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    mov r3, #0x0
    bl func_0202986c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldrsh r1, [r9, #0xf2]
    ldrb r2, [r9, #0xc7]
    mov r0, r9
    bl func_02022da8
    cmp r0, #0x0
    bne L_02175d28
    mov r0, r9
    bl func_02026db8
    cmp r0, #0x0
    bne L_02175c3c
    mov r0, r9
    bl func_02026d04
    cmp r0, #0x0
    beq L_02175d28
L_02175c3c:
    mov r0, r9
    bl func_02026db8
    cmp r0, #0x0
    beq L_02175c84
    mov r0, r9
    bl func_02034f40
    movs r1, r0
    beq L_02175c74
    ldr r2, =data_02138664
    mov r0, r9
    ldr r2, [r2, r8, lsl #0x2]
    bl func_ov002_02194020
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175c74:
    mov r0, r9
    bl func_0202f960
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175c84:
    mov r0, r9
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02175ce4
L_02175c98:
    b L_02175ca8
    b L_02175cb8
    b L_02175cc8
    b L_02175cd8
L_02175ca8:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e2b8
    b L_02175ce4
L_02175cb8:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e2b8
    b L_02175ce4
L_02175cc8:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e2b8
    b L_02175ce4
L_02175cd8:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e2b8
L_02175ce4:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02175d00
    mov r0, r9
    bl func_02029204
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175d00:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175d28:
    mov r0, r9
    bl func_0202a4cc
    cmp r0, #0x0
    beq L_02175d64
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r1, =0x35a
    mov r0, r9
    bl func_0203e2b8
    mov r0, r9
    bl func_02033cd8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175d64:
    add r0, r9, #0x100
    ldrh r0, [r0, #0x2c]
    cmp r0, r5
    ble L_02175df0
    ldr r0, [r9, #0x488]
    cmp r0, #0x1
    beq L_02175d98
    cmp r0, #0x2
    beq L_02175db4
    cmp r0, #0x3
    beq L_02175dd0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175d98:
    add r0, r8, #0xf5
    mov r1, r0, lsl #0x10
    mov r0, r9
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175db4:
    add r0, r8, #0xfe
    mov r1, r0, lsl #0x10
    mov r0, r9
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175dd0:
    ldr r1, =0x107
    mov r0, r9
    add r1, r8, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175df0:
    cmp r6, #0x0
    beq L_02175e90
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r4, [r1, #0x0]
    mov r1, #0x14
    ldr r3, [r4, #0x0]
    ldr r2, =data_02138700
    mul r0, r3, r0
    add r3, r0, #0x1
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    str r3, [r4, #0x0]
    ldrsb r3, [r9, #0xa6]
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    ldrb r1, [r2, r3]
    cmp r1, r0, lsr #0x10
    ble L_02175e90
    ldrsb r0, [r9, #0xa4]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_02175f3c
L_02175e50:
    b L_02175e68
    b L_02175e7c
    b L_02175e68
    b L_02175e68
    b L_02175f3c
    b L_02175f3c
L_02175e68:
    ldr r1, =0x38f
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175e7c:
    ldr r1, =0x391
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175e90:
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r0, =data_02153708
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x1
    beq L_02175ebc
    cmp r0, #0x4
    bne L_02175ed0
L_02175ebc:
    ldr r1, =0x3ab
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175ed0:
    mov r0, r9
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02175f3c
L_02175ee4:
    b L_02175ef4
    b L_02175f08
    b L_02175f1c
    b L_02175f30
L_02175ef4:
    ldr r1, =0x3ab
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175f08:
    ldr r1, =0x3ad
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175f1c:
    ldr r1, =0x3ae
    mov r0, r9
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02175f30:
    ldr r1, =0x3af
    mov r0, r9
    bl func_0203e2b8
L_02175f3c:
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
