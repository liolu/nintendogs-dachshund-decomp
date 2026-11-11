#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207837c();
extern void func_020bcfc0();
extern void func_020bd010();
extern void func_020bd080();
extern void func_020bd108();
extern void func_020ca4b0();
extern void func_020ca73c();
extern void func_020ca750();
extern void func_020ca78c();
extern void func_020ca7d8();
extern void func_020caa6c();
extern char data_ov004_0216de24[];
extern char data_ov004_0216de34[];
extern char data_ov004_0216de44[];
extern char data_ov004_0216de54[];
extern char data_ov004_0216de64[];
extern char data_ov004_0216de74[];
extern char data_ov004_0216de84[];
extern char data_ov004_0216de94[];
extern char func_ov004_0216caec[];
extern char func_ov004_0216da00[];
extern char func_ov004_0216da10[];
extern char func_ov004_0216da20[];
extern char func_ov004_0216da30[];
extern char func_ov004_0216da40[];
extern char func_ov004_0216da50[];
extern char func_ov004_0216da60[];
extern char func_ov004_0216dd10[];
// clang-format off
asm void func_ov004_0216d79c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r2, r1
    mov r1, #0xe4
    mov r5, r0
    bl func_020caa6c
    ldr r1, =0x39ce
    mov r4, r0
    bl func_020ca750
    ldr r1, =0x7fff
    mov r0, r4
    bl func_020ca78c
    mov r0, r4
    mov r1, #0x3
    bl func_020ca73c
    ldr r1, =func_ov004_0216caec
    mov r0, r4
    bl func_020ca4b0
    mov r3, #0x0
    add r2, r4, #0xa4
    swpb r0, r3, [r2]
    mov r1, r5
    mov r0, #0x6000
    str r3, [r4, #0xa8]
    str r0, [r4, #0xac]
    str r3, [r4, #0xb0]
    ldr r3, =0x99a
    add r0, r4, #0x88
    mov r2, #0x9
    bl func_020bd108
    add r0, r4, #0x88
    add r1, r4, #0xa8
    bl func_020bd080
    add r0, r4, #0x88
    mov r1, #0x0
    add r2, r4, #0xa8
    bl func_020bcfc0
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x8]
    mov r0, #0x5000
    str r0, [sp, #0x4]
    add r0, r4, #0x88
    mov r1, #0x8
    add r2, sp, #0x0
    bl func_020bcfc0
    add r0, r4, #0x88
    mov r1, #0x2
    bl func_020bd010
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de54
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216dd10
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de74
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da60
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de84
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da50
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de34
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da40
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de24
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da30
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de64
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da20
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de94
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da10
    mov r0, r4
    bl func_020ca7d8
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov004_0216de44
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_0207837c
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov004_0216da00
    mov r0, r4
    bl func_020ca7d8
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
