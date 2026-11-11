#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025648();
extern void func_02026420();
extern char data_0214b484[];
// clang-format off
asm void func_0205900c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xec
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026420
    mov r0, r4
    bl func_02025648
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr ip, [r0, #0x0]
    mov r0, r4
    ldr r3, [ip, #0x0]
    mov r1, #0x3b
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    str r3, [ip, #0x0]
    mov r3, r2, lsr #0x10
    mov r2, #0x1
    str r3, [r4, #0x488]
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
