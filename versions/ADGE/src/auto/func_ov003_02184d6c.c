#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023644();
extern void func_0203535c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_ov003_02185208();
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02184d6c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r2, r4
    mov r1, #0x3
    mov r5, r0
    bl func_ov003_02185208
    cmp r0, #0x0
    beq L_02184e80
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    bge L_02184e10
    add r0, r4, #0x1b8
    mov r1, r0, lsl #0x10
    mov r2, r1, asr #0x10
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x1e
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    cmp r4, #0x0
    bne L_02184df4
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x1
    bl func_02023644
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184df4:
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x2
    bl func_02023644
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184e10:
    ldr r1, =0x1be
    mov r0, r5
    add r1, r4, r1
    mov r1, r1, lsl #0x10
    mov r2, r1, asr #0x10
    mov r1, #0x0
    bl func_0203e5ac
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x1e
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    cmp r4, #0x0
    bne L_02184e64
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x3
    bl func_02023644
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184e64:
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x4
    bl func_02023644
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184e80:
    add r0, r5, #0x100
    ldrsh r0, [r0, #0x52]
    sub r0, r0, #0x1b8
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02184f58
L_02184e98:
    b L_02184eb8
    b L_02184ee0
    b L_02184f58
    b L_02184f58
    b L_02184f58
    b L_02184f58
    b L_02184f08
    b L_02184f30
L_02184eb8:
    ldr r2, =0x1ba
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r5, #0x91
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184ee0:
    ldr r2, =0x1bb
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r5, #0x92
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184f08:
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1c0
    bl func_0203e5ac
    add r1, r5, #0x91
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184f30:
    ldr r2, =0x1c1
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r5, #0x92
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02184f58:
    mov r0, r5
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    mov r1, #0xef
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
