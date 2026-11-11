/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c59e4 from projets/eyeshield-21/src/auto/func_020c59e4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214eab0[];
extern s32 func_0206e834(u32 a);
extern s32 func_0206efd8(void);
typedef struct {
    u32 : 8;
    u32 f : 5;
} TA8_5;
typedef struct {
    u32 : 16;
    u32 f : 6;
} TA16_6;
typedef struct {
    u32 : 24;
    u32 f : 3;
} TA24_3;
typedef struct {
    u32 f : 6;
} TC0_6;
typedef struct {
    u32 : 8;
    u32 f : 7;
} TC8_7;
typedef struct {
    u32 : 16;
    u32 f : 7;
} TC16_7;
typedef struct {
    u32 f : 3;
} TC0_3;
typedef struct {
    u32 : 8;
    u32 f : 6;
} TC8_6;
typedef struct {
    u32 : 7;
    u32 f : 1;
} TC7_1;
typedef struct {
    u32 : 15;
    u32 f : 1;
} TC15_1;
typedef struct {
    u32 : 23;
    u32 f : 1;
} TC23_1;
typedef struct {
    u16 f : 4;
} TB0_4;
typedef struct {
    u16 : 6;
    u16 f : 1;
} TB6_1;
void func_0206e8b8(u32 param_1, u32 param_2, s32 param_3) {
    u32 *q;
    u32 uVar8;
    u32 t;
    u32 lo;
    void (*pcVar5)(u32, u32);
    void (*fp)(void);

    if (param_3 != 0) {
        t = data_0214eab0[6];
        if (t != 0) {
            data_0214eab0[6] = 0;
        }
        if (data_0214eab0[0] != 0) {
            data_0214eab0[0] = 0;
        }
        pcVar5 = (void (*)(u32, u32)) data_0214eab0[1];
        if (pcVar5 == ((void *) 0)) {
            return;
        }
        t                = data_0214eab0[4];
        data_0214eab0[1] = 0;
        pcVar5(6, t);
        return;
    }
    lo = param_2 & 0xff;
    if ((u8) ((param_2 & 0x7f00) >> 8) == 0x30) {
        fp = (void (*)(void)) data_0214eab0[7];
        if (fp == ((void *) 0)) {
            return;
        }
        fp();
        return;
    }
    if (lo == 0) {
        uVar8 = 0;
        switch (data_0214eab0[5]) {
            case 0:
                q    = (u32 *) data_0214eab0[2];
                q[0] = func_0206e834((*(u8 *) 0x027ffde8));
                q[1] = func_0206e834((((TA8_5 *) 0x027ffde8)->f));
                q[2] = func_0206e834((((TA16_6 *) 0x027ffde8)->f));
                q[3] = (((TA24_3 *) 0x027ffde8)->f);
                break;
            case 1:
                q    = (u32 *) data_0214eab0[2];
                q[0] = func_0206e834((((TC0_6 *) 0x027ffdec)->f));
                q[1] = func_0206e834((((TC8_7 *) 0x027ffdec)->f));
                q[2] = func_0206e834((((TC16_7 *) 0x027ffdec)->f));
                break;
            case 2:
                q    = (u32 *) data_0214eab0[2];
                q[0] = func_0206e834((*(u32 *) 0x027ffde8) & 0xff);
                q[1] = func_0206e834((((TA8_5 *) 0x027ffde8)->f));
                q[2] = func_0206e834((((TA16_6 *) 0x027ffde8)->f));
                q[3] = (((TA24_3 *) 0x027ffde8)->f);
                q    = (u32 *) data_0214eab0[3];
                q[0] = func_0206e834((((TC0_6 *) 0x027ffdec)->f));
                q[1] = func_0206e834((((TC8_7 *) 0x027ffdec)->f));
                q[2] = func_0206e834((((TC16_7 *) 0x027ffdec)->f));
                break;
            case 3:
            case 4:
            case 5:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            case 6:
                q = (u32 *) data_0214eab0[2];
                switch ((((TB0_4 *) 0x027ffdea)->f)) {
                    case 4:
                        *q = 1;
                        break;
                    default:
                        *q = uVar8;
                        break;
                }
                break;
            case 7:
                q = (u32 *) data_0214eab0[2];
                if ((((TB6_1 *) 0x027ffdea)->f)) {
                    *q = 1;
                } else {
                    *q = uVar8;
                }
                break;
            case 8:
                q    = (u32 *) data_0214eab0[2];
                q[0] = (((TC0_3 *) 0x027ffdec)->f);
                q[1] = func_0206e834((((TC8_6 *) 0x027ffdec)->f));
                q[2] = func_0206e834((((TC16_7 *) 0x027ffdec)->f));
                q[3] = uVar8;
                if ((((TC7_1 *) 0x027ffdec)->f)) {
                    t    = q[3];
                    q[3] = t + 1;
                }
                if ((((TC15_1 *) 0x027ffdec)->f)) {
                    t    = q[3];
                    q[3] = t + 2;
                }
                if ((((TC23_1 *) 0x027ffdec)->f)) {
                    t    = q[3];
                    q[3] = t + 4;
                }
                break;
            case 9:
                t = data_0214eab0[6];
                if (t == 0) {
                    if (*(u32 *) data_0214eab0[2] == 1) {
                        if ((((TB0_4 *) 0x027ffdea)->f) != 4) {
                            data_0214eab0[6]      = t + 1;
                            (*(u16 *) 0x027ffdea) = ((*(u16 *) 0x027ffdea) & ~15) | 4;
                            if (func_0206efd8() == 0) {
                                data_0214eab0[6] = uVar8;
                                uVar8            = 3;
                            }
                        }
                    } else if ((((TB0_4 *) 0x027ffdea)->f) != 0) {
                        data_0214eab0[6]      = t + 1;
                        (*(u16 *) 0x027ffdea) = (*(u16 *) 0x027ffdea) & ~15;
                        if (func_0206efd8() == 0) {
                            data_0214eab0[6] = uVar8;
                            uVar8            = 3;
                        }
                    }
                } else {
                    data_0214eab0[6] = uVar8;
                }
                break;
            case 10:
                t = data_0214eab0[6];
                if (t == 0) {
                    if (*(u32 *) data_0214eab0[2] == 1) {
                        if ((((TB6_1 *) 0x027ffdea)->f) == 0) {
                            data_0214eab0[6]      = t + 1;
                            (*(u16 *) 0x027ffdea) = (*(u16 *) 0x027ffdea) | 0x40;
                            if (func_0206efd8() == 0) {
                                data_0214eab0[6] = uVar8;
                                uVar8            = 3;
                            }
                        }
                    } else if ((((TB6_1 *) 0x027ffdea)->f) != 0) {
                        data_0214eab0[6]      = t + 1;
                        (*(u16 *) 0x027ffdea) = (*(u16 *) 0x027ffdea) & ~0x40;
                        if (func_0206efd8() == 0) {
                            data_0214eab0[6] = uVar8;
                            uVar8            = 3;
                        }
                    }
                } else {
                    data_0214eab0[6] = uVar8;
                }
                break;
            default:
                data_0214eab0[6] = 0;
                uVar8            = 4;
                break;
        }
    } else {
        data_0214eab0[6] = 0;
        switch (lo) {
            case 1:
                uVar8 = 4;
                break;
            case 2:
                uVar8 = 5;
                break;
            case 3:
                uVar8 = 1;
                break;
            case 4:
            default:
                uVar8 = 6;
                break;
        }
    }
    if (data_0214eab0[6] != 0) {
        return;
    }
    t = data_0214eab0[0];
    if (t != 0) {
        data_0214eab0[0] = 0;
    }
    pcVar5 = (void (*)(u32, u32)) data_0214eab0[1];
    if (pcVar5 == ((void *) 0)) {
        return;
    }
    t                = data_0214eab0[4];
    data_0214eab0[1] = 0;
    pcVar5(uVar8, t);
}
