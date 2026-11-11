#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02069098();
extern char data_ov004_02163cc0[];
// clang-format off
asm void func_ov004_0215cae0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    cmp r2, #0xcd
    mov r5, r0
    mov r4, r1
    ldrlt r2, =0x3e32
    blt L_0215efe8
    ldr r0, =0x99a
    cmp r2, r0
    ldrge r2, =0x7fff
    bge L_0215efe8
    ldr r1, =0x8cd
    sub r0, r2, #0xcd
    bl func_02069098
    mov r1, #0xd000
    mov r2, #0xe000
    mov r3, #0x0
    umull r7, r6, r0, r1
    umull lr, ip, r0, r2
    mla r6, r0, r3, r6
    mov r8, r0, asr #0x1f
    mla ip, r0, r3, ip
    mla r6, r8, r1, r6
    mov r3, r8, lsl #0x10
    orr r3, r3, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, #0x800
    mla ip, r8, r2, ip
    adds r2, r0, r1
    adc r0, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    adds r7, r7, r1
    mov r0, r2, asr #0xc
    adc r3, r6, #0x0
    adds r2, lr, r1
    mov r1, r7, lsr #0xc
    orr r1, r1, r3, lsl #0x14
    mov r1, r1, asr #0xc
    add r3, r1, #0x12
    add r0, r0, #0xf
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    mov r1, r2, asr #0xc
    add r1, r1, #0x11
    and r2, r3, #0xff
    and r1, r1, #0xff
    and r0, r0, #0xff
    orr r1, r2, r1, lsl #0x5
    orr r0, r1, r0, lsl #0xa
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
L_0215efe8:
    ldr r0, =data_ov004_02163cc0
    cmp r5, #0x5
    ldr r1, [r0, #0x0]
    add r1, r1, r5, lsl #0x1
    strh r2, [r1, #0x64]
    addls pc, pc, r5, lsl #0x2
    b L_0215f61c
L_0215f004:
    b L_0215f01c
    b L_0215f1bc
    b L_0215f24c
    b L_0215f2dc
    b L_0215f3f4
    b L_0215f50c
L_0215f01c:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    beq L_0215f0a0
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f08c
    mov r1, #0x6000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0x19
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f08c:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f0a0:
    ldr r0, =data_ov004_02163cc0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x18]
    cmp r0, #0x0
    beq L_0215f128
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f114
    mov r1, #0x41000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0x64
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f114:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f128:
    ldr r0, =data_ov004_02163cc0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f1a0
    mov r1, #0x66000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f1a0:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215f1bc:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x10]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f230
    mov r1, #0x6000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0x19
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f230:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215f24c:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f2c0
    mov r1, #0x8000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0x19
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f2c0:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215f2dc:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x28]
    cmp r0, #0x0
    beq L_0215f360
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f34c
    mov r1, #0x66000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f34c:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f360:
    ldr r0, =data_ov004_02163cc0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x2c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f3d8
    mov r1, #0x5c000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f3d8:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215f3f4:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x30]
    cmp r0, #0x0
    beq L_0215f478
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f464
    mov r1, #0x5e000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f464:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f478:
    ldr r0, =data_ov004_02163cc0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x34]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f4f0
    mov r1, #0x57000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f4f0:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215f50c:
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    cmp r0, #0x0
    beq L_0215f590
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f57c
    mov r1, #0x39000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xa7
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f57c:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f590:
    ldr r0, =data_ov004_02163cc0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r4, #0x0
    ldreq r1, [r0, #0x1c]
    orreq r1, r1, #0x2
    streq r1, [r0, #0x1c]
    beq L_0215f608
    mov r1, #0xa000
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r4, r1
    mla ip, r4, r2, ip
    mov r3, r4, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    ldr r3, [r0, #0x1c]
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    bic r3, r3, #0x2
    mov r1, r2, asr #0xc
    str r3, [r0, #0x1c]
    add r1, r1, #0xff
    add r2, r0, #0x5c
    swpb r1, r1, [r2]
L_0215f608:
    ldr r1, =data_ov004_02163cc0
    ldr r1, [r1, #0x0]
    add r1, r1, r5, lsl #0x1
    ldrh r1, [r1, #0x64]
    strh r1, [r0, #0x5a]
L_0215f61c:
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
