#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009e8c();
extern void func_02026c08();
extern void func_02027e2c();
extern void func_020286ec();
extern void func_0202f960();
extern void func_020351a0();
extern void func_02035454();
extern void func_02035e20();
extern void func_02035ff4();
extern void func_020360f0();
extern void func_02036fbc();
extern void func_02038ef8();
extern void func_0203e2b8();
extern void func_02069634();
extern void func_0210beb4();
extern void func_ov002_02193b94();
extern void func_ov002_02195f40();
extern char data_02153708[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0218fe64(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    mov r7, r0
    bl func_02035ff4
    mov r5, #0x0
    movs r4, r0
    mov r6, r5
    beq L_0218ff08
    mov r0, r7
    bl func_02038ef8
    add r0, r4, #0xbc
    add r3, r7, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_02153720
    add r3, r7, #0x278
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =0x392
    mov r0, r7
    bl func_02036fbc
    add r0, r7, #0x3d8
    add r1, r7, #0x2a0
    add r2, sp, #0x0
    bl func_02069634
    add r0, r7, #0x278
    add r1, r7, #0x2a0
    add r2, sp, #0xc
    bl func_02069634
    add r0, sp, #0x0
    add r1, sp, #0xc
    bl func_02009e8c
    cmp r0, #0x0
    ldr r0, [r7, #0x3dc]
    moveq r5, #0x1
    cmp r0, #0x800
    movlt r6, #0x1
    movge r6, #0x0
L_0218ff08:
    mov r0, r7
    mov r1, #0x0
    mov r2, #0x1
    bl func_020286ec
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r7
    mov r1, r4
    bl func_02035454
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldr r1, [r7, #0x4ac]
    ldr r0, =data_02153708
    add r1, r1, #0x1
    str r1, [r7, #0x4ac]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_02190014
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_02190014
    cmp r4, #0x0
    beq L_0218ffcc
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0218ff98
    cmp r0, #0x2
    bne L_0218ffa0
L_0218ff98:
    mov r0, #0x1
    b L_0218ffc4
L_0218ffa0:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_0218ffc0
    mov r0, r4
    bl func_0210beb4
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0218ffc4
L_0218ffc0:
    mov r0, #0x0
L_0218ffc4:
    cmp r0, #0x0
    beq L_0218ffe8
L_0218ffcc:
    mov r0, r7
    mov r1, #0x5d
    bl func_0203e2b8
    mov r0, r7
    bl func_02035e20
    mov r0, #0x1
    b L_02190014
L_0218ffe8:
    mov r0, r7
    mov r1, r4
    bl func_02026c08
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_02190014
    mov r0, r7
    bl func_0202f960
    mov r0, r7
    bl func_02035e20
    mov r0, #0x1
L_02190014:
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsb r1, [r7, #0x88]
    ldrsh r0, [r4, #0x98]
    cmp r1, r0
    beq L_02190040
    ldrsh r0, [r7, #0xfa]
    cmp r0, #0x23
    bne L_02190048
L_02190040:
    mov r1, #0x1
    b L_0219004c
L_02190048:
    mov r1, #0x0
L_0219004c:
    mov r0, r7
    bl func_ov002_02193b94
    cmp r0, #0x0
    addne sp, sp, #0x1c
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02190094
    mov r0, r7
    mov r1, r4
    bl func_020360f0
    cmp r0, #0x0
    bne L_02190094
    mov r0, r7
    bl func_ov002_02195f40
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02190094:
    cmp r5, #0x0
    bne L_021900a4
    cmp r6, #0x0
    beq L_021900b8
L_021900a4:
    mov r0, r7
    bl func_ov002_02195f40
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021900b8:
    mov r0, r7
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldrb r0, [r7, #0xc9]
    ands r1, r0, #0x1
    bicne r0, r0, #0x1
    addne r1, r7, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_02190104
    mov r0, r7
    mov r1, #0x0
    mov r2, #0x19
    bl func_02027e2c
L_02190104:
    ldr r1, =0x3f1
    mov r0, r7
    bl func_0203e2b8
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
