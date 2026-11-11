#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020234f8();
extern void func_02024104();
extern void func_02027f7c();
extern void func_02028004();
extern void func_02028714();
extern void func_0202c9f0();
extern void func_0202d6c0();
extern void func_0203535c();
extern void func_0203547c();
extern void func_020361ac();
extern void func_0203b920();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_0208a53c();
extern void func_02091344();
extern void func_020914bc();
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0218cbd4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_020361ac
    ldr r0, =data_0215a064
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrsh r0, [r4, #0xfa]
    cmp r0, #0x22
    moveq r0, #0x190
    streq r0, [r4, #0x46c]
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x52]
    cmp r1, #0x110
    bgt L_0218cc4c
    ldr r0, =0x10e
    cmp r1, r0
    blt L_0218ce18
    cmp r1, r0
    beq L_0218cd98
    ldr r0, =0x10f
    cmp r1, r0
    beq L_0218cd98
    cmp r1, #0x110
    beq L_0218cd98
    b L_0218ce18
L_0218cc4c:
    ldr r0, =0x14d
    cmp r1, r0
    bne L_0218ce18
    ldrsh r0, [r4, #0xfa]
    cmp r0, #0x22
    bne L_0218ccd4
    ldr r0, =data_0214da84
    ldr r2, =0x10dcd
    ldr ip, [r0, #0x0]
    mov r0, r4
    ldr r3, [ip, #0x0]
    mov r1, #0x2
    mul r2, r3, r2
    add r5, r2, #0x1
    str r5, [ip, #0x0]
    bl func_02028004
    mov r1, r5, lsl #0x10
    ldr r2, =0x1388
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r0, r1, r0
    mov r0, r0, asr #0x7
    str r0, [r4, #0x468]
    ldr r0, [r4, #0x468]
    str r0, [r4, #0x464]
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    movle r0, #0x1
    strle r0, [r4, #0x464]
    mov r0, #0x0
    strh r0, [r4, #0xfa]
L_0218ccd4:
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    ble L_0218ce18
    sub r0, r0, #0x1
    str r0, [r4, #0x464]
    ldr r0, [r4, #0x464]
    cmp r0, #0x0
    bne L_0218ce18
    ldr r0, [r4, #0x468]
    cmp r0, #0xa
    bge L_0218cd30
    ldr r2, =0x10e
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x5
    str r0, [r4, #0x464]
    mov r0, #0x11
    str r0, [r4, #0x468]
    b L_0218ce18
L_0218cd30:
    cmp r0, #0x14
    bge L_0218cd68
    ldr r2, =0x10f
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0xa
    str r0, [r4, #0x464]
    mov r0, #0x11
    str r0, [r4, #0x468]
    b L_0218ce18
L_0218cd68:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x110
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0xf
    str r0, [r4, #0x464]
    mov r0, #0x12
    str r0, [r4, #0x468]
    b L_0218ce18
L_0218cd98:
    mov r0, #0x0
    strh r0, [r4, #0xfa]
    ldr r1, [r4, #0x464]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203547c
    cmp r0, #0x0
    beq L_0218cde0
    ldr r0, =0x95c
    ldr r1, [r4, #0x468]
    ldr r2, [r4, #0x484]
    add r0, r4, r0
    bl func_0208a53c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027f7c
L_0218cde0:
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    beq L_0218ce18
    ldr r2, =0x14d
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r4, #0x464]
    str r0, [r4, #0x468]
L_0218ce18:
    ldrh r0, [r4, #0xfc]
    cmp r0, #0xa
    bls L_0218cef4
    mov r0, r4
    bl func_0202d6c0
    cmp r0, #0x0
    beq L_0218cef4
    ldrb r0, [r4, #0xa5]
    cmp r0, #0x1
    beq L_0218ce4c
    cmp r0, #0x3
    beq L_0218ce98
    b L_0218cef4
L_0218ce4c:
    ldrsh r0, [r4, #0xf0]
    ldr r2, [r4, #0x470]
    sub r0, r0, #0x5b
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    cmp r1, r2
    beq L_0218ce74
    mov r0, r4
    str r1, [r4, #0x470]
    bl func_020914bc
L_0218ce74:
    add r0, r4, #0x100
    ldrh r1, [r0, #0x22]
    add r1, r1, #0x1
    strh r1, [r0, #0x22]
    ldr r0, [r4, #0x46c]
    cmp r0, #0x78
    movgt r0, #0x78
    strgt r0, [r4, #0x46c]
    b L_0218cef4
L_0218ce98:
    ldrsh r0, [r4, #0xf0]
    ldr r1, [r4, #0x470]
    sub r0, r0, #0x5b
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    cmp r5, r1
    beq L_0218cef4
    mov r0, r4
    bl func_0203b920
    mov r1, r0
    mov r0, r4
    mov r2, #0x1
    bl func_020234f8
    mov r1, r0
    mov r0, r4
    bl func_02024104
    str r5, [r4, #0x470]
    cmp r0, #0x0
    beq L_0218cef4
    ldrh r2, [r0, #0x2]
    mov r0, r4
    mov r1, r5
    bl func_02091344
L_0218cef4:
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_02028714
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_0202d6c0
    cmp r0, #0x0
    bne L_0218cf40
    mov r0, r4
    mov r1, #0x1
    bl func_0202c9f0
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
L_0218cf40:
    ldr r0, [r4, #0x46c]
    sub r0, r0, #0x1
    str r0, [r4, #0x46c]
    ldr r0, [r4, #0x46c]
    cmp r0, #0x0
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0218cf9c
    bl func_0204496c
    ldrsb r1, [r4, #0x88]
    cmp r1, r0
    bne L_0218cf9c
    mov r0, r4
    mov r1, #0xef
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0218cf9c:
    mov r0, r4
    mov r1, #0x4d
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
