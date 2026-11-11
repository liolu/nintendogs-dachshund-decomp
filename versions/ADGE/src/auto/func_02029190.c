#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02029278();
// clang-format off
asm void func_02029190(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    movs r4, r3
    mov r7, r0
    mov r6, r1
    mov r5, r2
    addmi sp, sp, #0x4
    ldmmifd sp!, {r4, r5, r6, r7, lr}
    bxmi lr
    bl func_02029278
    cmp r0, #0x0
    rsbeq r0, r6, #0x0
    moveq r0, r0, lsl #0x18
    moveq r6, r0, asr #0x18
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x0
    ble L_020291fc
    cmp r0, #0x6f
    bge L_020291fc
    cmp r6, #0x0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    cmp r6, r0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_020291fc:
    add r2, r7, #0xa8
    mov lr, #0x0
    swpb r0, lr, [r2]
    add ip, r7, #0x100
    strh lr, [ip, #0x12]
    mov r0, #0x6f
    strh r0, [r7, #0xf0]
    add r3, r7, #0xa5
    swpb r0, lr, [r3]
    add r1, r7, #0xa3
    swpb r0, lr, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    strh r6, [r7, #0xf0]
    swpb r0, r5, [r3]
    strh r4, [ip, #0x12]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
