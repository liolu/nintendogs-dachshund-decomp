#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002e48();
extern void func_02002e50();
extern void func_020038a8();
extern void func_020042d8();
extern void func_020058f0();
extern void func_020066f0();
extern void func_020068b0();
extern void func_020068b4();
extern void func_020075b8();
extern void func_02088fa4();
extern void func_0208ff8c();
extern void func_020c77e0();
extern void func_020cbea0();
extern void func_020d1164();
extern void func_020d128c();
extern void func_020d2c64();
extern void func_020d44f4();
extern void func_02120198();
extern char data_02134f10[];
extern char data_0215a07c[];
extern char func_02006724[];
extern char func_020067c8[];
extern char func_02006890[];
// clang-format off
asm void func_02120028(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    bl func_02002e50
    bl func_02002e48
    mov r3, #0xff
    mov r2, #0x0
    add r1, sp, #0x4
    mov r5, r0
    strh r3, [sp, #0x4]
    strh r2, [sp, #0x6]
    bl func_020068b4
    mov r0, r5
    mov r1, #0x4
    bl func_020068b0
    ldr r1, =func_02006890
    mov r0, #0x0
    bl func_020066f0
    ldr r1, =func_020067c8
    mov r0, #0x1
    bl func_020066f0
    ldr r1, =func_02006724
    mov r0, #0x2
    bl func_020066f0
    mov r0, r5
    mov r1, #0x0
    bl func_020c77e0
    mov r0, r5
    mov r1, #0x1
    bl func_020cbea0
    bl func_02088fa4
    cmp r0, #0x0
    beq L_021200b8
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_020d1164
L_021200b8:
    mov r0, r5
    bl func_02120198
    mov r4, r0
    mov r0, r5
    bl func_020075b8
    mov r0, r5
    mov r1, #0x10
    bl func_020038a8
    mov r2, #0x0
    strh r2, [r0, #0x0]
    strh r2, [r0, #0x2]
    str r2, [r0, #0x4]
    ldr r1, =data_02134f10
    str r2, [r0, #0x8]
    ldrb r1, [r1, #0x0]
    add r2, r0, #0xc
    ldr r3, =data_0215a07c
    swpb r1, r1, [r2]
    str r0, [r3, #0x0]
    mov r0, r4
    bl func_020042d8
    bl func_020d44f4
    bl func_020d128c
    cmp r0, #0x0
    beq L_02120140
    mov r0, #0x0
    ldr r1, =0x4b1
    mov r2, r0
    mov r3, r0
    str r0, [sp, #0x0]
    bl func_020d2c64
    mov r0, #0x43
    bl func_0208ff8c
    b L_0212016c
L_02120140:
    ldr r1, =data_0215a07c
    mov r2, #0x0
    ldr r3, [r1, #0x0]
    mov r0, #0x1
    strh r0, [r3, #0x0]
    ldr r3, [r1, #0x0]
    ldr r1, =0x838
    strh r2, [r3, #0x2]
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_020d2c64
L_0212016c:
    bl func_020058f0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
