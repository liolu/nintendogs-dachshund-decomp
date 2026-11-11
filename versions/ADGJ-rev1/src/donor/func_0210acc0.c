/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210acc0 from projets/nintendogs-chihuahua-friends/src/donor/func_0210acc0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[3];
} T12;
extern s32 func_01ffda04(s32 a);
extern void func_021077e0(u8 *p);
extern void func_021077f0(u8 *p);
extern void func_0210843c(u8 *p, u32 *a, u32 b);
extern void func_0211c904(u8 *a, u32 *b);
extern void func_02028160(s32 a);
void func_0210acc0(u8 *param_1) {
    u8 *piVar1;
    u32 aiStack_18[3];
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 1:
            break;
        case 2:
            piVar1 = *(u8 **) (param_1 + 0x214);
            func_021077f0(param_1);
            *(u16 *) (param_1 + 0x20) = *(u16 *) (param_1 + 0x20) | 0x10;
            func_0210843c(param_1, aiStack_18, 0x8000);
            func_0211c904(piVar1, aiStack_18);
            *(u32 *) (piVar1 + 0x1c) = 0;
            return;
        case 3:
            *(u32 *) (*(u8 **) (param_1 + 0x214) + 0x1c) = 0;
            *(u32 *) (param_1 + 0xa8)                    = 0;
            return;
        case 4: {
            s32 rv = func_01ffda04(*(s16 *) (param_1 + 0x98));
            if (*(u32 *) (param_1 + 0x188) == 0) {
                func_02028160(rv);
                *(u32 *) (param_1 + 0x188) = 1;
            }
        }
            *(T12 *) (param_1 + 380) = *(T12 *) (param_1 + 188);
            return;
        case 5:
            func_01ffda04(*(s16 *) (param_1 + 0x98));
            return;
        case 6:
            func_01ffda04(*(s16 *) (param_1 + 0x98));
            return;
        case 7:
            func_01ffda04(*(s16 *) (param_1 + 0x98));
            return;
        case 8:
            func_01ffda04(*(s16 *) (param_1 + 0x98));
    }
}
