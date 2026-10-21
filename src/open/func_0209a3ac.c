#include "m2c.h"

typedef struct {
    u16 unk_0x00;       /* 0x00 */
    s16 unk_0x02;       /* 0x02 */
    s16 id;             /* 0x04 */
    u8 pad_0x06[0x6];
    u16 unk_0x0C;       /* 0x0C */
    u8 pad_0x0E[0x6];
    u16 unk_0x14;       /* 0x14 */
    s16 unk_0x16;       /* 0x16 */
    u8 pad_0x18[0x8];
} Unk_0209a3ac;

typedef struct {
    s16 v[5];
} TblA_0209a3ac;

typedef struct {
    s16 v[9];
} TblB_0209a3ac;

typedef struct {
    TblA_0209a3ac a;
    TblB_0209a3ac b;
} Tbl_0209a3ac;

extern Unk_0209a3ac data_02147e8c[];
extern TblA_0209a3ac data_0213d1b0;
extern TblB_0209a3ac data_0213d1bc;
extern s32 data_021555ec;
extern s32 func_02080978(void);

void func_0209a3ac(s32 arg0) {
    s16 ta[5];
    s16 tb[3][3];
    Unk_0209a3ac *p;
    u32 r;
    s32 row;
    s32 col;

    p = data_02147e8c;
    *(TblA_0209a3ac *) ta = data_0213d1b0;
    *(TblB_0209a3ac *) tb = data_0213d1bc;
    data_021555ec = func_02080978();

    for (; p->id != -1; p++) {
        if ((p->unk_0x14 & 0x3F) == 0) {
            continue;
        }
        r = data_021555ec * 0x10DCD + 1;
        data_021555ec = r;
        p->unk_0x16 = ta[(u16) ((((u32) (u16) r) * 5) >> 16)];
        if ((p->unk_0x14 & 0x38) != 0) {
            col = 0;
            row = (arg0 >= 0x2710) ? 2 : ((arg0 >= 0x12C) ? 1 : 0);
            if (p->unk_0x14 & 0x20) {
                col = 2;
            } else if (p->unk_0x14 & 0x10) {
                col = 1;
            } else if (p->unk_0x14 & 0x8) {
                col = 0;
            }
            r = data_021555ec * 0x10DCD + 1;
            data_021555ec = r;
            if (tb[row][col] <= (u16) ((((u32) (u16) r) * 100) >> 16)) {
                p->unk_0x16 = 0;
            }
        }
    }
}
