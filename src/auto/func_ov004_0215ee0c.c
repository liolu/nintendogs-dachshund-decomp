#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205df50();
extern void func_0206a1a0();
extern void func_0208efe4();
extern void func_ov004_0215f9ec();
extern void func_ov004_021609c0();
extern char data_ov004_0216dde8[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215ee0c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r10, r0
    mov r9, r1
    ldrb r1, [r10, #0x0]
    mov r0, r2
    mov r11, #0x0
    sub r0, r0, r1
    ldrb r1, [r9, #0x0]
    str r0, [sp, #0x8]
    cmp r0, #0x0
    mov r0, r3
    sub r0, r0, r1
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x8]
    str r11, [sp, #0x10]
    mov r8, r11
    movgt r11, #0x1
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    strlt r0, [sp, #0x8]
    ldr r0, [sp, #0xc]
    mvnlt r11, #0x0
    cmp r0, #0x0
    movgt r0, #0x1
    strgt r0, [sp, #0x10]
    ldr r0, [sp, #0xc]
    str r2, [sp, #0x0]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    strlt r0, [sp, #0xc]
    mvnlt r0, #0x0
    strlt r0, [sp, #0x10]
    ldr r0, [sp, #0x8]
    str r3, [sp, #0x4]
    cmp r0, #0x0
    bne L_0215eeb4
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0215eeb4:
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    ble L_0215eed4
    mov r0, r0, lsl #0xc
    bl func_0205df50
    str r0, [sp, #0x14]
    b L_0215eee8
L_0215eed4:
    mov r1, r0
    ldr r0, [sp, #0x8]
    mov r0, r0, lsl #0xc
    bl func_0205df50
    str r0, [sp, #0x14]
L_0215eee8:
    ldr r0, =data_ov004_0216dde8
    ldrb r7, [r0, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x1c]
    mov r0, #0x1
    str r0, [sp, #0x20]
    ldr r4, =0x3ff
L_0215ef04:
    ldr r0, =data_ov004_0216e3c0
    ldrb r6, [r10, #0x0]
    ldr r2, [r0, #0x0]
    ldrb r5, [r9, #0x0]
    add r0, r2, #0x3000
    ldr r1, [r0, #0x6c4]
    ldr r0, [r2, #0x24]
    ldr r1, [r1, #0x8]
    cmp r1, r0
    blt L_0215ef40
    mov r0, #0x3
    bl func_0208efe4
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215ef40:
    ldr r0, [sp, #0x0]
    mvn r1, #0x0
    sub r0, r0, r6
    cmp r0, r1
    blt L_0215f098
    cmp r0, #0x1
    bgt L_0215f098
    ldr r0, [sp, #0x4]
    sub r0, r0, r5
    cmp r0, r1
    blt L_0215f098
    cmp r0, #0x1
    bgt L_0215f098
    ldr r0, [sp, #0x0]
    cmp r0, #0x20
    bhs L_0215efb0
    ldr r0, [sp, #0x4]
    cmp r0, #0x20
    ldrlo r1, [sp, #0x0]
    addlo r0, r1, r0, lsl #0x5
    movlo r4, r0, lsl #0x1
    blo L_0215eff4
    sub r1, r0, #0x20
    ldr r0, [sp, #0x0]
    add r0, r0, r1, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x1000
    b L_0215eff4
L_0215efb0:
    ldr r0, [sp, #0x4]
    cmp r0, #0x20
    bhs L_0215efd8
    ldr r0, [sp, #0x0]
    sub r1, r0, #0x20
    ldr r0, [sp, #0x4]
    add r0, r1, r0, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x800
    b L_0215eff4
L_0215efd8:
    ldr r0, [sp, #0x0]
    sub r1, r0, #0x20
    ldr r0, [sp, #0x4]
    sub r0, r0, #0x20
    add r0, r1, r0, lsl #0x5
    mov r0, r0, lsl #0x1
    add r4, r0, #0x1800
L_0215eff4:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r4, #0x0
    ble L_0215f040
    ldr r0, =data_ov004_0216e3c0
    ldr r1, =0x3ff
    ldr r3, [r0, #0x0]
    and r2, r2, r1
L_0215f018:
    add r0, r3, r4, lsl #0x1
    add r0, r0, #0xc00
    ldrh r0, [r0, #0x1a]
    and r0, r0, r1
    cmp r2, r0
    moveq r0, #0x0
    beq L_0215f044
    add r4, r4, #0x1
    cmp r4, r7
    blt L_0215f018
L_0215f040:
    mov r0, #0x1
L_0215f044:
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    ldr r1, [sp, #0x4]
    bl func_ov004_021609c0
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    ldr r1, [sp, #0x4]
    bl func_ov004_0215f9ec
    ldr r0, [sp, #0x0]
    swpb r0, r0, [r10]
    ldr r0, [sp, #0x4]
    add sp, sp, #0x24
    swpb r0, r0, [r9]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f098:
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    ble L_0215f0dc
    ldrb r1, [r10, #0x0]
    ldr r0, [sp, #0x14]
    add r8, r8, r0
    add r0, r1, r11
    cmp r8, #0x800
    swpb r0, r0, [r10]
    ble L_0215f108
    ldrb r1, [r9, #0x0]
    ldr r0, [sp, #0x10]
    sub r8, r8, #0x1000
    add r0, r1, r0
    swpb r0, r0, [r9]
    b L_0215f108
L_0215f0dc:
    ldr r0, [sp, #0x14]
    ldrb r1, [r9, #0x0]
    add r8, r8, r0
    ldr r0, [sp, #0x10]
    cmp r8, #0x800
    add r0, r1, r0
    swpb r0, r0, [r9]
    subgt r8, r8, #0x1000
    ldrgtb r0, [r10, #0x0]
    addgt r0, r0, r11
    swpgtb r0, r0, [r10]
L_0215f108:
    ldrb r2, [r9, #0x0]
    ldrb r1, [r10, #0x0]
    cmp r1, #0x20
    bhs L_0215f144
    cmp r2, #0x20
    addlo r0, r1, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    strlo r0, [sp, #0x18]
    blo L_0215f17c
    sub r0, r2, #0x20
    add r0, r1, r0, lsl #0x5
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1000
    str r0, [sp, #0x18]
    b L_0215f17c
L_0215f144:
    cmp r2, #0x20
    bhs L_0215f164
    sub r0, r1, #0x20
    add r0, r0, r2, lsl #0x5
    mov r0, r0, lsl #0x1
    add r0, r0, #0x800
    str r0, [sp, #0x18]
    b L_0215f17c
L_0215f164:
    sub r1, r1, #0x20
    sub r0, r2, #0x20
    add r0, r1, r0, lsl #0x5
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1800
    str r0, [sp, #0x18]
L_0215f17c:
    bl func_0206a1a0
    ldr r1, [sp, #0x18]
    cmp r7, #0x0
    ldrh r0, [r0, r1]
    ldr r2, [sp, #0x1c]
    ble L_0215f1c8
    ldr r1, =data_ov004_0216e3c0
    and r0, r0, r4
    ldr r1, [r1, #0x0]
L_0215f1a0:
    add r3, r1, r2, lsl #0x1
    add r3, r3, #0xc00
    ldrh r3, [r3, #0x1a]
    and r3, r3, r4
    cmp r0, r3
    ldreq r0, [sp, #0x1c]
    beq L_0215f1cc
    add r2, r2, #0x1
    cmp r2, r7
    blt L_0215f1a0
L_0215f1c8:
    ldr r0, [sp, #0x20]
L_0215f1cc:
    cmp r0, #0x0
    beq L_0215f1f8
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f1f8
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    b L_0215ef04
L_0215f1f8:
    ldrb r1, [r10, #0x0]
    cmp r1, r6
    beq L_0215f5b0
    ldrb r0, [r9, #0x0]
    cmp r0, r5
    beq L_0215f5b0
    ldr r3, [sp, #0x8]
    ldr r2, [sp, #0xc]
    cmp r3, r2
    ble L_0215f3e8
    cmp r1, #0x20
    bhs L_0215f248
    cmp r5, #0x20
    addlo r0, r1, r5, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f270
L_0215f248:
    cmp r5, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r5, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f270:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f2bc
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f294:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f2c0
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f294
L_0215f2bc:
    mov r0, #0x1
L_0215f2c0:
    cmp r0, #0x0
    beq L_0215f2f8
    ldrb r0, [r10, #0x0]
    mov r1, r5
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f2f8
    swpb r0, r5, [r9]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f2f8:
    cmp r6, #0x20
    ldrb r2, [r9, #0x0]
    bhs L_0215f324
    cmp r2, #0x20
    addlo r0, r6, r2, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r6, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f34c
L_0215f324:
    cmp r2, #0x20
    sublo r0, r6, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r6, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f34c:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f398
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f370:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f39c
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f370
L_0215f398:
    mov r0, #0x1
L_0215f39c:
    cmp r0, #0x0
    beq L_0215f3d4
    ldrb r1, [r9, #0x0]
    mov r0, r6
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f3d4
    swpb r0, r6, [r10]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f3d4:
    swpb r0, r6, [r10]
    add sp, sp, #0x24
    swpb r0, r5, [r9]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f3e8:
    cmp r6, #0x20
    bhs L_0215f410
    cmp r0, #0x20
    addlo r0, r6, r0, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r0, #0x20
    addhs r0, r6, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f438
L_0215f410:
    cmp r0, #0x20
    sublo r1, r6, #0x20
    addlo r0, r1, r0, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r6, #0x20
    subhs r0, r0, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f438:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f484
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f45c:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f488
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f45c
L_0215f484:
    mov r0, #0x1
L_0215f488:
    cmp r0, #0x0
    beq L_0215f4c0
    ldrb r1, [r9, #0x0]
    mov r0, r6
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f4c0
    swpb r0, r6, [r10]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f4c0:
    ldrb r1, [r10, #0x0]
    cmp r1, #0x20
    bhs L_0215f4ec
    cmp r5, #0x20
    addlo r0, r1, r5, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f514
L_0215f4ec:
    cmp r5, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r5, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f514:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f560
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f538:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f564
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f538
L_0215f560:
    mov r0, #0x1
L_0215f564:
    cmp r0, #0x0
    beq L_0215f59c
    ldrb r0, [r10, #0x0]
    mov r1, r5
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f59c
    swpb r0, r5, [r9]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f59c:
    swpb r0, r6, [r10]
    add sp, sp, #0x24
    swpb r0, r5, [r9]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f5b0:
    cmp r1, r6
    beq L_0215f7d4
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    beq L_0215f7c4
    ldrb r2, [r9, #0x0]
    cmp r1, #0x20
    add r0, r2, r0
    and r2, r0, #0xff
    bhs L_0215f5f8
    cmp r2, #0x20
    addlo r0, r1, r2, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f620
L_0215f5f8:
    cmp r2, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f620:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r3, [r0, r4]
    mov r0, #0x0
    ble L_0215f66c
    ldr r1, =data_ov004_0216e3c0
    ldr r2, =0x3ff
    ldr r4, [r1, #0x0]
    and r3, r3, r2
L_0215f644:
    add r1, r4, r0, lsl #0x1
    add r1, r1, #0xc00
    ldrh r1, [r1, #0x1a]
    and r1, r1, r2
    cmp r3, r1
    moveq r0, #0x0
    beq L_0215f670
    add r0, r0, #0x1
    cmp r0, r7
    blt L_0215f644
L_0215f66c:
    mov r0, #0x1
L_0215f670:
    cmp r0, #0x0
    beq L_0215f6c0
    ldrb r2, [r9, #0x0]
    ldr r1, [sp, #0x10]
    ldrb r0, [r10, #0x0]
    add r1, r2, r1
    and r1, r1, #0xff
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f6c0
    ldrb r1, [r9, #0x0]
    ldr r0, [sp, #0x10]
    add r0, r1, r0
    swpb r0, r0, [r9]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f6c0:
    ldrb r1, [r9, #0x0]
    ldr r0, [sp, #0x10]
    cmp r6, #0x20
    add r0, r1, r0
    and r2, r0, #0xff
    bhs L_0215f6f8
    cmp r2, #0x20
    addlo r0, r6, r2, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r6, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f720
L_0215f6f8:
    cmp r2, #0x20
    sublo r0, r6, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r6, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f720:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r3, [r0, r4]
    mov r0, #0x0
    ble L_0215f76c
    ldr r1, =data_ov004_0216e3c0
    ldr r2, =0x3ff
    ldr r4, [r1, #0x0]
    and r3, r3, r2
L_0215f744:
    add r1, r4, r0, lsl #0x1
    add r1, r1, #0xc00
    ldrh r1, [r1, #0x1a]
    and r1, r1, r2
    cmp r3, r1
    moveq r0, #0x0
    beq L_0215f770
    add r0, r0, #0x1
    cmp r0, r7
    blt L_0215f744
L_0215f76c:
    mov r0, #0x1
L_0215f770:
    cmp r0, #0x0
    beq L_0215f7c4
    ldrb r2, [r9, #0x0]
    ldr r1, [sp, #0x10]
    mov r0, r6
    add r1, r2, r1
    and r1, r1, #0xff
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f7c4
    swpb r0, r6, [r10]
    ldrb r1, [r9, #0x0]
    ldr r0, [sp, #0x10]
    add r0, r1, r0
    swpb r0, r0, [r9]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f7c4:
    add sp, sp, #0x24
    swpb r0, r6, [r10]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f7d4:
    ldrb r2, [r9, #0x0]
    cmp r2, r5
    beq L_0215ef04
    cmp r11, #0x0
    beq L_0215f9d0
    add r0, r1, r11
    and r1, r0, #0xff
    cmp r1, #0x20
    bhs L_0215f818
    cmp r2, #0x20
    addlo r0, r1, r2, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f840
L_0215f818:
    cmp r2, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r2, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r2, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f840:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f88c
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f864:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f890
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f864
L_0215f88c:
    mov r0, #0x1
L_0215f890:
    cmp r0, #0x0
    beq L_0215f8d8
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    add r0, r0, r11
    and r0, r0, #0xff
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f8d8
    ldrb r0, [r10, #0x0]
    add r0, r0, r11
    swpb r0, r0, [r10]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f8d8:
    ldrb r0, [r10, #0x0]
    add r0, r0, r11
    and r1, r0, #0xff
    cmp r1, #0x20
    bhs L_0215f90c
    cmp r5, #0x20
    addlo r0, r1, r5, lsl #0x5
    movlo r4, r0, lsl #0x1
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1000
    b L_0215f934
L_0215f90c:
    cmp r5, #0x20
    sublo r0, r1, #0x20
    addlo r0, r0, r5, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r4, r0, #0x800
    subhs r1, r1, #0x20
    subhs r0, r5, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r4, r0, #0x1800
L_0215f934:
    bl func_0206a1a0
    cmp r7, #0x0
    ldrh r2, [r0, r4]
    mov r1, #0x0
    ble L_0215f980
    ldr r0, =data_ov004_0216e3c0
    ldr r3, =0x3ff
    ldr r0, [r0, #0x0]
    and r4, r2, r3
L_0215f958:
    add r2, r0, r1, lsl #0x1
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    and r2, r2, r3
    cmp r4, r2
    moveq r0, #0x0
    beq L_0215f984
    add r1, r1, #0x1
    cmp r1, r7
    blt L_0215f958
L_0215f980:
    mov r0, #0x1
L_0215f984:
    cmp r0, #0x0
    beq L_0215f9d0
    ldrb r0, [r10, #0x0]
    mov r1, r5
    add r0, r0, r11
    and r0, r0, #0xff
    bl func_ov004_021609c0
    cmp r0, #0x0
    beq L_0215f9d0
    ldrb r0, [r10, #0x0]
    add r0, r0, r11
    swpb r0, r0, [r10]
    swpb r0, r5, [r9]
    ldrb r0, [r10, #0x0]
    ldrb r1, [r9, #0x0]
    bl func_ov004_0215f9ec
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215f9d0:
    swpb r0, r5, [r9]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
