/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007880 from projets/nintendogs-miniature-dachshund-friends/src/donor/func_02007880.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 _s32_div_f(s32 a, s32 b);
extern s32 func_0206902c(s32 a);
typedef struct {
    u8 p0[4];
    u16 mode;
    s16 cnt;
    s16 max;
    u8 p1[6];
    s32 f10;
    s32 f14;
    s32 f18;
    s16 c1c;
    s16 c1e;
    s16 c20;
    s16 c22;
    s16 lo[192];
    s16 hi[192];
} Obj;
void func_02007880(Obj *p) {
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    s64 lVar2;
    s64 lVar3;
    u32 fx2;
    s32 sVar1;
    u32 *puVar4;
    u16 *puVar5;
    s32 zr;
    s32 kh;

    if (p->mode == 0) {
        return;
    }
    if (p->mode != 1) {
        return;
    }
    p->cnt = p->cnt + 1;
    if (p->cnt > p->max) {
        goto reset;
    }
    iVar7 = p->f18;
    iVar6 = _s32_div_f(iVar7 * p->cnt, p->max);
    iVar7 = iVar7 - iVar6;
    lVar2 = (s64) iVar7 * (s64) iVar7 + 0x800;
    fx2   = (u32) (lVar2 >> 12);
    iVar6 = p->c1e - (iVar7 >> 12);
    if (iVar6 < 0) {
        iVar6 = 0;
    }
    p->c20 = (s16) iVar6;
    iVar6  = p->c1e + (iVar7 >> 12);
    if (iVar6 >= 0xc0) {
        iVar6 = 0xbf;
    }
    p->c22 = (s16) iVar6;
    iVar8  = 0;
    zr     = iVar8;
    kh     = iVar8;
    do {
        s32 t = (iVar8 - p->c1e) * 0x1000;
        lVar3 = (s64) t * (s64) t + (((s64) kh << 32) + 0x800);
        iVar6 = (s32) (fx2 - (u32) (lVar3 >> 12));
        if (iVar6 > 0) {
            iVar6        = func_0206902c(iVar6);
            sVar1        = iVar6 >> 12;
            p->lo[iVar8] = p->c1c - sVar1;
            if (p->lo[iVar8] < 0) {
                p->lo[iVar8] = zr;
            }
            p->hi[iVar8] = p->c1c + sVar1;
            if (p->hi[iVar8] >= 0x100) {
                p->hi[iVar8] = 0xff;
            }
        } else {
            p->hi[iVar8] = p->c1c;
            p->lo[iVar8] = p->hi[iVar8];
        }
        iVar8 = iVar8 + 1;
    } while (iVar8 < 0xc0);
    return;
reset:
    p->mode = 2;
    p->f10  = 0;
    puVar4  = (u32 *) 0x04001000;
    p->f14  = 0;
    puVar5  = (u16 *) 0x04001050;
    *puVar4 = *puVar4 & 0xffff1fff;
    *puVar5 = 0;
    *puVar4 = *puVar4 & 0xfffff7ff;
    return;
}
