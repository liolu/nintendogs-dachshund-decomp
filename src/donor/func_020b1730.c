/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b1730 from projets/nintendogs-chihuahua-friends/src/donor/func_020b1730.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153700;
extern u32 data_02153720;
extern s32 func_020932a0(void);
extern void func_020b1834(u8 *p);
void func_020b1730(u8 *param_1) {
    s32 t;

    *(s16 *) (param_1 + 164) = (s16) (func_020932a0() >> 12);
    t                        = *(s16 *) (*(u8 **) (*(u8 **) &data_02153700 + 4) + 2) + 59;
    *(s16 *) (param_1 + 166) = (s16) (t / 60);
    *(s16 *) (param_1 + 168) = *(s16 *) (*(u8 **) &data_02153720 + 86);
    func_020b1834(param_1);
}
