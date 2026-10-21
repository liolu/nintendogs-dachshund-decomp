#include "m2c.h"
extern void *data_0214da84;
extern void *data_0215a04c;
extern s32 data_02139a48;
extern s32 data_0214da80;
void func_02041e98(s32 arg0);
void func_0203e5f0(void *arg0);
void func_020c6e68(void);
void func_02043bbc(void);
typedef struct {
    u8 pad[0x54];
    void *arr[3];
} Unk41de0;
void func_02041de0(void) {
    s8 i;
    void *q;

    for (i = 0; i < 3; i++) {
        if (i < 0 || i >= 3) {
            q = 0;
        } else {
            q = ((Unk41de0 *) data_0214da84)->arr[i];
        }
        func_02041e98(i);
        if (q != 0) {
            func_0203e5f0(q);
        }
    }
    func_020c6e68();
    func_02043bbc();
    if (*(u16 *) data_0215a04c == 0) {
        data_02139a48 = 0;
    }
    data_0214da80 = 0;
    data_0214da84 = 0;
}
/* probe */
