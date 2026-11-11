#include "m2c.h"

typedef struct {
    u8 language;
    u8 favoriteColour;
    u8 month;
    u8 day;
    u16 nickName[10];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;

extern u16 data_02159e10[];
extern u32 data_02159e18;
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
void func_02080d78(OSOwnerInfo *);

void func_020c9060(void) {
    volatile u16 pad = 0;
    OSOwnerInfo info;

    M2C_FIELD(data_02159e10, u16 *, 0) = 0;
    M2C_FIELD(data_02159e10, u16 *, 2) = 0;
    M2C_FIELD(data_02159e10, u16 *, 4) = 1;
    func_0206cbc4(pad, &data_02159e18, 8);
    func_02080d78(&info);
    M2C_FIELD(data_02159e10, u16 *, 4) = 1;
}
