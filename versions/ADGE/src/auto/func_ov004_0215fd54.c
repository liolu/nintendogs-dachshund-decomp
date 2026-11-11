#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206a1a0();
extern void func_ov004_02160654();
extern char data_ov004_0216dddc[];
extern char data_ov004_0216e164[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215fd54(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x7c
    mov r10, r0
    mov r9, r1
    mov r1, #0x0
    ldr r4, =data_ov004_0216e3c0
    ldr r0, =data_ov004_0216dddc
    mov r3, #0xa
L_0215fd74:
    mov r5, r1, lsl #0x1
    add r2, r0, r1, lsl #0x1
    ldrsb r5, [r0, r5]
    ldrsb r2, [r2, #0x1]
    adds r5, r10, r5
    add r2, r9, r2
    bmi L_0215fe30
    cmp r5, #0x40
    bge L_0215fe30
    cmp r2, #0x0
    blt L_0215fe30
    cmp r2, #0x30
    bge L_0215fe30
    and r5, r5, #0xff
    cmp r5, #0x20
    bhs L_0215fdd8
    and r2, r2, #0xff
    cmp r2, #0x20
    addlo r2, r5, r2, lsl #0x5
    movlo r2, r2, lsl #0x1
    subhs r2, r2, #0x20
    addhs r2, r5, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1000
    b L_0215fe04
L_0215fdd8:
    and r6, r2, #0xff
    cmp r6, #0x20
    sublo r2, r5, #0x20
    addlo r2, r2, r6, lsl #0x5
    movlo r2, r2, lsl #0x1
    addlo r2, r2, #0x800
    subhs r5, r5, #0x20
    subhs r2, r6, #0x20
    addhs r2, r5, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1800
L_0215fe04:
    ldr r7, [r4, #0x0]
    mov r5, r2, asr #0x1
    add r2, r7, #0x3000
    ldr r6, [r2, #0x6c4]
    ldr r2, [r6, #0x8]
    add r6, r6, r5, lsl #0x1
    mla r5, r2, r3, r7
    add r2, r6, #0x200
    ldrh r6, [r2, #0x64]
    add r2, r5, r1, lsl #0x1
    strh r6, [r2, #0x28]
L_0215fe30:
    add r1, r1, #0x1
    cmp r1, #0x5
    blt L_0215fd74
    ldr r0, =data_ov004_0216e3c0
    sub r5, r9, #0x20
    ldr r0, [r0, #0x0]
    sub r2, r10, #0x20
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r3, r2, r9, lsl #0x5
    ldr r0, [r1, #0x8]
    add r4, r10, r5, lsl #0x5
    add r0, r1, r0, lsl #0x1
    add r1, r0, #0xc
    swpb r0, r10, [r1]
    add r2, r2, r5, lsl #0x5
    ldr r0, =data_ov004_0216e3c0
    add r5, r10, r9, lsl #0x5
    ldr r0, [r0, #0x0]
    mov r3, r3, lsl #0x1
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    mov r4, r4, lsl #0x1
    ldr r0, [r1, #0x8]
    mov r6, r5, lsl #0x1
    add r0, r1, r0, lsl #0x1
    add r1, r0, #0xd
    swpb r0, r9, [r1]
    add r5, r4, #0x1000
    mov r0, r2, lsl #0x1
    add r0, r0, #0x1800
    str r0, [sp, #0x0]
    mov r0, #0x5
    add r11, r3, #0x800
    mvn r8, #0x0
    mov r4, #0x1
    str r0, [sp, #0x4]
L_0215fec4:
    cmp r10, #0x20
    bhs L_0215fedc
    cmp r9, #0x20
    movlo r7, r6
    movhs r7, r5
    b L_0215fee8
L_0215fedc:
    cmp r9, #0x20
    movlo r7, r11
    ldrhs r7, [sp, #0x0]
L_0215fee8:
    bl func_0206a1a0
    ldr r1, =data_ov004_0216e3c0
    ldrh r3, [r0, r7]
    ldr r1, [r1, #0x0]
    add r0, r1, r4, lsl #0x1
    add r0, r0, #0xf00
    ldrh r2, [r0, #0x7a]
    ldr r0, =0x3ff
    and r1, r3, r0
    and r0, r2, r0
    cmp r0, r1
    moveq r0, r4, lsl #0x18
    ldreq r4, [sp, #0x4]
    moveq r8, r0, asr #0x18
    add r4, r4, #0x1
    cmp r4, #0x5
    blt L_0215fec4
    mvn r0, #0x0
    cmp r8, r0
    beq L_0215ffc4
    mov r0, r10, lsl #0x18
    mov r1, r9, lsl #0x18
    mov r4, r0, asr #0x18
    mov r3, r1, asr #0x18
    mov r2, #0x0
    ldr r11, =data_ov004_0216e3c0
    mov ip, #0x5
    ldr lr, =0x2da
    ldr r5, =0x2db
L_0215ff5c:
    mov r0, #0x3
    mul r1, r2, r0
    ldr r0, [r11, #0x0]
    mvn r7, #0x0
    add r0, r0, r1
    add r6, r0, #0x1200
    ldrsb r6, [r6, #0xdc]
    cmp r6, r7
    bne L_0215ffb8
    add r0, r0, #0x1000
    add r2, r0, lr
    swpb r0, r4, [r2]
    mov r2, ip
    ldr r0, [r11, #0x0]
    add r0, r0, r1
    add r0, r0, #0x1000
    add r6, r0, r5
    swpb r0, r3, [r6]
    ldr r0, [r11, #0x0]
    add r0, r0, r1
    add r0, r0, #0x1000
    add r1, r0, #0x2dc
    swpb r0, r8, [r1]
L_0215ffb8:
    add r2, r2, #0x1
    cmp r2, #0x5
    blt L_0215ff5c
L_0215ffc4:
    mov r0, r10
    mov r1, r9
    mov r2, #0x1
    bl func_ov004_02160654
    ldr r0, =data_ov004_0216e3c0
    ldr r4, =data_ov004_0216e164
    ldr r0, [r0, #0x0]
    add r3, sp, #0x8
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    mov r2, #0x3a
    ldr r0, [r1, #0x8]
    add r0, r0, #0x1
    str r0, [r1, #0x8]
L_0215fffc:
    ldrb r0, [r4], #0x1
    ldrb r1, [r4], #0x1
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0215fffc
    ldr r0, =data_ov004_0216e3c0
    sub r7, r10, #0x1
    ldr r1, [r0, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrb r5, [r1, #0x1c]
    ldr r2, [r0, #0x8]
    ldrb r4, [r1, #0x1d]
    cmp r2, #0x2
    addge r2, r0, r2, lsl #0x1
    ldrgeb r5, [r2, #0x8]
    ldrgeb r4, [r2, #0x9]
    cmp r5, r7
    bne L_021601b4
    sub r6, r9, #0x1
    cmp r4, r6
    bne L_021601b4
    and r3, r7, #0xff
    cmp r3, #0x20
    bhs L_0216008c
    cmp r9, #0x20
    addlo r2, r3, r9, lsl #0x5
    movlo r2, r2, lsl #0x1
    subhs r2, r9, #0x20
    addhs r2, r3, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1000
    b L_021600b4
L_0216008c:
    cmp r9, #0x20
    sublo r2, r3, #0x20
    addlo r2, r2, r9, lsl #0x5
    movlo r2, r2, lsl #0x1
    addlo r2, r2, #0x800
    subhs r3, r3, #0x20
    subhs r2, r9, #0x20
    addhs r2, r3, r2, lsl #0x5
    movhs r2, r2, lsl #0x1
    addhs r2, r2, #0x1800
L_021600b4:
    mov r2, r2, asr #0x1
    add r0, r0, r2, lsl #0x1
    add r0, r0, #0x200
    ldrh r3, [r0, #0x64]
    mov r2, #0x0
L_021600c8:
    add r0, r1, r2, lsl #0x1
    add r0, r0, #0xb00
    ldrh r0, [r0, #0xe0]
    cmp r3, r0
    beq L_021600ec
    add r2, r2, #0x1
    cmp r2, #0x1d
    blt L_021600c8
    mov r2, #0x0
L_021600ec:
    add r0, sp, #0x5f
    ldrb r2, [r0, r2]
    mov r1, r9
    and r0, r7, #0xff
    bl func_ov004_02160654
    cmp r10, #0x20
    bhs L_0216012c
    and r0, r6, #0xff
    cmp r0, #0x20
    addlo r0, r10, r0, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r0, #0x20
    addhs r0, r10, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_02160158
L_0216012c:
    and r2, r6, #0xff
    cmp r2, #0x20
    sublo r0, r10, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r10, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_02160158:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    add r2, r0, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r3, lsl #0x1
    add r2, r2, #0x200
    ldrh r3, [r2, #0x64]
L_0216017c:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xb00
    ldrh r2, [r2, #0xe0]
    cmp r3, r2
    beq L_021601a0
    add r1, r1, #0x1
    cmp r1, #0x1d
    blt L_0216017c
    mov r1, #0x0
L_021601a0:
    add r2, sp, #0x8
    ldrb r2, [r2, r1]
    mov r0, r10
    and r1, r6, #0xff
    bl func_ov004_02160654
L_021601b4:
    cmp r5, r7
    bne L_0216032c
    add r6, r9, #0x1
    cmp r4, r6
    bne L_0216032c
    and r1, r7, #0xff
    cmp r1, #0x20
    bhs L_021601f4
    cmp r9, #0x20
    addlo r0, r1, r9, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_0216021c
L_021601f4:
    cmp r9, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r9, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_0216021c:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x0
    add r1, r0, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, r3, lsl #0x1
    add r1, r1, #0x200
    ldrh r3, [r1, #0x64]
L_02160240:
    add r1, r0, r2, lsl #0x1
    add r1, r1, #0xb00
    ldrh r1, [r1, #0xe0]
    cmp r3, r1
    beq L_02160264
    add r2, r2, #0x1
    cmp r2, #0x1d
    blt L_02160240
    mov r2, #0x0
L_02160264:
    add r0, sp, #0x25
    ldrb r2, [r0, r2]
    mov r1, r9
    and r0, r7, #0xff
    bl func_ov004_02160654
    cmp r10, #0x20
    bhs L_021602a4
    and r0, r6, #0xff
    cmp r0, #0x20
    addlo r0, r10, r0, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r0, #0x20
    addhs r0, r10, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_021602d0
L_021602a4:
    and r2, r6, #0xff
    cmp r2, #0x20
    sublo r0, r10, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r10, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_021602d0:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    add r2, r0, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r3, lsl #0x1
    add r2, r2, #0x200
    ldrh r3, [r2, #0x64]
L_021602f4:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xb00
    ldrh r2, [r2, #0xe0]
    cmp r3, r2
    beq L_02160318
    add r1, r1, #0x1
    cmp r1, #0x1d
    blt L_021602f4
    mov r1, #0x0
L_02160318:
    add r2, sp, #0x42
    ldrb r2, [r2, r1]
    mov r0, r10
    and r1, r6, #0xff
    bl func_ov004_02160654
L_0216032c:
    add r7, r10, #0x1
    cmp r5, r7
    bne L_021604a8
    sub r6, r9, #0x1
    cmp r4, r6
    bne L_021604a8
    and r1, r7, #0xff
    cmp r1, #0x20
    bhs L_02160370
    cmp r9, #0x20
    addlo r0, r1, r9, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_02160398
L_02160370:
    cmp r9, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r9, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_02160398:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x0
    add r1, r0, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, r3, lsl #0x1
    add r1, r1, #0x200
    ldrh r3, [r1, #0x64]
L_021603bc:
    add r1, r0, r2, lsl #0x1
    add r1, r1, #0xb00
    ldrh r1, [r1, #0xe0]
    cmp r3, r1
    beq L_021603e0
    add r2, r2, #0x1
    cmp r2, #0x1d
    blt L_021603bc
    mov r2, #0x0
L_021603e0:
    add r0, sp, #0x42
    ldrb r2, [r0, r2]
    mov r1, r9
    and r0, r7, #0xff
    bl func_ov004_02160654
    cmp r10, #0x20
    bhs L_02160420
    and r0, r6, #0xff
    cmp r0, #0x20
    addlo r0, r10, r0, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r0, #0x20
    addhs r0, r10, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_0216044c
L_02160420:
    and r2, r6, #0xff
    cmp r2, #0x20
    sublo r0, r10, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r10, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_0216044c:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    add r2, r0, #0x3000
    ldr r2, [r2, #0x6c4]
    add r2, r2, r3, lsl #0x1
    add r2, r2, #0x200
    ldrh r3, [r2, #0x64]
L_02160470:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xb00
    ldrh r2, [r2, #0xe0]
    cmp r3, r2
    beq L_02160494
    add r1, r1, #0x1
    cmp r1, #0x1d
    blt L_02160470
    mov r1, #0x0
L_02160494:
    add r2, sp, #0x25
    ldrb r2, [r2, r1]
    mov r0, r10
    and r1, r6, #0xff
    bl func_ov004_02160654
L_021604a8:
    cmp r5, r7
    addne sp, sp, #0x7c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    add r5, r9, #0x1
    cmp r4, r5
    addne sp, sp, #0x7c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    and r1, r7, #0xff
    cmp r1, #0x20
    bhs L_021604f8
    cmp r9, #0x20
    addlo r0, r1, r9, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_02160520
L_021604f8:
    cmp r9, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r9, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r9, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_02160520:
    ldr r0, =data_ov004_0216e3c0
    mov r3, r1, asr #0x1
    ldr r0, [r0, #0x0]
    mov r2, #0x0
    add r1, r0, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, r3, lsl #0x1
    add r1, r1, #0x200
    ldrh r3, [r1, #0x64]
L_02160544:
    add r1, r0, r2, lsl #0x1
    add r1, r1, #0xb00
    ldrh r1, [r1, #0xe0]
    cmp r3, r1
    beq L_02160568
    add r2, r2, #0x1
    cmp r2, #0x1d
    blt L_02160544
    mov r2, #0x0
L_02160568:
    add r0, sp, #0x8
    ldrb r2, [r0, r2]
    mov r1, r9
    and r0, r7, #0xff
    bl func_ov004_02160654
    cmp r10, #0x20
    bhs L_021605a8
    and r0, r5, #0xff
    cmp r0, #0x20
    addlo r0, r10, r0, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r0, #0x20
    addhs r0, r10, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_021605d4
L_021605a8:
    and r2, r5, #0xff
    cmp r2, #0x20
    sublo r0, r10, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r10, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_021605d4:
    ldr r0, =data_ov004_0216e3c0
    mov r2, r1, asr #0x1
    ldr r3, [r0, #0x0]
    mov r1, #0x0
    add r0, r3, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, r2, lsl #0x1
    add r0, r0, #0x200
    ldrh r2, [r0, #0x64]
L_021605f8:
    add r0, r3, r1, lsl #0x1
    add r0, r0, #0xb00
    ldrh r0, [r0, #0xe0]
    cmp r2, r0
    beq L_0216061c
    add r1, r1, #0x1
    cmp r1, #0x1d
    blt L_021605f8
    mov r1, #0x0
L_0216061c:
    add r2, sp, #0x5f
    ldrb r2, [r2, r1]
    mov r0, r10
    and r1, r5, #0xff
    bl func_ov004_02160654
    add sp, sp, #0x7c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
