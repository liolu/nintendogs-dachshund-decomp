/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211bcec from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211bcec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[8];
} E8;
extern E8 data_0213d4d0[];
s32 func_020fb2fc(E8 *out, u32 unused, u16 mask) {
    E8 *e = data_0213d4d0;
    s32 n = 0;
    s16 s = *(s16 *) ((u8 *) e + 4);
    u16 flags;
    s32 take;
    while (s != -1) {
        flags = *(u16 *) ((u8 *) e + 0x14);
        take  = 0;
        if (flags & mask) {
            if (flags & 0x38) {
                take = *(s16 *) ((u8 *) e + 0x16) != 0;
            } else {
                take = 1;
            }
        }
        if (take) {
            *out = *e;
            out  = out + 1;
            n    = n + 1;
        }
        e = e + 1;
        s = *(s16 *) ((u8 *) e + 4);
    }
    return n;
}
