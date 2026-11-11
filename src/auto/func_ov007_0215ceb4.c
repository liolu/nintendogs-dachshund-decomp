/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov007_0215e808;
extern u8 *data_ov007_0215e7fc;
void func_0206f6c4(void);
void func_ov007_0215b924(void *a);
void func_ov007_0215b938(void *a);
void func_ov007_0215b94c(void *a);
void func_ov007_0215b960(void *a);
void func_ov007_0215bcb8(void);
void func_ov007_0215cb40(s32 a, s32 b, s32 c);
extern void func_ov007_0215c818(void);
extern void func_ov007_0215c7d4(void);
extern void func_ov007_0215c7b8(void);

void func_ov007_0215ceb4(void) {
    s32 i;

    func_0206f6c4();
    for (i = 0; i < 16; i++) {
        (&data_ov007_0215e808)[i] = 0;
    }
    *(s32 *) (data_ov007_0215e7fc + 0x10C) = 0;
    *(s32 *) (data_ov007_0215e7fc + 0x110) = 0;
    *(s32 *) (data_ov007_0215e7fc + 0x124) = 0;
    *(s32 *) (data_ov007_0215e7fc + 0x128) = 0;
    func_ov007_0215b94c((void *) func_ov007_0215c818);
    func_ov007_0215b960((void *) func_ov007_0215cb40);
    func_ov007_0215b938((void *) func_ov007_0215c7d4);
    func_ov007_0215b924((void *) func_ov007_0215c7b8);
    *(u16 *) (data_ov007_0215e7fc + 0x12C) = 0;
    func_ov007_0215bcb8();
}
