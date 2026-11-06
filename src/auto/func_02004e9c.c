/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200494c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200494c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b7d4(u32 dst, s32 *src, s32 a, s32 b, s32 c, s32 d);
void func_02004e9c(u32 *param_1, s32 param_2) {
    s32 local_18[4];
    u16 *p;

    local_18[0] = 0x1000;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0x1000;
    p           = (u16 *) (param_1 + 1);
    switch (*param_1) {
        case 0:
            break;
        case 1:
            if (param_2 != 0) {
                *(vu32 *) 0x4000018 = 0;
                do {
                    *((vu16 *) 0x400000c) = (*((vu16 *) 0x400000c) & ~3) | p[0];
                    if (p[1] != 0) {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) | 0x40;
                    } else {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) & ~0x40;
                    }
                } while (0);
                *(vu16 *) 0x400000c = p[2] << 14 | (*(vu16 *) 0x400000c & 0x43) | p[3] << 7 | p[4] << 8 | p[5] << 2;
                return;
            }
            *(vu32 *) 0x4001018 = 0;
            do {
                *((vu16 *) 0x400100c) = (*((vu16 *) 0x400100c) & ~3) | p[0];
                if (p[1] != 0) {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) | 0x40;
                } else {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) & ~0x40;
                }
            } while (0);
            *(vu16 *) 0x400100c = p[2] << 14 | (*(vu16 *) 0x400100c & 0x43) | p[3] << 7 | p[4] << 8 | p[5] << 2;
            return;
        case 2:
            if (param_2 != 0) {
                func_0206b7d4(0x4000020, local_18, 0, 0, 0, 0);
                do {
                    *((vu16 *) 0x400000c) = (*((vu16 *) 0x400000c) & ~3) | p[0];
                    if (p[1] != 0) {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) | 0x40;
                    } else {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) & ~0x40;
                    }
                } while (0);
                *(vu16 *) 0x400000c = p[2] << 14 | (*(vu16 *) 0x400000c & 0x43) | p[4] << 8 | p[5] << 2 | p[3] << 13;
                return;
            }
            func_0206b7d4(0x4001020, local_18, 0, 0, 0, 0);
            do {
                *((vu16 *) 0x400100c) = (*((vu16 *) 0x400100c) & ~3) | p[0];
                if (p[1] != 0) {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) | 0x40;
                } else {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) & ~0x40;
                }
            } while (0);
            *(vu16 *) 0x400100c = p[2] << 14 | (*(vu16 *) 0x400100c & 0x43) | p[4] << 8 | p[5] << 2 | p[3] << 13;
            return;
        case 3:
            if (param_2 != 0) {
                func_0206b7d4(0x4000020, local_18, 0, 0, 0, 0);
                do {
                    *((vu16 *) 0x400000c) = (*((vu16 *) 0x400000c) & ~3) | p[0];
                    if (p[1] != 0) {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) | 0x40;
                    } else {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) & ~0x40;
                    }
                } while (0);
                {
                    u16 t4              = *(vu16 *) (p + 4);
                    *(vu16 *) 0x400000c = p[2] << 14 | (*(u16 *) 0x400000c & 0x43) | t4 << 8 | p[3] << 13;
                }
                return;
            }
            func_0206b7d4(0x4001020, local_18, 0, 0, 0, 0);
            do {
                *((vu16 *) 0x400100c) = (*((vu16 *) 0x400100c) & ~3) | p[0];
                if (p[1] != 0) {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) | 0x40;
                } else {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) & ~0x40;
                }
            } while (0);
            {
                u16 t4              = *(vu16 *) (p + 4);
                *(vu16 *) 0x400100c = p[2] << 14 | (*(u16 *) 0x400100c & 0x43) | t4 << 8 | p[3] << 13;
            }
            return;
        case 4:
            if (param_2 != 0) {
                func_0206b7d4(0x4000020, local_18, 0, 0, 0, 0);
                do {
                    *((vu16 *) 0x400000c) = (*((vu16 *) 0x400000c) & ~3) | p[0];
                    if (p[1] != 0) {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) | 0x40;
                    } else {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) & ~0x40;
                    }
                } while (0);
                {
                    u16 t4              = *(vu16 *) (p + 4);
                    *(vu16 *) 0x400000c = p[2] << 14 | (*(u16 *) 0x400000c & 0x43) | 0x80 | t4 << 8 | p[3] << 13;
                }
                return;
            }
            func_0206b7d4(0x4001020, local_18, 0, 0, 0, 0);
            do {
                *((vu16 *) 0x400100c) = (*((vu16 *) 0x400100c) & ~3) | p[0];
                if (p[1] != 0) {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) | 0x40;
                } else {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) & ~0x40;
                }
            } while (0);
            {
                u16 t4              = *(vu16 *) (p + 4);
                *(vu16 *) 0x400100c = p[2] << 14 | (*(u16 *) 0x400100c & 0x43) | 0x80 | t4 << 8 | p[3] << 13;
            }
            return;
        case 5:
            if (param_2 != 0) {
                func_0206b7d4(0x4000020, local_18, 0, 0, 0, 0);
                do {
                    *((vu16 *) 0x400000c) = (*((vu16 *) 0x400000c) & ~3) | p[0];
                    if (p[1] != 0) {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) | 0x40;
                    } else {
                        *((vu16 *) 0x400000c) = *((vu16 *) 0x400000c) & ~0x40;
                    }
                } while (0);
                {
                    u16 t4              = *(vu16 *) (p + 4);
                    *(vu16 *) 0x400000c = p[2] << 14 | (*(u16 *) 0x400000c & 0x43) | 0x84 | t4 << 8 | p[3] << 13;
                }
                return;
            }
            func_0206b7d4(0x4001020, local_18, 0, 0, 0, 0);
            do {
                *((vu16 *) 0x400100c) = (*((vu16 *) 0x400100c) & ~3) | p[0];
                if (p[1] != 0) {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) | 0x40;
                } else {
                    *((vu16 *) 0x400100c) = *((vu16 *) 0x400100c) & ~0x40;
                }
            } while (0);
            {
                u16 t4              = *(vu16 *) (p + 4);
                *(vu16 *) 0x400100c = p[2] << 14 | (*(u16 *) 0x400100c & 0x43) | 0x84 | t4 << 8 | p[3] << 13;
            }
    }
    return;
}
