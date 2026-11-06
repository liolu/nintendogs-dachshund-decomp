#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c4eb4();
extern void func_020c4ef0();
extern char data_0212fd08[];
extern char data_0212fd50[];
extern char data_0212fd60[];
extern char data_02154cac[];
// clang-format off
asm void func_020e1844(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r4, =data_02154cac
    ldr r3, [r4, #0x0]
    ldr r1, [r3, #0x18]
    cmp r1, r0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsb r2, [r3, #0x12]
    mvn r1, #0x0
    cmp r2, r1
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    mov r1, #0x18
    mul r2, r0, r1
    str r0, [r3, #0x18]
    ldr r1, =data_0212fd60
    ldr r0, [r4, #0x0]
    ldrsb r3, [r1, r2]
    add r1, r0, #0x12
    ldr r2, =data_0212fd08
    swpb r0, r3, [r1]
    mov r8, #0x0
    ldrb r9, [r2, #0x2]
    mov r6, r8
    mov r5, r8
L_020e18b4:
    mov r7, r5
    cmp r9, #0x0
    ble L_020e18ec
L_020e18c0:
    ldr r2, [r4, #0x0]
    add r0, r6, r2
    add r0, r0, r7, lsl #0x2
    ldr r1, [r0, #0x190]
    cmp r1, #0x0
    beq L_020e18e0
    add r0, r2, #0x230
    bl func_020c4eb4
L_020e18e0:
    add r7, r7, #0x1
    cmp r7, r9
    blt L_020e18c0
L_020e18ec:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r6, r6, #0x14
    blt L_020e18b4
    mov r8, #0x0
    mov r10, r8
    ldr r5, =data_02154cac
    ldr r6, =data_0212fd50
    mov r11, r8
    mov r4, #0x18
L_020e1914:
    mov r7, r11
    cmp r9, #0x0
    ble L_020e1960
L_020e1920:
    ldr r0, [r5, #0x0]
    ldr r2, [r0, #0x14]
    mla r1, r2, r4, r6
    ldrsb r1, [r1, #0x10]
    cmp r8, r1
    bne L_020e1954
    add r1, r10, r0
    add r1, r1, r7, lsl #0x2
    ldr r1, [r1, #0x190]
    cmp r1, #0x0
    beq L_020e1954
    add r0, r0, #0x230
    bl func_020c4ef0
L_020e1954:
    add r7, r7, #0x1
    cmp r7, r9
    blt L_020e1920
L_020e1960:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r10, r10, #0x14
    blt L_020e1914
    mov r8, #0x0
    mov r10, r8
    ldr r5, =data_02154cac
    ldr r6, =data_0212fd50
    mov r11, r8
    mov r4, #0x18
L_020e1988:
    mov r7, r11
    cmp r9, #0x0
    ble L_020e19d4
L_020e1994:
    ldr r0, [r5, #0x0]
    ldr r2, [r0, #0x14]
    mla r1, r2, r4, r6
    ldrsb r1, [r1, #0x10]
    cmp r8, r1
    beq L_020e19c8
    add r1, r10, r0
    add r1, r1, r7, lsl #0x2
    ldr r1, [r1, #0x190]
    cmp r1, #0x0
    beq L_020e19c8
    add r0, r0, #0x230
    bl func_020c4ef0
L_020e19c8:
    add r7, r7, #0x1
    cmp r7, r9
    blt L_020e1994
L_020e19d4:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r10, r10, #0x14
    blt L_020e1988
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
