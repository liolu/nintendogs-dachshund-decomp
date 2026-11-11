#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208ff8c();
extern void func_020cbbe8();
extern void func_020cefd4();
extern void func_020d6240();
extern void func_020da98c();
extern void func_020daae8();
extern void func_020db0fc();
extern void func_020db55c();
extern void func_020e25a0();
extern void func_020e7ec4();
extern void func_020e7f9c();
extern void func_020eb9fc();
extern void func_020ebcb4();
extern void func_020ec0d8();
extern void func_020ec134();
extern void func_020ec2f4();
extern void func_020ec328();
extern char data_02131798[];
extern char data_0213179c[];
extern char data_021317a0[];
extern char data_021317a4[];
extern char data_021317b8[];
extern char data_021317c4[];
extern char data_0214afec[];
extern char data_0214b000[];
extern char data_0214b014[];
extern char data_0214b030[];
extern char data_0214b044[];
extern char data_0214b060[];
extern char data_0214b07c[];
extern char data_0214b098[];
extern char data_0214b0b4[];
extern char data_02159e30[];
extern char data_02159e70[];
// clang-format off
asm void func_02104cc0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r11, r0
    mov r2, #0x0
    str r2, [r11, #0x8]
    str r2, [r11, #0x0]
    ldr r1, [r11, #0x0]
    mov r0, #0x64000
    str r1, [r11, #0x4]
    str r0, [r11, #0xc]
    str r2, [r11, #0x10]
    mov r0, #0x78000
    str r0, [r11, #0x14]
    str r2, [r11, #0x18]
    str r2, [r11, #0x1c]
    str r2, [r11, #0x20]
    mov r0, #0x1b000
    str r0, [r11, #0x24]
    add r1, r11, #0x28
    mvn r2, #0x1
    swpb r0, r2, [r1]
    add r1, r11, #0x2a
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add r1, r11, #0x1000
    mov r0, #0x12
    str r2, [r1, #0xc94]
    bl func_020e7f9c
    ldr r1, =data_0214afec
    mov r0, #0x12
    bl func_020e7ec4
    mov r4, r0
    ldr r1, =data_0214b000
    mov r0, #0x12
    bl func_020e7ec4
    mov r7, r0
    ldr r1, =data_0214b014
    mov r0, #0x12
    bl func_020e7ec4
    mov r6, r0
    ldr r1, =data_0214b030
    mov r0, #0x12
    bl func_020e7ec4
    mov r10, r0
    mov r0, #0x12
    ldr r1, =data_0214b044
    bl func_020e7ec4
    mov r1, r4
    mov r4, r0
    mov r0, #0x2
    bl func_020ec2f4
    mov r0, #0x2
    mov r1, r7
    bl func_020ec328
    mov r0, #0x2
    mov r1, r6
    bl func_020ec134
    mov r1, r4
    mov r0, #0x2
    bl func_020ec0d8
    bl func_020db55c
    mov r8, #0x0
    ldr r5, =data_02131798
    ldr r4, =data_0213179c
    str r8, [sp, #0x8]
    str r8, [sp, #0xc]
    str r8, [sp, #0x10]
    mov r9, #0xc9
L_02104dd0:
    ldr r0, [sp, #0x8]
    mov r1, r6
    str r0, [sp, #0x0]
    ldrb r3, [r5, #0x0]
    mov r2, r7
    bl func_020db0fc
    ldrb r1, [r5, #0x0]
    ldr r0, [sp, #0xc]
    bl func_020daae8
    ldr r0, =data_02159e30
    mov r1, r9
    ldr r0, [r0, #0x0]
    mov r2, r8
    ldr r0, [r0, #0x30]
    bl func_020cbbe8
    str r0, [sp, #0x0]
    ldrb r2, [r5, #0x0]
    ldrb r3, [r4, #0x0]
    ldr r0, [sp, #0x10]
    mov r1, r10
    bl func_020da98c
    add r8, r8, #0x1
    add r5, r5, #0x1
    add r4, r4, #0x1
    cmp r8, #0x2
    blt L_02104dd0
    ldr r1, =data_02159e70
    mov r3, #0x4
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0xc000
    str r3, [r0, #0x838]
    ldr r0, [r1, #0x0]
    ldr r4, =data_0214b0b4
    add r0, r0, #0xc000
    str r2, [r0, #0x83c]
    ldr r1, =data_0214b060
    ldr r2, =data_0214b07c
    ldr r3, =data_0214b098
    mov r0, #0x12
    str r4, [sp, #0x0]
    bl func_020d6240
    ldr r5, =data_021317c4
    mov r6, #0x0
    mov r4, #0x2
L_02104e84:
    ldr r1, [r11, #0x14]
    ldr r0, [r11, #0x18]
    mov r2, r1, lsl #0x4
    mov r3, r0, lsl #0x4
    ldrb r1, [r5, #0x0]
    mov r0, r4
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020ebcb4
    add r6, r6, #0x1
    cmp r6, #0x12
    add r5, r5, #0x1
    blt L_02104e84
    ldr r6, =data_021317a4
    mov r5, #0x0
    mov r4, #0x2
L_02104ec4:
    ldr r1, [r11, #0x20]
    ldr r0, [r11, #0x24]
    mov r2, r1, lsl #0x4
    mov r3, r0, lsl #0x4
    ldrb r1, [r6, #0x0]
    mov r0, r4
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020ebcb4
    add r5, r5, #0x1
    cmp r5, #0x4
    add r6, r6, #0x1
    blt L_02104ec4
    add r0, r11, #0x6c
    bl func_020cefd4
    add r6, r11, #0x6c
    add r5, r11, #0xc0
    mov r4, #0x5
L_02104f0c:
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    subs r4, r4, #0x1
    bne L_02104f0c
    ldr r1, [r6, #0x0]
    mov r0, #0x0
    str r1, [r5, #0x0]
L_02104f28:
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02104f94
L_02104f34:
    b L_02104f44
    b L_02104f6c
    b L_02104f84
    b L_02104f58
L_02104f44:
    ldrsb r3, [r11, #0x95]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
    b L_02104f94
L_02104f58:
    ldrsb r3, [r11, #0x94]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
    b L_02104f94
L_02104f6c:
    ldrb r3, [r11, #0x90]
    add r1, r11, r0
    add r2, r1, #0x68
    sub r1, r3, #0x1
    swpb r1, r1, [r2]
    b L_02104f94
L_02104f84:
    ldrsb r3, [r11, #0x92]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
L_02104f94:
    add r0, r0, #0x1
    cmp r0, #0x4
    blt L_02104f28
    bl func_020e25a0
    mov r0, #0x0
    ldr r9, =data_021317b8
    ldr r8, =data_021317a0
    str r0, [sp, #0x4]
    mov r4, r0
    str r0, [sp, #0x14]
    mov r6, #0x2
    mov r5, #0x1
L_02104fc4:
    ldrb r0, [r8, #0x0]
    ldr r10, [sp, #0x14]
    cmp r0, #0x0
    ble L_0210502c
    ldr r0, [sp, #0x4]
    add r7, r11, r0
L_02104fdc:
    ldrsb r0, [r7, #0x68]
    cmp r10, r0
    bne L_02105004
    ldrsb r1, [r9, r10]
    mov r0, r6
    mov r2, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020eb9fc
    b L_0210501c
L_02105004:
    ldrsb r1, [r9, r10]
    mov r0, r6
    mov r2, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020eb9fc
L_0210501c:
    ldrb r0, [r8, #0x0]
    add r10, r10, #0x1
    cmp r10, r0
    blt L_02104fdc
L_0210502c:
    ldr r0, [sp, #0x4]
    add r9, r9, #0x3
    add r0, r0, #0x1
    str r0, [sp, #0x4]
    cmp r0, #0x4
    add r8, r8, #0x1
    blt L_02104fc4
    mov r0, #0x3c
    bl func_0208ff8c
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
