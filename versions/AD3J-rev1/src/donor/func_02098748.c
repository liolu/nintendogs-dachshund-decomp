/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b0994 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b0994.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02153720;
void func_02098748(u8 *param_1) {
    u8 *q;
    switch (*(s16 *) (data_02153720 + 0x100)) {
        case 0:
        case 11:
        case 15:
        case 18:
            goto end;
        case 1:
            goto c1;
        case 2:
            goto c2;
        case 3:
            goto c3;
        case 4:
            goto c4;
        case 5:
            goto c5;
        case 6:
            goto c6;
        case 7:
            goto c7;
        case 8:
            goto c8;
        case 9:
            goto c9;
        case 10:
            goto c10;
        case 12:
            goto c12;
        case 13:
            goto c13;
        case 14:
            goto c14;
        case 16:
            goto c16;
        case 17:
            goto c17;
        case 19:
            goto c19;
        case 20:
            goto c20;
        default:
            goto end;
    }
c1:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 2;
    return;
c7:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 9;
    return;
c3:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 5;
    return;
c4:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 6;
    return;
c5:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 7;
    return;
c6:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 8;
    return;
c8:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 10;
    if (*(u32 *) (param_1 + 0x1c) != 0) {
        *(u16 *) (*(u32 *) (param_1 + 0x1c) + 8) = *(s16 *) (data_02153720 + 0x7c);
    }
    return;
c9:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 11;
    if (*(u32 *) (param_1 + 0x1c) != 0) {
        *(u16 *) (*(u32 *) (param_1 + 0x1c) + 8) = *(s16 *) (data_02153720 + 0x7c);
    }
    return;
c20:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 24;
    if (*(u32 *) (param_1 + 0x1c) != 0) {
        *(u16 *) (*(u32 *) (param_1 + 0x1c) + 8) = *(s16 *) (data_02153720 + 0x7c);
    }
    return;
c10:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 13;
    return;
c12:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 15;
    return;
c13:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 16;
    return;
c14:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 17;
    return;
c16:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 19;
    return;
c17:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 20;
    return;
c19:
    *(u16 *) (param_1 + 4)    = 1;
    *(u32 *) (param_1 + 0xc)  = 1;
    *(u32 *) (param_1 + 0x18) = 22;
    q                         = *(u8 **) (param_1 + 0x1c);
    if (q == ((void *) 0)) {
        return;
    }
    *(u16 *) (q + 4)                         = *(s16 *) (data_02153720 + 0x11a);
    *(u16 *) (*(u8 **) (param_1 + 0x1c) + 6) = *(s16 *) (data_02153720 + 0x11c);
    return;
c2:
    *(u16 *) (param_1 + 4)   = 1;
    *(u32 *) (param_1 + 0xc) = 1;
    return;
end:
    return;
}
