#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027658();
extern void func_020276f8();
extern void func_0202774c();
extern void func_0202daec();
extern void func_020382c4();
extern void func_0203913c();
extern void func_0203e5e8();
extern char data_0214da84[];
// clang-format off
asm void func_02057d5c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_0202774c
    cmp r0, #0x0
    beq L_02058164
    cmp r0, #0x1
    beq L_02057f78
    cmp r0, #0x2
    bne L_020583d8
    ldr r0, =data_0214da84
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02057de4
    cmp r0, #0x1
    beq L_02057e24
    cmp r0, #0x2
    beq L_02057e78
    b L_02057f34
L_02057de4:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057e24:
    cmp r4, #0x0
    beq L_02057e68
    mov r0, r5
    bl func_0202daec
    cmp r0, #0x0
    bne L_02057e68
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057e68:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057e78:
    cmp r4, #0x0
    beq L_02057f24
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057f24
L_02057ea4:
    b L_02057eb4
    b L_02057ed0
    b L_02057eec
    b L_02057f08
L_02057eb4:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ed0:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057eec:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f08:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f24:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f34:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057f78:
    ldr r0, =data_0214da84
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02057fd0
    cmp r0, #0x1
    beq L_02058010
    cmp r0, #0x2
    beq L_02058064
    b L_02058120
L_02057fd0:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058010:
    cmp r4, #0x0
    beq L_02058054
    mov r0, r5
    bl func_0202daec
    cmp r0, #0x0
    bne L_02058054
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058054:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058064:
    cmp r4, #0x0
    beq L_02058110
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02058110
L_02058090:
    b L_020580a0
    b L_020580bc
    b L_020580d8
    b L_020580f4
L_020580a0:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020580bc:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020580d8:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020580f4:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058110:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058120:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0xc
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0xc
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058164:
    ldr r0, =data_0214da84
    add r1, r6, #0x4
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02058394
L_020581b0:
    b L_020581c4
    b L_02058204
    b L_02058258
    b L_02058298
    b L_020582d8
L_020581c4:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058204:
    cmp r4, #0x0
    beq L_02058248
    mov r0, r5
    bl func_0202daec
    cmp r0, #0x0
    bne L_02058248
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058248:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058258:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058298:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020582d8:
    cmp r4, #0x0
    beq L_02058384
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02058384
L_02058304:
    b L_02058314
    b L_02058330
    b L_0205834c
    b L_02058368
L_02058314:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058330:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205834c:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058368:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058384:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02058394:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x18
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0x18
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020583d8:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
