/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040800 from projets/battle-of-giants-dinosaurs/src/auto/func_02040800.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_0206e0d4(register const u32* src, register u32* dest) {
    ldmia     r0!, {r2, r3, ip}
    stmia     r1!, {r2, r3, ip}
    ldmia     r0!, {r2, r3, ip}
    stmia     r1!, {r2, r3, ip}
    ldmia     r0!, {r2, r3, ip}
    stmia     r1!, {r2, r3, ip}
    ldmia     r0!, {r2, r3, ip}
    stmia     r1!, {r2, r3, ip}
    bx      lr
}
// clang-format on
