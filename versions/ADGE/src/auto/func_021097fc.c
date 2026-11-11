#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003a34();
extern void func_02003c00();
extern void func_0208ff8c();
extern void func_020d7880();
extern void func_020eb5a4();
extern void func_020f0af4();
extern void func_020f0bfc();
extern void func_020f0ca4();
extern void func_0210a114();
extern void func_0210a21c();
extern char data_0214d624[];
extern char data_02159e70[];
// clang-format off
asm void func_021097fc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r6, r0
    ldr r1, [r6, #0x4]
    ldr r0, =0x1ca4
    str r1, [r6, #0x0]
    ldr r1, [r6, #0x0]
    add r4, r6, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02109dd0
L_02109828:
    b L_02109840
    b L_02109898
    b L_021098d0
    b L_02109a8c
    b L_02109c44
    b L_02109d60
L_02109840:
    ldr r1, [r6, #0xc]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r6, #0xc]
    ldr r0, [r6, #0xc]
    cmp r0, #0x0
    movle r0, #0x0
    strle r0, [r6, #0xc]
    ldr r0, [r6, #0x10]
    movgt r2, #0x0
    add r0, r0, #0xb60
    str r0, [r6, #0x10]
    ldr r0, [r6, #0x10]
    cmp r0, #0x10000
    movge r0, #0x10000
    movlt r2, #0x0
    strge r0, [r6, #0x10]
    cmp r2, #0x0
    movne r0, #0x1
    strne r0, [r6, #0x4]
    b L_02109dd0
L_02109898:
    ldr r1, [r6, #0x14]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r6, #0x14]
    ldr r0, [r6, #0x14]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r2, #0x0
    strle r0, [r6, #0x14]
    cmp r2, #0x0
    movne r0, #0x2
    strne r0, [r6, #0x4]
    b L_02109dd0
L_021098d0:
    ldr r0, =data_02159e70
    ldr r0, [r0, #0x0]
    add r0, r0, #0x4000
    ldr r0, [r0, #0x860]
    cmp r0, #0x0
    beq L_02109dd0
    ldr r1, =data_0214d624
    mov r0, #0x2
    ldrb r5, [r1, #0x0]
    ldrb r4, [r1, #0x1]
    mov r1, r5
    mov r2, r4
    bl func_020eb5a4
    ldr r1, =data_0214d624
    ldrh r1, [r1, #0x2]
    ands r1, r1, #0x2
    beq L_02109dd0
    cmp r0, #0x4
    bne L_02109990
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov ip, #0x0
    str ip, [sp, #0x8]
    str ip, [sp, #0xc]
    str ip, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    add r0, r6, #0x28
    mov r1, #0x2
    mov r2, #0x1a
    mov r3, #0x1
    str ip, [sp, #0x18]
    bl func_020f0ca4
    mov r1, r5, lsl #0x10
    mov r2, r4, lsl #0x10
    add r0, r6, #0x28
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020f0bfc
    add r2, r6, #0x64
    mov r0, #0x0
    swpb r1, r0, [r2]
    mov r1, #0x3
    str r1, [r6, #0x4]
    bl func_0208ff8c
    b L_02109dd0
L_02109990:
    cmp r0, #0x5
    bne L_02109a0c
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    mov ip, #0xa
    str ip, [sp, #0x14]
    add r0, r6, #0x28
    mov r1, #0x2
    mov r2, #0x1b
    mov r3, #0x1
    str ip, [sp, #0x18]
    bl func_020f0ca4
    mov r1, r5, lsl #0x10
    mov r2, r4, lsl #0x10
    add r0, r6, #0x28
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020f0bfc
    add r2, r6, #0x64
    mov r0, #0x1
    swpb r1, r0, [r2]
    mov r1, #0x3
    str r1, [r6, #0x4]
    bl func_0208ff8c
    b L_02109dd0
L_02109a0c:
    cmp r0, #0x3
    mov r1, #0x1
    addls pc, pc, r0, lsl #0x2
    b L_02109a4c
L_02109a1c:
    b L_02109a2c
    b L_02109a34
    b L_02109a3c
    b L_02109a44
L_02109a2c:
    str r1, [r6, #0x18]
    b L_02109a50
L_02109a34:
    str r1, [r6, #0x20]
    b L_02109a50
L_02109a3c:
    str r1, [r6, #0x1c]
    b L_02109a50
L_02109a44:
    str r1, [r6, #0x24]
    b L_02109a50
L_02109a4c:
    mov r1, #0x0
L_02109a50:
    cmp r1, #0x0
    beq L_02109dd0
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_0210a114
    mov r0, #0x1e
    str r0, [r6, #0x8]
    add r1, r6, #0x64
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x3
    str r0, [r6, #0x4]
    b L_02109dd0
L_02109a8c:
    ldrsb r1, [r6, #0x64]
    mvn r0, #0x0
    cmp r1, r0
    beq L_02109ac8
    add r0, r6, #0x28
    bl func_020f0af4
    cmp r0, #0x0
    beq L_02109dd0
    mov r0, #0x14
    bl func_02003c00
    mov r1, #0x5
    mov r0, #0x34
    str r1, [r6, #0x4]
    bl func_0208ff8c
    b L_02109dd0
L_02109ac8:
    ldr r0, [r6, #0x8]
    ldr r2, =data_0214d624
    sub r0, r0, #0x1
    str r0, [r6, #0x8]
    ldrh r0, [r2, #0x2]
    ands r0, r0, #0x1
    bne L_02109b30
    ldr r0, [r6, #0x8]
    cmp r0, #0x18
    bgt L_02109dd0
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_02109b04:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_02109b0c:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_02109b0c
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_02109b04
    b L_02109dd0
L_02109b30:
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    bgt L_02109dd0
    ldr r0, =data_02159e70
    ldr r0, [r0, #0x0]
    add r0, r0, #0x4000
    ldr r0, [r0, #0x860]
    cmp r0, #0x0
    beq L_02109c04
    ldrb r1, [r2, #0x0]
    ldrb r2, [r2, #0x1]
    mov r0, #0x2
    bl func_020eb5a4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02109bc0
L_02109b70:
    b L_02109b80
    b L_02109b90
    b L_02109ba0
    b L_02109bb0
L_02109b80:
    ldr r1, [r6, #0x18]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109bc4
L_02109b90:
    ldr r1, [r6, #0x20]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109bc4
L_02109ba0:
    ldr r1, [r6, #0x1c]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109bc4
L_02109bb0:
    ldr r1, [r6, #0x24]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109bc4
L_02109bc0:
    mov r1, #0x0
L_02109bc4:
    cmp r1, #0x0
    beq L_02109c04
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_0210a114
    mov r1, #0xa
    str r1, [r6, #0x8]
    mov r1, #0x4
    mov r0, r6
    str r1, [r6, #0x4]
    bl func_0210a21c
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02109c04:
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_02109c18:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_02109c20:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_02109c20
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_02109c18
    b L_02109dd0
L_02109c44:
    ldr r1, [r6, #0x8]
    ldr r0, =data_02159e70
    sub r1, r1, #0x1
    str r1, [r6, #0x8]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x4000
    ldr r0, [r0, #0x860]
    cmp r0, #0x0
    beq L_02109d20
    ldr r2, =data_0214d624
    mov r0, #0x2
    ldrb r1, [r2, #0x0]
    ldrb r2, [r2, #0x1]
    bl func_020eb5a4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02109cd8
L_02109c88:
    b L_02109c98
    b L_02109ca8
    b L_02109cb8
    b L_02109cc8
L_02109c98:
    ldr r1, [r6, #0x18]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109cdc
L_02109ca8:
    ldr r1, [r6, #0x20]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109cdc
L_02109cb8:
    ldr r1, [r6, #0x1c]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109cdc
L_02109cc8:
    ldr r1, [r6, #0x24]
    cmp r1, #0x0
    movne r1, #0x1
    bne L_02109cdc
L_02109cd8:
    mov r1, #0x0
L_02109cdc:
    cmp r1, #0x0
    beq L_02109d20
    ldr r1, [r6, #0x8]
    cmp r1, #0x0
    bgt L_02109d0c
    ldr r1, =0x112
    ldr r2, =0x113
    add r1, r6, r1
    add r2, r6, r2
    bl func_0210a114
    mov r0, #0xa
    str r0, [r6, #0x8]
L_02109d0c:
    mov r0, r6
    bl func_0210a21c
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02109d20:
    mov r0, #0x2
    str r0, [r6, #0x4]
    mov r5, #0x0
    mov r2, r5
    mov r3, r5
L_02109d34:
    mov r4, r3
    add r1, r6, r5, lsl #0x3
L_02109d3c:
    add r0, r1, r4, lsl #0x2
    add r4, r4, #0x1
    str r2, [r0, #0x18]
    cmp r4, #0x2
    blt L_02109d3c
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_02109d34
    b L_02109dd0
L_02109d60:
    mov r5, #0x1
    bl func_02003a34
    cmp r0, #0x0
    ldr r1, [r6, #0xc]
    ldr r0, =0x6aaa
    moveq r5, #0x0
    add r0, r1, r0
    str r0, [r6, #0xc]
    ldr r0, [r6, #0xc]
    cmp r0, #0x64000
    movge r0, #0x64000
    strge r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    ldr r0, =0x1111
    movlt r5, #0x0
    sub r0, r1, r0
    str r0, [r6, #0x10]
    ldr r0, [r6, #0x10]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r5, #0x0
    strle r0, [r6, #0x10]
    cmp r5, #0x0
    beq L_02109dd0
    mvn r1, #0x0
    mov r0, #0x11
    str r1, [r4, #0x0]
    bl func_020d7880
L_02109dd0:
    mov r0, r6
    bl func_0210a21c
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
