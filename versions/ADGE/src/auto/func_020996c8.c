#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02097328();
extern char data_02154ef0[];
extern char data_02154ef4[];
extern char data_02154ef8[];
extern char data_02154efc[];
extern char data_02154f00[];
// clang-format off
asm void func_020996c8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    ldr r0, =data_02154ef4
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    bl func_02097328
    ldr r2, =data_02154f00
    ldr r1, =data_02154ef8
    ldr r3, [r2, #0x0]
    ldr r2, [r1, #0x0]
    ldrsh r1, [r0, #0x0]
    sub r2, r3, r2
    cmp r2, r1
    movhi r2, r1
    ldrls r1, =data_02154ef0
    movls r3, #0x1
    strls r3, [r1, #0x0]
    cmp r2, #0x0
    mov r1, #0x0
    bls L_02099788
    ldr r7, =0xffff8010
    ldr r8, =0x7ff0
    ldr r4, =data_02154efc
    ldr lr, =0x51eb851f
    mov ip, #0x96
L_02099738:
    add r3, r0, r1, lsl #0x1
    ldrsh r3, [r3, #0x6]
    add r1, r1, #0x1
    smulbb r5, r3, ip
    smull r3, r9, lr, r5
    mov r9, r9, asr #0x5
    mov r3, r5, lsr #0x1f
    add r9, r3, r9
    cmp r9, r8
    movgt r9, r8
    bgt L_0209976c
    cmp r9, r7
    movlt r9, r7
L_0209976c:
    ldr r6, [r4, #0x0]
    mov r3, r9, asr #0x8
    add r5, r6, #0x1
    str r5, [r4, #0x0]
    cmp r1, r2
    swpb r3, r3, [r6]
    blo L_02099738
L_02099788:
    ldr r1, =data_02154ef8
    ldr r0, =data_02154ef0
    ldr r3, [r1, #0x0]
    ldr r0, [r0, #0x0]
    add r2, r3, r2
    cmp r0, #0x1
    str r2, [r1, #0x0]
    ldreq r0, =data_02154ef4
    moveq r1, #0x0
    streq r1, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
