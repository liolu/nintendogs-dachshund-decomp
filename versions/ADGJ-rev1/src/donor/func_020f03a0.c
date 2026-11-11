/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f03a0 from projets/nintendogs-chihuahua-friends/src/donor/func_020f03a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02130734[];
extern u8 data_02130735[];
extern u16 data_02147108;
extern void func_0207472c(u8 *p, u32 a, u32 b);
extern void func_020f0f98(u32 a, u32 b);
extern u32 func_020ea564(u8 *p);
extern void func_02072320(u8 *p, u32 a);
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_0207226c(u8 *p, u32 a);
extern u32 func_020ea52c(u8 *p);
extern void func_02072114(u8 *p, u32 a, u32 b);
s32 func_020f03a0(u8 *p, u32 p2, u32 p3, u8 *p4) {
    u32 uVar5;
    u32 uVar4;
    u32 idx;
    u32 uVar2;
    s32 iVar3;
    u32 uVar1;

    idx   = *(u16 *) (data_02154cb8 + 24) * 6;
    uVar5 = data_02130734[idx];
    uVar4 = data_02130735[idx];
    func_0207472c(p, p2, p3);
    if (p2 == 0x31 && p3 == 3) {
        func_020f0f98(0x31, 5);
    }
    if (*(s32 *) p == 0) {
        goto done;
    }
    uVar2 = func_020ea564(p4);
    if (uVar2 <= uVar5) {
        uVar1 = 127;
        goto store;
    }
    if (uVar2 >= uVar4) {
        goto zexit;
    }
    uVar1 = _s32_div_f((uVar4 - uVar2) * 127, uVar4 - uVar5);
    goto store;
zexit:
    func_02072320(p, 0);
    return -1;
store:
    if (p2 != 50) {
        func_0207226c(p, uVar1);
    }
    iVar3 = func_020ea52c(p4);
    func_02072114(p, data_02147108, iVar3);
done:
    return 1;
}
