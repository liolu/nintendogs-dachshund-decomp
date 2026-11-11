#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_020351a0();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_ov002_02182eec();
extern char data_02153720[];
// clang-format off
asm void func_ov002_02182a20(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r2, r4
    mov r1, #0x3
    mov r5, r0
    bl func_ov002_02182eec
    cmp r0, #0x0
    beq L_02182b40
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    bge L_02182acc
    ldr r1, =0x1b7
    mov r0, r5
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r2, r1, asr #0x10
    mov r1, #0x0
    bl func_0203e280
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x1e
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    cmp r4, #0x0
    bne L_02182ab0
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x1
    bl func_02023610
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182ab0:
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x2
    bl func_02023610
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182acc:
    ldr r1, =0x1bd
    mov r0, r5
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r2, r1, asr #0x10
    mov r1, #0x0
    bl func_0203e280
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x1e
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    cmp r4, #0x0
    bne L_02182b24
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x3
    bl func_02023610
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182b24:
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x4
    bl func_02023610
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182b40:
    add r0, r5, #0x100
    ldrsh r1, [r0, #0x50]
    ldr r0, =0x1b7
    sub r0, r1, r0
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02182c1c
L_02182b5c:
    b L_02182b7c
    b L_02182ba4
    b L_02182c1c
    b L_02182c1c
    b L_02182c1c
    b L_02182c1c
    b L_02182bcc
    b L_02182bf4
L_02182b7c:
    ldr r2, =0x1b9
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    add r1, r5, #0xaa
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182ba4:
    ldr r2, =0x1ba
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    add r1, r5, #0xab
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182bcc:
    ldr r2, =0x1bf
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    add r1, r5, #0xaa
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182bf4:
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1c0
    bl func_0203e280
    add r1, r5, #0xab
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02182c1c:
    mov r0, r5
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    mov r1, #0xef
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
