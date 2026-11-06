#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c883c();
extern void func_020c88ec();
extern void func_020c9748();
extern void func_020c97b4();
extern void func_020c9d30();
extern void func_020ca9a0();
extern void func_020cab5c();
extern void func_020cab94();
extern void func_020cac44();
extern void func_020cb884();
extern void func_020cb8a8();
extern void func_020cb8cc();
extern void func_020cb8ec();
extern void func_020cb90c();
// clang-format off
asm void func_02091bb8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r9, #0x1
    mov r10, r0
    bl func_020cb8ec
    cmp r0, #0x1
    moveq r0, r9
    streq r0, [r10, #0xc]
    addeq sp, sp, #0x14
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    bl func_020cb8cc
    cmp r0, #0x1
    ldr r0, [r10, #0x2c]
    mov r1, #0x3
    mov r2, #0x0
    moveq r9, #0x0
    bl func_020cb90c
    mov r5, #0x0
    cmp r0, #0x1
    moveq r9, #0x0
    mov r4, r5
L_02091c14:
    mov r0, r5
    bl func_020cb8a8
    cmp r0, #0x1
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    moveq r9, r4
    cmp r5, #0x3
    blt L_02091c14
    mov r7, #0x0
    ldr r4, =0xffff
    mov r5, r7
L_02091c44:
    mov r0, r7
    bl func_020cac44
    mov r6, r0
    mov r0, r7
    bl func_020cb884
    ldrh r1, [r6, #0x0]
    cmp r1, r4
    beq L_02091c78
    cmp r0, #0x1
    bne L_02091c78
    mov r0, r7
    bl func_020cab94
    mov r9, r5
L_02091c78:
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    blt L_02091c44
    mov r4, #0x0
    add r5, sp, #0x4
    mov r8, r4
    mov r3, #0x1
    mvn r2, #0x0
L_02091ca0:
    add r1, r5, #0x2
    swpb r0, r3, [r1]
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    strh r2, [r5, #0x0]
    add r1, r5, #0x3
    cmp r4, #0x3
    swpb r0, r8, [r1]
    add r5, r5, #0x4
    blt L_02091ca0
    ldr r11, =0xffff
    add r5, sp, #0x4
    mvn r7, #0x0
    mov r6, #0x0
    mov r4, #0x1
L_02091ce0:
    mov r0, r8
    bl func_020cac44
    ldrh r1, [r0, #0x0]
    cmp r1, r11
    beq L_02091d98
    ldrsh r0, [r0, #0x6]
    cmp r0, #0x0
    blt L_02091d98
    mov r1, r7
    mov r3, r6
L_02091d08:
    mov r2, r3, lsl #0x2
    ldrsh r2, [r5, r2]
    cmp r0, r2
    moveq r1, r3
    beq L_02091d30
    add r2, r3, #0x1
    mov r2, r2, lsl #0x10
    mov r3, r2, asr #0x10
    cmp r3, #0x3
    blt L_02091d08
L_02091d30:
    cmp r1, #0x0
    bge L_02091d84
    mov r2, r7
    mov r1, r6
L_02091d40:
    mov r3, r1, lsl #0x2
    ldrsh ip, [r5, r3]
    mvn r3, #0x0
    cmp ip, r3
    moveq r2, r1
    beq L_02091d6c
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    cmp r1, #0x3
    blt L_02091d40
L_02091d6c:
    mov r3, r2, lsl #0x2
    add r1, r5, r2, lsl #0x2
    strh r0, [r5, r3]
    add r1, r1, #0x3
    swpb r0, r4, [r1]
    b L_02091d98
L_02091d84:
    add r1, r5, r1, lsl #0x2
    ldrsb r0, [r1, #0x3]
    add r1, r1, #0x3
    add r0, r0, #0x1
    swpb r0, r0, [r1]
L_02091d98:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x3
    blt L_02091ce0
    mov r8, #0x0
    ldr r4, =0xffff
    add r7, sp, #0x4
    mov r11, r8
    mov r5, #0x1
L_02091dc0:
    ldrsh r1, [r7, #0x0]
    cmp r1, #0x0
    blt L_02091e24
    mov r0, r5
    bl func_020c9d30
    ldrsb r1, [r7, #0x3]
    cmp r1, r0
    ble L_02091e24
    mov r6, r11
L_02091de4:
    mov r0, r6
    bl func_020cac44
    ldrh r1, [r0, #0x0]
    cmp r1, r4
    beq L_02091e10
    ldrsh r1, [r0, #0x6]
    ldrsh r0, [r7, #0x0]
    cmp r1, r0
    bne L_02091e10
    mov r0, r6
    bl func_020cab5c
L_02091e10:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x3
    blt L_02091de4
L_02091e24:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x3
    add r7, r7, #0x4
    blt L_02091dc0
    mov r8, #0x0
    mov r4, r8
    mov r11, r8
    str r8, [sp, #0x0]
    mov r5, #0x4
L_02091e50:
    mov r2, r8, lsl #0x10
    ldr r0, [r10, #0x2c]
    mov r1, r5
    mov r2, r2, lsr #0x10
    bl func_020cb90c
    cmp r0, #0x1
    mov r0, r8
    moveq r9, r11
    bl func_020c88ec
    mov r7, r0
    ldrh r1, [r7, #0x0]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_02091efc
    ldr r6, [sp, #0x0]
L_02091e8c:
    mov r0, r6
    bl func_020cac44
    ldr r2, [r7, #0x640]
    ldr r1, [r0, #0x640]
    cmp r2, r1
    bne L_02091ee8
    ldr r2, [r7, #0x644]
    ldr r1, [r0, #0x644]
    cmp r2, r1
    bne L_02091ee8
    add r1, r7, #0x600
    add r0, r0, #0x600
    ldrh r3, [r1, #0x48]
    ldrh r2, [r0, #0x48]
    cmp r3, r2
    bne L_02091ee8
    ldrh r1, [r1, #0x4a]
    ldrh r0, [r0, #0x4a]
    cmp r1, r0
    bne L_02091ee8
    mov r0, r8
    bl func_020c883c
    mov r9, r4
L_02091ee8:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x3
    blt L_02091e8c
L_02091efc:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x5
    blt L_02091e50
    mov r8, #0x0
    ldr r4, =0xffff
    mov r5, r8
    mov r6, #0x5
L_02091f20:
    mov r0, r8
    bl func_020c88ec
    mov r7, r0
    mov r2, r8, lsl #0x10
    ldr r0, [r10, #0x2c]
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl func_020cb90c
    ldrh r1, [r7, #0x0]
    cmp r1, r4
    beq L_02091f60
    cmp r0, #0x1
    bne L_02091f60
    mov r0, r8
    bl func_020c883c
    mov r9, r5
L_02091f60:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x5
    blt L_02091f20
    bl func_020ca9a0
    cmp r0, #0x0
    bne L_02091f94
    bl func_020c97b4
    cmp r0, #0x0
    beq L_02091f94
    ldr r0, =0x7a120
    bl func_020c9748
L_02091f94:
    mov r0, r9
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
