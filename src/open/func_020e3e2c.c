#include "m2c.h"
extern void *data_02159fc4;
extern void *data_02144b50[];
extern void func_0206cbc4();
void func_020e3e2c(s32 arg0) {
    s32 *wk;
    volatile u16 pad;

    wk = data_02159fc4;
    if (wk[0] == arg0) {
        return;
    }
    if (wk[0] != 0) {
        if (wk[0] != 0 && wk[2] != 0 && wk[2] != 5) {
            if (wk[2] != 6) {
                wk[2] = 5;
            }
        }
        wk[1] = arg0;
        return;
    }
    pad = 0;
    func_0206cbc4(pad, wk + 4, 0x144);
    wk[0] = arg0;
    wk[1] = 0;
    wk[2] = 1;
    wk[3] = (s32) data_02144b50[arg0];
    (*(void (**)(void *)) *(volatile s32 *) &wk[3])(wk + 4);
    return;
}
