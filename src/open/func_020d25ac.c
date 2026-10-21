#include "m2c.h"

typedef struct {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 f0c;
    s32 f10;
} SeqEntry;

typedef struct {
    s32 f00;
    s16 f04;
    s16 f06;
    s16 f08;
    SeqEntry seq[1];
} SeqPlayer;

typedef struct {
    u8 pad[4];
    s32 f04;
    u8 pad2[8];
    s32 f10;
    s32 f14;
} SeqBuf;

extern SeqPlayer *data_02159e38;
extern u16 data_02159e34;

s32 func_020d28d8(u32, s32);
u8 *func_020d29d4(void *, s32);
u8 *func_020d29e4(void *, s32);
void func_020d29f4(u8 *, s32, s32);
void func_020d28b0(s32, s32, s32, s32, s32);
s32 func_02065814(void);
s32 func_02065820(void);
s32 func_020651dc(void);
void func_02065134(u16);

s32 func_020d25ac(s32 arg0) {
    SeqEntry *e;
    SeqBuf *q;
    s32 obj;

    if (data_02159e38->f00 == 0) {
        return 1;
    }
    if (data_02159e38->f06 > 0) {
        switch (data_02159e38->f08) {
            case 0:
                e = &data_02159e38->seq[data_02159e38->f04];
                data_02159e38->f08 = 1;
                if (e->f10 != 0) {
                    q = (SeqBuf *) func_020d28d8(0, 0);
                    func_020d29f4(func_020d29e4(q, 0), q->f04, 1);
                }
                func_020d28b0(e->f00, e->f04, e->f0c, 0, 0);
                break;
            case 1:
                obj = arg0 != 0 ? func_02065814() : func_02065820();
                if (obj != 0) {
                    if (func_020651dc() != 0) {
                        obj = 0;
                    }
                }
                if (obj == 0) {
                    break;
                }
                data_02159e38->f04++;
                if (data_02159e38->f04 >= data_02159e38->f06) {
                    data_02159e38->f08 = 2;
                    data_02159e38->f04 = 0;
                    e = &data_02159e38->seq[data_02159e38->f04];
                    if (e->f10 != 0) {
                        q = (SeqBuf *) func_020d28d8(0, 0);
                        func_020d29f4(func_020d29d4(q, 0), q->f04, 1);
                    }
                    func_020d28b0(e->f00 + 0x20000, e->f08, e->f0c, 0, 0);
                } else {
                    e = &data_02159e38->seq[data_02159e38->f04];
                    if (e->f10 != 0) {
                        q = (SeqBuf *) func_020d28d8(0, 0);
                        func_020d29f4(func_020d29e4(q, 0), q->f04, 1);
                    }
                    func_020d28b0(e->f00, e->f04, e->f0c, 0, 0);
                }
                break;
            case 2:
                obj = arg0 != 0 ? func_02065814() : func_02065820();
                if (obj != 0) {
                    if (func_020651dc() != 0) {
                        obj = 0;
                    }
                }
                if (obj == 0) {
                    break;
                }
                data_02159e38->f04++;
                if (data_02159e38->f04 >= data_02159e38->f06) {
                    data_02159e38->f08 = 3;
                    break;
                }
                e = &data_02159e38->seq[data_02159e38->f04];
                if (e->f10 != 0) {
                    q = (SeqBuf *) func_020d28d8(0, 0);
                    func_020d29f4(func_020d29d4(q, 0), q->f04, 1);
                }
                func_020d28b0(e->f00 + 0x20000, e->f08, e->f0c, 0, 0);
                break;
            case 3:
                break;
        }
    }
    if (data_02159e38->f08 == 3) {
        func_02065134(data_02159e34);
        data_02159e38->f00 = 0;
    }
    return data_02159e38->f04 == data_02159e38->f06;
}
