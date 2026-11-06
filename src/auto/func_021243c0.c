#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0205e950();
extern void func_02078f8c();
extern void func_0207e718();
extern void func_020c3dd0();
extern void func_020c3ff8();
extern void func_020c536c();
extern void func_020c53b4();
extern void func_020deefc();
extern void func_020defa0();
extern void func_02107ca4();
extern char data_0214a58c[];
extern char data_0214a59c[];
extern char func_02123d0c[];
extern char func_0212423c[];
extern char func_021243b4[];
// clang-format off
asm void func_021243c0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x80
    mov r6, r1
    mov r1, #0x4d
    mov r4, r0
    bl func_02107ca4
    ldr r1, =func_0212423c
    ldr r0, =func_02123d0c
    str r1, [r4, #0x1f4]
    str r0, [r4, #0x1f8]
    ldr r1, =func_021243b4
    mov r0, r6
    str r1, [r4, #0x1f0]
    mov r1, #0x8
    bl func_02003844
    str r0, [r4, #0x214]
    ldr r5, [r4, #0x214]
    mov r0, #0x1f
    bl func_020defa0
    str r0, [r5, #0x0]
    mov r0, #0x1f
    mov r1, r4
    bl func_020deefc
    mov r0, r4
    mov r1, r6
    mov r2, #0x1
    bl func_020c53b4
    ldr r2, =data_0214a58c
    ldr r3, [r4, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    mov r1, #0x0
    bl func_02078f8c
    ldr r5, [r4, #0x74]
    mov r1, r0
    mov r0, r5
    bl func_020c3ff8
    mov r3, #0x0
    add r2, r5, #0x14
    swpb r0, r3, [r2]
    mov r1, r6
    str r3, [r5, #0x1c]
    mov r0, r4
    str r3, [r5, #0x20]
    mov r2, #0x1
    bl func_020c536c
    ldr r2, =data_0214a59c
    ldr r3, [r4, #0x1ec]
    add r0, sp, #0x40
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x40
    bl func_0207e718
    mov r1, #0x0
    bl func_02078f8c
    ldr r4, [r4, #0x7c]
    mov r1, r0
    mov r0, r4
    bl func_020c3dd0
    mov r1, #0x0
    swpb r0, r1, [r4]
    str r1, [r4, #0x8]
    str r1, [r4, #0xc]
    add sp, sp, #0x80
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
