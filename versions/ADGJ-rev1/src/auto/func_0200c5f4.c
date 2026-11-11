#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_020280f8();
extern void func_020350a8();
extern void func_0203e280();
extern char data_0214b484[];
extern char data_02150330[];
extern char data_02153720[];
// clang-format off
asm void func_0200c5f4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    ldr r1, [r4, #0x488]
    cmp r1, #0x1
    beq L_0200c628
    cmp r1, #0x2
    beq L_0200c664
    cmp r1, #0x3
    beq L_0200c738
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_0200c628:
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0xc8
    addls sp, sp, #0x10
    ldmlsfd sp!, {r4, lr}
    bxls lr
    add r1, r4, #0xac
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_0200c664:
    add r1, r4, #0xac
    mov r0, #0x7
    swpb r0, r0, [r1]
    ldr r0, =data_02153720
    add lr, r4, #0x3d8
    ldr r0, [r0, #0x0]
    add r3, r4, #0xb1
    ldr r0, [r0, #0x1c]
    add ip, r4, #0x100
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    mov r1, #0x1
    swpb r0, r1, [r3]
    ldrsh r0, [ip, #0x52]
    cmp r0, #0x61
    bne L_0200c6dc
    mov r0, r4
    bl func_020350a8
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_0200c6dc:
    ldr r2, =data_0214b484
    ldr r0, =0x10dcd
    ldr ip, [r2, #0x0]
    mov r2, #0x64
    ldr r3, [ip, #0x0]
    mul r0, r3, r0
    add r3, r0, #0x1
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r2, r0, r2
    mov r0, r2, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r3, [ip, #0x0]
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    mov r2, #0x61
    bl func_0203e280
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_0200c738:
    add r1, r4, #0x100
    ldrh r1, [r1, #0xa]
    cmp r1, #0xc8
    bhs L_0200c788
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add ip, r4, #0x3d8
    ldr r0, =data_02153720
    add r3, r4, #0xb0
    ldr r0, [r0, #0x0]
    mov r4, #0x2
    ldr r0, [r0, #0x1c]
    add sp, sp, #0x10
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    swpb r0, r4, [r3]
    ldmfd sp!, {r4, lr}
    bx lr
L_0200c788:
    add r2, r4, #0xac
    mov r1, #0x9
    swpb r1, r1, [r2]
    ldr r1, =data_02150330
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    bl func_020280f8
    mov r1, #0xa
    mul r1, r0, r1
    mov r0, r1
    add r1, r4, #0x1a4
    add r2, r4, #0x2a0
    add r3, r4, #0x3d8
    bl func_01ff832c
    mov r0, r4
    bl func_020280f8
    mvn r1, #0x6
    mul r1, r0, r1
    add r2, r4, #0x3d8
    mov r0, r1
    add r1, sp, #0x0
    mov r3, r2
    bl func_01ff832c
    mov r0, r4
    bl func_020280f8
    mvn r1, #0x4
    mul r1, r0, r1
    str r1, [r4, #0x3dc]
    add r1, r4, #0xb0
    mov r0, #0x5
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
