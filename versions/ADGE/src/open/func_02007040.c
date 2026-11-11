typedef unsigned char u8;
typedef signed int s32;

typedef struct {
    unsigned short unk0;
    unsigned short unk2;
    unsigned short unk4;
    unsigned short unk6;
} Unk8;

extern unsigned short *data_0214d750;
void func_02001648(void);
s32 func_020015c8(void *buf);
void func_0206da94(void *arg0, void *arg1, void *arg2, void *arg3);
void func_020071e0(void);

void func_02007040(void) {
    Unk8 buf;

    func_02001648();
    if (func_020015c8(&buf) == 0) {
        *(Unk8 *) ((u8 *) data_0214d750 + 0x3C) = buf;
    }
    func_0206da94(data_0214d750, (u8 *) data_0214d750 + 0x10, func_020071e0, data_0214d750);
}
