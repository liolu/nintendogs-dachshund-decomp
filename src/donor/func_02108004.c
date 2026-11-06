/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108004 from projets/nintendogs-chihuahua-friends/src/donor/func_02108004.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02148b08;
extern u32 data_02156084;
extern s32 *func_0200c3ec(u32 a, u32 b);
extern void func_02117060(s32 *a, s32 *b, s32 *c, u16 *d, u16 *e);
void func_02108004(void) {
    s32 *iVar1;
    s16 *psVar2;
    u16 sStack_2c;
    u16 local_2a;
    s32 iStack_28;
    s32 arr[3];
    s32 local_18[4];
    iVar1       = func_0200c3ec(13, 0);
    arr[0]      = -iVar1[2];
    arr[1]      = -iVar1[3];
    arr[2]      = -iVar1[4];
    arr[1]      = data_02148b08;
    psVar2      = (s16 *) data_02156084;
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    func_02117060(arr, local_18, &iStack_28, &sStack_2c, &local_2a);
    *psVar2               = local_2a;
    *(s32 *) (psVar2 + 2) = arr[1];
}
