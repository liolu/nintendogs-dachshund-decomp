/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fab2c from projets/nintendogs-shiba-friends/src/donor/func_020fab2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02147404;
extern u32 data_0213d4d0;
extern u32 data_02147410;
extern u32 data_02156074;
extern u32 func_02080f5c(void);
typedef struct {
    s16 w[5];
} T5;
typedef struct {
    s16 w[9];
} T9;
void func_020fab34(s32 param_1) {
    T5 a;
    T9 b;
    u32 uVar7;
    s32 iVar14;
    s32 iVar13;
    u16 uVar3;
    u8 *iVar10;

    iVar10        = (u8 *) &data_0213d4d0;
    a             = *(T5 *) &data_02147404;
    b             = *(T9 *) &data_02147410;
    uVar7         = func_02080f5c();
    data_02156074 = uVar7;
    if (*(s16 *) ((u8 *) &data_0213d4d0 + 4) == -1) {
        return;
    }
    do {
        if ((*(u16 *) (iVar10 + 0x14) & 0x3f) != 0) {
            uVar7                    = data_02156074 * 0x10dcd + 1;
            data_02156074            = uVar7;
            *(s16 *) (iVar10 + 0x16) = a.w[(u16) (((u32) (u16) uVar7 * 5) >> 16)];
            uVar3                    = *(u16 *) (iVar10 + 0x14);
            if ((uVar3 & 0x38) != 0) {
                iVar13 = 0;
                if (param_1 >= 10000) {
                    iVar14 = 2;
                } else if (param_1 >= 300) {
                    iVar14 = 1;
                } else {
                    iVar14 = 0;
                }
                if ((uVar3 & 0x20) != 0) {
                    iVar13 = 2;
                } else if ((uVar3 & 0x10) != 0) {
                    iVar13 = 1;
                } else if ((uVar3 & 8) != 0) {
                    iVar13 = 0;
                }
                uVar7         = data_02156074 * 0x10dcd + 1;
                data_02156074 = uVar7;
                if (*(s16 *) ((u8 *) &b + iVar14 * 6 + iVar13 * 2) <= (s32) (u16) (((u32) (u16) uVar7 * 100) >> 16)) {
                    *(u16 *) (iVar10 + 0x16) = 0;
                }
            }
        }
        iVar10 += 0x20;
    } while (*(s16 *) (iVar10 + 4) != -1);
}
