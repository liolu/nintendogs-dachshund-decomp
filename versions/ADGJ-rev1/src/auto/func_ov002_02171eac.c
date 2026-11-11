#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cd44();
extern void func_02022da8();
extern void func_02022dd0();
extern void func_02026d04();
extern void func_02026db8();
extern void func_02026e30();
extern void func_020280ec();
extern void func_02029204();
extern void func_0202a4cc();
extern void func_0202c4c0();
extern void func_02033cd8();
extern void func_020355c8();
extern void func_02036fbc();
extern void func_02038094();
extern void func_02038edc();
extern void func_020392c8();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_021060d4();
extern void func_ov002_02187df0();
extern void func_ov002_0218891c();
extern void func_ov002_02189660();
extern char data_02153720[];
// clang-format off
asm void func_ov002_02171eac(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, =data_02153720
    mov r6, r0
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    ldrh r0, [r0, #0xb8]
    cmp r0, #0x0
    addeq r1, r6, #0xac
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xac
    swpneb r0, r5, [r1]
    mov r0, r6
    bl func_02038edc
    mov r0, r6
    mov r1, #0x300
    bl func_02036fbc
    ldrsb r1, [r6, #0xa4]
    mov r4, r0
    cmp r1, #0x2
    beq L_02171f48
    cmp r1, #0x1
    beq L_02171f48
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02171f48
    bl func_021060d4
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02171f48
    bl func_02044630
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02171f48
    mov r0, r6
    bl func_02026e30
    mov r5, r0
L_02171f48:
    bl func_021060d4
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02171f70
    bl func_02044630
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02171f70
    mov r0, r6
    bl func_0200cd44
L_02171f70:
    mov r0, r6
    bl func_020355c8
    mov r0, r6
    mov r1, r5
    bl func_ov002_02187df0
    cmp r5, #0x0
    beq L_02171fc8
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
    bgt L_02171fdc
L_02171fc8:
    add r0, r6, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_02171fdc:
    mov r0, r6
    bl func_020392c8
    ldrsb r0, [r6, #0xa4]
    mov r1, #0x40
    mov r2, #0x1
    cmp r0, #0x1
    ldrne r0, [r6, #0x4ac]
    addne r0, r0, #0x1
    strne r0, [r6, #0x4ac]
    mov r0, r6
    bl func_02022da8
    cmp r0, #0x0
    bne L_02172028
    mov r0, r6
    mov r1, #0x0
    bl func_0202c4c0
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
L_02172028:
    mov r0, r6
    bl func_02026db8
    cmp r0, #0x0
    bne L_02172048
    mov r0, r6
    bl func_02026d04
    cmp r0, #0x0
    beq L_021720ec
L_02172048:
    mov r0, r6
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021720a8
L_0217205c:
    b L_0217206c
    b L_0217207c
    b L_0217208c
    b L_0217209c
L_0217206c:
    ldr r1, =0x30f
    mov r0, r6
    bl func_0203e2b8
    b L_021720a8
L_0217207c:
    ldr r1, =0x311
    mov r0, r6
    bl func_0203e2b8
    b L_021720a8
L_0217208c:
    ldr r1, =0x312
    mov r0, r6
    bl func_0203e2b8
    b L_021720a8
L_0217209c:
    ldr r1, =0x313
    mov r0, r6
    bl func_0203e2b8
L_021720a8:
    ldrsh r0, [r6, #0xf0]
    cmp r0, #0x1
    bne L_021720c0
    mov r0, r6
    bl func_02029204
    b L_021720dc
L_021720c0:
    mov r0, r6
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_021720dc
    mov r0, r6
    bl func_02029204
L_021720dc:
    mov r0, r6
    bl func_02033cd8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021720ec:
    mov r0, r6
    bl func_0202a4cc
    cmp r0, #0x0
    beq L_02172118
    ldr r1, =0x35a
    mov r0, r6
    bl func_0203e2b8
    mov r0, r6
    bl func_02033cd8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02172118:
    cmp r5, #0x0
    beq L_0217217c
    cmp r5, #0x1
    beq L_02172140
    cmp r5, #0x2
    beq L_02172154
    cmp r5, #0x3
    beq L_02172168
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02172140:
    mov r0, r6
    mov r1, #0xf5
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02172154:
    mov r0, r6
    mov r1, #0xfe
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02172168:
    ldr r1, =0x107
    mov r0, r6
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0217217c:
    mov r0, r6
    bl func_020280ec
    cmp r4, r0, lsl #0x3
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    bl func_021060d4
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021721c0
    bl func_02044630
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021721c0
    mov r0, r6
    bl func_ov002_02189660
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021721c0:
    mov r0, r6
    bl func_ov002_0218891c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
