/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d91e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020d91e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
extern u32 func_021077e0(u8 *p);
extern u32 func_021077f0(u8 *p);
extern u8 *func_02109174(u8 *p);
u32 func_020dedb0(u8 *param_1) {
    s32 w[9];
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            return func_021077e0(param_1);
        case 2:
            return func_021077f0(param_1);
        case 3:
            *(s32 *) (param_1 + 0xa8) = 0;
            return 0;
        case 1: {
            s32 l0 = *(s32 *) (param_1 + 0xd0);
            s32 l1 = *(s32 *) (param_1 + 0xcc);
            s32 l2 = *(s32 *) (param_1 + 0xc8);
            w[0]   = l2;
            w[1]   = l1;
            w[2]   = l0;
            {
                s32 l3 = *(s32 *) (param_1 + 0xdc);
                s32 l4 = *(s32 *) (param_1 + 0xd8);
                s32 l5 = *(s32 *) (param_1 + 0xd4);
                w[3]   = l5;
                w[4]   = l4;
                w[5]   = l3;
            }
        }
            func_02069504(w, w + 3, w + 6);
            func_020069bc(w, w);
            func_020069bc(w + 6, w + 6);
            func_02069504(w + 6, w, w + 3);
            *(s32 *) (param_1 + 0xc8) = w[0];
            *(s32 *) (param_1 + 0xcc) = w[1];
            *(s32 *) (param_1 + 0xd0) = w[2];
            *(s32 *) (param_1 + 0xd4) = w[3];
            *(s32 *) (param_1 + 0xd8) = w[4];
            *(s32 *) (param_1 + 0xdc) = w[5];
            *(s32 *) (param_1 + 0xe0) = w[6];
            *(s32 *) (param_1 + 0xe4) = w[7];
            {
                u32 v8                    = (u32) w[8];
                *(s32 *) (param_1 + 0xe8) = (s32) v8;
                return v8;
            }
        case 4:
            return (u32) func_02109174(param_1);
        case 5:
        case 6:
        case 7:
        case 8:
            break;
    }
}
