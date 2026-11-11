#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202706c();
extern void func_020276f8();
extern void func_02027700();
extern void func_0202f9a0();
extern void func_0202fa5c();
extern void func_02035fcc();
extern void func_02035fd8();
extern void func_02036258();
extern void func_02039268();
extern void func_0203e5e8();
extern void func_0204469c();
extern char data_0214da84[];
// clang-format off
asm void func_0204e4c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r6, r1
    bl func_02036258
    ldrh r1, [r4, #0xfc]
    mov r5, r0
    cmp r1, #0x1f4
    bls L_0204e4fc
    mov r0, r4
    bl func_02035fd8
    mov r0, r4
    bl func_0202fa5c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e4fc:
    cmp r5, #0x0
    bne L_0204e51c
    mov r0, r4
    bl func_02035fd8
    mov r0, r4
    bl func_0202f9a0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e51c:
    cmp r1, #0x1f4
    bne L_0204e6e4
    cmp r6, #0x2
    bgt L_0204e580
    mov r0, r4
    bl func_02035fd8
    mov r0, r4
    bl func_02039268
    cmp r0, #0x0
    bne L_0204e574
    cmp r5, #0x0
    beq L_0204e574
    mov r0, r5
    bl func_020276f8
    add r1, r4, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x303
    mov r0, r4
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e574:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e580:
    mov r0, r4
    mov r1, r5
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204e6ac
    cmp r0, #0x0
    beq L_0204e658
    cmp r0, #0x1
    bne L_0204e6d8
    mov r0, r4
    bl func_02036258
    mov r5, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_0204e5d0
    mov r0, r4
    bl func_0202fa5c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e5d0:
    cmp r5, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204e61c
    cmp r0, #0x1
    beq L_0204e634
    b L_0204e64c
L_0204e61c:
    ldr r1, =0x2cd
    mov r0, r4
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e634:
    ldr r1, =0x2ce
    mov r0, r4
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e64c:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e658:
    mov r0, r4
    bl func_02035fd8
    mov r0, r4
    bl func_02039268
    cmp r0, #0x0
    bne L_0204e6a0
    cmp r5, #0x0
    beq L_0204e6a0
    mov r0, r5
    bl func_020276f8
    add r1, r4, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x303
    mov r0, r4
    bl func_0203e5e8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e6a0:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e6ac:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r5
    mov r1, #0x11
    bl func_0202706c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e6d8:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e6e4:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
