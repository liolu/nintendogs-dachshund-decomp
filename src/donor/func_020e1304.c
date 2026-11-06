/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e1304 from projets/nintendogs-chihuahua-friends/src/donor/func_020e1304.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_02156080[];
extern void func_02111378(u8 *p, u32 *p2, u32 a, u32 b, u32 c);
void func_020e1304(u8 *p, u32 *p2) {
    s32 v;
    u32 uVar6;
    s32 t;
    u32 *puVar2;

    v = *(s32 *) (p + 0xb4);
    if (v <= 0) {
        v = -v;
    }
    if (v < 164) {
        func_02111378(p, p2, 0xd9d, 0xfb2, 0);
        return;
    }
    func_02111378(p, p2, 0xd9d, 0xe6a, 0);
    puVar2              = *(u32 **) data_02156080;
    uVar6               = *puVar2 * 0x10dcd + 1;
    *puVar2             = uVar6;
    t                   = ((s32) ((u16) (uVar6 & 0xfff) << 16) >> 15) - 4096;
    *(s32 *) (p + 0xb0) = *(s32 *) (p + 0xb0) + ((s32) (((s64) (*(s32 *) (p + 0xb4)) * (t) + 0x800) >> 12));
    puVar2              = *(u32 **) data_02156080;
    uVar6               = *puVar2 * 0x10dcd + 1;
    *puVar2             = uVar6;
    t                   = ((s32) ((u16) (uVar6 & 0xfff) << 16) >> 15) - 4096;
    *(s32 *) (p + 0xb8) = *(s32 *) (p + 0xb8) + ((s32) (((s64) (*(s32 *) (p + 0xb4)) * (t) + 0x800) >> 12));
    if (*(s32 *) (p + 0xb0) > 2460) {
        *(s32 *) (p + 0xb0) = 2460;
    }
    if (*(s32 *) (p + 0xb4) > 2460) {
        *(s32 *) (p + 0xb4) = 2460;
    }
    if (*(s32 *) (p + 0xb8) > 2460) {
        *(s32 *) (p + 0xb8) = 2460;
    }
    if (*(s32 *) (p + 0xb0) < -2460) {
        *(s32 *) (p + 0xb0) = -2460;
    }
    if (*(s32 *) (p + 0xb4) < -2460) {
        *(s32 *) (p + 0xb4) = -2460;
    }
    if (*(s32 *) (p + 0xb8) < -2460) {
        *(s32 *) (p + 0xb8) = -2460;
    }
}
