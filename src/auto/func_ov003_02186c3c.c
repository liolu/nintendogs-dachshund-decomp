#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e58();
extern void func_020298c0();
extern void func_0202c2b8();
extern void func_02035450();
extern void func_0203e5e8();
extern void func_ov003_0218a0f0();
// clang-format off
asm void func_ov003_02186c3c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r1, #0x7
    bl func_02035450
    mov r4, r0
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
    mov r1, #0x1
    mov r0, r5
    bl func_0202c2b8
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02186cc8
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x1f
    mov r3, #0x0
    bl func_020298c0
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_02186cc8:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r1, =0x167
    mov r0, r5
    bl func_0203e5e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
