#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020091f8();
extern void func_020142b8();
extern void func_020274a0();
extern void func_0202f960();
extern void func_0203e280();
extern void func_020eabb4();
// clang-format off
asm void func_ov002_0218f44c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    ldrh r1, [r1, #0xa]
    cmp r1, #0x6
    beq L_0218f474
    cmp r1, #0x12
    beq L_0218f474
    cmp r1, #0x1e
    bne L_0218f498
L_0218f474:
    mov r0, r4
    bl func_020274a0
    ldr r2, =0x958
    mov r1, r0
    add r0, r4, r2
    mov r2, #0x0
    bl func_020eabb4
    ldmfd sp!, {r4, lr}
    bx lr
L_0218f498:
    cmp r1, #0x32
    bne L_0218f4ec
    mov r1, #0x6a
    mov r2, #0x3
    bl func_020091f8
    mov r0, r4
    mov r1, #0x6b
    mov r2, #0x3
    bl func_020091f8
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e280
    add r3, r4, #0xb0
    mov r2, #0x4
    swpb r2, r2, [r3]
    mov r0, r4
    mov r1, #0x0
    bl func_020142b8
    ldmfd sp!, {r4, lr}
    bx lr
L_0218f4ec:
    cmp r1, #0x5a
    ldmlsfd sp!, {r4, lr}
    bxls lr
    bl func_0202f960
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
