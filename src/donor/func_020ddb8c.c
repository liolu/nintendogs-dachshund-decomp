/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ddb84 from projets/nintendogs-shiba-friends/src/donor/func_020ddb84.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_021077e0(u8 *p);
extern u8 func_021077f0(u8 *p);
extern u8 *func_02109174(u8 *p);
typedef struct {
    u32 pad[7];
    u32 arr[6];
} Tbl;
u32 func_020ddb8c(u8 *param_1) {

    Tbl *iVar5;
    s32 iVar4;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            return func_021077e0(param_1);
        case 1:
            break;
        case 2:
            iVar5 = *(Tbl **) (param_1 + 0x214);
            iVar4 = 0;
            do {
                iVar5->arr[iVar4] = 0;
                iVar4             = iVar4 + 1;
            } while (iVar4 < 6);
            return (u32) func_021077f0(param_1);
        case 3:
            *(u32 *) (param_1 + 0xa8) = 0;
            return (u32) param_1;
        case 4:
            param_1 = func_02109174(param_1);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }
    return (u32) param_1;
}
