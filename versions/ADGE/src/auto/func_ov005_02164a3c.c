#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0205ece8();
extern void func_020782bc();
extern void func_02078714();
extern void func_0207e0d0();
extern void func_020a7924();
extern void func_020c93d4();
extern void func_020ca944();
extern char data_ov005_02165f5c[];
extern char func_ov005_021640a8[];
extern char func_ov005_0216483c[];
extern char func_ov005_021649e0[];
// clang-format off
asm void func_ov005_02164a3c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x44
    mov r4, r1
    mov r1, #0x6f
    mov r5, r0
    bl func_020a7924
    ldr r1, =func_ov005_0216483c
    ldr r0, =func_ov005_021640a8
    str r1, [r5, #0x1f4]
    str r0, [r5, #0x1f8]
    ldr r1, =func_ov005_021649e0
    mov r0, r4
    str r1, [r5, #0x1f0]
    mov r1, #0x24
    bl func_020038a8
    str r0, [r5, #0x214]
    ldr r1, [r5, #0x214]
    mvn r0, #0x0
    strh r0, [r1, #0x0]
    mov r0, #0x0
    str r0, [r1, #0x20]
    strh r0, [r1, #0x1c]
    ldr r0, [r5, #0x1c]
    mov r1, #0x1
    ldr r0, [r0, #0x8]
    mov r2, #0x1f0000
    bl func_020782bc
    mov r1, r4
    mov r0, r5
    mov r2, #0x1
    bl func_020ca944
    ldr r2, =data_ov005_02165f5c
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205ece8
    add r0, sp, #0x0
    bl func_0207e0d0
    mov r1, #0x0
    bl func_02078714
    ldr r4, [r5, #0x78]
    mov r1, r0
    mov r0, r4
    bl func_020c93d4
    mov r0, #0x0
    swpb r0, r0, [r4]
    mov r0, #0x1000
    str r0, [r4, #0x8]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
