#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ffdb08();
extern void func_02022ddc();
extern void func_02022e04();
extern void func_02026de0();
extern void func_02026e58();
extern void func_0202706c();
extern void func_02027484();
extern void func_02028114();
extern void func_020285d8();
extern void func_02029248();
extern void func_0202cde8();
extern void func_0202d3cc();
extern void func_0202dfe4();
extern void func_0203278c();
extern void func_02033dd4();
extern void func_02033e78();
extern void func_0203614c();
extern void func_02037130();
extern void func_02037d34();
extern void func_020382c4();
extern void func_0203910c();
extern void func_020394f8();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_020a5a1c();
extern void func_020a5c2c();
extern void func_020a5d38();
extern void func_020a5d54();
extern void func_020a5fcc();
extern void func_02114690();
extern void func_ov003_0217cd3c();
extern void func_ov003_02189adc();
extern void func_ov003_0218ac1c();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_0215a064[];
extern char data_ov003_021987e0[];
// clang-format off
asm void func_ov003_0217c568(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r1, #0x1
    mov r9, r0
    mov r2, r1
    mov r8, #0x0
    bl func_02022ddc
    str r0, [sp, #0x8]
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x3
    bl func_02022ddc
    mov r7, r0
    mov r1, r8
    mov r0, r9
    str r1, [sp, #0xc]
    bl func_0202dfe4
    ldr r1, =0x4000304
    mov r10, r0
    ldrh r0, [r1, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    moveq r0, #0x1
    streq r0, [sp, #0x0]
    movne r0, r8
    strne r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x10]
    bl func_020a5d38
    cmp r0, #0x0
    beq L_0217c614
    ldr r0, =0x4000304
    mov r1, #0x1
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq L_0217c608
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    moveq r1, #0x0
L_0217c608:
    cmp r1, #0x0
    movne r0, #0x1
    strne r0, [sp, #0x10]
L_0217c614:
    ldrsb r0, [r9, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    ldrh r0, [r9, #0xfc]
    movls r11, #0x2000
    movhi r11, #0x8000
    cmp r0, #0x1e
    bhs L_0217c69c
    add r0, r9, #0x26c
    bl func_020a5c2c
    ldr r0, =data_0214da80
    add r1, r9, #0x3b4
    ldr r0, [r0, #0x0]
    bl func_02114690
    cmp r0, #0x0
    addeq r1, r9, #0x93
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    beq L_0217c680
    ldrsb r2, [r9, #0x8b]
    ldr r0, =data_ov003_021987e0
    add r1, r9, #0x93
    ldrsb r0, [r0, r2]
    swpb r0, r0, [r1]
L_0217c680:
    mov r0, r9
    bl func_0203910c
    ldr r1, =0x301
    mov r0, r9
    bl func_02037130
    str r0, [sp, #0x4]
    b L_0217c74c
L_0217c69c:
    mov r0, r9
    add r1, r9, #0x26c
    add r2, r9, #0x3b4
    bl func_020285d8
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0xb8]
    cmp r0, #0x0
    addne r1, r9, #0x93
    movne r0, #0x0
    swpneb r0, r0, [r1]
    bne L_0217c6e0
    ldrsb r2, [r9, #0x8b]
    ldr r0, =data_ov003_021987e0
    add r1, r9, #0x93
    ldrsb r0, [r0, r2]
    swpb r0, r0, [r1]
L_0217c6e0:
    cmp r10, #0x0
    beq L_0217c71c
    ldr r0, =data_02150e58
    add r2, r9, #0x26c
    ldr r1, [r0, #0x54]
    ldr r3, [r0, #0x60]
    ldr r4, [r0, #0x6c]
    mov r0, #0x5000
    str r1, [sp, #0x14]
    str r3, [sp, #0x18]
    add r1, sp, #0x14
    mov r3, r2
    rsb r0, r0, #0x0
    str r4, [sp, #0x1c]
    bl func_01ff832c
L_0217c71c:
    mov r0, r9
    bl func_0203910c
    ldr r1, =0x313
    mov r0, r9
    bl func_02037130
    str r0, [sp, #0x4]
    cmp r0, #0x19000
    bge L_0217c74c
    mov r0, r9
    bl func_02033e78
    mov r0, #0x1
    str r0, [sp, #0xc]
L_0217c74c:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217c798
    bl func_020a5d54
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_0217c798
    bl func_0204496c
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_0217c798
    ldr r0, [sp, #0x4]
    cmp r0, #0x10000
    bge L_0217c798
    mov r0, r9
    bl func_02026e58
    mov r8, r0
L_0217c798:
    mov r6, #0x0
    mov r4, #0x5
L_0217c7a0:
    mov r0, r9
    mov r1, r6
    bl func_0203278c
    cmp r0, #0x0
    beq L_0217c7e8
    mov r0, r6
    bl func_01ffdb08
    movs r5, r0
    beq L_0217c7e8
    bl func_0203614c
    cmp r0, #0x0
    bne L_0217c7e8
    mov r0, r5
    mov r1, r4
    bl func_0202706c
    mov r0, r5
    add r1, r9, #0x2a0
    bl func_02027484
L_0217c7e8:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x3
    blt L_0217c7a0
    cmp r7, #0x0
    bne L_0217c854
    bl func_020a5d54
    mvn r1, #0x0
    cmp r0, r1
    bne L_0217c854
    bl func_0204496c
    mvn r1, #0x0
    cmp r0, r1
    bne L_0217c854
    ldr r0, [r9, #0x464]
    cmp r0, #0x0
    bne L_0217c854
    mov r0, #0x1
    str r0, [r9, #0x464]
    bl func_020a5fcc
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    mov r0, #0x0
    mvn r1, #0x0
    bl func_020a5a1c
L_0217c854:
    cmp r10, #0x0
    bne L_0217c864
    mov r0, r9
    bl func_02037d34
L_0217c864:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217c878
    mov r0, r9
    bl func_0202d3cc
L_0217c878:
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    bne L_0217c88c
    cmp r7, #0x0
    beq L_0217c898
L_0217c88c:
    mov r0, r9
    bl func_ov003_0217cd3c
    b L_0217c8a0
L_0217c898:
    mov r0, r9
    bl func_020394f8
L_0217c8a0:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    bne L_0217c920
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    mov r3, #0x1
    bl func_0202cde8
    cmp r0, #0x0
    beq L_0217c920
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217c8f0
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217c8f0:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217c920:
    mov r0, r9
    bl func_02026de0
    cmp r0, #0x0
    beq L_0217ca14
    mov r0, r9
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0217c990
L_0217c944:
    b L_0217c954
    b L_0217c964
    b L_0217c974
    b L_0217c984
L_0217c954:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e5e8
    b L_0217c990
L_0217c964:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e5e8
    b L_0217c990
L_0217c974:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e5e8
    b L_0217c990
L_0217c984:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e5e8
L_0217c990:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217c9a8
    mov r0, r9
    bl func_02029248
    b L_0217c9c4
L_0217c9a8:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_0217c9c4
    mov r0, r9
    bl func_02029248
L_0217c9c4:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217c9e4
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217c9e4:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217ca14:
    cmp r8, #0x0
    beq L_0217cab4
    cmp r8, #0x1
    beq L_0217ca38
    cmp r8, #0x2
    beq L_0217ca48
    cmp r8, #0x3
    beq L_0217ca58
    b L_0217ca64
L_0217ca38:
    mov r0, r9
    mov r1, #0xf5
    bl func_0203e5e8
    b L_0217ca64
L_0217ca48:
    mov r0, r9
    mov r1, #0xfe
    bl func_0203e5e8
    b L_0217ca64
L_0217ca58:
    ldr r1, =0x107
    mov r0, r9
    bl func_0203e5e8
L_0217ca64:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217ca84
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217ca84:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217cab4:
    bl func_020a5d54
    mvn r1, #0x0
    cmp r0, r1
    beq L_0217cb48
    bl func_0204496c
    mvn r1, #0x0
    cmp r0, r1
    beq L_0217cb48
    bl func_0204496c
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    beq L_0217cb48
    ldr r1, =0x35a
    mov r0, r9
    bl func_0203e5e8
    mov r0, r9
    bl func_02033dd4
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217cb18
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217cb18:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217cb48:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0217cc14
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    bne L_0217cb74
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    bne L_0217cb74
    cmp r10, #0x0
    beq L_0217cc14
L_0217cb74:
    mov r0, r9
    bl func_02028114
    smull r2, r1, r11, r0
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    cmp r0, r1
    mov r1, #0x0
    bge L_0217cc14
    cmp r7, #0x0
    beq L_0217cbb8
    mov r0, r9
    bl func_ov003_02189adc
    b L_0217cbc4
L_0217cbb8:
    mov r0, r9
    str r1, [r9, #0x488]
    bl func_ov003_0218ac1c
L_0217cbc4:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217cbe4
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217cbe4:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217cc14:
    ldrh r0, [r9, #0xfc]
    cmp r0, #0x258
    addls sp, sp, #0x24
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxls lr
    mov r0, r9
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0217cc88
L_0217cc3c:
    b L_0217cc4c
    b L_0217cc5c
    b L_0217cc6c
    b L_0217cc7c
L_0217cc4c:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e5e8
    b L_0217cc88
L_0217cc5c:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e5e8
    b L_0217cc88
L_0217cc6c:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e5e8
    b L_0217cc88
L_0217cc7c:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e5e8
L_0217cc88:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217cca0
    mov r0, r9
    bl func_02029248
    b L_0217ccbc
L_0217cca0:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_0217ccbc
    mov r0, r9
    bl func_02029248
L_0217ccbc:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217ccdc
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217ccdc:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
