/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02107378 from projets/nintendogs-chihuahua-friends/src/donor/func_02107378.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02156080;
extern void func_02107c2c(u8 *obj, u32 v);
void func_02107378(u8 *p, void (*cb)(u8 *, u32)) {
    s32 i7, i6;
    s32 i5;
    u8 *q;
    u8 *obj;
    u16 s;
    u32 zero;

    switch (*(s16 *) (data_02156080 + 0x22)) {
        case 0x45:
            i6 = 7;
            break;
        default:
            i6 = 1;
            break;
    }
    i5 = 0;
    s  = *(u16 *) (p + 0x1a8);
    if (s != 94) {
        q = p;
        do {
            i5 = (s16) (i5 + 1);
            q += 12;
            s = *(u16 *) (q + 0x1a8);
        } while (s != 94);
    }
    i7   = 0;
    zero = 0;
    if (i6 > 0) {
        q = p;
        do {
            obj = *(u8 **) (q + 0x1b0);
            cb(obj, *(u32 *) (p + 0x28));
            func_02107c2c(obj, *(u32 *) (p + (u32) i5 * 12 + 0x1b0));
            *(u16 *) (obj + 0x9c) = zero;
            q += 12;
            *(u16 *) (obj + 0x88) = *(s16 *) (data_02156080 + 0x20);
            i7                    = (s16) (i7 + 1);
            i5++;
            *(u8 **) (data_02156080 + *(s16 *) (data_02156080 + 0x20) * 4 + 4) = obj;
            *(s16 *) (data_02156080 + 0x20)                                    = *(s16 *) (data_02156080 + 0x20) + 1;
        } while (i7 < i6);
    }
}
