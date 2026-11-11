/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d21e8 from projets/nintendogs-chihuahua-friends/src/donor/func_020d21e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct Tri {
    s32 a;
    s32 b;
    s32 c;
} Tri;
extern Tri data_021447a4;
extern u8 *data_02156080;
extern u8 *func_01ffda04(s32 i);
extern void func_02027044(u8 *p, s32 v);
extern void func_02027480(u8 *p, u8 *q);
extern void func_020d27f4(u8 *p);
void func_020d21e8(u8 *param_1, u32 param_2) {
    s32 local_30[4];
    s32 uVar5;
    u16 uVar3;
    s32 iVar4;
    s32 lcg;
    s32 uVar6;

    *(Tri *) local_30 = data_021447a4;
    uVar5             = 0;
    uVar3             = *(u16 *) (*(u8 **) (param_1 + 0x214) + 0x10);
    if (uVar3 > 300) {
        uVar5 = (uVar3 < 600) ? 1 : 2;
    }
    lcg                    = *(s32 *) data_02156080 * 0x10dcd + 1;
    *(s32 *) data_02156080 = lcg;
    {
        s64 v = (s64) (s16) (u16) (lcg & 0xfff) * (s64) 0x1000 + 0x800;
        iVar4 = (s32) ((u32) (v >> 12));
    }
    uVar6 = 0;
    if (iVar4 < local_30[uVar5]) {
        do {
            iVar4 = (s32) func_01ffda04(uVar6);
            if (iVar4 != 0) {
                if (uVar6 == param_2) {
                    func_02027044((u8 *) iVar4, 2);
                } else {
                    func_02027044((u8 *) iVar4, 4);
                    func_02027480((u8 *) iVar4, param_1 + 0xbc);
                }
            }
            uVar6 = (s16) (uVar6 + 1);
        } while (uVar6 < 3);
        func_020d27f4(param_1);
    }
    *(u32 *) (param_1 + 0x16c) = *(u32 *) (param_1 + 0x16c) & (u32) ((1u << param_2) == 0);
}
