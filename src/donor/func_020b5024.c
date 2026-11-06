/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b5024 from projets/nintendogs-chihuahua-friends/src/donor/func_020b5024.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021538b4;
extern u32 data_0213cc60;
extern u32 data_0213cc38;
extern u32 func_020c2224(u8 *p);
extern void func_0205e950(u8 *b, u32 n, u32 f, u32 v, u8 *s);
extern s32 func_0207e718(u8 *b);
// clang-format off
u32 func_020b5024(u32 param_1, u8 *param_2)
{
    u32 local_6c;
    u8 acStack_68[68];
    s32 i;
    s32 t;
    u32 *tabA;
    u8 *bp;
    u32 csz;
    u32 *tabB;
    u32 rec;
    local_6c = 0;
    if (*param_2 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        local_6c = func_020c2224(param_2);
    } else {
        if (**(u32 **)&data_021538b4 != 0) {
            i = local_6c;
            tabA = &data_0213cc60;
            asm { ldr tabB, =data_0213cc38 }
            bp = acStack_68;
            asm { mov csz, #64 }
            do {
                rec = *(u32 *)(*(u8 **)&data_021538b4 + (u32)i * 16 + 8);
                if (rec == param_1) {
                    func_0205e950(bp, csz, (u32)tabA, tabB[i], param_2);
                    t = func_0207e718(bp);
                    if (t != 0) {
                        return t;
                    }
                }
                i = i + 1;
            } while (i < 10);
        }
    }
    return local_6c;
}
// clang-format on
