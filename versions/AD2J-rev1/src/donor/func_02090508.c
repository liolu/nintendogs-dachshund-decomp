/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090508 from projets/nintendogs-shiba-friends/src/donor/func_02090508.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern void func_0208f870(u16 *p);
void func_02090508(u16 *param_1, s32 param_2) {
    s32 iVar3;
    u16 *puVar2;
    s16 *ps;

    ps          = (s16 *) param_1;
    param_1[0]  = (u16) param_2;
    param_1[1]  = 0xffff;
    param_1[2]  = 0xffff;
    ps[3]       = -1;
    ps[4]       = -1;
    ps[5]       = -1;
    ps[6]       = -1;
    ps[7]       = -1;
    ps[8]       = -1;
    iVar3       = 0;
    param_1[9]  = 0;
    param_1[10] = 0;
    param_1[11] = 0;
    ps[12]      = -1;
    param_1[13] = 0;
    ps[14]      = -1;
    param_1[15] = 0;
    puVar2      = param_1 + 16;
    do {
        func_0208f870(puVar2);
        iVar3  = iVar3 + 1;
        puVar2 = puVar2 + 10;
    } while (iVar3 < 3);
    switch (param_2) {
        case 7:
        case 9:
        case 12:
            param_1[1] = 22;
            return;
        case 8:
        case 16:
            param_1[1] = 23;
            return;
        case 3:
            param_1[1] = 24;
            return;
    }
    param_1[1] = 26;
    return;
}
