#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e58();
extern void func_02027ed0();
extern void func_0202a520();
extern void func_0202bdf0();
extern void func_0203614c();
extern void func_0203e5e8();
extern void func_ov003_0218c400();
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0217df20(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrsb r0, [r6, #0x93]
    mov r5, r1
    mov r4, r2
    cmp r0, #0x0
    beq L_0217dfc8
    cmp r5, #0x8
    addls pc, pc, r5, lsl #0x2
    b L_0217dfb0
L_0217df48:
    b L_0217dfb0
    b L_0217dfb0
    b L_0217dfb0
    b L_0217dfb0
    b L_0217dfb0
    b L_0217df90
    b L_0217df90
    b L_0217df6c
    b L_0217df6c
L_0217df6c:
    ldr r0, [r6, #0x484]
    cmp r0, #0x0
    addeq r0, r6, #0x100
    moveq r1, #0x5000
    streqh r1, [r0, #0x2e]
    addne r0, r6, #0x100
    movne r1, #0xb000
    strneh r1, [r0, #0x2e]
    b L_0217dfb0
L_0217df90:
    ldr r0, [r6, #0x484]
    cmp r0, #0x0
    addeq r0, r6, #0x100
    moveq r1, #0x2000
    streqh r1, [r0, #0x2e]
    addne r0, r6, #0x100
    movne r1, #0xe000
    strneh r1, [r0, #0x2e]
L_0217dfb0:
    ldr r0, =data_0215a064
    add r3, r6, #0x3b4
    ldr r0, [r0, #0x0]
    add r0, r0, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0217dfc8:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217e038
    ldr r0, =data_0215a064
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_0217e038
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_0217e028
    mov r0, r6
    mov r1, #0x5
    mov r2, #0x1e
    bl func_02027ed0
    b L_0217e038
L_0217e028:
    mov r0, r6
    mov r1, #0x5
    mvn r2, #0x9
    bl func_02027ed0
L_0217e038:
    mov r0, r6
    bl func_02026e58
    cmp r0, #0x0
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1c]
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x1c]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1c]
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
    addgt r0, r6, #0x100
    ldrgth r1, [r0, #0x1e]
    addgt r1, r1, #0x1
    strgth r1, [r0, #0x1e]
    bgt L_0217e0b0
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0217e0b0:
    ldr r1, [r6, #0x488]
    add r0, r6, #0x100
    add r1, r1, #0x1
    str r1, [r6, #0x488]
    ldrh r0, [r0, #0x1c]
    mov r2, r4
    cmp r0, #0x0
    addeq r1, r6, #0xb9
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xb9
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r1, r5
    mov r0, r6
    bl func_0202bdf0
    cmp r0, #0x0
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r6
    bl func_0203614c
    cmp r0, #0x0
    beq L_0217e120
    mov r0, r6
    bl func_0202a520
    cmp r0, #0x0
    beq L_0217e134
L_0217e120:
    mov r0, r6
    mov r1, r5
    bl func_ov003_0218c400
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0217e134:
    ldr r1, =data_0214da84
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
    ldr r2, [r6, #0x484]
    ldr r1, =0x222
    mov r0, r6
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
