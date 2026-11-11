/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020edd8c from projets/nintendogs-chihuahua-friends/src/donor/func_020edd8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 h0;
    s32 h1;
    s32 pad08;
    s16 vol0;
    u16 fade0;
    u8 pad10[8];
    u16 cnt;
    u16 max;
    s32 active;
    u8 pad20[2];
    s16 vol1;
    u16 fade1;
    u8 pad26[0x5c - 0x26];
    s32 cur[16];
    s32 step[16];
    s16 target[16];
    u16 mask;
    u8 padfe[0x108 - 0xfe];
    s32 flag;
} Bgm;
typedef struct {
    s32 busy;
    s32 pad04;
    s32 frames;
    s32 pending;
} BgmReq;
extern BgmReq data_02154dc4;
extern Bgm data_02154dd8;
extern void func_02072214(void *handle, s32 volume, s32 frames);
extern void func_02072174(void *handle, u32 mask, s32 volume);
extern s32 func_020f7170(void);
extern void func_020ecfb0(void);
void func_020edd84(void) {
    BgmReq *req = &data_02154dc4;
    Bgm *b      = &data_02154dd8;
    s32 iVar7;
    s32 iVar8;
    s16 i;
    u16 uVar3;

    if (req->pending != 0 && req->busy == 0) {
        if (b->h0 != 0) {
            func_02072214(&b->h0, b->vol0, req->frames);
        }
        req->pending = 0;
    }
    if (b->mask != 0) {
        i = 0;
        do {
            u32 uVar1, uVar2;
            s32 tgt, step;
            uVar2 = 1u << i;
            uVar1 = (u16) uVar2;
            if ((b->mask & uVar1) != 0) {
                step = b->step[i];
                tgt  = b->target[i];
                b->cur[i] += step;
                iVar8 = b->cur[i] >> 12;
                uVar3 = (u16) uVar2;
                if (((step <= 0) || (iVar8 < tgt)) && ((step >= 0 || (iVar8 > tgt)))) {
                    goto thenb;
                }
                b->cur[i] = tgt << 12;
                b->mask &= ~uVar3;
                iVar8 = tgt;
                goto join;
            thenb:
                if (step == 0) {
                    b->mask &= ~uVar3;
                }
            join:
                func_02072174(b, uVar1, iVar8);
            }
            i = i + 1;
        } while (i < 16);
    }
    if (b->active != 0) {
        b->cnt++;
        if (b->cnt > b->max) {
            b->cnt    = 0;
            b->max    = 0;
            b->active = 0;
        }
    }
    iVar8 = func_020f7170();
    if (iVar8 == -11) {
        if (b->flag == 0) {
            Bgm *s   = &data_02154dd8;
            s->fade0 = 30;
            iVar7    = 20;
            if (s->h0 != 0) {
                if (s->active != 0) {
                    iVar7     = s->max;
                    uVar3     = s->cnt;
                    s->cnt    = 0;
                    s->active = 0;
                    iVar7     = iVar7 - uVar3;
                }
                func_02072214(&s->h0, (s->vol0 * 30) / 100, iVar7);
            }
            {
                s32 *h1  = &data_02154dd8.h1;
                s        = &data_02154dd8;
                s->fade1 = 30;
                if (*h1 != 0) {
                    func_02072214(h1, (s->vol1 * 30) / 100, 20);
                }
            }
            b->flag = 1;
        }
    } else if (b->flag != 0) {
        Bgm *s   = &data_02154dd8;
        s->fade0 = 100;
        iVar7    = 60;
        if (s->h0 != 0) {
            if (s->active != 0) {
                iVar7     = s->max;
                uVar3     = s->cnt;
                s->cnt    = 0;
                s->active = 0;
                iVar7     = iVar7 - uVar3;
            }
            func_02072214(&s->h0, (s->vol0 * 100) / 100, iVar7);
        }
        {
            s32 *h1  = &data_02154dd8.h1;
            s        = &data_02154dd8;
            s->fade1 = 100;
            if (*h1 != 0) {
                func_02072214(h1, (s->vol1 * 100) / 100, 60);
            }
        }
        b->flag = 0;
    }
    func_020ecfb0();
}
