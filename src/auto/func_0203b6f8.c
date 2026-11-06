#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202914c();
extern void func_0203cda4();
extern void func_0203d188();
extern void func_021060d4();
extern char data_02133928[];
extern char data_021377bc[];
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153708[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_0203b6f8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r4, r0
    bl func_021060d4
    ldr r1, =data_02153720
    ldrsb r6, [r4, #0x88]
    ldr r2, [r1, #0x0]
    mov r1, #0x1
    mov r0, r0, lsl #0x18
    ldrh r5, [r2, #0x38]
    mov r3, r1, lsl r6
    mov r9, r0, asr #0x18
    ands r0, r5, r3
    ldr r0, =data_0214b484
    ldrsh r7, [r2, #0x3a]
    ldr r0, [r0, #0x0]
    ldr r8, [r2, #0x34]
    ldrsb r3, [r0, #0x7]
    moveq r1, #0x0
    cmp r3, #0x1
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r3, =data_02153708
    ldr r3, [r3, #0x0]
    ldrh r3, [r3, #0x0]
    cmp r3, #0x12
    addls pc, pc, r3, lsl #0x2
    b L_0203b7b8
L_0203b76c:
    b L_0203bedc
    b L_0203ba98
    b L_0203b7b8
    b L_0203b940
    b L_0203bd84
    b L_0203bedc
    b L_0203b7b8
    b L_0203b7b8
    b L_0203b7b8
    b L_0203b7c4
    b L_0203bedc
    b L_0203bedc
    b L_0203b7d0
    b L_0203b7b8
    b L_0203b7b8
    b L_0203b7b8
    b L_0203b7b8
    b L_0203b7dc
    b L_0203bedc
L_0203b7b8:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203b7c4:
    cmp r8, #0x0
    moveq r0, #0x0
    streq r0, [r4, #0x4ac]
L_0203b7d0:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203b7dc:
    ldr r0, =data_021377bc
    mov r10, #0x0
    ldr r7, [r0, #0x13c]
    mov r5, r10
    str r10, [sp, #0x0]
    str r10, [sp, #0x4]
    mov r11, r10
    mov r2, #0x2
    mov r3, #0x1
L_0203b800:
    cmp r10, #0x0
    blt L_0203b810
    cmp r10, #0x14
    blt L_0203b818
L_0203b810:
    mov r9, r5
    b L_0203b828
L_0203b818:
    ldr r1, [r4, #0x9e4]
    mov r0, #0x3c
    add r1, r1, #0x90
    smlabb r9, r10, r0, r1
L_0203b828:
    cmp r9, #0x0
    moveq r0, r11
    beq L_0203b8a0
    ldrh r1, [r9, #0x0]
    cmp r1, #0x0
    ldreq r0, [sp, #0x4]
    beq L_0203b8a0
    ldrh r6, [r9, #0x2]
    cmp r6, #0x0
    ldreq r0, [sp, #0x0]
    beq L_0203b8a0
    cmp r1, #0x4f
    blo L_0203b868
    cmp r1, #0x63
    movlo r0, r7
    blo L_0203b870
L_0203b868:
    ldr r0, =data_021377bc
    ldr r0, [r0, r1, lsl #0x2]
L_0203b870:
    ldrb r0, [r0, #0x2]
    mov r1, #0x5
    ldr ip, [r4, #0x9e4]
    sub lr, r0, #0x1
    ldr r0, =data_02133928
    mla r0, lr, r1, r0
    ldrb r1, [ip, #0x13]
    sub r1, r1, #0x1
    ldrb r0, [r1, r0]
    cmp r6, r0
    movlt r0, r3
    movge r0, r2
L_0203b8a0:
    cmp r0, #0x2
    bne L_0203b8b8
    ldrh r0, [r9, #0x0]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_0203b8d0
L_0203b8b8:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x14
    blt L_0203b800
    mov r0, #0x0
L_0203b8d0:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0xf
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r8, #0x0
    addlt sp, sp, #0xc
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxlt lr
    cmp r8, #0x14
    addge sp, sp, #0xc
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxge lr
    mov r0, r4
    add r4, r4, #0xcd
    mov r3, #0x2
    mov r1, r8, lsl #0x10
    swpb r3, r3, [r4]
    mov r1, r1, asr #0x10
    mov r2, #0x0
    bl func_0203d188
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203b940:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203b960
    mvn r0, #0x4
    cmp r8, r0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203b960:
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x4dc
    cmp r1, r0
    blt L_0203b980
    ldr r0, =0x4ed
    cmp r1, r0
    movle r0, #0x1
    ble L_0203b984
L_0203b980:
    mov r0, #0x0
L_0203b984:
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203b9b8
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203b9f8
L_0203b9b8:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203b9f8
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203b9dc
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203b9f8
L_0203b9dc:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203b9f4
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203b9f8
L_0203b9f4:
    mov r0, #0x0
L_0203b9f8:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203ba58
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203ba24
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203ba58
L_0203ba24:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203ba40
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203ba58
L_0203ba40:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203ba58
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203ba58:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xc4
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0x9
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203ba98:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203bac0
    mvn r0, #0x4
    cmp r8, r0
    beq L_0203bac0
    cmp r8, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203bac0:
    ldrsh r3, [r2, #0x7a]
    mov r0, #0x0
    cmp r3, #0x0
    blt L_0203bae4
    ldr r1, =data_02156080
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r3
    bgt L_0203baec
L_0203bae4:
    mov r2, #0x0
    b L_0203baf4
L_0203baec:
    add r1, r2, r3, lsl #0x2
    ldr r2, [r1, #0x4]
L_0203baf4:
    cmp r2, #0x0
    beq L_0203bb28
    ldrsh r1, [r2, #0x90]
    sub r1, r1, #0x4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    cmp r1, #0x1
    bhi L_0203bb28
    ldrsh r1, [r2, #0x98]
    cmp r6, r1
    moveq r0, #0x1
L_0203bb28:
    ldrsh r2, [r4, #0xe8]
    ldr r1, =0x35e
    cmp r2, r1
    blt L_0203bc4c
    ldr r1, =0x3af
    cmp r2, r1
    bgt L_0203bc4c
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203bb68
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203bba8
L_0203bb68:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203bba8
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203bb8c
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203bba8
L_0203bb8c:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203bba4
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203bba8
L_0203bba4:
    mov r0, #0x0
L_0203bba8:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203bc08
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203bbd4
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bc08
L_0203bbd4:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203bbf0
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bc08
L_0203bbf0:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203bc08
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203bc08:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xbe
    mov r2, #0x1
    swpb r0, r2, [r1]
    mov r1, #0x0
    add r0, r4, #0x100
    strh r1, [r0, #0x20]
    mov r0, #0x4b
    add r1, r4, #0xc4
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bc4c:
    cmp r0, #0x0
    beq L_0203bd50
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r2, #0x0
    ldrsh r3, [r4, #0xf0]
    cmp r8, #0x0
    moveq r2, #0x1
    cmp r3, #0x4
    blt L_0203bc84
    cmp r3, #0x8
    movle r0, #0x1
    ble L_0203bcc4
L_0203bc84:
    cmp r3, #0x57
    moveq r0, #0x1
    beq L_0203bcc4
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203bca8
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203bcc4
L_0203bca8:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203bcc0
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203bcc4
L_0203bcc0:
    mov r0, #0x0
L_0203bcc4:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203bd24
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203bcf0
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bd24
L_0203bcf0:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203bd0c
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bd24
L_0203bd0c:
    cmp r3, #0x53
    moveq r0, #0x0
    beq L_0203bd24
    cmp r3, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203bd24:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x3
    mov r3, #0x0
    bl func_0202914c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bd50:
    mov r1, #0x0
    mvn r3, #0x0
L_0203bd58:
    add r0, r1, #0x1
    add r2, r4, r1, lsl #0x1
    mov r1, r0, lsl #0x10
    add r0, r2, #0x100
    mov r1, r1, asr #0x10
    strh r3, [r0, #0x48]
    cmp r1, #0x2
    blt L_0203bd58
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bd84:
    mvn r0, #0x0
    cmp r8, r0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_0214b480
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r9, r0
    beq L_0203bdc8
    cmp r9, r6
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203bdc8:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203bde0
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203be20
L_0203bde0:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203be20
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203be04
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203be20
L_0203be04:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203be1c
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203be20
L_0203be1c:
    mov r0, #0x0
L_0203be20:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203be80
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203be4c
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203be80
L_0203be4c:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203be68
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203be80
L_0203be68:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203be80
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203be80:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r8, #0x0
    addle sp, sp, #0xc
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    cmp r8, #0x14
    addge sp, sp, #0xc
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxge lr
    mov r0, r4
    add r4, r4, #0xcd
    mov r3, #0x2
    mov r1, r8, lsl #0x10
    swpb r3, r3, [r4]
    mov r1, r1, asr #0x10
    mov r2, #0x0
    bl func_0203d188
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bedc:
    mvn r3, #0x0
    cmp r8, r3
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r5, =data_0214b480
    ldr r5, [r5, #0x0]
    cmp r5, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r9, r3
    beq L_0203bf20
    cmp r9, r6
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203bf20:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203bf38
    cmp r5, #0x8
    movle r3, #0x1
    ble L_0203bf78
L_0203bf38:
    cmp r5, #0x57
    moveq r3, #0x1
    beq L_0203bf78
    ldrsh r10, [r4, #0xe8]
    cmp r10, #0xf
    blt L_0203bf5c
    cmp r10, #0x4b
    movle r3, #0x1
    ble L_0203bf78
L_0203bf5c:
    ldr r3, =0x119
    cmp r10, r3
    blt L_0203bf74
    cmp r10, #0x13c
    movle r3, #0x1
    ble L_0203bf78
L_0203bf74:
    mov r3, #0x0
L_0203bf78:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_0203bfd8
    ldrsh r3, [r4, #0xe8]
    ldr r10, =0x477
    cmp r3, r10
    blt L_0203bfa4
    ldr r10, =0x47d
    cmp r3, r10
    movle r3, #0x0
    ble L_0203bfd8
L_0203bfa4:
    ldr r10, =0x4c6
    cmp r3, r10
    blt L_0203bfc0
    ldr r10, =0x4c9
    cmp r3, r10
    movle r3, #0x0
    ble L_0203bfd8
L_0203bfc0:
    cmp r5, #0x53
    moveq r3, #0x0
    beq L_0203bfd8
    cmp r5, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_0203bfd8:
    cmp r3, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsb r3, [r0, #0x4]
    cmp r3, #0x2
    bne L_0203c8d8
    ldrsh r10, [r2, #0x7a]
    mov r7, #0x0
    mov r5, r7
    mov r3, r7
    mov r2, r7
    cmp r10, #0x0
    blt L_0203c024
    ldr r0, =data_02156080
    ldr r9, [r0, #0x0]
    ldrsh r0, [r9, #0x20]
    cmp r0, r10
    bgt L_0203c02c
L_0203c024:
    mov r0, #0x0
    b L_0203c034
L_0203c02c:
    add r0, r9, r10, lsl #0x2
    ldr r0, [r0, #0x4]
L_0203c034:
    cmp r0, #0x0
    beq L_0203c078
    ldrsh r9, [r0, #0x90]
    cmp r9, #0x3
    ldrsh r9, [r0, #0x90]
    moveq r3, #0x1
    sub r9, r9, #0x4
    mov r9, r9, lsl #0x10
    mov r9, r9, asr #0x10
    mov r9, r9, lsl #0x10
    mov r9, r9, lsr #0x10
    cmp r9, #0x1
    bhi L_0203c078
    ldrsh r0, [r0, #0x98]
    mov r7, #0x1
    cmp r6, r0
    moveq r5, r7
L_0203c078:
    cmp r8, #0x0
    bne L_0203c088
    cmp r1, #0x0
    movne r2, #0x1
L_0203c088:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203c0b0
    mvn r0, #0x4
    cmp r8, r0
    beq L_0203c0b0
    cmp r2, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0203c0b0:
    cmp r5, #0x0
    beq L_0203c310
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldrsh r1, [r4, #0xf0]
    mov r6, r0
    cmp r1, #0x4b
    beq L_0203c10c
    ldrsh r3, [r4, #0xe8]
    ldr r1, =0x3b9
    cmp r3, r1
    beq L_0203c10c
    ldr r1, =0x3ba
    mov r5, #0x0
    cmp r3, r1
    blt L_0203c104
    ldr r1, =0x3bf
    cmp r3, r1
    movle r5, r0
L_0203c104:
    cmp r5, #0x0
    moveq r6, #0x0
L_0203c10c:
    cmp r6, #0x0
    bne L_0203c13c
    ldrsh r3, [r4, #0xe8]
    ldr r1, =0x412
    mov r5, #0x0
    cmp r3, r1
    blt L_0203c134
    ldr r1, =0x41b
    cmp r3, r1
    movle r5, #0x1
L_0203c134:
    cmp r5, #0x0
    moveq r0, #0x0
L_0203c13c:
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203c1a4
    cmp r0, #0x4
    beq L_0203c1ec
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c230
L_0203c1a4:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c230
L_0203c1ec:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203c230:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203c248
    cmp r5, #0x8
    movle r0, #0x1
    ble L_0203c288
L_0203c248:
    cmp r5, #0x57
    moveq r0, #0x1
    beq L_0203c288
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203c26c
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c288
L_0203c26c:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c284
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c288
L_0203c284:
    mov r0, #0x0
L_0203c288:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c2e8
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203c2b4
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c2e8
L_0203c2b4:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203c2d0
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c2e8
L_0203c2d0:
    cmp r5, #0x53
    moveq r0, #0x0
    beq L_0203c2e8
    cmp r5, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c2e8:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x3
    bl func_0202914c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c310:
    cmp r7, #0x0
    beq L_0203c4ec
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203c37c
    cmp r0, #0x4
    beq L_0203c3c4
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c408
L_0203c37c:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c408
L_0203c3c4:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203c408:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203c420
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203c460
L_0203c420:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203c460
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203c444
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c460
L_0203c444:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c45c
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c460
L_0203c45c:
    mov r0, #0x0
L_0203c460:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c4c0
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203c48c
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c4c0
L_0203c48c:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203c4a8
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c4c0
L_0203c4a8:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203c4c0
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c4c0:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0202914c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c4ec:
    cmp r3, #0x0
    bne L_0203c620
    ldrsb r1, [r4, #0xa4]
    cmp r1, #0x5
    movne r0, #0x0
    bne L_0203c584
    ldrsh r3, [r4, #0xe8]
    cmp r3, #0x1
    blt L_0203c51c
    cmp r3, #0xc
    movle r0, #0x1
    ble L_0203c52c
L_0203c51c:
    ldr r0, =0x261
    cmp r3, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c52c:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c584
    cmp r3, #0x318
    blt L_0203c580
    ldr r0, =0x33b
    cmp r3, r0
    bgt L_0203c580
    ldrsh r3, [r4, #0xec]
    cmp r3, #0x1
    blt L_0203c564
    cmp r3, #0xc
    movle r0, #0x1
    ble L_0203c574
L_0203c564:
    ldr r0, =0x261
    cmp r3, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c574:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c584
L_0203c580:
    mov r0, #0x0
L_0203c584:
    cmp r0, #0x0
    bne L_0203c620
    cmp r1, #0x4
    movne r0, #0x0
    bne L_0203c618
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0x1
    blt L_0203c5b0
    cmp r1, #0xc
    movle r0, #0x1
    ble L_0203c5c0
L_0203c5b0:
    ldr r0, =0x262
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c5c0:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c618
    cmp r1, #0x318
    blt L_0203c614
    ldr r0, =0x33b
    cmp r1, r0
    bgt L_0203c614
    ldrsh r1, [r4, #0xec]
    cmp r1, #0x1
    blt L_0203c5f8
    cmp r1, #0xc
    movle r0, #0x1
    ble L_0203c608
L_0203c5f8:
    ldr r0, =0x262
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c608:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c618
L_0203c614:
    mov r0, #0x0
L_0203c618:
    cmp r0, #0x0
    beq L_0203c8a4
L_0203c620:
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r5, #0x1
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x4b
    beq L_0203c668
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0x3b8
    beq L_0203c668
    cmp r1, #0x3c0
    mov r3, #0x0
    blt L_0203c660
    ldr r0, =0x411
    cmp r1, r0
    movle r3, r5
L_0203c660:
    cmp r3, #0x0
    moveq r5, #0x0
L_0203c668:
    cmp r5, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203c738
    cmp r0, #0x4
    beq L_0203c780
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c7c4
L_0203c738:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203c7c4
L_0203c780:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x5
    ldr r5, [r0, #0x0]
    mul r1, r5, r1
    add r5, r1, #0x1
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r5, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203c7c4:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203c7dc
    cmp r5, #0x8
    movle r0, #0x1
    ble L_0203c81c
L_0203c7dc:
    cmp r5, #0x57
    moveq r0, #0x1
    beq L_0203c81c
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203c800
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c81c
L_0203c800:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c818
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c81c
L_0203c818:
    mov r0, #0x0
L_0203c81c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c87c
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203c848
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c87c
L_0203c848:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203c864
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c87c
L_0203c864:
    cmp r5, #0x53
    moveq r0, #0x0
    beq L_0203c87c
    cmp r5, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c87c:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x2
    bl func_0202914c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c8a4:
    mov r1, #0x0
    mvn r3, #0x0
L_0203c8ac:
    add r0, r1, #0x1
    add r2, r4, r1, lsl #0x1
    mov r1, r0, lsl #0x10
    add r0, r2, #0x100
    mov r1, r1, asr #0x10
    strh r3, [r0, #0x48]
    cmp r1, #0x2
    blt L_0203c8ac
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c8d8:
    mvn r2, #0x1
    cmp r8, r2
    beq L_0203c8f0
    mvn r2, #0x4
    cmp r8, r2
    bne L_0203cd48
L_0203c8f0:
    ldrsb r0, [r0, #0xc]
    cmp r6, r0
    beq L_0203cb0c
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x6f
    beq L_0203c910
    cmp r0, #0x0
    bgt L_0203cb0c
L_0203c910:
    cmp r7, #0x0
    ble L_0203c938
    add r2, r4, #0xcd
    mov r1, #0x2
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_0203cda4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c938:
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203c99c
    cmp r0, #0x4
    beq L_0203c9e4
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203ca28
L_0203c99c:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203ca28
L_0203c9e4:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203ca28:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203ca40
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203ca80
L_0203ca40:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203ca80
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203ca64
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203ca80
L_0203ca64:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203ca7c
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203ca80
L_0203ca7c:
    mov r0, #0x0
L_0203ca80:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cae0
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203caac
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cae0
L_0203caac:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203cac8
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cae0
L_0203cac8:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203cae0
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cae0:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0202914c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cb0c:
    cmp r5, #0xd
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrb r0, [r4, #0xc4]
    cmp r0, #0x1
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r9, r6
    bne L_0203cc40
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203cb5c
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cb9c
L_0203cb5c:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cb9c
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203cb80
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cb9c
L_0203cb80:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cb98
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cb9c
L_0203cb98:
    mov r0, #0x0
L_0203cb9c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cbfc
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203cbc8
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cbfc
L_0203cbc8:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203cbe4
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cbfc
L_0203cbe4:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203cbfc
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cbfc:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xc4
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0xd
    strh r0, [r4, #0xf0]
    mov r0, #0x3
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cc40:
    add r1, r4, #0xcd
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203cc64
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cca4
L_0203cc64:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cca4
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203cc88
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cca4
L_0203cc88:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cca0
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cca4
L_0203cca0:
    mov r0, #0x0
L_0203cca4:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cd04
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203ccd0
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cd04
L_0203ccd0:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203ccec
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cd04
L_0203ccec:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203cd04
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cd04:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xbe
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xc4
    add r0, r4, #0x100
    strh r2, [r0, #0x20]
    mov r0, #0xd
    strh r0, [r4, #0xf0]
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cd48:
    cmp r1, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r8, #0x0
    addlt sp, sp, #0xc
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxlt lr
    cmp r8, #0x14
    addge sp, sp, #0xc
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxge lr
    mov r1, r8, lsl #0x10
    mov r0, r4
    add r4, r4, #0xcd
    mov r3, #0x2
    mov r1, r1, asr #0x10
    mov r2, #0x0
    swpb r3, r3, [r4]
    bl func_0203d188
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
