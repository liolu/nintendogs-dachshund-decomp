/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02107178 from projets/nintendogs-chihuahua-friends/src/donor/func_02107178.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02156080;
extern u32 data_02148928;
extern u32 func_020c2dac(u8 *p, u32 i);
extern void func_02107378(u8 *p, void (*f)(u8 *, u32));
typedef struct {
    u32 w[117];
} T117;
void func_02107178(void) {
    u8 *base;
    void (*pc)(u8 *, u32);
    s16 mode;
    s32 n1;
    s32 i1;
    u8 *el1;
    s32 off1;
    u8 *P;
    T117 L;
    s32 bVar2;
    s32 i2;
    s32 n2;
    u8 *el2;
    u8 *q2;

    P = *(u8 **) &data_02156080;
    switch (*(s16 *) (P + 0x22)) {
        case 69:
            n1 = 7;
            break;
        default:
            n1 = 1;
            break;
    }
    i1 = 0;
    if (n1 > 0) {
        off1 = i1;
        do {
            u8 *b1                 = *(u8 **) (*(u8 **) &data_02156080 + 0x28);
            el1                    = *(u8 **) (b1 + off1 + 0x1b0);
            *(u32 *) (el1 + 0x1ec) = func_020c2dac(b1, i1);
            i1                     = (s16) (i1 + 1);
            off1 += 12;
        } while (i1 < n1);
    }
    P = *(u8 **) &data_02156080;
    if (*(u32 *) (P + 0x34) != 0) {
        ((void (*)(u8 *)) * (u32 *) (P + 0x34))(*(u8 **) (P + 0x28));
        return;
    }
    base = *(u8 **) (P + 0x28);
    mode = *(s16 *) (P + 0x22);
    L    = *(T117 *) &data_02148928;
    pc   = (void (*)(u8 *, u32)) L.w[mode];
    switch (mode) {
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
            bVar2 = 0;
            break;
        default:
            bVar2 = 1;
            break;
    }
    if (bVar2) {
        func_02107378(base, pc);
        return;
    }
    switch (mode) {
        case 69:
            n2 = 7;
            break;
        default:
            n2 = 1;
            break;
    }
    i2 = 0;
    if (n2 <= 0) {
        return;
    }
    q2 = base;
    do {
        el2 = *(u8 **) (q2 + 0x1b0);
        pc(el2, *(u32 *) (base + 0x28));
        *(u16 *) (el2 + 0x9c) = 0;
        *(u16 *) (el2 + 0x88) = *(s16 *) ((*(u8 *volatile *) &data_02156080) + 0x20);
        i2                    = (s16) (i2 + 1);
        q2 += 12;
        {
            u8 *pb                                       = (*(u8 *volatile *) &data_02156080);
            *(u32 *) (pb + *(s16 *) (pb + 0x20) * 4 + 4) = (u32) el2;
        }
        {
            u8 *pq               = (*(u8 *volatile *) &data_02156080);
            *(s16 *) (pq + 0x20) = *(s16 *) (pq + 0x20) + 1;
        }
    } while (i2 < n2);
}
