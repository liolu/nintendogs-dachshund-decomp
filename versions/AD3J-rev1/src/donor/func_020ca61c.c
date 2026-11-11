/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca620 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca620.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_02080f5c(void);
s32 func_020ca61c(u8 *param_1, u8 *param_2) {
    s32 found;
    u8 *pb;
    u8 *pa;
    s32 cnt;
    s32 iVar1;
    u32 uVar5;

    pa    = param_1;
    pb    = param_2;
    found = -1;
    cnt   = 0;
    uVar5 = func_02080f5c();
    iVar1 = 0;
    do {
        if (*(u16 *) (pb + 0x7e8 + iVar1 * 2) != 0 && *(u16 *) (pa + 0x7e8 + iVar1 * 2) == 0) {
            cnt = (s16) (cnt + 1);
        }
        iVar1 = (s16) (iVar1 + 1);
    } while (iVar1 < 8);
    if (cnt > 0) {
        s32 thr;
        s32 iVar3;
        thr   = (s16) (u16) (((u32) (u16) cnt * (u32) (u16) (uVar5 * 0x10dcd + 1)) >> 16);
        iVar3 = 0;
        iVar1 = 0;
        do {
            if (*(u16 *) (pb + 0x7e8 + iVar1 * 2) != 0 && *(u16 *) (pa + 0x7e8 + iVar1 * 2) == 0) {
                if (iVar3 == thr) {
                    found = iVar1;
                    break;
                }
                iVar3 = (s16) (iVar3 + 1);
            }
            iVar1 = (s16) (iVar1 + 1);
        } while (iVar1 < 8);
        *(u16 *) (pa + 0x7e8 + found * 2) = *(u16 *) (pb + 0x7e8 + found * 2);
    }
    return found;
}
