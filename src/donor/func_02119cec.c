/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02119cec from projets/nintendogs-chihuahua-friends/src/donor/func_02119cec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern void func_0211a2b8(s32 *p);
extern void func_0211a03c(s32 *p);
extern void func_02119ee8(s32 *p);
extern void func_02119d94(s32 *p);
typedef struct {
    u32 w[10];
} Blk10;
void func_02119cec(s32 *param_1) {
    s32 iVar1;

    switch (param_1[3]) {
        case 0:
            iVar1                    = param_1[2] * 0x2c + param_1[0];
            *(Blk10 *) (param_1 + 4) = *(Blk10 *) (iVar1 + 0x20);
            return;
        case 1:
            func_0211a2b8(param_1);
            return;
        case 2:
            func_0211a03c(param_1);
            return;
        case 3:
            func_02119ee8(param_1);
            return;
        case 4:
            func_02119d94(param_1);
            return;
    }
}
