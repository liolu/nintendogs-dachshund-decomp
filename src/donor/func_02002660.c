/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02011640 from projets/code-lyoko/src/auto/func_02011640.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_02002660(BOOL *top, BOOL *bottom);
extern u32 func_02002988(u32 reg, u16 *buffer);
u32 func_02002660(BOOL *top, BOOL *bottom) {
    u16 status;
    u32 result = func_02002988(0, &status);

    if (result != 0) {
        return result;
    }
    if (top) {
        *top = (status & 8) ? 1 : 0;
    }
    if (bottom) {
        *bottom = (status & 4) ? 1 : 0;
    }
    return result;
}
