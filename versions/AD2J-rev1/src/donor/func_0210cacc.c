/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210cac4 from projets/nintendogs-shiba-friends/src/donor/func_0210cac4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148c7c;
extern u32 data_02148c94;
extern u32 data_02148c90;
extern void func_02111264(u8 *p, s32 *q, u32 a, u32 b, s32 c);
extern void func_02093034(u32 a);
void func_0210cacc(u8 *param_1, s32 *param_2) {
    u32 *puVar2;
    s64 lVar1;

    puVar2 = *(u32 **) (param_1 + 0x214);
    if (*(s32 *) (param_1 + 0xb4) < 0) {
        lVar1   = (s64) (s32) *puVar2 * (s64) data_02148c7c + 0x800;
        *puVar2 = (u32) (lVar1 >> 12);
    }
    if (*(s16 *) (puVar2 + 2) != 1) {
        *(u16 *) (puVar2 + 2) = 1;
        func_02111264(param_1, param_2, data_02148c94, data_02148c90, 0);
    } else {
        func_02111264(param_1, param_2, data_02148c94, data_02148c90, -1);
    }
    func_02093034(0);
}
