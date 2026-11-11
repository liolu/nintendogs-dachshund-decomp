/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108218 from projets/nintendogs-shiba-friends/src/donor/func_02108218.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
typedef struct {
    u32 w[3];
} T3;
extern u32 data_02148b0c[3];
extern u64 data_021245cc;
extern s16 data_02124ae0[];
extern void func_02069504(u32 *a, s32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern void func_02068a88(u32 *a, u32 *b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, u32 *b, u32 *c);
void func_02108220(u8 *param_1, s32 param_2) {
    s64 lVar1;
    s32 b;
    s32 a;
    s32 t;
    s32 iVar2;
    u32 uVar5;
    u32 blk[6];
    u32 auStack_40[13];
    s32 fx;
    s32 q3;
    s32 q4;
    s32 q5;

    a = *(s32 *) (param_1 + 0xb8);
    b = *(s32 *) (param_1 + 0xb0);
    if (a <= 0) {
        a = -a;
    }
    if (b <= 0) {
        b = -b;
    }
    {
        s32 sm = b + a;
        fx     = ((s32) ((((s64) (sm) * (s64) (param_2)) + 0x800) >> 12));
    }
    {
        s64 v = (s64) fx * (s64) 0x28be60db9391LL;
        t     = (s32) ((v + ((s64) 0x800 << 32)) >> 32);
        uVar5 = ((u32) (t * 16)) >> 16;
    }
    if (uVar5 <= 2) {
        return;
    }
    {
        T3 tmp;
        tmp         = *(T3 *) data_02148b0c;
        *(T3 *) blk = tmp;
    }
    func_02069504(blk, (s32 *) (param_1 + 0xb0), &blk[3]);
    q4    = (s32) blk[4];
    q3    = (s32) * (vu32 *) &blk[3];
    q5    = (s32) blk[5];
    lVar1 = (s64) q3 * (s64) q3 + (s64) q4 * (s64) q4 + (s64) q5 * (s64) q5;
    if (lVar1 < (s64) data_021245cc) {
        return;
    }
    func_020069bc(&blk[3], &blk[3]);
    iVar2 = (s32) uVar5 >> 4;
    func_02068a88(auStack_40, &blk[3], data_02124ae0[iVar2 * 2], data_02124ae0[iVar2 * 2 + 1]);
    func_01ff810c((s32 *) (param_1 + 0xc8), auStack_40, (u32 *) (param_1 + 0xc8));
}
