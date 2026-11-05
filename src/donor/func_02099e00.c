/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099e00 from projets/nintendogs-shiba-friends/src/donor/func_02099e00.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
s32 func_02099e00(u32 *p, s32 sel, s32 sub) {
    s32 r = -100;

    switch (sel) {
        case 0:
            break;
        case 1:
            if (sub == 1) {
                goto s1a;
            }
            if (sub == 2) {
                goto s1b;
            }
            if (sub != 3) {
                goto end;
            }
            goto s1c;
        s1a:
            r = -5;
            goto end;
        s1b:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-5) : (-10);
            } while (0);
            goto end;
        s1c:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-10) : (-15);
            } while (0);
            goto end;
        case 2:
            if (sub == 1) {
                goto s2a;
            }
            if (sub == 2) {
                goto s2b;
            }
            if (sub != 3) {
                goto end;
            }
            goto s2c;
        s2a:
            r = -5;
            goto end;
        s2b:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-5) : (-10);
            } while (0);
            goto end;
        s2c:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-10) : (-15);
            } while (0);
            goto end;
        case 3:
            if (sub == 1) {
                goto s3a;
            }
            if (sub == 2) {
                goto s3b;
            }
            if (sub != 3) {
                goto end;
            }
            goto s3c;
        s3a:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (0) : (-5);
            } while (0);
            goto end;
        s3b:
            r = -5;
            goto end;
        s3c:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-5) : (-10);
            } while (0);
            goto end;
        case 4:
            if (sub == 1) {
                goto s4a;
            }
            if (sub == 2) {
                goto s4b;
            }
            if (sub != 3) {
                goto end;
            }
            goto s4c;
        s4a:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (0) : (-5);
            } while (0);
            goto end;
        s4b:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (0) : (-5);
            } while (0);
            goto end;
        s4c:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (-5) : (-10);
            } while (0);
            goto end;
        case 5:
            if (sub == 1) {
                goto s5a;
            }
            if (sub == 2) {
                goto s5b;
            }
            if (sub == 3) {
                r = -5;
            }
            goto end;
        s5a:
            r = 0;
            goto end;
        s5b:
            do {
                u32 nv = *p * 0x10dcd + 1;
                *p     = nv;
                r      = ((u16) nv & 1) ? (0) : (-5);
            } while (0);
    }
end:
    return r;
}
