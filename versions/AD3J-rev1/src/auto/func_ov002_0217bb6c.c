#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e30();
extern void func_02027ea8();
extern void func_0202a4cc();
extern void func_0202bda8();
extern void func_02035f94();
extern void func_0203e2b8();
extern void func_ov002_0218a100();
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0217bb6c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrsb r0, [r6, #0xac]
    mov r5, r1
    mov r4, r2
    cmp r0, #0x0
    beq L_0217bc14
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_0217bbfc
L_0217bb94:
    b L_0217bbfc
    b L_0217bbfc
    b L_0217bbfc
    b L_0217bbfc
    b L_0217bbfc
    b L_0217bbdc
    b L_0217bbdc
    b L_0217bbb8
    b L_0217bbb8
L_0217bbb8:
    ldr r0, [r6, #0x4a8]
    cmp r0, #0x0
    addeq r0, r6, #0x100
    moveq r1, #0x5000
    streqh r1, [r0, #0x8]
    addne r0, r6, #0x100
    movne r1, #0xb000
    strneh r1, [r0, #0x8]
    b L_0217bbfc
L_0217bbdc:
    ldr r0, [r6, #0x4a8]
    cmp r0, #0x0
    addeq r0, r6, #0x100
    moveq r1, #0x2000
    streqh r1, [r0, #0x8]
    addne r0, r6, #0x100
    movne r1, #0xe000
    strneh r1, [r0, #0x8]
L_0217bbfc:
    ldr r0, =data_02153720
    add r3, r6, #0x3d8
    ldr r0, [r0, #0x0]
    add r0, r0, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0217bc14:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217bc84
    ldr r0, =data_02153720
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_0217bc84
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_0217bc74
    mov r0, r6
    mov r1, #0x5
    mov r2, #0x1e
    bl func_02027ea8
    b L_0217bc84
L_0217bc74:
    mov r0, r6
    mov r1, #0x5
    mvn r2, #0x9
    bl func_02027ea8
L_0217bc84:
    mov r0, r6
    bl func_02026e30
    cmp r0, #0x0
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x2a]
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x2a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x2a]
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
    bgt L_0217bcfc
    add r0, r6, #0x100
    ldrh r1, [r0, #0x2c]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x2c]
L_0217bcfc:
    ldr r1, [r6, #0x4ac]
    add r0, r6, #0x100
    add r1, r1, #0x1
    str r1, [r6, #0x4ac]
    ldrh r0, [r0, #0x2a]
    mov r2, r4
    cmp r0, #0x0
    addeq r1, r6, #0xa2
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xa2
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r1, r5
    mov r0, r6
    bl func_0202bda8
    cmp r0, #0x0
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r6
    bl func_02035f94
    cmp r0, #0x0
    beq L_0217bd6c
    mov r0, r6
    bl func_0202a4cc
    cmp r0, #0x0
    beq L_0217bd80
L_0217bd6c:
    mov r0, r6
    mov r1, r5
    bl func_ov002_0218a100
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0217bd80:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x190
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r2, [r6, #0x4a8]
    ldr r1, =0x222
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
