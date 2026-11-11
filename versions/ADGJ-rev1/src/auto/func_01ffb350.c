#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void _s32_div_f();
extern void func_01ff810c();
extern void func_01ff832c();
extern void func_01ff86bc();
extern void func_01ff89d0();
extern void func_01ffd7f4();
extern void func_01ffeaf8();
extern void func_01ffee18();
extern void func_020091bc();
extern void func_020095fc();
extern void func_020362c4();
extern void func_020397a8();
extern void func_0203a7c0();
extern void func_0203ae9c();
extern void func_0203b234();
extern void func_0203b6f8();
extern void func_0203de10();
extern void func_0205e950();
extern void func_020683dc();
extern void func_02069504();
extern void func_02069634();
extern void func_02069668();
extern void func_0206e0d4();
extern void func_02092bfc();
extern void func_02092d74();
extern void func_020c1974();
extern void func_020c2494();
extern void func_020c24c4();
extern void func_020c2510();
extern void func_020c253c();
extern void func_020c3dd0();
extern void func_020c45ec();
extern void func_020c514c();
extern void func_020c5188();
extern void func_020eb12c();
extern void func_02105dc4();
extern void func_021060b8();
extern void func_021060d4();
extern void func_0210634c();
extern void func_02106a60();
extern void r1();
extern char data_02124ae0[];
extern char data_02129288[];
extern char data_02135970[];
extern char data_02138344[];
extern char data_0213836c[];
extern char data_02138390[];
extern char data_021383f0[];
extern char data_0213845c[];
extern char data_0213846c[];
extern char data_0213849c[];
extern char data_021385d8[];
extern char data_02138644[];
extern char data_0213879c[];
extern char data_02138800[];
extern char data_02138a94[];
extern char data_02138d6c[];
extern char data_02138d70[];
extern char data_02138d74[];
extern char data_02138d78[];
extern char data_0213930c[];
extern char data_0213931c[];
extern char data_0213931d[];
extern char data_02139360[];
extern char data_02139cd0[];
extern char data_0213afe8[];
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02156080[];
extern char data_027c0460[];
// clang-format off
asm void func_01ffb350(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x13c
    mov r4, r0
    ldrsb r0, [r4, #0xb1]
    ldrsb r9, [r4, #0xac]
    add r3, sp, #0x6c
    str r0, [sp, #0x14]
    ldrsb r0, [r4, #0xb2]
    add r1, sp, #0x70
    str r0, [sp, #0x18]
    ldrsb r0, [r4, #0xb0]
    str r0, [sp, #0x1c]
    mov r0, #0x0
L_01ffb384:
    add r6, r4, r0
    ldrsb r2, [r6, #0xa8]
    mov r5, r0, lsl #0x1
    add r0, r0, #0x1
    strh r2, [r3, r5]
    ldrsb r2, [r6, #0xaa]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    strh r2, [r1, r5]
    cmp r0, #0x2
    blt L_01ffb384
    add r0, r4, #0x2a0
    add r3, r4, #0x2ac
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r4, #0x9e4]
    add r1, r4, #0x100
    add r0, r0, #0x600
    ldrh r0, [r0, #0x4e]
    add r2, r4, #0xc3
    mov r3, #0x1
    strh r0, [r1, #0x6]
    swpb r0, r3, [r2]
    ldr r0, =data_02138a94
    ldrsh r1, [r4, #0xfa]
    ldr r0, [r0, r1, lsl #0x2]
    cmp r0, #0x0
    beq L_01ffb628
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_01ffb408
    cmp r2, #0x8
    ble L_01ffb448
L_01ffb408:
    cmp r2, #0x57
    moveq r3, #0x1
    beq L_01ffb448
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_01ffb42c
    cmp r1, #0x4b
    movle r3, #0x1
    ble L_01ffb448
L_01ffb42c:
    ldr r0, =0x119
    cmp r1, r0
    blt L_01ffb444
    cmp r1, #0x13c
    movle r3, #0x1
    ble L_01ffb448
L_01ffb444:
    mov r3, #0x0
L_01ffb448:
    cmp r3, #0x0
    movne r0, #0x0
    bne L_01ffb4a8
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_01ffb474
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_01ffb4a8
L_01ffb474:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_01ffb490
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_01ffb4a8
L_01ffb490:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_01ffb4a8
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_01ffb4a8:
    cmp r0, #0x0
    beq L_01ffb620
    mov r0, r4
    bl func_020091bc
    ldrsh r2, [r4, #0xfa]
    ldr r1, =data_02138a94
    mov r0, r4
    ldr r1, [r1, r2, lsl #0x2]
    blx r1
    ldr r0, =data_0214b480
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    bl func_02092bfc
    bl func_021060b8
    cmp r0, #0x0
    beq L_01ffb548
    mov r5, #0x1
    mov r7, #0x0
    ldr r6, =data_0214b480
L_01ffb4f4:
    ldr r0, [r6, #0x0]
    mov r1, r7
    bl func_02092d74
    mvn r1, #0x0
    cmp r0, r1
    movne r5, #0x0
    bne L_01ffb524
    add r0, r7, #0x1
    mov r0, r0, lsl #0x18
    mov r7, r0, asr #0x18
    cmp r7, #0x3
    blt L_01ffb4f4
L_01ffb524:
    cmp r5, #0x0
    beq L_01ffb548
    mov r0, #0x1
    mvn r1, #0x0
    bl func_02105dc4
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_01ffb548:
    ldr r5, =data_0214b484
    ldrsb r0, [r4, #0x88]
    ldr r2, [r5, #0x0]
    mvn r1, #0x0
    add r2, r2, r0
    ldrsb r2, [r2, #0x1c]
    cmp r2, r1
    beq L_01ffb5d0
    mov r1, #0x0
L_01ffb56c:
    ldr r2, [r5, #0x0]
    add r6, r2, r1
    add r2, r0, r2
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    ldrsb r3, [r6, #0x1c]
    ldrsb r2, [r2, #0x1c]
    mov r1, r1, asr #0x10
    cmp r3, r2
    subgt r2, r3, #0x1
    addgt r3, r6, #0x1c
    swpgtb r2, r2, [r3]
    cmp r1, #0x3
    blt L_01ffb56c
    ldr r3, =data_0214b484
    mvn r5, #0x0
    ldr r2, [r3, #0x0]
    ldrsb r1, [r2, #0x13]
    add r2, r2, #0x13
    sub r1, r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, [r3, #0x0]
    add r0, r1, r0
    add r1, r0, #0x1c
    swpb r0, r5, [r1]
L_01ffb5d0:
    ldrsh r0, [r4, #0xf0]
    mov r1, #0x0
    cmp r0, #0xc
    ble L_01ffb5e8
    cmp r0, #0x6f
    movlt r1, #0x1
L_01ffb5e8:
    cmp r1, #0x0
    beq L_01ffb628
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0x6f
    strh r0, [r4, #0xf0]
    add r1, r4, #0xc4
    swpb r0, r2, [r1]
    add r1, r4, #0xc5
    swpb r0, r2, [r1]
    b L_01ffb628
L_01ffb620:
    mov r0, #0x0
    strh r0, [r4, #0xfa]
L_01ffb628:
    ldrsb r0, [r4, #0x88]
    bl func_02106a60
    str r0, [r4, #0x954]
    mov r0, r4
    bl func_0203b234
    mov r0, r4
    ldr r6, [r4, #0x74]
    ldr r5, [r4, #0x7c]
    bl func_0203b6f8
    ldr r1, [r4, #0x264]
    ldr r0, [r4, #0x25c]
    add r0, r1, r0
    str r0, [r4, #0x264]
    ldr r0, [r4, #0x93c]
    ands r0, r0, #0x40000000
    bne L_01ffb674
    ldrb r0, [r4, #0xbf]
    cmp r0, #0x0
    beq L_01ffb6e8
L_01ffb674:
    ldr r2, [r4, #0x260]
    ldr r1, [r4, #0x258]
    mov r0, #0x800
    smull r3, r1, r2, r1
    adds r2, r3, r0
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r4, #0x260]
    ldr r2, [r4, #0x268]
    ldr r1, [r4, #0x258]
    smull r3, r1, r2, r1
    adds r2, r3, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x268]
    ldr r0, [r4, #0x260]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, #0x2
    movle r0, #0x0
    strle r0, [r4, #0x260]
    ldr r0, [r4, #0x268]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, #0x2
    movle r0, #0x0
    strle r0, [r4, #0x268]
L_01ffb6e8:
    add r1, r4, #0xb5
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r0, r4, #0x100
    ldr r2, [r6, #0x20]
    ldr r1, =data_02135970
    mov r2, r2, asr #0xc
    strh r2, [r0, #0x2]
    ldrsh r2, [r4, #0xe8]
    mov r0, r4
    ldr r1, [r1, r2, lsl #0x2]
    blx r1
    add r2, r4, #0x260
    ldr r0, [r4, #0x250]
    mov r3, r2
    add r1, r4, #0x1a4
    bl func_01ff832c
    add r0, r4, #0x2a0
    add r1, r4, #0x260
    mov r2, r0
    bl func_02069668
    ldr r1, [r4, #0x938]
    ldr r0, [r4, #0x934]
    cmp r0, r1
    ble L_01ffb768
    sub r0, r0, #0xcd
    str r0, [r4, #0x934]
    ldr r1, [r4, #0x938]
    ldr r0, [r4, #0x934]
    cmp r0, r1
    strlt r1, [r4, #0x934]
    b L_01ffb788
L_01ffb768:
    cmp r0, r1
    bge L_01ffb788
    add r0, r0, #0xcd
    str r0, [r4, #0x934]
    ldr r1, [r4, #0x938]
    ldr r0, [r4, #0x934]
    cmp r0, r1
    strgt r1, [r4, #0x934]
L_01ffb788:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x60]
    cmp r1, #0x11
    beq L_01ffb7a4
    cmp r1, #0x12
    beq L_01ffb848
    b L_01ffb8fc
L_01ffb7a4:
    ldrh r1, [r0, #0xe]
    cmp r1, #0xa
    bls L_01ffb7e8
    ldrsh r0, [r0, #0x2]
    cmp r0, #0x12
    bge L_01ffb7e8
    ldrsb r0, [r4, #0xaa]
    cmp r0, #0x6
    ldrne r0, =0x414
    addne r1, r4, #0x324
    addne r3, r4, r0
    ldmneia r1, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    add r1, r4, #0xaa
    mov r0, #0x6
    swpb r0, r0, [r1]
    b L_01ffb7f4
L_01ffb7e8:
    add r1, r4, #0xaa
    mov r0, #0x8
    swpb r0, r0, [r1]
L_01ffb7f4:
    add r0, r4, #0x100
    ldrh r1, [r0, #0xe]
    cmp r1, #0xa
    bls L_01ffb838
    ldrsh r0, [r0, #0x2]
    cmp r0, #0x14
    blt L_01ffb838
    ldrsb r0, [r4, #0xab]
    cmp r0, #0x6
    addne r0, r4, #0x330
    addne r3, r4, #0x420
    ldmneia r0, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    add r1, r4, #0xab
    mov r0, #0x6
    swpb r0, r0, [r1]
    b L_01ffb940
L_01ffb838:
    add r1, r4, #0xab
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_01ffb940
L_01ffb848:
    ldrh r1, [r0, #0xe]
    cmp r1, #0xa
    bls L_01ffb894
    ldrsh r0, [r0, #0x2]
    cmp r0, #0x0
    blt L_01ffb894
    cmp r0, #0x6
    bge L_01ffb894
    ldrsb r0, [r4, #0xaa]
    cmp r0, #0x7
    ldrne r0, =0x414
    addne r1, r4, #0x324
    addne r3, r4, r0
    ldmneia r1, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    add r1, r4, #0xaa
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_01ffb8a0
L_01ffb894:
    add r1, r4, #0xaa
    mov r0, #0x9
    swpb r0, r0, [r1]
L_01ffb8a0:
    add r0, r4, #0x100
    ldrh r1, [r0, #0xe]
    cmp r1, #0xa
    bls L_01ffb8ec
    ldrsh r0, [r0, #0x2]
    cmp r0, #0xf
    blt L_01ffb8ec
    cmp r0, #0x15
    bge L_01ffb8ec
    ldrsb r0, [r4, #0xab]
    cmp r0, #0x7
    addne r0, r4, #0x330
    addne r3, r4, #0x420
    ldmneia r0, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    add r1, r4, #0xab
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_01ffb940
L_01ffb8ec:
    add r1, r4, #0xab
    mov r0, #0x9
    swpb r0, r0, [r1]
    b L_01ffb940
L_01ffb8fc:
    mov r1, #0x0
    mov r0, #0x8
    mov r6, #0x9
L_01ffb908:
    add r7, r4, r1
    ldrsb r2, [r7, #0xaa]
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    cmp r2, #0x6
    addeq r3, r7, #0xaa
    swpeqb r2, r0, [r3]
    mov r1, r1, asr #0x10
    ldrsb r2, [r7, #0xaa]
    cmp r2, #0x7
    addeq r3, r7, #0xaa
    swpeqb r2, r6, [r3]
    cmp r1, #0x2
    blt L_01ffb908
L_01ffb940:
    ldrsb r0, [r4, #0xb5]
    cmp r0, #0x0
    bne L_01ffb9a8
    ldr r1, [r4, #0x830]
    mov r0, #0xcd0
    mov r2, #0x0
    umull r7, r6, r1, r0
    mla r6, r1, r2, r6
    mov r3, r1, asr #0x1f
    mov r1, #0x800
    mla r6, r3, r0, r6
    adds r7, r7, r1
    adc r3, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r4, #0x830]
    ldr r6, [r4, #0x248]
    mov r3, r6, asr #0x1f
    umull r8, r7, r6, r0
    mla r7, r6, r2, r7
    mla r7, r3, r0, r7
    adds r1, r8, r1
    adc r0, r7, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x248]
L_01ffb9a8:
    mov r1, #0x0
    ldr r7, =data_02138800
    add r6, sp, #0x70
    mov r3, r1
L_01ffb9b8:
    add r0, r4, r1
    ldrsb r2, [r0, #0xaa]
    mov r0, #0xc
    mul r0, r2, r0
    add r8, r7, r0
    ldr r0, [r7, r0]
    cmp r2, #0x0
    ldr r10, [r8, #0x4]
    ldr r8, [r8, #0x8]
    bne L_01ffb9f8
    mov r11, r1, lsl #0x1
    ldrsh r11, [r6, r11]
    cmp r11, #0x8
    beq L_01ffba10
    cmp r11, #0x8
    beq L_01ffba10
L_01ffb9f8:
    mov r11, r1, lsl #0x1
    ldrsh r11, [r6, r11]
    cmp r2, r11
    addne r2, r4, r1, lsl #0x2
    strne r3, [r2, #0x464]
    strne r3, [r2, #0x46c]
L_01ffba10:
    add r2, r4, r1, lsl #0x2
    ldr r11, [r2, #0x464]
    cmp r11, r0
    bge L_01ffba34
    add r10, r11, r10
    str r10, [r2, #0x464]
    ldr r10, [r2, #0x464]
    cmp r10, r0
    strgt r0, [r2, #0x464]
L_01ffba34:
    add r2, r4, r1, lsl #0x2
    ldr r10, [r2, #0x46c]
    cmp r10, r0
    bge L_01ffba58
    add r8, r10, r8
    str r8, [r2, #0x46c]
    ldr r8, [r2, #0x46c]
    cmp r8, r0
    strgt r0, [r2, #0x46c]
L_01ffba58:
    add r0, r1, #0x1
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    cmp r1, #0x2
    blt L_01ffb9b8
    mov r10, #0x0
    add r2, sp, #0x6c
    mov r1, r10
    mov r3, #0x400
    mov r7, #0x80
    mov r6, #0x1000
L_01ffba84:
    add r0, r4, r10
    ldrsb r0, [r0, #0xa8]
    cmp r0, #0x0
    bne L_01ffba9c
    mov r8, r6
    b L_01ffbaa0
L_01ffba9c:
    mov r8, r3
L_01ffbaa0:
    mov r11, r10, lsl #0x1
    ldrsh r11, [r2, r11]
    cmp r0, r11
    addne r0, r4, r10, lsl #0x2
    strne r1, [r0, #0x45c]
    add r0, r4, r10, lsl #0x2
    ldr r11, [r0, #0x45c]
    cmp r11, r8
    bge L_01ffbad8
    add r11, r11, r7
    str r11, [r0, #0x45c]
    ldr r11, [r0, #0x45c]
    cmp r11, r8
    strgt r8, [r0, #0x45c]
L_01ffbad8:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x2
    blt L_01ffba84
    ldrsb r0, [r4, #0xac]
    ldr r1, =data_0213879c
    ldr r7, =data_02138d6c
    ldr r1, [r1, r0, lsl #0x2]
    ldr r6, =data_02138d70
    ldr r3, =data_02138d74
    ldr r2, =data_02138d78
    cmp r1, #0x0
    ldr r8, [r7, r0, lsl #0x4]
    ldr r7, [r6, r0, lsl #0x4]
    ldr r6, [r3, r0, lsl #0x4]
    ldr r10, [r2, r0, lsl #0x4]
    beq L_01ffbb28
    mov r0, r4
    blx r1
L_01ffbb28:
    ldrsb r0, [r4, #0xac]
    cmp r0, r9
    movne r0, #0x0
    strne r0, [r4, #0x474]
    strne r0, [r4, #0x478]
    ldr r0, [r4, #0x474]
    cmp r0, r8
    bge L_01ffbb5c
    add r0, r0, r7
    str r0, [r4, #0x474]
    ldr r0, [r4, #0x474]
    cmp r0, r8
    strgt r8, [r4, #0x474]
L_01ffbb5c:
    ldr r0, [r4, #0x478]
    cmp r0, r6
    bge L_01ffbb7c
    add r0, r0, r10
    str r0, [r4, #0x478]
    ldr r0, [r4, #0x478]
    cmp r0, r6
    strgt r6, [r4, #0x478]
L_01ffbb7c:
    mov r0, r4
    bl func_020362c4
    add r0, sp, #0x74
    mov r2, #0x0
    str r2, [r0, #0x0]
    str r2, [r0, #0x4]
    str r2, [r0, #0x8]
    ldrsb r1, [r4, #0xb1]
    cmp r1, #0x9
    addls pc, pc, r1, lsl #0x2
    b L_01ffbf44
L_01ffbba8:
    b L_01ffbf44
    b L_01ffbbd0
    b L_01ffbc40
    b L_01ffbc9c
    b L_01ffbcf4
    b L_01ffbd70
    b L_01ffbd7c
    b L_01ffbd8c
    b L_01ffbd98
    b L_01ffbda0
L_01ffbbd0:
    add r0, r4, #0x100
    ldrh r6, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r1, =0x2aaaaaab
    ldr r3, =0x18
    add r6, r6, r0, lsl #0x1
    smull r0, r7, r1, r6
    mov r7, r7, asr #0x2
    mov r0, r6, lsr #0x1f
    add r7, r0, r7
    smull r0, r1, r3, r7
    ldr r1, =0xaaa
    sub r7, r6, r0
    mul r0, r7, r1
    mov r1, r0, asr #0x4
    ldr r0, =data_02124ae0
    mov r1, r1, lsl #0x2
    ldrsh r3, [r0, r1]
    mov r0, #0x800
    mov r1, r3, asr #0x1f
    mov r1, r1, lsl #0xd
    mov r6, r3, lsl #0xd
    adds r6, r6, r0
    orr r1, r1, r3, lsr #0x13
    adc r0, r1, r2
    mov r2, r6, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    b L_01ffbf44
L_01ffbc40:
    add r0, r4, #0x100
    ldrh r1, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r6, =data_02124ae0
    mov r3, #0x3000
    add r0, r1, r0, lsl #0x1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1c
    add r0, r1, r0, ror #0x1c
    mov r0, r0, lsl #0xc
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r1, [r6, r0]
    mov r0, #0x800
    umull r7, r6, r1, r3
    mla r6, r1, r2, r6
    mov r1, r1, asr #0x1f
    mla r6, r1, r3, r6
    adds r1, r7, r0
    adc r0, r6, r2
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    b L_01ffbf44
L_01ffbc9c:
    add r0, r4, #0x100
    ldrh r1, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r6, =data_02124ae0
    mov r3, #0x800
    add r0, r1, r0, lsl #0x1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1d
    add r0, r1, r0, ror #0x1d
    mov r0, r0, lsl #0xd
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r1, [r6, r0]
    mov r0, r1, asr #0x1f
    mov r0, r0, lsl #0xe
    mov r6, r1, lsl #0xe
    orr r0, r0, r1, lsr #0x12
    adds r1, r6, r3
    adc r0, r0, r2
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    b L_01ffbf44
L_01ffbcf4:
    add r1, r4, #0x100
    ldrh r3, [r1, #0xc]
    ldrsb r1, [r4, #0x88]
    ldr r7, =data_02124ae0
    mov r6, #0x800
    add r1, r3, r1, lsl #0x1
    mov r3, r1, lsr #0x1f
    rsb r1, r3, r1, lsl #0x1b
    add r1, r3, r1, ror #0x1b
    mov r1, r1, lsl #0xb
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x2
    ldrsh r7, [r7, r1]
    mov r1, #0x1
    mov r3, r7, asr #0x1f
    mov r3, r3, lsl #0xc
    mov r8, r7, lsl #0xc
    adds r6, r8, r6
    orr r3, r3, r7, lsr #0x14
    adc r3, r3, r2
    mov r6, r6, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [sp, #0x74]
L_01ffbd50:
    add r3, r1, #0x1
    ldr r6, [sp, #0x74]
    mov r3, r3, lsl #0x10
    str r6, [r0, r1, lsl #0x2]
    mov r1, r3, asr #0x10
    cmp r1, #0x3
    blt L_01ffbd50
    b L_01ffbf44
L_01ffbd70:
    mov r0, #0x800
    str r0, [sp, #0x74]
    b L_01ffbf44
L_01ffbd7c:
    mov r0, #0x800
    rsb r0, r0, #0x0
    str r0, [sp, #0x74]
    b L_01ffbf44
L_01ffbd8c:
    mov r0, #0x1800
    rsb r2, r0, #0x0
    b L_01ffbf44
L_01ffbd98:
    mov r2, #0x1800
    b L_01ffbf44
L_01ffbda0:
    ldrsb r0, [r4, #0xa4]
    cmp r0, #0x2
    beq L_01ffbdcc
    cmp r0, #0x4
    beq L_01ffbdbc
    cmp r0, #0x5
    bne L_01ffbdd8
L_01ffbdbc:
    mov r0, #0x800
    rsb r0, r0, #0x0
    str r0, [sp, #0x74]
    b L_01ffbf44
L_01ffbdcc:
    mov r0, #0x800
    str r0, [sp, #0x74]
    b L_01ffbf44
L_01ffbdd8:
    ldrsb r1, [r4, #0xa6]
    ldr r3, [r4, #0x9e4]
    ldr r0, =data_0213849c
    mov r1, r1, lsl #0x1
    ldrsh r3, [r3, #0x1a]
    ldrh r0, [r0, r1]
    cmp r3, r0
    ble L_01ffbe54
    add r0, r4, #0x100
    ldrh r1, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r6, =data_02124ae0
    mov r3, #0x3000
    add r0, r1, r0, lsl #0x1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1c
    add r0, r1, r0, ror #0x1c
    mov r0, r0, lsl #0xc
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r1, [r6, r0]
    mov r0, #0x800
    umull r7, r6, r1, r3
    mla r6, r1, r2, r6
    mov r1, r1, asr #0x1f
    mla r6, r1, r3, r6
    adds r1, r7, r0
    adc r0, r6, r2
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    b L_01ffbf44
L_01ffbe54:
    cmp r3, r0, asr #0x1
    ble L_01ffbed0
    add r0, r4, #0x100
    ldrh r6, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r1, =0x66666667
    ldr r3, =0x14
    add r6, r6, r0, lsl #0x1
    smull r0, r7, r1, r6
    mov r7, r7, asr #0x3
    mov r0, r6, lsr #0x1f
    add r7, r0, r7
    smull r0, r1, r3, r7
    ldr r1, =0xccc
    sub r7, r6, r0
    mul r0, r7, r1
    mov r1, r0, asr #0x4
    ldr r0, =data_02124ae0
    mov r1, r1, lsl #0x2
    ldrsh r3, [r0, r1]
    ldr r0, =0x280a
    mov r1, #0x800
    umull r7, r6, r3, r0
    adds r7, r7, r1
    mov r1, r3, asr #0x1f
    mla r6, r3, r2, r6
    mla r6, r1, r0, r6
    adc r0, r6, r2
    mov r2, r7, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    b L_01ffbf44
L_01ffbed0:
    cmp r3, r0, asr #0x2
    ble L_01ffbf44
    add r0, r4, #0x100
    ldrh r6, [r0, #0xc]
    ldrsb r0, [r4, #0x88]
    ldr r1, =0x2aaaaaab
    ldr r3, =0x18
    add r6, r6, r0, lsl #0x1
    smull r0, r7, r1, r6
    mov r7, r7, asr #0x2
    mov r0, r6, lsr #0x1f
    add r7, r0, r7
    smull r0, r1, r3, r7
    ldr r1, =0xaaa
    sub r7, r6, r0
    mul r0, r7, r1
    mov r1, r0, asr #0x4
    ldr r0, =data_02124ae0
    mov r1, r1, lsl #0x2
    ldrsh r3, [r0, r1]
    mov r0, #0x800
    mov r1, r3, asr #0x1f
    mov r1, r1, lsl #0xd
    mov r6, r3, lsl #0xd
    adds r6, r6, r0
    orr r1, r1, r3, lsr #0x13
    adc r0, r1, r2
    mov r2, r6, lsr #0xc
    orr r2, r2, r0, lsl #0x14
L_01ffbf44:
    ldrsb r1, [r4, #0xb1]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    bne L_01ffbf64
    ldrb r1, [r4, #0xb3]
    ldrb r0, [r4, #0xb4]
    cmp r1, r0
    beq L_01ffbf6c
L_01ffbf64:
    mov r0, #0x0
    str r0, [r4, #0x47c]
L_01ffbf6c:
    ldr r0, [r4, #0x47c]
    cmp r0, #0x1000
    bge L_01ffc02c
    add r0, r0, #0x40
    str r0, [r4, #0x47c]
    ldr r6, [r4, #0x820]
    ldr r0, [r4, #0x47c]
    sub r1, r2, r6
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r1
    str r0, [r4, #0x820]
    mov r3, #0x0
    add r2, sp, #0x74
    ldr r0, =data_0213930c
L_01ffbfb8:
    ldr r1, [r4, #0x9e4]
    add r6, r4, r3, lsl #0x2
    ldrh r7, [r1, #0x0]
    mov r1, #0x64
    add r8, r3, #0x1
    mla r9, r7, r1, r0
    ldrb r10, [r4, #0xb3]
    mov r7, #0x6
    ldr r1, [r2, r3, lsl #0x2]
    smlabb r7, r10, r7, r9
    add r3, r7, r3, lsl #0x1
    ldrsh r9, [r3, #0x16]
    ldr r3, [r6, #0x824]
    ldr r7, [r4, #0x47c]
    add r1, r1, r9
    sub r1, r1, r3
    smull r9, r7, r1, r7
    mov r1, #0x800
    adds r9, r9, r1
    mov r1, r8, lsl #0x10
    adc r7, r7, #0x0
    mov r8, r9, lsr #0xc
    orr r8, r8, r7, lsl #0x14
    add r7, r3, r8
    mov r3, r1, asr #0x10
    str r7, [r6, #0x824]
    cmp r3, #0x3
    blt L_01ffbfb8
    b L_01ffc084
L_01ffc02c:
    str r2, [r4, #0x820]
    mov r2, #0x0
    add r1, sp, #0x74
    ldr r0, =data_0213930c
L_01ffc03c:
    ldr r3, [r4, #0x9e4]
    add r6, r2, #0x1
    ldrh r9, [r3, #0x0]
    mov r3, #0x64
    ldrb r8, [r4, #0xb3]
    mla r7, r9, r3, r0
    mov r3, #0x6
    smlabb r3, r8, r3, r7
    add r3, r3, r2, lsl #0x1
    ldrsh r7, [r3, #0x16]
    ldr r8, [r1, r2, lsl #0x2]
    mov r3, r6, lsl #0x10
    add r6, r4, r2, lsl #0x2
    add r7, r8, r7
    mov r2, r3, asr #0x10
    str r7, [r6, #0x824]
    cmp r2, #0x3
    blt L_01ffc03c
L_01ffc084:
    ldrsb r1, [r4, #0xb2]
    ldr r0, [sp, #0x18]
    cmp r1, r0
    movne r0, #0x0
    strne r0, [r4, #0x480]
    ldr r0, [r4, #0x480]
    cmp r0, #0x1000
    addlt r0, r0, #0x100
    strlt r0, [r4, #0x480]
    add r0, r4, #0x100
    ldrsh r0, [r0, #0x64]
    cmp r0, #0x1
    bgt L_01ffc0c4
    cmp r0, #0x1
    beq L_01ffc0e8
    b L_01ffc600
L_01ffc0c4:
    sub r0, r0, #0x11
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_01ffc600
L_01ffc0d4:
    b L_01ffc1f0
    b L_01ffc23c
    b L_01ffc288
    b L_01ffc3e8
    b L_01ffc4f4
L_01ffc0e8:
    add r0, r4, #0x100
    ldrsh r0, [r0, #0x46]
    sub r0, r0, #0x3
    mov r0, r0, lsl #0x10
    movs r2, r0, asr #0x10
    bmi L_01ffc114
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_01ffc11c
L_01ffc114:
    mov r0, #0x0
    b L_01ffc124
L_01ffc11c:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_01ffc124:
    ldr r6, [r4, #0x9e4]
    cmp r0, #0x0
    ldrh r2, [r6, #0x0]
    ldrne r11, [r0, #0x124]
    mov r1, #0x64
    mul r3, r2, r1
    ldr r1, =data_02139360
    ldr r2, [r6, #0x8]
    ldr r3, [r1, r3]
    ldr r0, [r4, #0x74]
    smull r6, r2, r3, r2
    mov r10, #0x0
    add r0, r0, #0x48
    mov r1, #0x800
    moveq r11, #0x600
    adds r3, r6, r1
    adc r1, r2, #0x0
    mov r8, r3, lsr #0xc
    orr r8, r8, r1, lsl #0x14
    ldr ip, =data_02124ae0
    ldr lr, =0x4bd
    mov r9, r10
    str r0, [sp, #0x2c]
    mov r7, r8, asr #0x1f
L_01ffc184:
    mov r0, r9, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r2, [ip, r0]
    mov r0, #0x800
    mov r1, r2, asr #0x1f
    umull r6, r3, r8, r2
    adds r0, r6, r0
    mla r3, r8, r1, r3
    mla r3, r7, r2, r3
    adc r1, r3, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    cmp r11, r0
    ble L_01ffc1d4
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x9
    add r9, r9, lr
    blt L_01ffc184
L_01ffc1d4:
    ldr r0, [sp, #0x2c]
    mov r1, r10, lsl #0xc
    str r1, [r0, #0x20]
    add r1, r4, #0xb6
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_01ffc60c
L_01ffc1f0:
    add r1, r4, #0xb6
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x41c]
    bl func_0203de10
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc60c
    cmp r2, #0x13
    strneh r2, [r0, #0x0]
    movne r1, #0x13
    strneh r1, [r0, #0x54]
    b L_01ffc60c
L_01ffc23c:
    add r1, r4, #0xb6
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x41c]
    bl func_0203de10
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc60c
    cmp r2, #0x13
    strneh r2, [r0, #0x0]
    movne r1, #0x13
    strneh r1, [r0, #0x54]
    b L_01ffc60c
L_01ffc288:
    add r1, r4, #0xb6
    mov r0, #0x3
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x41c]
    bl func_0203de10
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc2d4
    ldrsh r1, [r0, #0x0]
    cmp r2, r1
    strneh r2, [r0, #0x0]
    ldrnesh r1, [r0, #0x64]
    strneh r1, [r0, #0x54]
L_01ffc2d4:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x64]
    ldrsh r0, [r0, #0x54]
    cmp r1, r0
    bne L_01ffc344
    ldr r1, =data_0213846c
    mov r0, #0x24
    ldrsh r1, [r1, #0x8]
    ldr r2, [r4, #0x74]
    smulbb r0, r1, r0
    adds r1, r2, r0
    beq L_01ffc344
    ldrsb r0, [r4, #0xd5]
    cmp r0, #0x0
    ble L_01ffc330
    ldrsh r0, [r1, #0x18]
    ldr r1, [r1, #0x20]
    mov r1, r1, asr #0xc
    sub r0, r0, #0x1
    cmp r1, r0
    blt L_01ffc344
    mov r0, #0x1
    b L_01ffc348
L_01ffc330:
    ldr r0, [r1, #0x20]
    mov r0, r0, asr #0xc
    cmp r0, #0x1
    movle r0, #0x1
    ble L_01ffc348
L_01ffc344:
    mov r0, #0x0
L_01ffc348:
    cmp r0, #0x0
    addne r1, r4, #0xbd
    movne r0, #0x1
    swpneb r0, r0, [r1]
    ldrb r0, [r4, #0xbd]
    cmp r0, #0x1
    addeq r0, r4, #0x100
    ldreqsh r1, [r0, #0x0]
    streqh r1, [r0, #0x54]
    b L_01ffc60c
L_01ffc3e8:
    add r1, r4, #0xb6
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x41c]
    bl func_0203de10
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc430
    cmp r2, #0x14
    strneh r2, [r0, #0x0]
    movne r1, #0x14
    strneh r1, [r0, #0x54]
L_01ffc430:
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc458
    ldrsh r1, [r0, #0x0]
    cmp r2, r1
    strneh r2, [r0, #0x0]
    ldrnesh r1, [r0, #0x64]
    strneh r1, [r0, #0x54]
L_01ffc458:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x64]
    ldrsh r0, [r0, #0x54]
    cmp r1, r0
    bne L_01ffc4c8
    ldr r1, =data_0213846c
    mov r0, #0x24
    ldrsh r1, [r1, #0x8]
    ldr r2, [r4, #0x74]
    smulbb r0, r1, r0
    adds r1, r2, r0
    beq L_01ffc4c8
    ldrsb r0, [r4, #0xd5]
    cmp r0, #0x0
    ble L_01ffc4b4
    ldrsh r0, [r1, #0x18]
    ldr r1, [r1, #0x20]
    mov r1, r1, asr #0xc
    sub r0, r0, #0x1
    cmp r1, r0
    blt L_01ffc4c8
    mov r0, #0x1
    b L_01ffc4cc
L_01ffc4b4:
    ldr r0, [r1, #0x20]
    mov r0, r0, asr #0xc
    cmp r0, #0x1
    movle r0, #0x1
    ble L_01ffc4cc
L_01ffc4c8:
    mov r0, #0x0
L_01ffc4cc:
    cmp r0, #0x0
    addne r1, r4, #0xbd
    movne r0, #0x1
    swpneb r0, r0, [r1]
    ldrb r0, [r4, #0xbd]
    cmp r0, #0x1
    addeq r0, r4, #0x100
    ldreqsh r1, [r0, #0x0]
    streqh r1, [r0, #0x54]
    b L_01ffc60c
L_01ffc4f4:
    add r1, r4, #0xb6
    mov r0, #0x5
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x41c]
    bl func_0203de10
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc53c
    cmp r2, #0x15
    strneh r2, [r0, #0x0]
    movne r1, #0x15
    strneh r1, [r0, #0x54]
L_01ffc53c:
    add r0, r4, #0x100
    ldrsh r2, [r0, #0x54]
    ldrsh r1, [r0, #0x64]
    cmp r2, r1
    beq L_01ffc564
    ldrsh r1, [r0, #0x0]
    cmp r2, r1
    strneh r2, [r0, #0x0]
    ldrnesh r1, [r0, #0x64]
    strneh r1, [r0, #0x54]
L_01ffc564:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x64]
    ldrsh r0, [r0, #0x54]
    cmp r1, r0
    bne L_01ffc5d4
    ldr r1, =data_0213846c
    mov r0, #0x24
    ldrsh r1, [r1, #0x8]
    ldr r2, [r4, #0x74]
    smulbb r0, r1, r0
    adds r1, r2, r0
    beq L_01ffc5d4
    ldrsb r0, [r4, #0xd5]
    cmp r0, #0x0
    ble L_01ffc5c0
    ldrsh r0, [r1, #0x18]
    ldr r1, [r1, #0x20]
    mov r1, r1, asr #0xc
    sub r0, r0, #0x1
    cmp r1, r0
    blt L_01ffc5d4
    mov r0, #0x1
    b L_01ffc5d8
L_01ffc5c0:
    ldr r0, [r1, #0x20]
    mov r0, r0, asr #0xc
    cmp r0, #0x1
    movle r0, #0x1
    ble L_01ffc5d8
L_01ffc5d4:
    mov r0, #0x0
L_01ffc5d8:
    cmp r0, #0x0
    addne r1, r4, #0xbd
    movne r0, #0x1
    swpneb r0, r0, [r1]
    ldrb r0, [r4, #0xbd]
    cmp r0, #0x1
    addeq r0, r4, #0x100
    ldreqsh r1, [r0, #0x0]
    streqh r1, [r0, #0x54]
    b L_01ffc60c
L_01ffc600:
    add r1, r4, #0xb6
    mov r0, #0x0
    swpb r0, r0, [r1]
L_01ffc60c:
    ldrb r0, [r4, #0xca]
    cmp r0, #0x0
    beq L_01ffc674
    ldr r1, [r4, #0x9e4]
    mov r0, #0x64
    ldrh r2, [r1, #0x0]
    ldr r1, =data_0213931d
    mul r0, r2, r0
    ldrsb r0, [r1, r0]
    cmp r0, #0x1
    beq L_01ffc654
    cmp r0, #0x2
    beq L_01ffc664
    cmp r0, #0x3
    addeq r0, r4, #0x100
    moveq r1, #0x13
    streqh r1, [r0, #0x56]
    b L_01ffc72c
L_01ffc654:
    add r0, r4, #0x100
    mov r1, #0x11
    strh r1, [r0, #0x56]
    b L_01ffc72c
L_01ffc664:
    add r0, r4, #0x100
    mov r1, #0x12
    strh r1, [r0, #0x56]
    b L_01ffc72c
L_01ffc674:
    ldrb r0, [r4, #0xcb]
    cmp r0, #0x0
    beq L_01ffc72c
    ldr r1, [r4, #0x9e4]
    mov r0, #0x64
    ldrh r3, [r1, #0x0]
    ldr r2, =data_0213931d
    add r1, r4, #0x100
    mul r0, r3, r0
    ldrsb r0, [r2, r0]
    add r0, r0, #0xc
    strh r0, [r1, #0x56]
    ldrsh r2, [r1, #0x66]
    ldrsh r0, [r1, #0x56]
    cmp r2, r0
    bne L_01ffc710
    ldr r1, =data_0213846c
    mov r0, #0x24
    ldrsh r1, [r1, #0xc]
    ldr r2, [r4, #0x74]
    smulbb r0, r1, r0
    adds r1, r2, r0
    beq L_01ffc710
    ldrsb r0, [r4, #0xd6]
    cmp r0, #0x0
    ble L_01ffc6fc
    ldrsh r0, [r1, #0x18]
    ldr r1, [r1, #0x20]
    mov r1, r1, asr #0xc
    sub r0, r0, #0x1
    cmp r1, r0
    blt L_01ffc710
    mov r0, #0x1
    b L_01ffc714
L_01ffc6fc:
    ldr r0, [r1, #0x20]
    mov r0, r0, asr #0xc
    cmp r0, #0x1
    movle r0, #0x1
    ble L_01ffc714
L_01ffc710:
    mov r0, #0x0
L_01ffc714:
    cmp r0, #0x0
    addne r0, r4, #0x100
    movne r2, #0x0
    addne r1, r4, #0xcb
    strneh r2, [r0, #0x56]
    swpneb r0, r2, [r1]
L_01ffc72c:
    ldrsb r1, [r4, #0xb0]
    ldr r0, [sp, #0x1c]
    cmp r1, r0
    beq L_01ffc7a8
    ldr r2, =data_02138644
    mov r1, r1, lsl #0x2
    mov r0, r0, lsl #0x2
    ldrh r1, [r2, r1]
    ldrh r0, [r2, r0]
    cmp r1, r0
    beq L_01ffc770
    ldr r0, =data_021385d8
    ldr r0, [r0, r1, lsl #0x2]
    bl func_020c1974
    mov r1, r0
    mov r0, r5
    bl func_020c3dd0
L_01ffc770:
    ldrsb r1, [r4, #0xb0]
    ldr r0, =data_02138644+0x3
    ldr r3, =data_02138644+0x2
    mov r1, r1, lsl #0x2
    ldrsb r0, [r0, r1]
    add r1, r4, #0x100
    mov r2, #0x0
    swpb r0, r0, [r5]
    ldrsb r0, [r4, #0xb0]
    mov r0, r0, lsl #0x2
    ldrsb r0, [r3, r0]
    mov r0, r0, lsl #0xc
    str r0, [r5, #0x8]
    strh r2, [r1, #0x1c]
L_01ffc7a8:
    ldrsb r0, [r4, #0xb0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_01ffc8d8
L_01ffc7b8:
    b L_01ffc7d4
    b L_01ffc8d8
    b L_01ffc8d8
    b L_01ffc89c
    b L_01ffc87c
    b L_01ffc7d4
    b L_01ffc8bc
L_01ffc7d4:
    ldr r0, [r5, #0x8]
    cmp r0, #0x0
    bne L_01ffc8d8
    add r6, r4, #0x100
    ldrh r0, [r6, #0x1c]
    cmp r0, #0x3c
    bls L_01ffc8d8
    ldr r0, =data_0214b484
    ldrsb r2, [r4, #0xa4]
    ldr r1, [r0, #0x0]
    ldr r0, =0x10dcd
    ldr r7, [r1, #0x0]
    ldr r3, =0xfff
    mul r0, r7, r0
    add r0, r0, #0x1
    and r3, r0, r3
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    ldr r7, =data_021383f0
    mov r2, r2, lsl #0x1
    ldrsh r7, [r7, r2]
    mov r3, r3, asr #0x10
    mov r2, #0x800
    smull r8, r7, r3, r7
    adds r3, r8, r2
    adc r2, r7, #0x0
    mov r3, r3, lsr #0xc
    str r0, [r1, #0x0]
    orrs r3, r3, r2, lsl #0x14
    mov r3, #0x0
    bne L_01ffc8d8
    strh r3, [r6, #0x1c]
    ldrsh r0, [r5, #0x2]
    mov r2, #0x1000
    add r1, r5, #0x1
    mov r0, r0, lsl #0xc
    str r0, [r5, #0xc]
    str r2, [r5, #0x8]
    swpb r0, r3, [r1]
    str r2, [r5, #0x8]
    b L_01ffc8d8
L_01ffc87c:
    ldr r0, [r5, #0xc]
    mov r0, r0, asr #0xc
    cmp r0, #0x5
    addeq r0, r4, #0x100
    moveq r1, #0x0
    streqh r1, [r0, #0x1c]
    streq r1, [r5, #0x8]
    b L_01ffc8d8
L_01ffc89c:
    ldr r0, [r5, #0xc]
    mov r0, r0, asr #0xc
    cmp r0, #0x7
    addeq r0, r4, #0x100
    moveq r1, #0x0
    streqh r1, [r0, #0x1c]
    streq r1, [r5, #0x8]
    b L_01ffc8d8
L_01ffc8bc:
    ldr r0, [r5, #0xc]
    mov r0, r0, asr #0xc
    cmp r0, #0xe
    addeq r0, r4, #0x100
    moveq r1, #0x0
    streqh r1, [r0, #0x1c]
    streq r1, [r5, #0x8]
L_01ffc8d8:
    mvn r0, #0x0
    str r0, [sp, #0x54]
    mov r0, #0x1
    str r0, [sp, #0x40]
    mov r10, #0x0
    mov r0, #0x80
    str r0, [sp, #0x38]
    mov r0, #0x2
    str r0, [sp, #0x3c]
    mov r0, #0x3
    str r10, [sp, #0x58]
    str r10, [sp, #0x60]
    str r10, [sp, #0x30]
    str r0, [sp, #0x34]
    str r10, [sp, #0x4c]
    str r10, [sp, #0x48]
    str r10, [sp, #0x44]
    str r10, [sp, #0x50]
    str r10, [sp, #0x5c]
    str r10, [sp, #0x64]
    str r10, [sp, #0x68]
L_01ffc92c:
    ldr r0, =data_0214b484
    add r7, r4, r10
    ldrsb r1, [r7, #0xd7]
    ldrsb r2, [r4, #0x88]
    ldr r0, [r0, #0x0]
    cmp r1, #0x0
    add r2, r0, r2, lsl #0x2
    ldr r8, [r2, #0x44]
    bne L_01ffcab8
    add r1, r4, r10, lsl #0x1
    add r1, r1, #0x100
    ldrsh r6, [r1, #0x50]
    ldrsh r1, [r1, #0x58]
    cmp r1, r6
    beq L_01ffcab8
    ldr r5, [sp, #0x30]
    cmp r10, #0x0
    mov r1, r5
    bne L_01ffc988
    ldr r2, =data_02139cd0
    mov r3, r6, lsl #0x3
    ldrh r6, [r2, r3]
    b L_01ffc99c
L_01ffc988:
    ldr r2, =data_0213845c
    ldr r3, [r2, r10, lsl #0x2]
    mov r2, #0x6
    smulbb r2, r6, r2
    ldrh r6, [r3, r2]
L_01ffc99c:
    ldr r2, =0x266
    cmp r6, r2
    bhs L_01ffc9f0
    ldr r2, [r4, #0x9e4]
    mov r9, #0x64
    ldrh r11, [r2, #0x0]
    ldr r2, =data_0213930c
    ldr r1, =data_02129288
    mla r2, r11, r9, r2
    mov r3, #0x18
    ldrsb r2, [r2, #0x10]
    mla r1, r6, r3, r1
    cmp r2, #0x1
    bne L_01ffc9f0
    ldrb r5, [r1, #0x5]
    cmp r5, #0x0
    addne r1, r6, r5
    movne r1, r1, lsl #0x10
    movne r6, r1, lsr #0x10
    ldrne r1, =data_02129288
    mlane r1, r6, r3, r1
L_01ffc9f0:
    ldrsb r0, [r0, #0x10]
    cmp r0, #0x0
    beq L_01ffca14
    ldr r0, =0x266
    cmp r6, r0
    beq L_01ffca14
    ldrb r0, [r1, #0x6]
    cmp r0, #0x0
    beq L_01ffcab8
L_01ffca14:
    ldr r0, =0x266
    cmp r6, r0
    ldreq r0, [sp, #0x34]
    addeq r1, r7, #0xd7
    swpeqb r0, r0, [r1]
    beq L_01ffca9c
    ldrb r0, [r1, #0x6]
    cmp r0, #0x0
    beq L_01ffca6c
    ldr r3, [r1, #0x0]
    ldr r1, [sp, #0x38]
    ldr r2, =data_0213afe8
    add r0, sp, #0xbc
    bl func_0205e950
    add r0, sp, #0xbc
    bl func_020c1974
    add r1, r4, r10, lsl #0x2
    str r0, [r1, #0x178]
    ldr r0, [sp, #0x3c]
    add r1, r7, #0xd7
    swpb r0, r0, [r1]
    b L_01ffca9c
L_01ffca6c:
    mov r0, r8
    mov r1, r10
    mov r2, r6
    bl func_01ffeaf8
    ldr r0, =data_0214b484
    add r2, r7, #0xd7
    ldr r0, [r0, #0x0]
    add r1, r0, #0x10
    ldr r0, [sp, #0x40]
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x40]
    swpb r0, r0, [r2]
L_01ffca9c:
    add r0, r4, r10, lsl #0x1
    add r0, r0, #0x100
    ldrsh r2, [r0, #0x50]
    add r1, r7, #0xdf
    strh r2, [r0, #0x58]
    strh r6, [r0, #0x68]
    swpb r0, r5, [r1]
L_01ffcab8:
    ldrsb r0, [r7, #0xd7]
    cmp r0, #0x1
    beq L_01ffcad4
    cmp r0, #0x2
    beq L_01ffcad4
    cmp r0, #0x3
    bne L_01ffcef0
L_01ffcad4:
    cmp r0, #0x3
    beq L_01ffcaf8
    cmp r0, #0x2
    beq L_01ffcaf8
    mov r0, r8
    mov r1, r10
    bl func_020c253c
    cmp r0, #0x0
    beq L_01ffcef0
L_01ffcaf8:
    ldrsb r0, [r7, #0xd7]
    cmp r0, #0x3
    bne L_01ffcb38
    ldrsb r0, [r7, #0xcf]
    cmp r0, #0x0
    beq L_01ffcb1c
    mov r0, r8
    mov r1, r10
    bl func_020c24c4
L_01ffcb1c:
    ldr r0, [sp, #0x44]
    add r1, r7, #0xcf
    swpb r0, r0, [r1]
    add r1, r4, r10, lsl #0x2
    ldr r0, [sp, #0x44]
    str r0, [r1, #0x178]
    b L_01ffcbc0
L_01ffcb38:
    cmp r0, #0x2
    bne L_01ffcb68
    ldrsb r0, [r7, #0xcf]
    cmp r0, #0x0
    beq L_01ffcb58
    mov r0, r8
    mov r1, r10
    bl func_020c24c4
L_01ffcb58:
    ldr r0, [sp, #0x48]
    add r1, r7, #0xcf
    swpb r0, r0, [r1]
    b L_01ffcbc0
L_01ffcb68:
    ldrsb r0, [r7, #0xcf]
    cmp r0, #0x0
    beq L_01ffcb80
    mov r0, r8
    mov r1, r10
    bl func_020c24c4
L_01ffcb80:
    ldr r0, [sp, #0x40]
    add r1, r7, #0xcf
    swpb r0, r0, [r1]
    mov r1, r10
    mov r0, r8
    bl func_020c2494
    add r1, r4, r10, lsl #0x2
    str r0, [r1, #0x178]
    mov r0, r8
    mov r1, r10
    bl func_020c2510
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r1, r0, #0x10
    ldr r0, [sp, #0x4c]
    swpb r0, r0, [r1]
L_01ffcbc0:
    add r0, r4, r10
    ldr r1, [sp, #0x50]
    add r2, r0, #0xd7
    swpb r1, r1, [r2]
    add r3, r0, #0xe3
    add r1, r4, r10, lsl #0x1
    add r2, r1, #0x100
    ldrsh r1, [r2, #0x58]
    cmp r10, #0x0
    strh r1, [r2, #0x60]
    ldrh r1, [r2, #0x68]
    strh r1, [r2, #0x70]
    ldrb r1, [r0, #0xdf]
    swpb r1, r1, [r3]
    beq L_01ffcc10
    cmp r10, #0x2
    ldreq r0, [sp, #0x50]
    addeq r1, r4, #0xbd
    swpeqb r0, r0, [r1]
    b L_01ffccf4
L_01ffcc10:
    add r1, r4, r10, lsl #0x2
    ldr r1, [r1, #0x178]
    ldrh r8, [r2, #0x70]
    str r1, [sp, #0x20]
    ldr r1, =0x266
    ldrsh r2, [r2, #0x60]
    cmp r8, r1
    ldr r1, =data_02139cd0
    ldr r11, [sp, #0x50]
    add r1, r1, r2, lsl #0x3
    ldrsb r1, [r1, #0x4]
    add r2, r0, #0xd3
    swpb r1, r1, [r2]
    add r2, r4, r10
    ldrsb r7, [r0, #0xd3]
    ldrlo r0, =data_02129288
    movlo r1, #0x18
    mlalo r0, r8, r1, r0
    ldrlob r0, [r0, #0x4]
    add r1, r2, #0xdb
    movhs r0, r11
    swpb r0, r0, [r1]
    add r0, r4, r10, lsl #0x1
    add r0, r0, #0x100
    ldrsh r1, [r0, #0x60]
    ldr r0, =data_02139cd0
    ldrsb r6, [r2, #0xdb]
    add r0, r0, r1, lsl #0x3
    ldrsh r5, [r0, #0x2]
    ldrsb r0, [r0, #0x5]
    add r1, r4, #0xb4
    mov r2, #0x64
    cmp r0, #0x2
    str r0, [sp, #0x24]
    ldr r0, =0x266
    ldreq r11, [sp, #0x54]
    cmp r8, r0
    ldrb r0, [r4, #0xb3]
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x9e4]
    ldrh r1, [r0, #0x0]
    ldr r0, =data_0213930c
    mla r0, r1, r2, r0
    ldrsb r2, [r0, #0x14]
    ldrhs r0, [sp, #0x58]
    bhs L_01ffccdc
    ldr r0, =data_02129288
    mov r1, #0x18
    mla r0, r8, r1, r0
    add r0, r2, r0
    ldrb r0, [r0, #0x8]
L_01ffccdc:
    add r1, r4, #0xb3
    swpb r0, r0, [r1]
    add r1, r4, #0x100
    ldr r0, [sp, #0x5c]
    strh r0, [r1, #0xe]
    b L_01ffce70
L_01ffccf4:
    add r0, r4, r10, lsl #0x2
    ldr r0, [r0, #0x178]
    mov r1, r10, lsl #0x2
    str r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_01ffcd84
    ldr r0, =data_0213845c
    ldr r11, [sp, #0x54]
    ldr r2, [r0, r1]
    add r0, r4, r10, lsl #0x1
    add r0, r0, #0x100
    ldrsh r1, [r0, #0x60]
    ldrh r8, [r0, #0x70]
    mov r0, #0x6
    smlabb r0, r1, r0, r2
    ldrsb r7, [r0, #0x4]
    ldr r0, =0x266
    cmp r8, r0
    ldrlo r0, =data_02129288
    movlo r1, #0x18
    mlalo r0, r8, r1, r0
    ldrlob r0, [r0, #0x4]
    ldrhs r0, [sp, #0x60]
    mov r0, r0, lsl #0x18
    mov r6, r0, asr #0x18
    ldr r0, =data_0213845c
    ldr r2, [r0, r10, lsl #0x2]
    add r0, r4, r10, lsl #0x1
    add r0, r0, #0x100
    ldrsh r1, [r0, #0x60]
    mov r0, #0x6
    smlabb r0, r1, r0, r2
    ldrsh r5, [r0, #0x2]
    ldrsb r0, [r0, #0x5]
    str r0, [sp, #0x24]
    b L_01ffce5c
L_01ffcd84:
    ldr r0, =data_0213846c
    mvn r2, #0x0
    ldrsh r0, [r0, r1]
    mov r1, r0, lsl #0x1
    ldr r0, =data_02138390
    ldrsh r1, [r0, r1]
    cmp r1, r2
    beq L_01ffcdd8
L_01ffcda4:
    ldr r0, =data_0213836c
    mov r3, r1, lsl #0x1
    ldrsh r2, [r0, r3]
    add r0, r4, r2, lsl #0x2
    ldr r0, [r0, #0x178]
    cmp r0, #0x0
    strne r2, [sp, #0x28]
    bne L_01ffcdd8
    ldr r0, =data_02138390
    ldrsh r1, [r0, r3]
    mvn r0, #0x0
    cmp r1, r0
    bne L_01ffcda4
L_01ffcdd8:
    ldr r2, [sp, #0x28]
    ldr r0, [sp, #0x28]
    add r2, r4, r2, lsl #0x2
    ldr r2, [r2, #0x178]
    ldr r5, [r4, #0x74]
    mov r3, #0x24
    smlabb r1, r1, r3, r5
    ldr r3, [r1, #0x20]
    str r2, [sp, #0x20]
    ldr r2, [sp, #0x28]
    ldr r1, [sp, #0x28]
    add r2, r4, r2, lsl #0x1
    add r2, r2, #0x100
    cmp r1, #0x0
    add r1, r4, r1
    mov r0, r0, lsl #0x2
    ldrsb r7, [r1, #0xd3]
    ldrsb r6, [r1, #0xdb]
    ldreqsh r1, [r2, #0x60]
    ldreq r0, =data_02139cd0
    ldrh r8, [r2, #0x70]
    addeq r0, r0, r1, lsl #0x3
    mov r11, r3, asr #0xc
    ldreqsh r5, [r0, #0x2]
    beq L_01ffce54
    ldr r1, =data_0213845c
    ldr r3, [r1, r0]
    ldrsh r1, [r2, #0x60]
    mov r0, #0x6
    smlabb r0, r1, r0, r3
    ldrsh r5, [r0, #0x2]
L_01ffce54:
    ldr r0, [sp, #0x54]
    str r0, [sp, #0x24]
L_01ffce5c:
    add r2, r4, r10
    add r1, r2, #0xdb
    swpb r0, r6, [r1]
    add r1, r2, #0xd3
    swpb r0, r7, [r1]
L_01ffce70:
    ldrb r0, [r4, #0xc2]
    cmp r0, #0x0
    beq L_01ffce98
    ldr r0, [sp, #0x64]
    add r1, r4, #0xc2
    swpb r0, r0, [r1]
    add r0, r4, #0x100
    ldrh r0, [r0, #0xc]
    cmp r0, #0x5
    ldrlo r5, [sp, #0x40]
L_01ffce98:
    ldr r9, [sp, #0x68]
L_01ffce9c:
    ldr r0, =data_0213846c
    mov r1, r9, lsl #0x1
    add r0, r0, r10, lsl #0x2
    ldrsh r1, [r1, r0]
    cmp r1, #0x0
    blt L_01ffcedc
    str r11, [sp, #0x0]
    str r7, [sp, #0x4]
    ldr r0, [sp, #0x24]
    str r6, [sp, #0x8]
    str r0, [sp, #0xc]
    ldr r2, [sp, #0x20]
    mov r0, r4
    mov r3, r8
    str r5, [sp, #0x10]
    bl func_01ffd7f4
L_01ffcedc:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x2
    blt L_01ffce9c
L_01ffcef0:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x4
    blt L_01ffc92c
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x58]
    ldrsh r0, [r0, #0x50]
    cmp r1, r0
    bne L_01ffcf3c
    ldrsb r0, [r4, #0xd7]
    cmp r0, #0x0
    bne L_01ffcf3c
    ldr r0, [r4, #0x240]
    str r0, [r4, #0x250]
    ldr r0, [r4, #0x244]
    str r0, [r4, #0x254]
    ldr r0, [r4, #0x24c]
    str r0, [r4, #0x258]
L_01ffcf3c:
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r1, r0
    bne L_01ffd0c8
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0xa
    blt L_01ffcf6c
    cmp r0, #0x6f
    movlt r0, #0x1
    blt L_01ffcf70
L_01ffcf6c:
    mov r0, #0x0
L_01ffcf70:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_01ffcfb0
    ldrsh r2, [r4, #0xe8]
    cmp r2, #0x37c
    blt L_01ffcf98
    ldr r0, =0x3af
    cmp r2, r0
    movle r0, #0x1
    ble L_01ffcfb0
L_01ffcf98:
    cmp r2, #0xec
    blt L_01ffcfac
    cmp r2, #0x254
    movle r0, #0x1
    ble L_01ffcfb0
L_01ffcfac:
    mov r0, #0x0
L_01ffcfb0:
    cmp r0, #0x0
    bne L_01ffd0c8
    ldr r0, =data_0214b480
    ldr r0, [r0, #0x0]
    bl func_02092d74
    mvn r1, #0x0
    cmp r0, r1
    beq L_01ffd04c
    ldr r0, =data_0214b480
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    bl func_02092bfc
    bl func_021060b8
    cmp r0, #0x0
    beq L_01ffd04c
    mov r7, #0x1
    mov r8, #0x0
    ldr r6, =data_0214b480
    mvn r5, #0x0
L_01ffcffc:
    ldr r0, [r6, #0x0]
    mov r1, r8
    bl func_02092d74
    cmp r0, r5
    movne r7, #0x0
    bne L_01ffd028
    add r0, r8, #0x1
    mov r0, r0, lsl #0x18
    mov r8, r0, asr #0x18
    cmp r8, #0x3
    blt L_01ffcffc
L_01ffd028:
    cmp r7, #0x0
    beq L_01ffd04c
    mov r0, #0x1
    mvn r1, #0x0
    bl func_02105dc4
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_01ffd04c:
    ldrsb r5, [r4, #0x88]
    mov r6, #0x1
    bl func_021060d4
    cmp r5, r0
    beq L_01ffd074
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r5, r0
    movne r6, #0x0
L_01ffd074:
    cmp r6, #0x0
    beq L_01ffd098
    mov r0, #0x1
    mvn r1, #0x0
    bl func_02105dc4
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_01ffd098:
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r2, [r0, #0x0]
    ldrsb r0, [r2, #0xc]
    cmp r1, r0
    bne L_01ffd0c8
    add r1, r2, #0xd
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add r1, r2, #0xc
    ldrsb r0, [r2, #0xd]
    swpb r0, r0, [r1]
L_01ffd0c8:
    ldrsb r0, [r4, #0xa1]
    cmp r0, #0x0
    addeq r1, r4, #0xa0
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    beq L_01ffd0f4
    add r1, r4, #0xa0
    swpb r0, r0, [r1]
    add r1, r4, #0xa1
    mov r0, #0x0
    swpb r0, r0, [r1]
L_01ffd0f4:
    add r0, r4, #0x100
    ldrh r2, [r0, #0xa]
    ldr r1, =data_0214b484
    add r2, r2, #0x1
    strh r2, [r0, #0xa]
    ldrh r2, [r0, #0xc]
    add r2, r2, #0x1
    strh r2, [r0, #0xc]
    ldrh r2, [r0, #0xe]
    add r2, r2, #0x1
    strh r2, [r0, #0xe]
    ldrh r2, [r0, #0x1c]
    add r2, r2, #0x1
    strh r2, [r0, #0x1c]
    ldr r0, [r1, #0x0]
    ldrsb r1, [r4, #0x88]
    ldrh r0, [r0, #0x38]
    cmp r1, r0
    bne L_01ffd148
    mov r0, r4
    bl func_0203ae9c
L_01ffd148:
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x3a]
    cmp r1, r0
    bne L_01ffd168
    mov r0, r4
    bl func_0203a7c0
L_01ffd168:
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x3c]
    cmp r1, r0
    bne L_01ffd188
    mov r0, r4
    bl func_020397a8
L_01ffd188:
    ldrb r0, [r4, #0xc6]
    cmp r0, #0x0
    bne L_01ffd1c4
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x24]
    cmp r1, #0x0
    ble L_01ffd1c4
    sub r1, r1, #0x1
    strh r1, [r0, #0x24]
    ldrsh r0, [r0, #0x24]
    cmp r0, #0x0
    moveq r0, #0x0
    addeq r1, r4, #0xc7
    streqh r0, [r4, #0xf2]
    swpeqb r0, r0, [r1]
L_01ffd1c4:
    ldrb r0, [r4, #0xc5]
    cmp r0, #0x0
    bne L_01ffd1f8
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x26]
    cmp r1, #0x0
    ble L_01ffd1f8
    sub r1, r1, #0x1
    strh r1, [r0, #0x26]
    ldrsh r0, [r0, #0x26]
    cmp r0, #0x0
    mvneq r0, #0x0
    streqh r0, [r4, #0xf8]
L_01ffd1f8:
    ldr r0, =data_0214b484
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xd]
    cmp r1, r0
    addne r1, r4, #0xa2
    movne r0, #0x0
    swpneb r0, r0, [r1]
    add r1, sp, #0x80
    ldr r0, [r4, #0x2a4]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r4, #0x2a4]
    add r0, r4, #0x3c
    bl func_0206e0d4
    ldrsb r0, [r4, #0xb7]
    cmp r0, #0x0
    beq L_01ffd24c
    cmp r0, #0x3
    beq L_01ffd28c
    b L_01ffd2d0
L_01ffd24c:
    mov r3, #0x0
    str r3, [r4, #0x198]
    mov r0, #0x1000
    str r0, [r4, #0x19c]
    add r0, r4, #0x198
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    str r3, [r4, #0x1a0]
    bl func_02069504
    add r0, r4, #0x18c
    bl func_01ff89d0
    add r0, r4, #0x18c
    add r1, r4, #0x198
    add r2, r4, #0x1a4
    bl func_02069504
    b L_01ffd310
L_01ffd28c:
    add r0, r4, #0x3b4
    add r3, r4, #0x198
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    bl func_02069504
    add r0, r4, #0x18c
    bl func_01ff89d0
    add r0, r4, #0x198
    bl func_01ff89d0
    add r0, r4, #0x18c
    add r1, r4, #0x198
    add r2, r4, #0x1a4
    bl func_02069504
    b L_01ffd310
L_01ffd2d0:
    add r0, r4, #0x3b4
    add r1, r4, #0x2a0
    add r2, r4, #0x198
    bl func_02069634
    add r0, r4, #0x198
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    bl func_02069504
    add r0, r4, #0x18c
    bl func_01ff89d0
    add r0, r4, #0x198
    bl func_01ff89d0
    add r0, r4, #0x18c
    add r1, r4, #0x198
    add r2, r4, #0x1a4
    bl func_02069504
L_01ffd310:
    add r0, r4, #0x2a0
    add r3, r4, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r4, #0x9e4]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213931c
    mul r1, r3, r1
    ldrsb r1, [r2, r1]
    cmp r1, #0x1
    bne L_01ffd5ec
    ldrb r1, [r4, #0xe3]
    cmp r1, #0x0
    beq L_01ffd3fc
    ldr r0, [r4, #0x290]
    cmp r0, #0x0
    ble L_01ffd3e0
    add r1, r4, #0x100
    ldrsh r2, [r1, #0x44]
    ldrsh r1, [r1, #0x60]
    cmp r2, r1
    beq L_01ffd398
    ldr r1, [r4, #0x74]
    cmp r1, #0x0
    beq L_01ffd390
    ldrsh r1, [r1, #0x6]
    cmp r1, #0x0
    beq L_01ffd390
    bl _s32_div_f
    str r0, [r4, #0x298]
    b L_01ffd398
L_01ffd390:
    mov r0, #0x0
    str r0, [r4, #0x298]
L_01ffd398:
    ldr r1, [r4, #0x290]
    ldr r0, [r4, #0x298]
    sub r0, r1, r0
    str r0, [r4, #0x290]
    ldr r0, [r4, #0x290]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r4, #0x290]
    ldr r2, [r4, #0x28c]
    ldr r1, [r4, #0x290]
    mov r0, #0x800
    smull r3, r1, r2, r1
    adds r2, r3, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x28c]
    b L_01ffd3e8
L_01ffd3e0:
    mov r0, #0x0
    str r0, [r4, #0x28c]
L_01ffd3e8:
    ldr r0, [r4, #0x290]
    str r0, [r4, #0x294]
    ldr r0, [r4, #0x284]
    str r0, [r4, #0x288]
    b L_01ffd5d0
L_01ffd3fc:
    ldr r2, [r4, #0x294]
    cmp r2, #0x1000
    bge L_01ffd578
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x44]
    ldrsh r0, [r0, #0x60]
    cmp r1, r0
    beq L_01ffd44c
    ldr r0, [r4, #0x74]
    cmp r0, #0x0
    beq L_01ffd444
    ldrsh r1, [r0, #0x6]
    cmp r1, #0x0
    beq L_01ffd444
    rsb r0, r2, #0x1000
    bl _s32_div_f
    str r0, [r4, #0x298]
    b L_01ffd44c
L_01ffd444:
    mov r0, #0x0
    str r0, [r4, #0x298]
L_01ffd44c:
    ldr r1, [r4, #0x294]
    ldr r0, [r4, #0x298]
    mov r3, #0x800
    add r0, r1, r0
    str r0, [r4, #0x294]
    ldr r0, [r4, #0x294]
    mov r1, #0x0
    cmp r0, #0x1000
    movgt r0, #0x1000
    strgt r0, [r4, #0x294]
    ldr r2, [r4, #0x288]
    ldr r0, =0x1863
    umull r6, r5, r2, r0
    mla r5, r2, r1, r5
    mov r1, r2, asr #0x1f
    mla r5, r1, r0, r5
    adds r2, r6, r3
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r5, [r4, #0x284]
    ldr r0, [r4, #0x294]
    sub r5, r5, r1
    smull r7, r6, r5, r0
    adds r7, r7, r3
    adc r6, r6, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    mov r2, #0x570
    add r6, r1, r7
    rsb r1, r2, #0x0
    umull r8, r7, r6, r1
    mvn r2, #0x0
    mla r7, r6, r2, r7
    mov r2, r6, asr #0x1f
    adds r8, r8, r3
    mla r7, r2, r1, r7
    ldr r5, [r4, #0x9e4]
    adc r2, r7, #0x0
    mov r6, r8, lsr #0xc
    ldr r1, [r5, #0x8]
    orr r6, r6, r2, lsl #0x14
    smull r2, r1, r6, r1
    adds r2, r2, r3
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    ldr r5, [r4, #0x28c]
    orr r2, r2, r1, lsl #0x14
    sub r1, r2, r5
    smull r2, r0, r1, r0
    adds r1, r2, r3
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r5, r1
    str r0, [r4, #0x28c]
    b L_01ffd5c8
L_01ffd578:
    ldr r3, [r4, #0x284]
    mov r1, #0x570
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull r6, r5, r3, r1
    mla r5, r3, r2, r5
    mov r3, r3, asr #0x1f
    mov r2, #0x800
    adds r6, r6, r2
    mla r5, r3, r1, r5
    adc r1, r5, #0x0
    mov r3, r6, lsr #0xc
    ldr r0, [r0, #0x8]
    orr r3, r3, r1, lsl #0x14
    smull r1, r0, r3, r0
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x28c]
L_01ffd5c8:
    mov r0, #0x1000
    str r0, [r4, #0x290]
L_01ffd5d0:
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x60]
    strh r1, [r0, #0x44]
    ldr r1, [r4, #0x34]
    ldr r0, [r4, #0x28c]
    add r0, r1, r0
    str r0, [r4, #0x34]
L_01ffd5ec:
    ldr r0, [r4, #0x18c]
    str r0, [r4, #0x3c]
    ldr r0, [r4, #0x190]
    str r0, [r4, #0x40]
    ldr r0, [r4, #0x194]
    str r0, [r4, #0x44]
    ldr r0, [r4, #0x198]
    str r0, [r4, #0x48]
    ldr r0, [r4, #0x19c]
    str r0, [r4, #0x4c]
    ldr r0, [r4, #0x1a0]
    str r0, [r4, #0x50]
    ldr r0, [r4, #0x1a4]
    str r0, [r4, #0x54]
    ldr r0, [r4, #0x1a8]
    str r0, [r4, #0x58]
    ldr r0, [r4, #0x1ac]
    str r0, [r4, #0x5c]
    ldrsb r1, [r4, #0xb7]
    ldrsb r0, [r4, #0xb8]
    cmp r1, r0
    movne r0, #0x0
    strne r0, [r4, #0x484]
    ldr r0, [r4, #0x484]
    cmp r0, #0x1000
    bge L_01ffd670
    add r0, r0, #0x100
    str r0, [r4, #0x484]
    add r1, r4, #0x3c
    ldr r3, [r4, #0x484]
    add r0, sp, #0x80
    mov r2, r1
    bl func_01ff86bc
L_01ffd670:
    ldrsb r1, [r4, #0xb7]
    add r2, r4, #0xb8
    add r0, r4, #0x3c
    swpb r1, r1, [r2]
    add r1, r4, #0x1b0
    add r2, r4, #0x1e0
    bl func_01ff810c
    ldr r3, [r4, #0x38]
    ldr r2, [r4, #0x34]
    ldr r1, [r4, #0x30]
    add r0, r4, #0x3c
    str r1, [r4, #0x204]
    str r2, [r4, #0x208]
    str r3, [r4, #0x20c]
    add r1, r4, #0x210
    bl func_020683dc
    ldr r0, [r4, #0x30]
    ldr r2, [r4, #0x38]
    ldr r1, [r4, #0x34]
    rsb r0, r0, #0x0
    str r0, [r4, #0x234]
    rsb r0, r1, #0x0
    str r0, [r4, #0x238]
    rsb r0, r2, #0x0
    str r0, [r4, #0x23c]
    ldr r2, [r4, #0x2e8]
    ldr r1, [r4, #0x2a0]
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, asr #0x1
    str r1, [r4, #0x2d0]
    ldr r2, [r4, #0x2a4]
    ldr r1, [r4, #0x934]
    add r1, r2, r1
    str r1, [r4, #0x2d4]
    ldr r2, [r4, #0x2f0]
    ldr r1, [r4, #0x2a8]
    add r1, r2, r1
    mov r1, r1, asr #0x1
    str r1, [r4, #0x2d8]
    bl func_020095fc
    ldr r1, [r4, #0x9e4]
    mov r0, r4
    ldrsh r1, [r1, #0x26]
    mov r1, r1, asr #0x9
    add r2, r1, #0xb
    orr r1, r2, r2, lsl #0x5
    orr r1, r1, r2, lsl #0xa
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020c5188
    cmp r4, #0x0
    beq L_01ffd76c
    ldr r1, =data_027c0460
    mov r0, r4
    ldrb r3, [r1, #0x0]
    ldrb r2, [r1, #0x1]
    ldrb r5, [r1, #0x2]
    orr r1, r3, r2, lsl #0x5
    orr r1, r1, r5, lsl #0xa
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020c514c
L_01ffd76c:
    bl func_0210634c
    add r1, r4, #0x2a0
    add r2, r4, #0x2c4
    bl func_020c45ec
    mov r7, #0x0
    ldr r5, =data_02138344
    add r2, sp, #0xb0
    mov r0, #0x24
L_01ffd78c:
    mov r1, r7, lsl #0x1
    ldrsh r3, [r5, r1]
    ldr r6, [r4, #0x74]
    add r1, r7, #0x1
    smlabb r3, r3, r0, r6
    ldr r3, [r3, #0x20]
    mov r1, r1, lsl #0x10
    str r3, [r2, r7, lsl #0x2]
    mov r7, r1, asr #0x10
    cmp r7, #0x3
    blt L_01ffd78c
    ldrsb r3, [r4, #0xa6]
    ldr r0, =0x958
    add r1, r4, #0x2c4
    mov r3, r3, lsl #0x10
    add r0, r4, r0
    mov r3, r3, lsr #0x10
    bl func_020eb12c
    mov r0, r4
    bl func_01ffee18
    add sp, sp, #0x13c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
