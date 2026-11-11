#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02029190();
extern void func_0203d0cc();
extern void func_0203d4b0();
extern void func_020a5d54();
extern char data_02134fa8[];
extern char data_02138ed4[];
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a04c[];
extern char data_0215a064[];
// clang-format off
asm void func_0203b934(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r4, r0
    bl func_020a5d54
    ldr r1, =data_0215a064
    ldrsb r6, [r4, #0x88]
    ldr r2, [r1, #0x0]
    mov r1, #0x1
    mov r0, r0, lsl #0x18
    ldrh r5, [r2, #0x38]
    mov r3, r1, lsl r6
    mov r9, r0, asr #0x18
    ands r0, r5, r3
    ldr r0, =data_0214da84
    ldrsh r7, [r2, #0x3a]
    ldr r0, [r0, #0x0]
    ldr r8, [r2, #0x34]
    ldrsb r3, [r0, #0xd]
    moveq r1, #0x0
    cmp r3, #0x1
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldr r3, =data_0215a04c
    ldr r3, [r3, #0x0]
    ldrh r3, [r3, #0x0]
    cmp r3, #0x12
    addls pc, pc, r3, lsl #0x2
    b L_0203b9f4
L_0203b9a8:
    b L_0203c1d8
    b L_0203bd00
    b L_0203b9f4
    b L_0203bba8
    b L_0203c044
    b L_0203c1d8
    b L_0203b9f4
    b L_0203b9f4
    b L_0203b9f4
    b L_0203ba00
    b L_0203c1d8
    b L_0203c1d8
    b L_0203ba38
    b L_0203b9f4
    b L_0203b9f4
    b L_0203b9f4
    b L_0203b9f4
    b L_0203ba44
    b L_0203c1d8
L_0203b9f4:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203ba00:
    mov r0, r8, lsl #0x10
    movs r0, r0, asr #0x10
    bmi L_0203ba28
    cmp r0, #0x14
    bge L_0203ba28
    mov r2, #0x1
    mov r0, r2, lsl r0
    ldr r1, [r4, #0x940]
    ands r0, r1, r0
    bne L_0203ba2c
L_0203ba28:
    mov r2, #0x0
L_0203ba2c:
    cmp r2, #0x0
    movne r0, #0x0
    strne r0, [r4, #0x488]
L_0203ba38:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203ba44:
    ldr r0, =data_02138ed4
    mov r10, #0x0
    ldr r7, [r0, #0x13c]
    mov r5, r10
    str r10, [sp, #0x0]
    str r10, [sp, #0x4]
    mov r11, r10
    mov r2, #0x2
    mov r3, #0x1
L_0203ba68:
    cmp r10, #0x0
    blt L_0203ba78
    cmp r10, #0x14
    blt L_0203ba80
L_0203ba78:
    mov r9, r5
    b L_0203ba90
L_0203ba80:
    ldr r1, [r4, #0x9e8]
    mov r0, #0x3c
    add r1, r1, #0x90
    smlabb r9, r10, r0, r1
L_0203ba90:
    cmp r9, #0x0
    moveq r0, r11
    beq L_0203bb08
    ldrh r1, [r9, #0x0]
    cmp r1, #0x0
    ldreq r0, [sp, #0x4]
    beq L_0203bb08
    ldrh r6, [r9, #0x2]
    cmp r6, #0x0
    ldreq r0, [sp, #0x0]
    beq L_0203bb08
    cmp r1, #0x4f
    blo L_0203bad0
    cmp r1, #0x63
    movlo r0, r7
    blo L_0203bad8
L_0203bad0:
    ldr r0, =data_02138ed4
    ldr r0, [r0, r1, lsl #0x2]
L_0203bad8:
    ldrb r0, [r0, #0x2]
    mov r1, #0x5
    ldr ip, [r4, #0x9e8]
    sub lr, r0, #0x1
    ldr r0, =data_02134fa8
    mla r0, lr, r1, r0
    ldrb r1, [ip, #0x13]
    sub r1, r1, #0x1
    ldrb r0, [r1, r0]
    cmp r6, r0
    movlt r0, r3
    movge r0, r2
L_0203bb08:
    cmp r0, #0x2
    bne L_0203bb20
    ldrh r0, [r9, #0x0]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_0203bb38
L_0203bb20:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x14
    blt L_0203ba68
    mov r0, #0x0
L_0203bb38:
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
    add r4, r4, #0xaa
    mov r3, #0x2
    mov r1, r8, lsl #0x10
    swpb r3, r3, [r4]
    mov r1, r1, asr #0x10
    mov r2, #0x0
    bl func_0203d4b0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bba8:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203bbc8
    mvn r0, #0x4
    cmp r8, r0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203bbc8:
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x4dd
    cmp r1, r0
    blt L_0203bbe8
    ldr r0, =0x4ee
    cmp r1, r0
    movle r0, #0x1
    ble L_0203bbec
L_0203bbe8:
    mov r0, #0x0
L_0203bbec:
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203bc20
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203bc60
L_0203bc20:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203bc60
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203bc44
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203bc60
L_0203bc44:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203bc5c
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203bc60
L_0203bc5c:
    mov r0, #0x0
L_0203bc60:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203bcc0
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203bc8c
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bcc0
L_0203bc8c:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203bca8
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bcc0
L_0203bca8:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203bcc0
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203bcc0:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xa5
    add r0, r4, #0x100
    strh r2, [r0, #0x12]
    mov r0, #0x9
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bd00:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203bd54
    mvn r0, #0x4
    cmp r8, r0
    beq L_0203bd54
    mov r0, r8, lsl #0x10
    movs r0, r0, asr #0x10
    bmi L_0203bd40
    cmp r0, #0x14
    bge L_0203bd40
    mov r3, #0x1
    mov r0, r3, lsl r0
    ldr r1, [r4, #0x940]
    ands r0, r1, r0
    bne L_0203bd44
L_0203bd40:
    mov r3, #0x0
L_0203bd44:
    cmp r3, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0203bd54:
    ldrsh r3, [r2, #0x7a]
    mov r0, #0x0
    cmp r3, #0x0
    blt L_0203bd78
    ldr r1, =data_021555f8
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r3
    bgt L_0203bd80
L_0203bd78:
    mov r2, #0x0
    b L_0203bd88
L_0203bd80:
    add r1, r2, r3, lsl #0x2
    ldr r2, [r1, #0x4]
L_0203bd88:
    cmp r2, #0x0
    beq L_0203bdbc
    ldrsh r1, [r2, #0x90]
    sub r1, r1, #0x4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    cmp r1, #0x1
    bhi L_0203bdbc
    ldrsh r1, [r2, #0x98]
    cmp r6, r1
    moveq r0, #0x1
L_0203bdbc:
    ldrsh r2, [r4, #0xea]
    ldr r1, =0x35e
    cmp r2, r1
    blt L_0203bee0
    ldr r1, =0x3af
    cmp r2, r1
    bgt L_0203bee0
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203bdfc
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203be3c
L_0203bdfc:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203be3c
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203be20
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203be3c
L_0203be20:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203be38
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203be3c
L_0203be38:
    mov r0, #0x0
L_0203be3c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203be9c
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203be68
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203be9c
L_0203be68:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203be84
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203be9c
L_0203be84:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203be9c
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203be9c:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xa8
    mov r2, #0x1
    swpb r0, r2, [r1]
    mov r1, #0x0
    add r0, r4, #0x100
    strh r1, [r0, #0x12]
    mov r0, #0x4b
    add r1, r4, #0xa5
    strh r0, [r4, #0xf0]
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203bee0:
    cmp r0, #0x0
    beq L_0203c010
    mov r0, r8, lsl #0x10
    movs r0, r0, asr #0x10
    mov r2, #0x0
    bmi L_0203bf14
    cmp r0, #0x14
    bge L_0203bf14
    mov r3, #0x1
    mov r0, r3, lsl r0
    ldr r1, [r4, #0x940]
    ands r0, r1, r0
    bne L_0203bf18
L_0203bf14:
    mov r3, #0x0
L_0203bf18:
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    cmp r3, #0x0
    ldrsh r3, [r4, #0xf0]
    movne r2, #0x1
    cmp r3, #0x4
    blt L_0203bf44
    cmp r3, #0x8
    movle r0, #0x1
    ble L_0203bf84
L_0203bf44:
    cmp r3, #0x57
    moveq r0, #0x1
    beq L_0203bf84
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203bf68
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203bf84
L_0203bf68:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203bf80
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203bf84
L_0203bf80:
    mov r0, #0x0
L_0203bf84:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203bfe4
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203bfb0
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bfe4
L_0203bfb0:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203bfcc
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203bfe4
L_0203bfcc:
    cmp r3, #0x53
    moveq r0, #0x0
    beq L_0203bfe4
    cmp r3, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203bfe4:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x3
    mov r3, #0x0
    bl func_02029190
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c010:
    mov r1, #0x0
    mvn r3, #0x0
L_0203c018:
    add r0, r1, #0x1
    add r2, r4, r1, lsl #0x1
    mov r1, r0, lsl #0x10
    add r0, r2, #0x100
    mov r1, r1, asr #0x10
    strh r3, [r0, #0x40]
    cmp r1, #0x2
    blt L_0203c018
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c044:
    mvn r0, #0x0
    cmp r8, r0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_0214da80
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r9, r0
    beq L_0203c088
    cmp r9, r6
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203c088:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203c0a0
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203c0e0
L_0203c0a0:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203c0e0
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203c0c4
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c0e0
L_0203c0c4:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c0dc
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c0e0
L_0203c0dc:
    mov r0, #0x0
L_0203c0e0:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c140
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203c10c
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c140
L_0203c10c:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203c128
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c140
L_0203c128:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203c140
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c140:
    cmp r0, #0x0
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
    mov r0, r8, lsl #0x10
    movs r0, r0, asr #0x10
    bmi L_0203c198
    cmp r0, #0x14
    bge L_0203c198
    mov r2, #0x1
    mov r0, r2, lsl r0
    ldr r1, [r4, #0x940]
    ands r0, r1, r0
    bne L_0203c19c
L_0203c198:
    mov r2, #0x0
L_0203c19c:
    cmp r2, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r0, r4
    add r4, r4, #0xaa
    mov r3, #0x2
    mov r1, r8, lsl #0x10
    swpb r3, r3, [r4]
    mov r1, r1, asr #0x10
    mov r2, #0x0
    bl func_0203d4b0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c1d8:
    mvn r3, #0x0
    cmp r8, r3
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r5, =data_0214da80
    ldr r5, [r5, #0x0]
    cmp r5, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r9, r3
    beq L_0203c21c
    cmp r9, r6
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0203c21c:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203c234
    cmp r5, #0x8
    movle r3, #0x1
    ble L_0203c274
L_0203c234:
    cmp r5, #0x57
    moveq r3, #0x1
    beq L_0203c274
    ldrsh r10, [r4, #0xea]
    cmp r10, #0xf
    blt L_0203c258
    cmp r10, #0x4b
    movle r3, #0x1
    ble L_0203c274
L_0203c258:
    ldr r3, =0x119
    cmp r10, r3
    blt L_0203c270
    cmp r10, #0x13c
    movle r3, #0x1
    ble L_0203c274
L_0203c270:
    mov r3, #0x0
L_0203c274:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_0203c2d4
    ldrsh r3, [r4, #0xea]
    ldr r10, =0x478
    cmp r3, r10
    blt L_0203c2a0
    ldr r10, =0x47e
    cmp r3, r10
    movle r3, #0x0
    ble L_0203c2d4
L_0203c2a0:
    ldr r10, =0x4c7
    cmp r3, r10
    blt L_0203c2bc
    ldr r10, =0x4ca
    cmp r3, r10
    movle r3, #0x0
    ble L_0203c2d4
L_0203c2bc:
    cmp r5, #0x53
    moveq r3, #0x0
    beq L_0203c2d4
    cmp r5, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_0203c2d4:
    cmp r3, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsb r3, [r0, #0x4]
    cmp r3, #0x2
    bne L_0203cbfc
    ldrsh r10, [r2, #0x7a]
    mov r7, #0x0
    mov r5, r7
    mov r3, r7
    mov r2, r7
    cmp r10, #0x0
    blt L_0203c320
    ldr r0, =data_021555f8
    ldr r9, [r0, #0x0]
    ldrsh r0, [r9, #0x20]
    cmp r0, r10
    bgt L_0203c328
L_0203c320:
    mov r0, #0x0
    b L_0203c330
L_0203c328:
    add r0, r9, r10, lsl #0x2
    ldr r0, [r0, #0x4]
L_0203c330:
    cmp r0, #0x0
    beq L_0203c374
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
    bhi L_0203c374
    ldrsh r0, [r0, #0x98]
    mov r7, #0x1
    cmp r6, r0
    moveq r5, r7
L_0203c374:
    mov r0, r8, lsl #0x10
    movs r0, r0, asr #0x10
    bmi L_0203c39c
    cmp r0, #0x14
    bge L_0203c39c
    mov r9, #0x1
    mov r0, r9, lsl r0
    ldr r6, [r4, #0x940]
    ands r0, r6, r0
    bne L_0203c3a0
L_0203c39c:
    mov r9, #0x0
L_0203c3a0:
    cmp r9, #0x0
    beq L_0203c3b0
    cmp r1, #0x0
    movne r2, #0x1
L_0203c3b0:
    mvn r0, #0x1
    cmp r8, r0
    beq L_0203c3d8
    mvn r0, #0x4
    cmp r8, r0
    beq L_0203c3d8
    cmp r2, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0203c3d8:
    cmp r5, #0x0
    beq L_0203c638
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldrsh r1, [r4, #0xf0]
    mov r6, r0
    cmp r1, #0x4b
    beq L_0203c434
    ldrsh r3, [r4, #0xea]
    ldr r1, =0x3b9
    cmp r3, r1
    beq L_0203c434
    ldr r1, =0x3ba
    mov r5, #0x0
    cmp r3, r1
    blt L_0203c42c
    ldr r1, =0x3bf
    cmp r3, r1
    movle r5, r0
L_0203c42c:
    cmp r5, #0x0
    moveq r6, #0x0
L_0203c434:
    cmp r6, #0x0
    bne L_0203c464
    ldrsh r3, [r4, #0xea]
    ldr r1, =0x413
    mov r5, #0x0
    cmp r3, r1
    blt L_0203c45c
    ldr r1, =0x41c
    cmp r3, r1
    movle r5, #0x1
L_0203c45c:
    cmp r5, #0x0
    moveq r0, #0x0
L_0203c464:
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203c4cc
    cmp r0, #0x4
    beq L_0203c514
    ldr r0, =data_0214da84
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
    b L_0203c558
L_0203c4cc:
    ldr r0, =data_0214da84
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
    b L_0203c558
L_0203c514:
    ldr r0, =data_0214da84
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
L_0203c558:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203c570
    cmp r5, #0x8
    movle r0, #0x1
    ble L_0203c5b0
L_0203c570:
    cmp r5, #0x57
    moveq r0, #0x1
    beq L_0203c5b0
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203c594
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c5b0
L_0203c594:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c5ac
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c5b0
L_0203c5ac:
    mov r0, #0x0
L_0203c5b0:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c610
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203c5dc
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c610
L_0203c5dc:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203c5f8
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c610
L_0203c5f8:
    cmp r5, #0x53
    moveq r0, #0x0
    beq L_0203c610
    cmp r5, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c610:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x3
    bl func_02029190
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c638:
    cmp r7, #0x0
    beq L_0203c878
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203c6a4
    cmp r0, #0x4
    beq L_0203c750
    ldr r0, =data_0214da84
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
    b L_0203c794
L_0203c6a4:
    ldr r0, =data_0214da84
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
    b L_0203c794
L_0203c750:
    ldr r0, =data_0214da84
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
L_0203c794:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203c7ac
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203c7ec
L_0203c7ac:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203c7ec
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203c7d0
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203c7ec
L_0203c7d0:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203c7e8
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203c7ec
L_0203c7e8:
    mov r0, #0x0
L_0203c7ec:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203c84c
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203c818
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c84c
L_0203c818:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203c834
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203c84c
L_0203c834:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203c84c
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203c84c:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_02029190
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203c878:
    cmp r3, #0x0
    bne L_0203c9ac
    ldrsb r1, [r4, #0x8b]
    cmp r1, #0x5
    movne r0, #0x0
    bne L_0203c910
    ldrsh r3, [r4, #0xea]
    cmp r3, #0x1
    blt L_0203c8a8
    cmp r3, #0xc
    movle r0, #0x1
    ble L_0203c8b8
L_0203c8a8:
    ldr r0, =0x261
    cmp r3, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c8b8:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c910
    cmp r3, #0x318
    blt L_0203c90c
    ldr r0, =0x33b
    cmp r3, r0
    bgt L_0203c90c
    ldrsh r3, [r4, #0xee]
    cmp r3, #0x1
    blt L_0203c8f0
    cmp r3, #0xc
    movle r0, #0x1
    ble L_0203c900
L_0203c8f0:
    ldr r0, =0x261
    cmp r3, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c900:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c910
L_0203c90c:
    mov r0, #0x0
L_0203c910:
    cmp r0, #0x0
    bne L_0203c9ac
    cmp r1, #0x4
    movne r0, #0x0
    bne L_0203c9a4
    ldrsh r1, [r4, #0xea]
    cmp r1, #0x1
    blt L_0203c93c
    cmp r1, #0xc
    movle r0, #0x1
    ble L_0203c94c
L_0203c93c:
    ldr r0, =0x262
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c94c:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c9a4
    cmp r1, #0x318
    blt L_0203c9a0
    ldr r0, =0x33b
    cmp r1, r0
    bgt L_0203c9a0
    ldrsh r1, [r4, #0xee]
    cmp r1, #0x1
    blt L_0203c984
    cmp r1, #0xc
    movle r0, #0x1
    ble L_0203c994
L_0203c984:
    ldr r0, =0x262
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
L_0203c994:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203c9a4
L_0203c9a0:
    mov r0, #0x0
L_0203c9a4:
    cmp r0, #0x0
    beq L_0203cbc8
L_0203c9ac:
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r5, #0x1
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x4b
    beq L_0203c9f4
    ldrsh r1, [r4, #0xea]
    cmp r1, #0x3b8
    beq L_0203c9f4
    cmp r1, #0x3c0
    mov r3, #0x0
    blt L_0203c9ec
    ldr r0, =0x412
    cmp r1, r0
    movle r3, r5
L_0203c9ec:
    cmp r3, #0x0
    moveq r5, #0x0
L_0203c9f4:
    cmp r5, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203ca5c
    cmp r0, #0x4
    beq L_0203caa4
    ldr r0, =data_0214da84
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
    b L_0203cae8
L_0203ca5c:
    ldr r0, =data_0214da84
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
    b L_0203cae8
L_0203caa4:
    ldr r0, =data_0214da84
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
L_0203cae8:
    ldrsh r5, [r4, #0xf0]
    cmp r5, #0x4
    blt L_0203cb00
    cmp r5, #0x8
    movle r0, #0x1
    ble L_0203cb40
L_0203cb00:
    cmp r5, #0x57
    moveq r0, #0x1
    beq L_0203cb40
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203cb24
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cb40
L_0203cb24:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cb3c
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cb40
L_0203cb3c:
    mov r0, #0x0
L_0203cb40:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cba0
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203cb6c
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cba0
L_0203cb6c:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203cb88
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cba0
L_0203cb88:
    cmp r5, #0x53
    moveq r0, #0x0
    beq L_0203cba0
    cmp r5, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cba0:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x2
    bl func_02029190
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cbc8:
    mov r1, #0x0
    mvn r3, #0x0
L_0203cbd0:
    add r0, r1, #0x1
    add r2, r4, r1, lsl #0x1
    mov r1, r0, lsl #0x10
    add r0, r2, #0x100
    mov r1, r1, asr #0x10
    strh r3, [r0, #0x40]
    cmp r1, #0x2
    blt L_0203cbd0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cbfc:
    mvn r2, #0x1
    cmp r8, r2
    beq L_0203cc14
    mvn r2, #0x4
    cmp r8, r2
    bne L_0203d06c
L_0203cc14:
    ldrsb r0, [r0, #0x7]
    cmp r6, r0
    beq L_0203ce30
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x6f
    beq L_0203cc34
    cmp r0, #0x0
    bgt L_0203ce30
L_0203cc34:
    cmp r7, #0x0
    ble L_0203cc5c
    add r2, r4, #0xaa
    mov r1, #0x2
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_0203d0cc
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cc5c:
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0x8d]
    cmp r0, #0x3
    beq L_0203ccc0
    cmp r0, #0x4
    beq L_0203cd08
    ldr r0, =data_0214da84
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
    b L_0203cd4c
L_0203ccc0:
    ldr r0, =data_0214da84
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
    b L_0203cd4c
L_0203cd08:
    ldr r0, =data_0214da84
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
L_0203cd4c:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203cd64
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cda4
L_0203cd64:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cda4
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203cd88
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cda4
L_0203cd88:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cda0
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cda4
L_0203cda0:
    mov r0, #0x0
L_0203cda4:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203ce04
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203cdd0
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203ce04
L_0203cdd0:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203cdec
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203ce04
L_0203cdec:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203ce04
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203ce04:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_02029190
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203ce30:
    cmp r5, #0xd
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    ldrb r0, [r4, #0xa5]
    cmp r0, #0x1
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r9, r6
    bne L_0203cf64
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203ce80
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cec0
L_0203ce80:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cec0
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203cea4
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cec0
L_0203cea4:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cebc
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cec0
L_0203cebc:
    mov r0, #0x0
L_0203cec0:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cf20
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203ceec
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cf20
L_0203ceec:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203cf08
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cf20
L_0203cf08:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203cf20
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cf20:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xa5
    add r0, r4, #0x100
    strh r2, [r0, #0x12]
    mov r0, #0xd
    strh r0, [r4, #0xf0]
    mov r0, #0x3
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203cf64:
    add r1, r4, #0xaa
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203cf88
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cfc8
L_0203cf88:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cfc8
    ldrsh r1, [r4, #0xea]
    cmp r1, #0xf
    blt L_0203cfac
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cfc8
L_0203cfac:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cfc4
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cfc8
L_0203cfc4:
    mov r0, #0x0
L_0203cfc8:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203d028
    ldrsh r1, [r4, #0xea]
    ldr r0, =0x478
    cmp r1, r0
    blt L_0203cff4
    ldr r0, =0x47e
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d028
L_0203cff4:
    ldr r0, =0x4c7
    cmp r1, r0
    blt L_0203d010
    ldr r0, =0x4ca
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d028
L_0203d010:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203d028
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203d028:
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xa5
    add r0, r4, #0x100
    strh r2, [r0, #0x12]
    mov r0, #0xd
    strh r0, [r4, #0xf0]
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0203d06c:
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
    add r4, r4, #0xaa
    mov r3, #0x2
    mov r1, r1, asr #0x10
    mov r2, #0x0
    swpb r3, r3, [r4]
    bl func_0203d4b0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
