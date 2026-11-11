/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072918 from projets/club-house-games/src/donor/func_02072918.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
extern s32 func_0205e950(s8 *buffer, s32 bufsz, const s8 *format, ...);
extern s32 func_0205e980(s8 *buffer, s32 bufsz, const s8 *format, void *args);
s32 func_0205e950(s8 *buffer, s32 bufsz, const s8 *format, ...) {
    void *args = (void *) ((u32 *) ((u32) &format & ~0x3) + 1);
    return func_0205e980(buffer, bufsz, format, args);
}
extern s32 func_0205e980(s8 *buffer, s32 bufsz, const s8 *format, void *args);
