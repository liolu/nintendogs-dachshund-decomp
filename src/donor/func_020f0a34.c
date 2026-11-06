/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0a2c from projets/nintendogs-shiba-friends/src/donor/func_020f0a2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154f24;
extern void func_02072214(void *obj, u32 idx, int arg);
void func_020f0a34(int param_1) {
    u8 *base = (u8 *) &data_02154f24;
    u8 *p    = base + 0x28;
    s16 i    = 0;
    do {
        if (*(int *) (base + i * 4 + 0x28) != 0) {
            func_02072214(p, *(u16 *) (base + i * 2 + 0x10), param_1);
        }
        i = (s16) (i + 1);
        p += 4;
    } while (i < 4);
}
