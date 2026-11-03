/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02004760 from projets/code-lyoko/src/auto/func_02004760.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern s32 func_0206902c(s32 value);
extern s32 func_02068f60(void);
s32 func_0206902c(s32 value) {
    if (value > 0) {
        (*(vu16 *) 0x040002B0) = 1;
        (*(u64 *) 0x040002B8)  = (u64) value << 32;
        return func_02068f60();
    }
    return 0;
}
extern s32 func_02068f60(void);
