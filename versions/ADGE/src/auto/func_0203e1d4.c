#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8058();
extern void func_01ff810c();
extern void func_01ffe160();
extern void func_020271d8();
extern void func_02068270();
extern void func_020c6ea0();
extern void func_020c95fc();
extern char data_02139ccc[];
extern char data_0213aa4c[];
extern char data_0213aa58[];
extern char data_0214da84[];
// clang-format off
asm void func_0203e1d4(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    mov r7, r0
    ldrsh r1, [r7, #0x88]
    cmp r1, #0x0
    blt L_0203e1f4
    cmp r1, #0x3
    blt L_0203e1fc
L_0203e1f4:
    mov r5, #0x0
    b L_0203e20c
L_0203e1fc:
    ldr r0, =data_0214da84
    ldr r0, [r0, #0x0]
    add r0, r0, r1, lsl #0x2
    ldr r5, [r0, #0x54]
L_0203e20c:
    cmp r5, #0x0
    beq L_0203e370
    ldrsh r6, [r7, #0x8a]
    ldrsb r0, [r5, #0x9d]
    strh r0, [r7, #0x8a]
    ldrsh r0, [r7, #0x8a]
    cmp r0, #0x0
    beq L_0203e350
    ldrh r0, [r7, #0x20]
    ldr r4, [r7, #0x74]
    ldr r1, =data_0213aa4c
    bic r0, r0, #0x1
    strh r0, [r7, #0x20]
    ldr r2, [r5, #0x9e8]
    mov r0, #0x64
    ldrh r2, [r2, #0x0]
    add r3, r7, #0x24
    mla r0, r2, r0, r1
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    add r1, r7, #0x3c
    mov r2, #0x11
    bl func_020271d8
    add r0, r7, #0x3c
    mov r2, r0
    add r1, r5, #0x1e0
    bl func_01ff810c
    add r1, r7, #0x3c
    ldrsh r3, [r7, #0x88]
    add ip, r7, #0x8c
    mov r0, #0x30
    smlabb r0, r3, r0, ip
    mov r2, r1
    bl func_01ff810c
    ldr r1, [r5, #0x9e8]
    mov r0, #0x64
    ldrh r2, [r1, #0x0]
    ldr r1, =data_0213aa58
    add r3, sp, #0xc
    mla r0, r2, r0, r1
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r1, r7, #0x3c
    add r2, r7, #0x30
    bl func_01ff8058
    mov r0, #0x0
    str r0, [r7, #0x60]
    str r0, [r7, #0x64]
    str r0, [r7, #0x68]
    ldr r0, =0x934
    add r3, sp, #0x0
    add r0, r5, r0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r7, #0x30
    mov r1, r3
    mov r2, r0
    bl func_02068270
    ldrsh r1, [r7, #0x8a]
    cmp r1, r6
    beq L_0203e33c
    ldr r0, =data_02139ccc
    ldr r0, [r0, r1, lsl #0x2]
    bl func_020c6ea0
    mov r1, r0
    mov r0, r4
    bl func_020c95fc
    mov r2, #0x0
    str r2, [r4, #0x1c]
    add r1, r4, #0x14
    swpb r0, r2, [r1]
    mov r0, #0x5
    strh r2, [r4, #0x4]
    strh r0, [r4, #0x6]
L_0203e33c:
    add r0, r5, #0x100
    ldrsh r0, [r0, #0x50]
    mov r0, r0, lsl #0xc
    str r0, [r4, #0x20]
    b L_0203e38c
L_0203e350:
    mvn r0, #0x0
    strh r0, [r7, #0x88]
    mov r0, #0x0
    strh r0, [r7, #0x8a]
    ldrh r0, [r7, #0x20]
    orr r0, r0, #0x1
    strh r0, [r7, #0x20]
    b L_0203e38c
L_0203e370:
    mvn r0, #0x0
    strh r0, [r7, #0x88]
    mov r0, #0x0
    strh r0, [r7, #0x8a]
    ldrh r0, [r7, #0x20]
    orr r0, r0, #0x1
    strh r0, [r7, #0x20]
L_0203e38c:
    mov r0, r7
    bl func_01ffe160
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
