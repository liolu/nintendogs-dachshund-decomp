#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021377bc[];
// clang-format off
asm void func_02023640(void) {
    stmfd sp!, {r4, lr}
    ldrh lr, [r0, #0xf2]
    ldrb r4, [r0, #0xc7]
    cmp lr, #0x4f
    blo L_0202366c
    cmp lr, #0x63
    ldrlo ip, =data_021377bc
    movlo r3, #0xa
    ldrlo ip, [ip, #0x13c]
    mlalo r3, r4, r3, ip
    blo L_0202367c
L_0202366c:
    ldr ip, =data_021377bc
    mov r3, #0xa
    ldr ip, [ip, lr, lsl #0x2]
    mla r3, r4, r3, ip
L_0202367c:
    cmp r1, #0x4f
    blo L_0202369c
    cmp r1, #0x63
    ldrlo lr, =data_021377bc
    movlo ip, #0xa
    ldrlo lr, [lr, #0x13c]
    mlalo r4, r2, ip, lr
    blo L_020236ac
L_0202369c:
    ldr lr, =data_021377bc
    mov ip, #0xa
    ldr lr, [lr, r1, lsl #0x2]
    mla r4, r2, ip, lr
L_020236ac:
    ldrsh ip, [r0, #0xec]
    cmp ip, #0x3d
    blt L_020236c4
    cmp ip, #0x4b
    ldmlefd sp!, {r4, lr}
    bxle lr
L_020236c4:
    cmp ip, #0x134
    blt L_020236d8
    cmp ip, #0x13c
    ldmlefd sp!, {r4, lr}
    bxle lr
L_020236d8:
    ldrb lr, [r3, #0x4]
    ldrb ip, [r4, #0x4]
    cmp lr, ip
    bne L_0202370c
    ldrb lr, [r3, #0x5]
    ldrb ip, [r4, #0x5]
    cmp lr, ip
    bne L_0202370c
    ldrb ip, [r3, #0x3]
    ldrb r3, [r4, #0x3]
    cmp ip, r3
    ldmhifd sp!, {r4, lr}
    bxhi lr
L_0202370c:
    add ip, r0, #0xc6
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0xc7
    strh r1, [r0, #0xf2]
    swpb r1, r2, [r3]
    add r0, r0, #0x100
    mov r1, #0xb4
    strh r1, [r0, #0x24]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
