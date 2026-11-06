/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ad9b0 from projets/nintendogs-chihuahua-friends/src/donor/func_020ad9b0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern u8 *data_02153700;
extern u8 data_0215374c[];
extern u8 *func_0208c994(s32 a, s32 b);
extern void func_020a3928(s32 a, u8 *b);
extern void func_020a3834(s32 a, u8 *b, s32 c);
u8 *func_020ad9b0(s32 p1) {
    s32 iv;
    s32 uVar2;
    u8 *psVar3;
    s32 t;
    s32 q;
    u8 *H;

    switch (*(s16 *) (data_02153708 + 6)) {
        case 0:
            if (p1 == 0) {
                H     = *(u8 **) (data_02153700 + 0x34);
                uVar2 = (H != 0) ? *(s16 *) (H + 8) : 0;
            } else {
                iv     = (*(s16 *) (*(u8 **) (data_02153700 + 0x34) + 6) != 0 && p1 == 1) ? 1 : 0;
                psVar3 = func_0208c994(p1, iv);
                uVar2  = *(s16 *) (psVar3 + 4);
            }
            func_020a3928(uVar2, data_0215374c);
            break;
        case 1:
            if (p1 == 0) {
                H  = *(u8 **) (data_02153700 + 0x34);
                iv = (H != 0) ? *(s16 *) (H + 0xe) : 0;
            } else {
                iv     = (*(s16 *) (*(u8 **) (data_02153700 + 0x34) + 6) != 0 && p1 == 1) ? 1 : 0;
                psVar3 = func_0208c994(p1, iv);
                t      = *(s16 *) (psVar3 + 8) * 100;
                q      = (s16) (t / 60);
                if (q < 0) {
                    q = 0;
                }
                iv = (s16) (*(s16 *) (psVar3 + 4) * 100 - q);
            }
            func_020a3834((s16) -iv, data_0215374c, 2);
            break;
        case 2:
            if (p1 == 0) {
                H     = *(u8 **) (data_02153700 + 0x34);
                uVar2 = (H != 0) ? *(s16 *) (H + 0x10) : 0;
            } else {
                iv     = (*(s16 *) (*(u8 **) (data_02153700 + 0x34) + 6) != 0 && p1 == 1) ? 1 : 0;
                psVar3 = func_0208c994(p1, iv);
                uVar2  = *(s16 *) (psVar3 + 4);
            }
            func_020a3834(uVar2, data_0215374c, 2);
            break;
    }
    return data_0215374c;
}
