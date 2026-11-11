/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5050 from projets/nintendogs-shiba-friends/src/donor/func_020f5050.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    s32 w[4];
} Slot;
typedef struct {
    s32 w[6];
} Ent;
extern s32 func_020f435c(u8 *p, Ent *e);
extern s32 func_020f36c0(u8 *p, Ent *e);
u8 *func_020f5058(u8 *param_1, u8 *param_2) {
    s32 k;
    s32 pos;
    s32 cnt;
    Ent *arr;
    Slot *tab;
    Slot *pk;
    Ent *e;
    s32 i;
    u32 ui;
    s32 zero;
    s32 scale;
    s32 d;
    s32 nz;
    s32 v;
    u32 uv;

    arr   = (Ent *) (param_2 + 148);
    tab   = (Slot *) (param_2 + 8);
    cnt   = 0;
    scale = 0;
    for (i = 0; i < 8; i++) {
        tab[i].w[0] = -1;
        tab[i].w[1] = 0;
        tab[i].w[2] = 0;
        tab[i].w[3] = 0;
    }
    tab[8].w[0] = 0;
    tab[8].w[1] = -1;

    ui = 0;
    if (ui < *(u32 *) param_2) {
        zero = 0;
        e    = arr;
        do {
            if (e->w[0] != 0) {
                if (e->w[1] != 0) {
                    d       = func_020f435c(param_1, e);
                    e->w[3] = d;
                    e->w[4] = zero;
                    if (d >= 2048) {
                        pos = zero;
                        if (cnt > 0) {
                            do {
                                if (tab[pos].w[1] < d) {
                                    k = cnt;
                                    if (k > pos) {
                                        do {
                                            if (k < 8) {
                                                pk  = (Slot *) ((u32) tab + (u32) k * 16);
                                                *pk = *(pk - 1);
                                            }
                                            k--;
                                        } while (k > pos);
                                    }
                                    break;
                                }
                                pos++;
                            } while (pos < cnt);
                        }
                        tab[pos].w[0] = ui;
                        tab[pos].w[1] = d;
                        if (cnt < 7) {
                            cnt++;
                        }
                    }
                }
            }
            ui++;
            e++;
        } while (ui < *(u32 *) param_2);
    }

    tab[8].w[0] = cnt;
    uv          = *(u16 *) (*(u8 **) (param_1 + 0x14));
    if (uv > 8000) {
        scale = scale + (((s32) (uv - 8000) / 500) << 10);
        if (scale > 10240) {
            scale = 10240;
        }
    }

    for (i = 0; i < cnt; i++) {
        v = func_020f36c0(param_1, &arr[tab[i].w[0]]);
        v += scale;
        if (v >= 17408) {
            tab[i].w[2]           = v;
            arr[tab[i].w[0]].w[4] = v;
        }
    }

    nz = 0;
    for (i = 0; i < tab[8].w[0]; i++) {
        if (tab[i].w[2] != 0) {
            d = tab[i].w[1];
            nz++;
            tab[i].w[3] = tab[i].w[2] + ((d + (s32) ((u32) (d >> 2) >> 29)) >> 3);
        }
    }

    {
        Slot tmp;
        for (i = 0; i < tab[8].w[0] - 1; i++) {
            k = i;
            if (k < tab[8].w[0]) {
                do {
                    if (tab[i].w[3] < tab[k].w[3]) {
                        tmp    = tab[i];
                        tab[i] = tab[k];
                        tab[k] = tmp;
                    }
                    k++;
                } while (k < tab[8].w[0]);
            }
        }
    }

    tab[8].w[0] = nz;
    if (nz == 0) {
        goto else_arm;
    }
    if (tab[0].w[3] >= *(s32 *) (param_2 + 4) + 0x4800) {
        goto then_arm;
    }
else_arm:
    tab[8].w[0] = 0;
    tab[8].w[1] = -1;
    goto end;
then_arm:
    if (nz > 1 && tab[0].w[3] - tab[1].w[3] < 1536) {
        tab[8].w[0] = 0;
        tab[8].w[1] = -5;
    }
end:
    return param_2 + 8;
}
