/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02105fac from projets/nintendogs-chihuahua-friends/src/donor/func_02105fac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_0215607c;
extern void func_02118f88(u8 *p, u32 *out);
extern void func_021182a8(u8 *p, u32 *out);
extern void func_0211ceb8(u8 *p, u32 *out);
extern s32 func_021081a4(void);
typedef struct {
    u32 a;
    u32 b;
    u32 c;
} V3;
void func_02105fac(u32 *param_1) {
    s32 iVar2;

    iVar2 = (s32) data_0215607c;
    switch (*(u32 *) ((u8 *) iVar2 + 0x7c)) {
        case 0:
        case 4:
        case 7:
            func_02118f88((u8 *) iVar2 + 0x88, param_1);
            return;
        case 5:
            func_021182a8((u8 *) iVar2 + 0x144, param_1);
            return;
        case 1:
        case 2:
        case 3:
            iVar2      = func_021081a4();
            param_1[0] = 0;
            param_1[1] = 0;
            param_1[2] = iVar2;
            return;
        case 6:
        case 8:
            *(V3 *) param_1 = *(V3 *) ((u8 *) iVar2 + 0x30);
            return;
        case 10:
            func_0211ceb8((u8 *) iVar2 + 0x21c, param_1);
            return;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            break;
        case 9:
        case 11:
        case 12:
        case 13:
        default:
            goto done;
    }
    *(V3 *) param_1 = *(V3 *) ((u8 *) iVar2 + 0x30);
done:;
}
