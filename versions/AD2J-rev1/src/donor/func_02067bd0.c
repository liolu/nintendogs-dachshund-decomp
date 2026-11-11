/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_Identity33_ from projets/blue-dragon-awakened-shadow/src/donor/MTX_Identity33_.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef int s32;
typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
} Mtx33;
extern void func_02067bd0(Mtx33 *m);
// clang-format off
asm void func_02067bd0(register Mtx33* m) {
    mov     r2, #0x1000
    str     r2, [r0, #0x20]
    mov     r3, #0
    stmia   r0!, {r2, r3}
    mov     r1, #0
    stmia   r0!, {r1, r3}
    stmia   r0!, {r2, r3}
    stmia   r0!, {r1, r3}
    bx      lr
}
// clang-format on
