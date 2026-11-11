#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c3ec();
extern void func_02035e14();
extern void func_02035e20();
extern void func_02105c84();
extern char data_0214b47c[];
extern char data_0214b484[];
extern char data_02153700[];
// clang-format off
asm void func_ov005_0215c3f4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r9, r1
    ldr r1, [r9, #0x3c]
    mov r10, r0
    mov r0, r1, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, #0x9
    mov r8, r2
    mov r7, r3
    bl func_0200c3ec
    ldr r3, [r9, #0x20]
    ldrsb r2, [r10, #0x89]
    mov r1, r3, lsl #0x10
    mov r5, r1, asr #0x10
    mov r11, r0
    cmp r2, r5
    ble L_0215c44c
    ldr r0, [r9, #0x24]
    cmp r0, #0x0
    movge r0, r0, lsl #0x10
    movge r5, r0, asr #0x10
L_0215c44c:
    ldr r0, [r9, #0x3c]
    mov r2, r3, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, #0x9
    mov r6, r2, asr #0x10
    bl func_0200c3ec
    cmp r0, #0x0
    mvn r4, #0x0
    beq L_0215c49c
    ldr r1, [r0, #0x20]
    ldrsb r2, [r10, #0x89]
    mov r1, r1, lsl #0x10
    mov r4, r1, asr #0x10
    cmp r2, r4
    ble L_0215c49c
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    movge r0, r0, lsl #0x10
    movge r4, r0, asr #0x10
L_0215c49c:
    cmp r7, #0x0
    beq L_0215c4a8
    bl func_02105c84
L_0215c4a8:
    cmp r8, #0x0
    bne L_0215c540
    ldr r3, =data_0214b47c
    mov r1, #0x0
    ldr r0, [r3, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x26]
    cmp r0, #0x0
    ble L_0215c500
    ldr r2, =data_0214b484
    mov r0, r1
L_0215c4d4:
    ldr r7, [r2, #0x0]
    add ip, r1, #0x1
    add r1, r7, r1, lsl #0x2
    str r0, [r1, #0xa0]
    ldr r7, [r3, #0x0]
    mov r1, ip, lsl #0x10
    ldr r7, [r7, #0x20]
    mov r1, r1, asr #0x10
    ldrsh r7, [r7, #0x26]
    cmp r1, r7
    blt L_0215c4d4
L_0215c500:
    ldr r1, =data_0214b484
    mov r0, r10
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    str r2, [r1, #0x94]
    bl func_02035e20
    cmp r11, #0x0
    beq L_0215c540
    ldr r1, [r9, #0x3c]
    mov r0, r10
    add r1, r1, #0x2d
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r10
    bl func_02035e20
L_0215c540:
    cmp r8, #0x0
    beq L_0215c5f0
    ldr r0, =data_02153700
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsb r0, [r10, #0x89]
    cmp r5, r0
    addeq r0, r0, #0x1
    addeq r1, r10, #0x89
    swpeqb r0, r0, [r1]
    addeq sp, sp, #0x4
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r4, r0
    addeq r0, r0, #0x1
    addeq r1, r10, #0x89
    swpeqb r0, r0, [r1]
    addeq sp, sp, #0x4
    moveq r0, #0x2
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    sub r0, r0, #0x1
    cmp r5, r0
    addeq sp, sp, #0x4
    moveq r0, #0x3
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r6, r0
    addeq sp, sp, #0x4
    moveq r0, #0x3
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r4, r0
    moveq r0, #0x3
    add sp, sp, #0x4
    movne r0, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215c5f0:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
