/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cb46c from projets/nintendogs-shiba-friends/src/donor/func_020cb46c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c48;
extern u32 data_02154c44;
static inline void ResetSlotAt(u32 c, u32 o) {
    u8 *p = (u8 *) data_02154c48 + c + o;
    if (*(u32 *) (p + 0xc) != data_02154c44) {
        *(u16 *) p         = 0xffff;
        *(u16 *) (p + 2)   = 0;
        *(u32 *) (p + 4)   = 0;
        *(u32 *) (p + 8)   = 0;
        *(u32 *) (p + 0xc) = 0;
        {
            s16 k = 0;
            do {
                *(u32 *) (p + 0x10 + k * 4) = 0;
                k                           = (s16) (k + 1);
            } while (k < 2);
        }
    }
}
void func_020cb470(void) {
    struct {
        u32 off;
    } ctx;
    s32 i;

    ResetSlotAt(0x140c, 0);
    i       = 0;
    ctx.off = 0;
    do {
        ResetSlotAt(0x143c, ctx.off);
        ResetSlotAt(0x1484, ctx.off);
        ctx.off += 24;
        i = (s16) (i + 1);
    } while (i < 3);
    ResetSlotAt(0x14cc, 0);
    i       = 0;
    ctx.off = 0;
    do {
        ResetSlotAt(0x14e4, ctx.off);
        ResetSlotAt(0x155c, ctx.off);
        ctx.off += 24;
        i = (s16) (i + 1);
    } while (i < 5);
}
