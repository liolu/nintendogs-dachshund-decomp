#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202a0bc(void) {
    stmfd sp!, {r4, lr}
    add r1, r0, #0x100
    mov ip, #0x0
    strh ip, [r1, #0x2a]
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh r1, [r1, #0x22]
    mov r3, #0x1
    add r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs lr, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi lr, ip
    ldr r1, =0x2710
    add r2, r0, #0xd2
    cmp lr, r1
    movgt lr, r1
    ldr r1, [r0, #0x9e8]
    mov r3, #0x1
    strh lr, [r1, #0x22]
    ldr r1, [r0, #0x9e8]
    ldrsh r1, [r1, #0x1c]
    sub r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    add r2, r0, #0xd2
    cmp ip, r1
    movgt ip, r1
    ldr r1, [r0, #0x9e8]
    strh ip, [r1, #0x1c]
    ldr r3, [r0, #0x9e8]
    mov r1, #0x1
    ldrsh lr, [r3, #0x50]
    ldr r3, =0xffffec78
    ldr ip, =0x1388
    swpb r1, r1, [r2]
    add r4, lr, #0x1
    ldr lr, [r0, #0x9e8]
    ldrsh r2, [lr, #0x3c]
    add r1, r2, r3
    cmp r4, r1
    movlt r4, r1
    add r2, r2, ip
    cmp r4, r2
    movgt r4, r2
    cmp r4, #0x0
    ldr r1, =0x2710
    movlt r4, #0x0
    cmp r4, r1
    movgt r4, r1
    strh r4, [lr, #0x50]
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh ip, [r1, #0x52]
    mov r1, #0x1
    ldr r3, =0xffffec78
    swpb r1, r1, [r2]
    add r4, ip, #0x1
    ldr lr, [r0, #0x9e8]
    ldr r1, =0x1388
    ldrsh ip, [lr, #0x3e]
    add r2, ip, r3
    cmp r4, r2
    movlt r4, r2
    add r1, ip, r1
    cmp r4, r1
    movgt r4, r1
    cmp r4, #0x0
    ldr r1, =0x2710
    movlt r4, #0x0
    cmp r4, r1
    movgt r4, r1
    strh r4, [lr, #0x52]
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh ip, [r1, #0x54]
    mov r1, #0x1
    ldr r3, =0xffffec78
    swpb r1, r1, [r2]
    sub r4, ip, #0x1
    ldr lr, [r0, #0x9e8]
    ldr r1, =0x1388
    ldrsh ip, [lr, #0x40]
    add r2, ip, r3
    cmp r4, r2
    movlt r4, r2
    add r1, ip, r1
    cmp r4, r1
    movgt r4, r1
    cmp r4, #0x0
    ldr r1, =0x2710
    movlt r4, #0x0
    cmp r4, r1
    movgt r4, r1
    strh r4, [lr, #0x54]
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh ip, [r1, #0x56]
    mov r1, #0x1
    ldr r3, =0xffffec78
    swpb r1, r1, [r2]
    sub r4, ip, #0x1
    ldr lr, [r0, #0x9e8]
    ldr r1, =0x1388
    ldrsh ip, [lr, #0x42]
    add r2, ip, r3
    cmp r4, r2
    movlt r4, r2
    add r1, ip, r1
    cmp r4, r1
    movgt r4, r1
    cmp r4, #0x0
    ldr r1, =0x2710
    movlt r4, #0x0
    cmp r4, r1
    movgt r4, r1
    strh r4, [lr, #0x56]
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh ip, [r1, #0x58]
    mov r1, #0x1
    ldr r3, =0xffffec78
    swpb r1, r1, [r2]
    sub ip, ip, #0x1
    ldr lr, [r0, #0x9e8]
    ldr r1, =0x1388
    ldrsh r2, [lr, #0x44]
    add r0, r2, r3
    cmp ip, r0
    movlt ip, r0
    add r1, r2, r1
    cmp ip, r1
    movgt ip, r1
    cmp ip, #0x0
    ldr r0, =0x2710
    movlt ip, #0x0
    cmp ip, r0
    movgt ip, r0
    strh ip, [lr, #0x58]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
