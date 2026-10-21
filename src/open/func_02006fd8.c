typedef struct {
    unsigned short unk0;
    unsigned short unk2;
    unsigned short unk4;
    unsigned short unk6;
} Unk8;

typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;

extern unsigned short *data_0214d750;

void func_02001648(void);
s32 func_020015c8(void *buf);
void func_0206da94(void *arg0, void *arg1, void *arg2, void *arg3);
void func_020071e0(void);
void func_02006fd8(Unk8 *arg0, int arg1) {
    int i;

    i = 0;
    if (arg1 <= 0) {
        return;
    }
    do {
        arg0[i] = *(Unk8 *) ((u8 *) data_0214d750 + 0x3C);
        i++;
    } while (i < arg1);
}
