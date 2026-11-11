#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214affc[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215c7b8(void) {
    ldr r1, =data_0214affc
    mov r0, #0x0
    ldrh r2, [r1, #0x2]
    and r1, r2, #0x20
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    bne L_0215ed08
    and r1, r2, #0x800
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    beq L_0215ed28
L_0215ed08:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    ldrb r1, [r2, #0x10]
    cmp r1, #0x0
    subne r0, r1, #0x1
    addne r1, r2, #0x10
    swpneb r0, r0, [r1]
    movne r0, #0x1
L_0215ed28:
    ldr r1, =data_0214affc
    ldrh r2, [r1, #0x2]
    and r1, r2, #0x10
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    bne L_0215ed50
    and r1, r2, #0x1
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    beq L_0215ed70
L_0215ed50:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    ldrb r1, [r2, #0x10]
    cmp r1, #0x2
    addlo r0, r1, #0x1
    addlo r1, r2, #0x10
    swplob r0, r0, [r1]
    movlo r0, #0x1
L_0215ed70:
    ldr r1, =data_0214affc
    ldrh r2, [r1, #0x2]
    and r1, r2, #0x40
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    bne L_0215ed98
    and r1, r2, #0x400
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    beq L_0215edb8
L_0215ed98:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    ldrb r1, [r2, #0x11]
    cmp r1, #0x0
    subne r0, r1, #0x1
    addne r1, r2, #0x11
    swpneb r0, r0, [r1]
    movne r0, #0x1
L_0215edb8:
    ldr r1, =data_0214affc
    ldrh r2, [r1, #0x2]
    and r1, r2, #0x80
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    bne L_0215ede0
    and r1, r2, #0x2
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    bxeq lr
L_0215ede0:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    ldrb r1, [r2, #0x11]
    cmp r1, #0x2
    addlo r0, r1, #0x1
    addlo r1, r2, #0x11
    swplob r0, r0, [r1]
    movlo r0, #0x1
    bx lr
}
// clang-format on
