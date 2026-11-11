/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02121964 from projets/nintendogs-chihuahua-friends/src/donor/func_02121964.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_0211290c(s32 a);
extern void func_02118e5c(u8 *p, u32 a, s32 b, u32 c);
extern void func_021080a0(s32 *a);
extern void func_02108160(u32 a);
extern void func_02118e50(u8 *p);
void func_02121964(u8 *param_1) {
    s32 iVar1;
    s32 aiStack_18[3];
    iVar1 = func_0211290c(-1);
    if (iVar1 == -1) {
        func_02118e5c(param_1, 2, -1, 0);
        return;
    }
    if (*(s32 *) (param_1 + 0x34) != 4) {
        aiStack_18[0] = 0x1000;
        aiStack_18[1] = 0x5000;
        aiStack_18[2] = 0x1000;
        func_021080a0(aiStack_18);
        func_02108160(0);
        func_02118e50(param_1);
        func_02118e5c(param_1, 4, iVar1, 0);
        return;
    }
}
