/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FpStatus_UpdatePacked from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/fp_status_update_packed.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 *func_020638d0(void);
// clang-format off
asm u32 func_0205e39c(u32 clearMask, u32 xorBits)
{
    and r2, r0, #0x1f
    and r3, r0, #0x1f0000
    orr r0, r2, r3, lsr #8
    and r2, r1, #0x1f
    and r3, r1, #0x1f0000
    orr r1, r2, r3, lsr #8
    stmfd sp!, {r0, r1, r2, r12, lr}
    bl func_020638d0
    mov r3, r0
    ldmfd sp!, {r0, r1, r2, r12, lr}
    ldr r2, [r3]
    bic r12, r2, r0
    eor r12, r12, r1
    str r12, [r3]
    and r0, r2, #0x1f
    and r2, r2, #0x1f00
    orr r0, r0, r2, lsl #8
    orr r0, r0, #0x40000000
    bx lr
}
// clang-format on
