#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_02043418(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0214da84
    mov r3, #0x0
    ldr r0, [r0, #0x0]
    ldr r2, =data_0215a064
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0204345c
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02043464
L_0204345c:
    mov r1, #0x0
    b L_0204346c
L_02043464:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_0204346c:
    cmp r1, #0x0
    beq L_020436a0
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq L_02043510
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_020434bc
L_02043498:
    b L_020434bc
    b L_020434bc
    b L_020434bc
    b L_020434bc
    b L_020434e4
    b L_020434e4
    b L_020434e4
    b L_020434e4
    b L_020434e4
L_020434bc:
    ldr r2, =data_0214da84
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020434e4:
    ldr r2, =data_0214da84
    mov r4, #0x2
    ldr r0, [r2, #0x0]
    mov r3, #0x0
    add r1, r0, #0x4
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043510:
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x0
    beq L_02043530
    cmp r0, #0x2
    beq L_02043558
    cmp r0, #0x3
    beq L_02043558
    b L_02043584
L_02043530:
    ldr r2, =data_0214da84
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043558:
    ldr r2, =data_0214da84
    mov r4, #0x2
    ldr r0, [r2, #0x0]
    mov r3, #0x1f4
    add r1, r0, #0x4
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043584:
    ldr r1, =data_0214da84
    ldr r0, =data_021555f8
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    mov ip, #0x0
    mov r0, ip
    mov r6, ip
    mov r4, ip
    mov r5, #0x1
L_020435a8:
    cmp ip, #0x0
    blt L_020435b8
    cmp ip, #0x3
    blt L_020435c0
L_020435b8:
    mov r3, r0
    b L_020435c8
L_020435c0:
    add r3, r1, ip, lsl #0x2
    ldr r3, [r3, #0x54]
L_020435c8:
    cmp r3, #0x0
    beq L_02043650
    add lr, r3, #0x100
    ldrsh r7, [lr, #0x3e]
    sub r7, r7, #0x3
    mov lr, r7, lsl #0x10
    movs r7, lr, asr #0x10
    bmi L_020435f4
    ldrsh lr, [r2, #0x20]
    cmp lr, r7
    bgt L_020435fc
L_020435f4:
    mov r7, r6
    b L_02043604
L_020435fc:
    add lr, r2, r7, lsl #0x2
    ldr r7, [lr, #0x4]
L_02043604:
    cmp r7, #0x0
    movne r3, r5
    bne L_02043620
    ldr r3, [r3, #0x94c]
    cmp r3, #0x0
    movne r3, r5
    moveq r3, r4
L_02043620:
    cmp r3, #0x0
    beq L_02043650
    add r1, r1, #0x4
    mov r0, #0x2
    swpb r0, r0, [r1]
    mov r1, #0xc8
    ldr r0, =data_0214da84
    add sp, sp, #0x4
    ldr r0, [r0, #0x0]
    strh r1, [r0, #0x28]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02043650:
    add r3, ip, #0x1
    mov r3, r3, lsl #0x18
    mov ip, r3, asr #0x18
    cmp ip, #0x3
    blt L_020435a8
    ldrh r0, [r1, #0x28]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    sub r2, r0, #0x1
    strh r2, [r1, #0x28]
    ldr r0, =data_0214da84
    mov r2, #0x2
    ldr r0, [r0, #0x0]
    add sp, sp, #0x4
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020436a0:
    ldr r2, =data_0214da84
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0x4
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x28]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
