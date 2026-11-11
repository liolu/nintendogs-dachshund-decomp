/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c4d8 from projets/nintendogs-chihuahua-friends/src/donor/func_0209c4d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154c70;
extern u32 func_02095610(u8 *p);
extern u32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u16 *func_0209c4d8(u8 *param_1) {
    u32 t;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            return (u16 *) func_02095610(param_1);
        case 1:
            t = *(u32 *) (*(u8 **) &data_02154c70 + 0xa4);
            if (t == 0) {
                return (u16 *) t;
            }
            *(s16 *) (param_1 + 0x2e)  = 2;
            *(u16 *) (param_1 + 0x30)  = 0;
            *(u16 *) (param_1 + 0x100) = 2;
            return (u16 *) (param_1 + 0x100);
        case 2:
            break;
        case 3:
            break;
        case 4:
            t = func_02095524(param_1);
            if (t == 0) {
                return (u16 *) t;
            }
            return (u16 *) func_02095784(param_1);
    }
}
