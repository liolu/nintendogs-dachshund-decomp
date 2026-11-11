/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b11cc from projets/nintendogs-chihuahua-friends/src/donor/func_020b11cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern s32 *data_02153894;
extern u32 data_0213c504[];
extern void func_0206dfbc(u16 a, u8 *b, u32 c);
void func_020b11cc(s32 *param_1) {
    vu16 loc;
    *(s32 **) &data_02153894 = param_1;
    param_1[0]               = 0;
    param_1[1]               = 0;
    param_1[3]               = (s32) data_0213c504[param_1[0]];
    param_1[2]               = 0;
    loc                      = 0;
    func_0206dfbc((u16) loc, (u8 *) (param_1 + 4), 0x188);
}
