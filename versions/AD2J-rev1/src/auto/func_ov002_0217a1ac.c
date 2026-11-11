#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ffda04();
extern void func_02022da8();
extern void func_02022dd0();
extern void func_02026db8();
extern void func_02026e30();
extern void func_02027044();
extern void func_0202745c();
extern void func_020280ec();
extern void func_020285b0();
extern void func_02029204();
extern void func_0202cd14();
extern void func_0202d2dc();
extern void func_0202ded8();
extern void func_02032690();
extern void func_02033cd8();
extern void func_02033d7c();
extern void func_02035f94();
extern void func_02036fbc();
extern void func_02037b24();
extern void func_02038094();
extern void func_02038edc();
extern void func_020392c8();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_02092f20();
extern void func_02105dc4();
extern void func_02105fac();
extern void func_021060b8();
extern void func_021060d4();
extern void func_0210634c();
extern void func_ov002_0217a988();
extern void func_ov002_021877dc();
extern void func_ov002_0218891c();
extern char data_0214b480[];
extern char data_02150330[];
extern char data_02153720[];
extern char data_ov002_02196320[];
// clang-format off
asm void func_ov002_0217a1ac(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r1, #0x1
    mov r9, r0
    mov r2, r1
    mov r8, #0x0
    bl func_02022da8
    str r0, [sp, #0x8]
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x3
    bl func_02022da8
    mov r7, r0
    mov r1, r8
    mov r0, r9
    str r1, [sp, #0xc]
    bl func_0202ded8
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
    bl func_021060b8
    cmp r0, #0x0
    beq L_0217a258
    ldr r0, =0x4000304
    mov r1, #0x1
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq L_0217a24c
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    moveq r1, #0x0
L_0217a24c:
    cmp r1, #0x0
    movne r0, #0x1
    strne r0, [sp, #0x10]
L_0217a258:
    ldrsb r0, [r9, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    add r0, r9, #0x100
    ldrh r0, [r0, #0xa]
    movls r11, #0x2000
    movhi r11, #0x8000
    cmp r0, #0x1e
    bhs L_0217a2e4
    add r0, r9, #0x26c
    bl func_02105fac
    ldr r0, =data_0214b480
    add r1, r9, #0x3d8
    ldr r0, [r0, #0x0]
    bl func_02092f20
    cmp r0, #0x0
    addeq r1, r9, #0xac
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    beq L_0217a2c8
    ldrsb r2, [r9, #0xa4]
    ldr r0, =data_ov002_02196320
    add r1, r9, #0xac
    ldrsb r0, [r0, r2]
    swpb r0, r0, [r1]
L_0217a2c8:
    mov r0, r9
    bl func_02038edc
    ldr r1, =0x301
    mov r0, r9
    bl func_02036fbc
    str r0, [sp, #0x4]
    b L_0217a394
L_0217a2e4:
    mov r0, r9
    add r1, r9, #0x26c
    add r2, r9, #0x3d8
    bl func_020285b0
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0xb8]
    cmp r0, #0x0
    addne r1, r9, #0xac
    movne r0, #0x0
    swpneb r0, r0, [r1]
    bne L_0217a328
    ldrsb r2, [r9, #0xa4]
    ldr r0, =data_ov002_02196320
    add r1, r9, #0xac
    ldrsb r0, [r0, r2]
    swpb r0, r0, [r1]
L_0217a328:
    cmp r10, #0x0
    beq L_0217a364
    ldr r0, =data_02150330
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
L_0217a364:
    mov r0, r9
    bl func_02038edc
    ldr r1, =0x313
    mov r0, r9
    bl func_02036fbc
    str r0, [sp, #0x4]
    cmp r0, #0x19000
    bge L_0217a394
    mov r0, r9
    bl func_02033d7c
    mov r0, #0x1
    str r0, [sp, #0xc]
L_0217a394:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217a3e0
    bl func_021060d4
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_0217a3e0
    bl func_02044630
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    bne L_0217a3e0
    ldr r0, [sp, #0x4]
    cmp r0, #0x10000
    bge L_0217a3e0
    mov r0, r9
    bl func_02026e30
    mov r8, r0
L_0217a3e0:
    mov r6, #0x0
    mov r4, #0x5
L_0217a3e8:
    mov r0, r9
    mov r1, r6
    bl func_02032690
    cmp r0, #0x0
    beq L_0217a430
    mov r0, r6
    bl func_01ffda04
    movs r5, r0
    beq L_0217a430
    bl func_02035f94
    cmp r0, #0x0
    bne L_0217a430
    mov r0, r5
    mov r1, r4
    bl func_02027044
    mov r0, r5
    add r1, r9, #0x2a0
    bl func_0202745c
L_0217a430:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x3
    blt L_0217a3e8
    cmp r7, #0x0
    bne L_0217a49c
    bl func_021060d4
    mvn r1, #0x0
    cmp r0, r1
    bne L_0217a49c
    bl func_02044630
    mvn r1, #0x0
    cmp r0, r1
    bne L_0217a49c
    ldr r0, [r9, #0x488]
    cmp r0, #0x0
    bne L_0217a49c
    mov r0, #0x1
    str r0, [r9, #0x488]
    bl func_0210634c
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    mov r0, #0x0
    mvn r1, #0x0
    bl func_02105dc4
L_0217a49c:
    cmp r10, #0x0
    bne L_0217a4ac
    mov r0, r9
    bl func_02037b24
L_0217a4ac:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a4c0
    mov r0, r9
    bl func_0202d2dc
L_0217a4c0:
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    bne L_0217a4d4
    cmp r7, #0x0
    beq L_0217a4e0
L_0217a4d4:
    mov r0, r9
    bl func_ov002_0217a988
    b L_0217a4e8
L_0217a4e0:
    mov r0, r9
    bl func_020392c8
L_0217a4e8:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    bne L_0217a568
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    mov r3, #0x1
    bl func_0202cd14
    cmp r0, #0x0
    beq L_0217a568
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a538
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a538:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a568:
    mov r0, r9
    bl func_02026db8
    cmp r0, #0x0
    beq L_0217a65c
    mov r0, r9
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0217a5d8
L_0217a58c:
    b L_0217a59c
    b L_0217a5ac
    b L_0217a5bc
    b L_0217a5cc
L_0217a59c:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e2b8
    b L_0217a5d8
L_0217a5ac:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e2b8
    b L_0217a5d8
L_0217a5bc:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e2b8
    b L_0217a5d8
L_0217a5cc:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e2b8
L_0217a5d8:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a5f0
    mov r0, r9
    bl func_02029204
    b L_0217a60c
L_0217a5f0:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_0217a60c
    mov r0, r9
    bl func_02029204
L_0217a60c:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a62c
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a62c:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a65c:
    cmp r8, #0x0
    beq L_0217a6fc
    cmp r8, #0x1
    beq L_0217a680
    cmp r8, #0x2
    beq L_0217a690
    cmp r8, #0x3
    beq L_0217a6a0
    b L_0217a6ac
L_0217a680:
    mov r0, r9
    mov r1, #0xf5
    bl func_0203e2b8
    b L_0217a6ac
L_0217a690:
    mov r0, r9
    mov r1, #0xfe
    bl func_0203e2b8
    b L_0217a6ac
L_0217a6a0:
    ldr r1, =0x107
    mov r0, r9
    bl func_0203e2b8
L_0217a6ac:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a6cc
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a6cc:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a6fc:
    bl func_021060d4
    mvn r1, #0x0
    cmp r0, r1
    beq L_0217a790
    bl func_02044630
    mvn r1, #0x0
    cmp r0, r1
    beq L_0217a790
    bl func_02044630
    ldrsb r1, [r9, #0x88]
    cmp r1, r0
    beq L_0217a790
    ldr r1, =0x35a
    mov r0, r9
    bl func_0203e2b8
    mov r0, r9
    bl func_02033cd8
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a760
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a760:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a790:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0217a85c
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    bne L_0217a7bc
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    bne L_0217a7bc
    cmp r10, #0x0
    beq L_0217a85c
L_0217a7bc:
    mov r0, r9
    bl func_020280ec
    smull r2, r1, r11, r0
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    cmp r0, r1
    mov r1, #0x0
    bge L_0217a85c
    cmp r7, #0x0
    beq L_0217a800
    mov r0, r9
    bl func_ov002_021877dc
    b L_0217a80c
L_0217a800:
    mov r0, r9
    str r1, [r9, #0x4ac]
    bl func_ov002_0218891c
L_0217a80c:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a82c
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a82c:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a85c:
    add r0, r9, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x258
    addls sp, sp, #0x24
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxls lr
    mov r0, r9
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0217a8d4
L_0217a888:
    b L_0217a898
    b L_0217a8a8
    b L_0217a8b8
    b L_0217a8c8
L_0217a898:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e2b8
    b L_0217a8d4
L_0217a8a8:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e2b8
    b L_0217a8d4
L_0217a8b8:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e2b8
    b L_0217a8d4
L_0217a8c8:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e2b8
L_0217a8d4:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a8ec
    mov r0, r9
    bl func_02029204
    b L_0217a908
L_0217a8ec:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_0217a908
    mov r0, r9
    bl func_02029204
L_0217a908:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217a928
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0217a928:
    mov r0, r9
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r9
    bl func_02029204
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
