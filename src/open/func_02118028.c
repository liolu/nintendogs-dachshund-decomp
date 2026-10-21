#include "m2c.h"
extern u8 *data_02159e70;
extern s16 data_0215a060;
void func_02116dec(void *, s32);
void func_02116d20(void *, s32);
void func_020e2810(void);
void func_020cf588(s32, s32);
void func_02118168(void *, s32);
void func_020ceb58(s32);
void func_02118028(void *arg0) {
    u8 *base = data_02159e70;
    s16 state = *(s32 *) (base + 0x486C);
    s16 r6 = *(s16 *) (base + 0x48B4);
    s16 r5 = *(s16 *) (base + 0x48B6);

    switch (state) {
    case 0:
        return;
    case 1:
        switch (data_0215a060) {
        case 6:
            func_02116dec(arg0, 6);
            func_02116d20(arg0, 1);
            func_020e2810();
            break;
        case 2:
            func_02116dec(arg0, 2);
            func_02116d20(arg0, 0);
            func_020e2810();
            break;
        }
        break;
    case 2:
        func_020cf588(r6, r5);
        switch (r6) {
        case 0:
            func_02118168(arg0, r5);
            break;
        case 2:
            switch (r5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                func_020ceb58(r5);
                *(u16 *) ((s8 *) arg0 + 0x2E) = 2;
                *(u16 *) ((s8 *) arg0 + 0x30) = 0;
                *(u16 *) ((s8 *) arg0 + 0x100) = 7;
                break;
            }
            break;
        }
        break;
    }
}
