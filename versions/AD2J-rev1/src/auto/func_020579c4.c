#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027630();
extern void func_020276d0();
extern void func_02027724();
extern void func_0202d9e0();
extern void func_02038094();
extern void func_02038f0c();
extern void func_0203e2b8();
extern char data_0214b484[];
// clang-format off
asm void func_020579c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_02027724
    cmp r0, #0x0
    beq L_02057dcc
    cmp r0, #0x1
    beq L_02057be0
    cmp r0, #0x2
    bne L_02058040
    ldr r0, =data_0214b484
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02057a4c
    cmp r0, #0x1
    beq L_02057a8c
    cmp r0, #0x2
    beq L_02057ae0
    b L_02057b9c
L_02057a4c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057a8c:
    cmp r4, #0x0
    beq L_02057ad0
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02057ad0
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ad0:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ae0:
    cmp r4, #0x0
    beq L_02057b8c
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057b8c
L_02057b0c:
    b L_02057b1c
    b L_02057b38
    b L_02057b54
    b L_02057b70
L_02057b1c:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b38:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b54:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b70:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b8c:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b9c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057be0:
    ldr r0, =data_0214b484
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02057c38
    cmp r0, #0x1
    beq L_02057c78
    cmp r0, #0x2
    beq L_02057ccc
    b L_02057d88
L_02057c38:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057c78:
    cmp r4, #0x0
    beq L_02057cbc
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02057cbc
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057cbc:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ccc:
    cmp r4, #0x0
    beq L_02057d78
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057d78
L_02057cf8:
    b L_02057d08
    b L_02057d24
    b L_02057d40
    b L_02057d5c
L_02057d08:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d24:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d40:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d5c:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d78:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d88:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0xc
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0xc
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057dcc:
    ldr r0, =data_0214b484
    add r1, r6, #0x4
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02057ffc
L_02057e18:
    b L_02057e2c
    b L_02057e6c
    b L_02057ec0
    b L_02057f00
    b L_02057f40
L_02057e2c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057e6c:
    cmp r4, #0x0
    beq L_02057eb0
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02057eb0
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057eb0:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ec0:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f00:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f40:
    cmp r4, #0x0
    beq L_02057fec
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057fec
L_02057f6c:
    b L_02057f7c
    b L_02057f98
    b L_02057fb4
    b L_02057fd0
L_02057f7c:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f98:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057fb4:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057fd0:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057fec:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ffc:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x18
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0x18
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058040:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
