/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0202a2b4 from projets/nintendogs-shiba-friends/src/donor/func_0202a2b4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 func_02009d50(u32 *a, s32 *b, u32 *c);
extern u8 data_02150330[];
void func_0202a2b4(u8 *param_1) {
    u32 local[3];
    local[0] = *(u32 *) (data_02150330 + 0x54);
    local[1] = *(u32 *) (data_02150330 + 0x60);
    local[2] = *(u32 *) (data_02150330 + 0x6c);
    func_02009d50(local, (s32 *) (param_1 + 0x1a4), (u32 *) (param_1 + 0x18c));
}
