/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f52c8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f52c8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0206b7b8(u32, s32, s32, s32, s32);
void func_020e2ec4(s32 *p) {
    s32 iVar7;
    u16 *puVar1;
    u16 *puVar2;
    u16 *puVar3;
    u16 *puVar4;
    u16 *puVar5;
    u32 *puVar6;

    *(u32 *) 0x04001014 = 0x01ff0000 & ((-p[3] >> 12) << 16);
    iVar7               = *p;
    if (iVar7 == 0 || iVar7 == 9) {
        func_0206b7b8(0x04001050, 0x12, 6, p[4] >> 12, 0x10 - (p[4] >> 12));
    } else if (iVar7 == 5 || iVar7 == 11 || iVar7 == 4 || iVar7 == 10) {
        func_0206b7b8(0x04001050, 2, 4, p[4] >> 12, 0x10 - (p[4] >> 12));
    }
    if (*p != 0 && *p != 9) {
        return;
    }
    puVar1 = (u16 *) 0x04001048;
    puVar2 = (u16 *) 0x0400104a;
    puVar3 = (u16 *) 0x04001040;
    {
        u32 t1  = (*puVar1 & ~0x3f) | 0x1f;
        *puVar1 = (u16) (t1 | 0x20);
    }
    puVar5 = (u16 *) 0x04001042;
    puVar4 = (u16 *) 0x04001044;
    {
        u32 t2  = (*puVar1 & ~0x3f00) | 0x1f00;
        *puVar1 = (u16) (t2 | 0x2000);
    }
    puVar1 = (u16 *) 0x04001046;
    {
        u32 t3  = (*puVar2 & ~0x3f) | 0x1d;
        *puVar2 = (u16) (t3 | 0x20);
    }
    puVar6  = (u32 *) 0x04001000;
    iVar7   = p[3];
    *puVar3 = 0x96;
    *puVar4 = (((iVar7 >> 12) << 8) & 0xff00) | 0xc0;
    iVar7   = p[3];
    *puVar5 = 0x6400;
    *puVar1 = (((iVar7 >> 12) << 8) & 0xff00) | 0xc0;
    *puVar6 = (*puVar6 & ~0xe000) | 0x6000;
}
