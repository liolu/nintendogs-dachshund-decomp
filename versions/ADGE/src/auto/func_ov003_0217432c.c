#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cdd4();
extern void func_02022ddc();
extern void func_02022e04();
extern void func_02026d2c();
extern void func_02026de0();
extern void func_02026e58();
extern void func_02028114();
extern void func_02029248();
extern void func_0202a520();
extern void func_0202c55c();
extern void func_02033dd4();
extern void func_02035780();
extern void func_02037130();
extern void func_020382c4();
extern void func_0203910c();
extern void func_020394f8();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_020a5d54();
extern void func_ov003_0218a0f0();
extern void func_ov003_0218ac1c();
extern void func_ov003_0218b960();
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0217432c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, =data_0215a064
    mov r6, r0
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    ldrh r0, [r0, #0xb8]
    cmp r0, #0x0
    addeq r1, r6, #0x93
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r6, #0x93
    swpneb r0, r5, [r1]
    mov r0, r6
    bl func_0203910c
    mov r0, r6
    mov r1, #0x300
    bl func_02037130
    ldrsb r1, [r6, #0x8b]
    mov r4, r0
    cmp r1, #0x2
    beq L_021743c8
    cmp r1, #0x1
    beq L_021743c8
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_021743c8
    bl func_020a5d54
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021743c8
    bl func_0204496c
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021743c8
    mov r0, r6
    bl func_02026e58
    mov r5, r0
L_021743c8:
    bl func_020a5d54
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021743f0
    bl func_0204496c
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_021743f0
    mov r0, r6
    bl func_0200cdd4
L_021743f0:
    mov r0, r6
    bl func_02035780
    mov r0, r6
    mov r1, r5
    bl func_ov003_0218a0f0
    cmp r5, #0x0
    beq L_02174448
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
    bgt L_0217445c
L_02174448:
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0217445c:
    mov r0, r6
    bl func_020394f8
    ldrsb r0, [r6, #0x8b]
    mov r1, #0x40
    mov r2, #0x1
    cmp r0, #0x1
    ldrne r0, [r6, #0x488]
    addne r0, r0, #0x1
    strne r0, [r6, #0x488]
    mov r0, r6
    bl func_02022ddc
    cmp r0, #0x0
    bne L_021744a8
    mov r0, r6
    mov r1, #0x0
    bl func_0202c55c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
L_021744a8:
    mov r0, r6
    bl func_02026de0
    cmp r0, #0x0
    bne L_021744c8
    mov r0, r6
    bl func_02026d2c
    cmp r0, #0x0
    beq L_0217456c
L_021744c8:
    mov r0, r6
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02174528
L_021744dc:
    b L_021744ec
    b L_021744fc
    b L_0217450c
    b L_0217451c
L_021744ec:
    ldr r1, =0x30f
    mov r0, r6
    bl func_0203e5e8
    b L_02174528
L_021744fc:
    ldr r1, =0x311
    mov r0, r6
    bl func_0203e5e8
    b L_02174528
L_0217450c:
    ldr r1, =0x312
    mov r0, r6
    bl func_0203e5e8
    b L_02174528
L_0217451c:
    ldr r1, =0x313
    mov r0, r6
    bl func_0203e5e8
L_02174528:
    ldrsh r0, [r6, #0xf0]
    cmp r0, #0x1
    bne L_02174540
    mov r0, r6
    bl func_02029248
    b L_0217455c
L_02174540:
    mov r0, r6
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_0217455c
    mov r0, r6
    bl func_02029248
L_0217455c:
    mov r0, r6
    bl func_02033dd4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0217456c:
    mov r0, r6
    bl func_0202a520
    cmp r0, #0x0
    beq L_02174598
    ldr r1, =0x35a
    mov r0, r6
    bl func_0203e5e8
    mov r0, r6
    bl func_02033dd4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02174598:
    cmp r5, #0x0
    beq L_021745fc
    cmp r5, #0x1
    beq L_021745c0
    cmp r5, #0x2
    beq L_021745d4
    cmp r5, #0x3
    beq L_021745e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021745c0:
    mov r0, r6
    mov r1, #0xf5
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021745d4:
    mov r0, r6
    mov r1, #0xfe
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021745e8:
    ldr r1, =0x107
    mov r0, r6
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021745fc:
    mov r0, r6
    bl func_02028114
    cmp r4, r0, lsl #0x3
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    bl func_020a5d54
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02174640
    bl func_0204496c
    ldrsb r1, [r6, #0x88]
    cmp r1, r0
    bne L_02174640
    mov r0, r6
    bl func_ov003_0218b960
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02174640:
    mov r0, r6
    bl func_ov003_0218ac1c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
