#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020234c4();
extern void func_020240d0();
extern void func_02027f54();
extern void func_02027fdc();
extern void func_020286ec();
extern void func_0202c938();
extern void func_0202d5d0();
extern void func_020351a0();
extern void func_020352c0();
extern void func_02035ff4();
extern void func_0203b6e4();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_020eae44();
extern void func_020f1b0c();
extern void func_020f1c84();
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0218a8d4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02035ff4
    ldr r0, =data_02153720
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrsh r0, [r4, #0xfa]
    cmp r0, #0x22
    moveq r0, #0x190
    streq r0, [r4, #0x490]
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x50]
    cmp r1, #0x110
    bgt L_0218a94c
    ldr r0, =0x10e
    cmp r1, r0
    blt L_0218ab14
    cmp r1, r0
    beq L_0218aa94
    ldr r0, =0x10f
    cmp r1, r0
    beq L_0218aa94
    cmp r1, #0x110
    beq L_0218aa94
    b L_0218ab14
L_0218a94c:
    cmp r1, #0x14c
    bne L_0218ab14
    ldrsh r0, [r4, #0xfa]
    cmp r0, #0x22
    bne L_0218a9d0
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr ip, [r0, #0x0]
    mov r0, r4
    ldr r3, [ip, #0x0]
    mov r1, #0x2
    mul r2, r3, r2
    add r5, r2, #0x1
    str r5, [ip, #0x0]
    bl func_02027fdc
    mov r1, r5, lsl #0x10
    ldr r2, =0x1388
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r0, r1, r0
    mov r0, r0, asr #0x7
    str r0, [r4, #0x48c]
    ldr r0, [r4, #0x48c]
    str r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    movle r0, #0x1
    strle r0, [r4, #0x488]
    mov r0, #0x0
    strh r0, [r4, #0xfa]
L_0218a9d0:
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    ble L_0218ab14
    sub r0, r0, #0x1
    str r0, [r4, #0x488]
    ldr r0, [r4, #0x488]
    cmp r0, #0x0
    bne L_0218ab14
    ldr r0, [r4, #0x48c]
    cmp r0, #0xa
    bge L_0218aa2c
    ldr r2, =0x10e
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x5
    str r0, [r4, #0x488]
    mov r0, #0x11
    str r0, [r4, #0x48c]
    b L_0218ab14
L_0218aa2c:
    cmp r0, #0x14
    bge L_0218aa64
    ldr r2, =0x10f
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0xa
    str r0, [r4, #0x488]
    mov r0, #0x11
    str r0, [r4, #0x48c]
    b L_0218ab14
L_0218aa64:
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x110
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0xf
    str r0, [r4, #0x488]
    mov r0, #0x12
    str r0, [r4, #0x48c]
    b L_0218ab14
L_0218aa94:
    mov r0, #0x0
    strh r0, [r4, #0xfa]
    ldr r1, [r4, #0x488]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_020352c0
    cmp r0, #0x0
    beq L_0218aadc
    ldr r0, =0x958
    ldr r1, [r4, #0x48c]
    ldr r2, [r4, #0x4a8]
    add r0, r4, r0
    bl func_020eae44
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x32
    bl func_02027f54
L_0218aadc:
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    beq L_0218ab14
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x14c
    bl func_0203e280
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r4, #0x488]
    str r0, [r4, #0x48c]
L_0218ab14:
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0xa
    bls L_0218abf4
    mov r0, r4
    bl func_0202d5d0
    cmp r0, #0x0
    beq L_0218abf4
    ldrb r0, [r4, #0xc4]
    cmp r0, #0x1
    beq L_0218ab4c
    cmp r0, #0x3
    beq L_0218ab98
    b L_0218abf4
L_0218ab4c:
    ldrsh r0, [r4, #0xf0]
    ldr r2, [r4, #0x494]
    sub r0, r0, #0x5b
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    cmp r1, r2
    beq L_0218ab74
    mov r0, r4
    str r1, [r4, #0x494]
    bl func_020f1c84
L_0218ab74:
    add r0, r4, #0x100
    ldrh r1, [r0, #0x30]
    add r1, r1, #0x1
    strh r1, [r0, #0x30]
    ldr r0, [r4, #0x490]
    cmp r0, #0x78
    movgt r0, #0x78
    strgt r0, [r4, #0x490]
    b L_0218abf4
L_0218ab98:
    ldrsh r0, [r4, #0xf0]
    ldr r1, [r4, #0x494]
    sub r0, r0, #0x5b
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    cmp r5, r1
    beq L_0218abf4
    mov r0, r4
    bl func_0203b6e4
    mov r1, r0
    mov r0, r4
    mov r2, #0x1
    bl func_020234c4
    mov r1, r0
    mov r0, r4
    bl func_020240d0
    str r5, [r4, #0x494]
    cmp r0, #0x0
    beq L_0218abf4
    ldrh r2, [r0, #0x2]
    mov r0, r4
    mov r1, r5
    bl func_020f1b0c
L_0218abf4:
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_020286ec
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_0202d5d0
    cmp r0, #0x0
    bne L_0218ac40
    mov r0, r4
    mov r1, #0x1
    bl func_0202c938
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
L_0218ac40:
    ldr r0, [r4, #0x490]
    sub r0, r0, #0x1
    str r0, [r4, #0x490]
    ldr r0, [r4, #0x490]
    cmp r0, #0x0
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0218ac9c
    bl func_02044630
    ldrsb r1, [r4, #0x88]
    cmp r1, r0
    bne L_0218ac9c
    mov r0, r4
    mov r1, #0xef
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0218ac9c:
    mov r0, r4
    mov r1, #0x4d
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
