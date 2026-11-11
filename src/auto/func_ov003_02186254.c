#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022b6c();
extern void func_02026e58();
extern void func_020298c0();
extern void func_0202c2b8();
extern void func_0203e5e8();
extern void func_ov003_0218a0f0();
extern char data_0214da84[];
// clang-format off
asm void func_ov003_02186254(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldrh r0, [r5, #0xfc]
    mov r4, #0x0
    cmp r0, #0x3c
    bls L_021862a8
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x1e
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    moveq r4, #0x1
L_021862a8:
    mov r0, r5
    bl func_02022b6c
    mov r0, r5
    bl func_02026e58
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl func_ov003_0218a0f0
    cmp r6, #0x0
    add r0, r5, #0x100
    mov r3, #0x1
    strh r3, [r0, #0x1c]
    mov r2, #0x0
    addne r1, r5, #0xb9
    strh r2, [r0, #0x1e]
    swpneb r0, r3, [r1]
    addeq r1, r5, #0xb9
    swpeqb r0, r2, [r1]
    mov r1, #0x4
    mov r0, r5
    bl func_0202c2b8
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02186328
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x1f
    mov r3, #0x0
    bl func_020298c0
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_02186328:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r1, =0x172
    mov r0, r5
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
