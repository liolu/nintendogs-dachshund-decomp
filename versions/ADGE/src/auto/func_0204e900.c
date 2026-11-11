#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202706c();
extern void func_020276f8();
extern void func_02027700();
extern void func_0202fa5c();
extern void func_02035fcc();
extern void func_02035fd8();
extern void func_02036258();
extern void func_0203e5e8();
extern void func_0204469c();
extern char data_0214da84[];
// clang-format off
asm void func_0204e900(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldrsh r3, [r4, #0xea]
    ldr r2, =0x2fe
    mov r5, r0
    cmp r3, r2
    beq L_0204e938
    ldr r2, =0x2ff
    cmp r3, r2
    beq L_0204eda8
    cmp r3, #0x300
    beq L_0204edec
    b L_0204f130
L_0204e938:
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204eb80
    cmp r0, #0x0
    beq L_0204eb80
    cmp r0, #0x1
    bne L_0204f130
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204e9a8
    cmp r0, #0x1
    beq L_0204ea04
    cmp r0, #0x2
    beq L_0204eac8
    b L_0204f130
L_0204e9a8:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x2
    bne L_0204e9d4
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e9d4:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ea04:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_0204ea30
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ea30:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
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
    beq L_0204ea80
    cmp r0, #0x1
    beq L_0204ea9c
    b L_0204eab8
L_0204ea80:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ea9c:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eab8:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eac8:
    bl func_0204469c
    ands r0, r0, #0x100
    bne L_0204eae8
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eae8:
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204eb20
    ldrsb r0, [r4, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204eb30
L_0204eb20:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb30:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e5e8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x18
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb80:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204ebd0
    cmp r0, #0x1
    beq L_0204ec2c
    cmp r0, #0x2
    beq L_0204ecf0
    b L_0204f130
L_0204ebd0:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x2
    bne L_0204ebfc
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ebfc:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ec2c:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_0204ec58
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ec58:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
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
    beq L_0204eca8
    cmp r0, #0x1
    beq L_0204ecc4
    b L_0204ece0
L_0204eca8:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ecc4:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ece0:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ecf0:
    bl func_0204469c
    ands r0, r0, #0x100
    bne L_0204ed10
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ed10:
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204ed48
    ldrsb r0, [r4, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204ed58
L_0204ed48:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ed58:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e5e8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x18
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eda8:
    bl func_02035fd8
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204edec:
    bl func_02027700
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f00c
    cmp r0, #0x0
    beq L_0204efc4
    cmp r0, #0x1
    bne L_0204f130
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
    beq L_0204ee48
    cmp r0, #0x1
    beq L_0204ef0c
    b L_0204f130
L_0204ee48:
    mov r0, r5
    bl func_02036258
    mov r4, r0
    bl func_0204469c
    ands r0, r0, #0x20
    bne L_0204ee74
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ee74:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
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
    beq L_0204eec4
    cmp r0, #0x1
    beq L_0204eee0
    b L_0204eefc
L_0204eec4:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eee0:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eefc:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef0c:
    bl func_0204469c
    ands r0, r0, #0x100
    bne L_0204ef2c
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef2c:
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204ef64
    ldrsb r0, [r4, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204ef74
L_0204ef64:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef74:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e5e8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x18
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204efc4:
    mov r0, r5
    bl func_02035fd8
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f00c:
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
    beq L_0204f048
    cmp r0, #0x1
    beq L_0204f078
    b L_0204f130
L_0204f048:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x11
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f078:
    bl func_0204469c
    ands r0, r0, #0x100
    bne L_0204f098
    mov r0, r5
    bl func_0202fa5c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f098:
    ldrsb r0, [r5, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204f0d0
    ldrsb r0, [r4, #0x8b]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204f0e0
L_0204f0d0:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f0e0:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    ldr r1, =0x273
    mov r0, r5
    bl func_0203e5e8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r4
    mov r1, #0x16
    bl func_0202706c
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f130:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
