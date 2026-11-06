/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5424 from projets/nintendogs-chihuahua-friends/src/donor/func_020f5424.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_02155068;
extern u32 data_02155060;
extern u32 *func_0207dcec(u32 heap, u32 size, u32 align);
extern void func_020f4944(u32 *p);
u32 func_020f5424(u32 *param_1, u32 param_2) {
    u32 *puVar1;
    u32 uVar3;

    if (param_1 != ((void *) 0)) {
        u32 *puVar2;
        puVar1  = func_0207dcec(data_02155068, param_2 * 0x18 + 0x94, 4);
        *puVar1 = param_2;
        uVar3   = 0;
        if (uVar3 < param_2) {
            puVar2 = puVar1 + 0x25;
            do {
                func_020f4944(puVar2);
                uVar3  = uVar3 + 1;
                puVar2 = puVar2 + 6;
            } while (uVar3 < param_2);
        }
        puVar1[0x24] = data_02155060;
        puVar1[1]    = 0;
        *param_1     = (u32) puVar1;
        return 1;
    }
    return 0;
}
