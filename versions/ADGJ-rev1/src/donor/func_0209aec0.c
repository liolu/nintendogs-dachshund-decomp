/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209aec0 from projets/nintendogs-chihuahua-friends/src/donor/func_0209aec0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern u8 *data_02154c70;
extern u8 *data_02153708;
extern u8 data_02154c20[];
extern void func_0209b60c(void);
extern void func_0209b104(u8 *obj);
extern void func_020cd3d8(int a, int b, int c, int d, int e);
extern void func_020cc36c(int a, int b, int c);
extern void func_020cb090(void);
extern void func_020cb414(int a, int b, int c, int d);
extern void func_020cb070(void);
extern void func_020cd3ac(void);
extern BOOL func_0211f078(void);
extern void func_02120440(void);
void func_0209aec0(u8 *obj) {
    s32 st = *(u16 *) (obj + 4);

    switch (st) {
        case 0:
            *(u16 *) (obj + 4) = 0x900;
            *(u16 *) (obj + 6) = 0;
            return;
        case 0x900:
            func_0209b104(obj);
            return;
        case 0x901:
            if (*(s32 *) (data_02154c70 + 0xa4) != 0) {
                *(u16 *) (obj + 4) = 0x903;
                func_020cd3d8(0, 0x4b0, 0, (int) func_0209b60c, 0);
            }
            return;
        case 0x902:
            if (*(s32 *) (data_02154c70 + 0xa4) != 0) {
                *(u16 *) (obj + 4)    = 0x904;
                *(u16 *) (obj + 6)    = 0;
                *(s32 *) (obj + 0x18) = 9;
            }
            return;
        case 0x903:
            if (*(s16 *) (data_02154c70 + 108) == 2) {
                func_020cc36c(0, 0, 0);
                func_020cc36c(1, *(u16 *) (data_02153708 + 14), 0);
                func_020cc36c(6, 0, 0);
                func_020cb090();
                func_020cb414(0, 0, 0, 1);
                func_020cb414(1, *(u16 *) (data_02153708 + 14), 0, 1);
                func_020cb414(6, 0, 0, 1);
                func_020cb070();
                *(u16 *) (obj + 4)    = 0x904;
                *(u16 *) (obj + 6)    = 0;
                *(s32 *) (obj + 0x18) = 12;
                func_020cd3ac();
            }
            return;
        case 0x904:
            *(s16 *) (obj + 6) = *(s16 *) (obj + 6) + 1;
            if (!func_0211f078() && *(s16 *) (obj + 6) < 180) {
                return;
            }
            *(u16 *) (obj + 4)   = 1;
            *(s32 *) (obj + 0xc) = 1;
            if (*(s16 *) (data_02154c20 + 2) == 0) {
                return;
            }
            func_02120440();
            return;
    }
    return;
}
