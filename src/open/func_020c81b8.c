#include "m2c.h"

extern void *data_02158acc;
void *func_020038a8(s32, s32);                      /* extern */
void func_0206cc3c(M2C_UNK, void *, s32);           /* extern */
void func_0208831c(void *);                         /* extern */
void func_020066f0(s32, M2C_UNK);                   /* extern */
void func_020c829c(void);                           /* extern */

void func_020c81b8(s32 arg0, s32 arg1) {
    s16 *p;
    s8 *arr;
    s16 i;
    s8 *entry;
    s32 off;
    s32 n;
    volatile u32 fill;

    p = (s16 *) func_020038a8(arg0, 8);
    *p = (s16) (arg1 * 4 + 1);
    n = *p;
    *(s32 *) (p + 2) = (s32) func_020038a8(arg0, n * 0x5048u);
    i = 0;
    if (*p > 0) {
        off = 0;
        do {
            arr = (s8 *) *(s32 *) (p + 2);
            entry = arr + off;
            fill = 0;
            func_0206cc3c(fill, entry, 0x5000);
            func_0208831c(entry + 0x5000);
            *(u16 *) (entry + 0x5044) = 0xFFFF;
            *(s16 *) (entry + 0x5046) = 0;
            i = (s16) (i + 1);
            off += 0x5048;
        } while (i < *p);
    }
    data_02158acc = p;
    func_020066f0(0xC, (s32) func_020c829c);
}
