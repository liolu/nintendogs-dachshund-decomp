#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0205ece8();
extern void func_02078714();
extern void func_0207e0d0();
extern void func_020a7924();
extern void func_020c93d4();
extern void func_020c95fc();
extern void func_020ca970();
extern void func_020ca9b8();
extern void func_02102f2c();
extern void func_02102fd0();
extern char data_02140c34[];
extern char data_02140c44[];
extern char func_020c4408[];
extern char func_020c4938[];
extern char func_020c4ab0[];
// clang-format off
asm void func_020c4abc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x80
    mov r6, r1
    mov r1, #0x4d
    mov r4, r0
    bl func_020a7924
    ldr r1, =func_020c4938
    ldr r0, =func_020c4408
    str r1, [r4, #0x1f4]
    str r0, [r4, #0x1f8]
    ldr r1, =func_020c4ab0
    mov r0, r6
    str r1, [r4, #0x1f0]
    mov r1, #0x8
    bl func_020038a8
    str r0, [r4, #0x214]
    ldr r5, [r4, #0x214]
    mov r0, #0x1f
    bl func_02102fd0
    str r0, [r5, #0x0]
    mov r0, #0x1f
    mov r1, r4
    bl func_02102f2c
    mov r0, r4
    mov r1, r6
    mov r2, #0x1
    bl func_020ca9b8
    ldr r2, =data_02140c34
    ldr r3, [r4, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    mov r1, #0x0
    bl func_02078714
    ldr r5, [r4, #0x74]
    mov r1, r0
    mov r0, r5
    bl func_020c95fc
    mov r3, #0x0
    add r2, r5, #0x14
    swpb r0, r3, [r2]
    mov r1, r6
    str r3, [r5, #0x1c]
    mov r0, r4
    str r3, [r5, #0x20]
    mov r2, #0x1
    bl func_020ca970
    ldr r2, =data_02140c44
    ldr r3, [r4, #0x1ec]
    add r0, sp, #0x40
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0x40
    bl func_0207e0d0
    mov r1, #0x0
    bl func_02078714
    ldr r4, [r4, #0x7c]
    mov r1, r0
    mov r0, r4
    bl func_020c93d4
    mov r1, #0x0
    swpb r0, r1, [r4]
    str r1, [r4, #0x8]
    str r1, [r4, #0xc]
    add sp, sp, #0x80
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
