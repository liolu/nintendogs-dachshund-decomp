/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_Transpose43_ from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_mtx43.c (license: none), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
extern void func_02066fe4(register const MtxFx43 *pSrc, register MtxFx43 *pDst);
// clang-format off
asm void func_02066fe4 (register const MtxFx43 *pSrc, register MtxFx43 *pDst)
{
	stmfd sp !, {r4 - r9}
	ldmia r0, {r2 - r9, r12}
	stmia r1 !, {r2, r5, r8}
	stmia r1 !, {r3, r6, r9}
	stmia r1 !, {r4, r7, r12}
	mov r0, #0
	str r0, [r1, #0]
	str r0, [r1, #4]
	str r0, [r1, #8]
	ldmfd sp !, {r4 - r9}
	bx lr
}
// clang-format on
