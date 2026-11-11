/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* _ll_ufrom_d from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/runtime/ll_ufrom_d.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
extern u32 *func_020638d0(void);
extern double func_0205e670(double a, u32 op);
// clang-format off
asm u64 func_0205ad2c(double x)
{
    tst r1, #0x80000000
    bne negative
    ldr r2, =0x43e
    subs r2, r2, r1, lsr #20
    blt invalid
    cmp r2, #64
    bge below_one
    mov ip, r1, lsl #11
    orr ip, ip, #0x80000000
    orr ip, ip, r0, lsr #21
    cmp r2, #32
    ble small_shift
    sub r2, r2, #32
    mov r3, r0, lsl #11
    mov r1, #0
    mov r0, ip, lsr r2
    rsb r2, r2, #32
    orrs ip, r3, ip, lsl r2
    bxeq lr
    stmfd sp!, {r0, r1, r3, ip, lr}
    bl func_020638d0
    mov r2, r0
    ldmfd sp!, {r0, r1, r3, ip, lr}
    ldr r3, [r2]
    tst r3, #0x1000
    bne inexact_trap
    orr r3, r3, #0x10
    str r3, [r2]
    bx lr
small_shift:
    mov r3, r0, lsl #11
    mov r1, ip, lsr r2
    mov r0, r3, lsr r2
    rsb r2, r2, #32
    orr r0, r0, ip, lsl r2
    movs ip, r3, lsl r2
    bxeq lr
    stmfd sp!, {r0, r1, r3, ip, lr}
    bl func_020638d0
    mov r2, r0
    ldmfd sp!, {r0, r1, r3, ip, lr}
    ldr r3, [r2]
    tst r3, #0x1000
    bne inexact_trap
    orr r3, r3, #0x10
    str r3, [r2]
    bx lr
below_one:
    orrs r1, r1, r0
    bxeq lr
    mov r1, #0
    mov r0, #0
    stmfd sp!, {r0, r1, r3, ip, lr}
    bl func_020638d0
    mov r2, r0
    ldmfd sp!, {r0, r1, r3, ip, lr}
    ldr r3, [r2]
    tst r3, #0x1000
    bne inexact_trap
    orr r3, r3, #0x10
    str r3, [r2]
    bx lr
negative:
    cmn r1, #0x100000
    cmpeq r0, #0
    bhi invalid
    mov r1, #0
    mov r0, #0
    bx lr
invalid:
    stmfd sp!, {r0, r1, r3, ip, lr}
    bl func_020638d0
    mov r2, r0
    ldmfd sp!, {r0, r1, r3, ip, lr}
    ldr r3, [r2]
    tst r3, #0x100
    bne invalid_trap
    orr r3, r3, #1
    str r3, [r2]
    mvn r1, #0
    mvn r0, #0
    bx lr
invalid_trap:
    ldr r2, =0x04c000f8
    stmfd sp!, {lr}
    bl func_0205e670
    ldmfd sp!, {lr}
    bx lr
inexact_trap:
    ldr r2, =0x40c000f8
    stmfd sp!, {lr}
    bl func_0205e670
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
