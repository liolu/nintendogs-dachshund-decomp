#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206b598();
extern char data_ov003_0216b864[];
extern char data_ov003_0216bb40[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215e130(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x7c
    ldr r6, =data_ov003_0216bb40
    str r2, [sp, #0x0]
    add r3, sp, #0x8
    mov r5, r0
    mov r4, r1
    mov r2, #0x3a
L_02160674:
    ldrb r0, [r6], #0x1
    ldrb r1, [r6], #0x1
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02160674
    cmp r5, #0x20
    bhs L_021606bc
    cmp r4, #0x20
    addlo r0, r5, r4, lsl #0x5
    movlo r6, r0, lsl #0x1
    subhs r0, r4, #0x20
    addhs r0, r5, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r6, r0, #0x1000
    b L_021606e4
L_021606bc:
    cmp r4, #0x20
    sublo r0, r5, #0x20
    addlo r0, r0, r4, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r6, r0, #0x800
    subhs r1, r5, #0x20
    subhs r0, r4, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r6, r0, #0x1800
L_021606e4:
    bl func_0206b598
    ldr r1, =data_ov003_0216b864
    ldrh r6, [r0, r6]
    ldrb r3, [r1, #0x0]
    mov r9, #0xa
    mov r0, #0x0
    cmp r3, #0x0
    ble L_0216073c
    ldr r1, =data_ov003_0216be20
    ldr r2, =0x3ff
    ldr r8, [r1, #0x0]
    and r7, r6, r2
L_02160714:
    add r1, r8, r0, lsl #0x1
    add r1, r1, #0xc00
    ldrh r1, [r1, #0x1a]
    and r1, r1, r2
    cmp r7, r1
    moveq r0, #0x0
    beq L_02160740
    add r0, r0, #0x1
    cmp r0, r3
    blt L_02160714
L_0216073c:
    mov r0, #0x1
L_02160740:
    cmp r0, #0x0
    addeq sp, sp, #0x7c
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_ov003_0216be20
    ldr r0, =0x3ff
    ldr r2, [r1, #0x0]
    and lr, r6, r0
    mov r8, #0x1
    mov r1, #0x48
    mov r3, #0xa
    str r3, [sp, #0x4]
    mov r11, #0x0
L_02160778:
    ldr r3, =data_ov003_0216b864
    mov r7, r11
    ldrb r3, [r3, r8]
    cmp r3, #0x0
    ble L_021607e4
    mov r10, #0x90
    mla ip, r8, r10, r2
L_02160794:
    cmp r8, #0x1
    beq L_021607a4
    cmp r8, #0x6
    bne L_021607bc
L_021607a4:
    add r10, ip, r7, lsl #0x1
    add r10, r10, #0xc00
    ldrh r10, [r10, #0x1a]
    and r10, r10, r0
    cmp lr, r10
    beq L_021607d0
L_021607bc:
    add r10, ip, r7, lsl #0x1
    add r10, r10, #0xc00
    ldrh r10, [r10, #0x1a]
    cmp r6, r10
    bne L_021607d8
L_021607d0:
    mov r9, r8
    mov r7, r1
L_021607d8:
    add r7, r7, #0x1
    cmp r7, r3
    blt L_02160794
L_021607e4:
    cmp r9, #0xa
    ldrne r8, [sp, #0x4]
    add r8, r8, #0x1
    cmp r8, #0xa
    blt L_02160778
    cmp r9, #0x1
    bne L_02160884
    cmp r5, #0x20
    bhs L_02160828
    cmp r4, #0x20
    addlo r0, r5, r4, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r4, #0x20
    addhs r0, r5, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_02160850
L_02160828:
    cmp r4, #0x20
    sublo r0, r5, #0x20
    addlo r0, r0, r4, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r5, #0x20
    subhs r0, r4, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_02160850:
    ldr r0, =data_ov003_0216be20
    mov r2, r1, asr #0x1
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x0]
    add r0, r1, r0, lsl #0x1
    add r1, r1, #0x3000
    add r0, r0, #0xb00
    ldr r1, [r1, #0x6c4]
    ldrh r3, [r0, #0xe0]
    add r0, r1, r2, lsl #0x1
    add r0, r0, #0x200
    strh r3, [r0, #0x64]
    b L_0216099c
L_02160884:
    cmp r9, #0x6
    bne L_02160908
    cmp r5, #0x20
    bhs L_021608b4
    cmp r4, #0x20
    addlo r0, r5, r4, lsl #0x5
    movlo r1, r0, lsl #0x1
    subhs r0, r4, #0x20
    addhs r0, r5, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1000
    b L_021608dc
L_021608b4:
    cmp r4, #0x20
    sublo r0, r5, #0x20
    addlo r0, r0, r4, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r1, r0, #0x800
    subhs r1, r5, #0x20
    subhs r0, r4, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r1, r0, #0x1800
L_021608dc:
    ldr r0, =data_ov003_0216be20
    mov r2, r1, asr #0x1
    ldr r0, [r0, #0x0]
    add r1, r0, #0x3000
    add r0, r0, #0xc00
    ldr r1, [r1, #0x6c4]
    ldrh r3, [r0, #0x18]
    add r0, r1, r2, lsl #0x1
    add r0, r0, #0x200
    strh r3, [r0, #0x64]
    b L_0216099c
L_02160908:
    cmp r5, #0x20
    bhs L_02160930
    cmp r4, #0x20
    addlo r0, r5, r4, lsl #0x5
    movlo r3, r0, lsl #0x1
    subhs r0, r4, #0x20
    addhs r0, r5, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r3, r0, #0x1000
    b L_02160958
L_02160930:
    cmp r4, #0x20
    sublo r0, r5, #0x20
    addlo r0, r0, r4, lsl #0x5
    movlo r0, r0, lsl #0x1
    addlo r3, r0, #0x800
    subhs r1, r5, #0x20
    subhs r0, r4, #0x20
    addhs r0, r1, r0, lsl #0x5
    movhs r0, r0, lsl #0x1
    addhs r3, r0, #0x1800
L_02160958:
    ldr r1, =0xffffffce
    mov r0, #0x1d
    add r1, sp, r1
    mla r2, r9, r0, r1
    ldr r0, [sp, #0x0]
    ldr r1, =data_ov003_0216be20
    ldrb r0, [r0, r2]
    ldr r1, [r1, #0x0]
    mov r2, r3, asr #0x1
    add r0, r1, r0, lsl #0x1
    add r1, r1, #0x3000
    add r0, r0, #0xb00
    ldr r1, [r1, #0x6c4]
    ldrh r3, [r0, #0xe0]
    add r0, r1, r2, lsl #0x1
    add r0, r0, #0x200
    strh r3, [r0, #0x64]
L_0216099c:
    mov r0, #0x1
    add sp, sp, #0x7c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
