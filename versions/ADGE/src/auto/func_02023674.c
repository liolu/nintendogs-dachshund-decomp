#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02138ed4[];
// clang-format off
asm void func_02023674(void) {
    stmfd sp!, {r4, lr}
    ldrh lr, [r0, #0xf2]
    ldrb r4, [r0, #0xa6]
    cmp lr, #0x4f
    blo L_020236a0
    cmp lr, #0x63
    ldrlo ip, =data_02138ed4
    movlo r3, #0xa
    ldrlo ip, [ip, #0x13c]
    mlalo r3, r4, r3, ip
    blo L_020236b0
L_020236a0:
    ldr ip, =data_02138ed4
    mov r3, #0xa
    ldr ip, [ip, lr, lsl #0x2]
    mla r3, r4, r3, ip
L_020236b0:
    cmp r1, #0x4f
    blo L_020236d0
    cmp r1, #0x63
    ldrlo lr, =data_02138ed4
    movlo ip, #0xa
    ldrlo lr, [lr, #0x13c]
    mlalo r4, r2, ip, lr
    blo L_020236e0
L_020236d0:
    ldr lr, =data_02138ed4
    mov ip, #0xa
    ldr lr, [lr, r1, lsl #0x2]
    mla r4, r2, ip, lr
L_020236e0:
    ldrsh ip, [r0, #0xee]
    cmp ip, #0x3d
    blt L_020236f8
    cmp ip, #0x4b
    ldmlefd sp!, {r4, lr}
    bxle lr
L_020236f8:
    cmp ip, #0x134
    blt L_0202370c
    cmp ip, #0x13c
    ldmlefd sp!, {r4, lr}
    bxle lr
L_0202370c:
    ldrb lr, [r3, #0x4]
    ldrb ip, [r4, #0x4]
    cmp lr, ip
    bne L_02023740
    ldrb lr, [r3, #0x5]
    ldrb ip, [r4, #0x5]
    cmp lr, ip
    bne L_02023740
    ldrb ip, [r3, #0x3]
    ldrb r3, [r4, #0x3]
    cmp ip, r3
    ldmhifd sp!, {r4, lr}
    bxhi lr
L_02023740:
    add ip, r0, #0xa4
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0xa6
    strh r1, [r0, #0xf2]
    swpb r1, r2, [r3]
    add r0, r0, #0x100
    mov r1, #0xb4
    strh r1, [r0, #0x16]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
