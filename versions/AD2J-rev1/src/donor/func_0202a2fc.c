/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0202a2fc from projets/nintendogs-shiba-friends/src/donor/func_0202a2fc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
extern u8 data_02150330[];
extern BOOL func_02009e8c(s32 *a, s32 *b);
u32 func_0202a2fc(u8 *param_1) {
    BOOL bVar1;
    u32 uVar2;
    s32 local_10[3];
    local_10[0] = *(s32 *) (data_02150330 + 0x54);
    local_10[1] = *(s32 *) (data_02150330 + 0x60);
    local_10[2] = *(s32 *) (data_02150330 + 0x6c);
    bVar1       = func_02009e8c(local_10, (s32 *) (param_1 + 0x18c));
    if (bVar1) {
        uVar2 = 1;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}
