/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S005 {
    s32 p0;
    s32 p1;
    s32 p2;
    s32 a[11];
    s32 b[4];
    s32 c[3];
} S005;

void func_02081174(void *, void *);
extern u8 *data_0215a02c;
extern S005 *data_ov005_02165fa0;

void func_ov005_0215f7cc(void) {
    s16 i;
    s32 zero;
    s32 f;
    u8 *v;

    i    = 0;
    zero = 0;
    do {
        f = data_ov005_02165fa0->a[i];
        if (f != 0) {
            v = data_0215a02c;
            func_02081174(v != NULL ? *(void **) v : (void *) zero, (void *) f);
            data_ov005_02165fa0->a[i] = zero;
        }
        i++;
    } while (i < 11);
    i = 0;
    do {
        f = data_ov005_02165fa0->b[i];
        if (f != 0) {
            v = data_0215a02c;
            func_02081174(v != NULL ? *(void **) v : (void *) zero, (void *) f);
            data_ov005_02165fa0->b[i] = zero;
        }
        i++;
    } while (i < 4);
    f = data_ov005_02165fa0->c[0];
    if (f != 0) {
        v = data_0215a02c;
        func_02081174(v != NULL ? *(void **) v : (void *) 0, (void *) f);
        data_ov005_02165fa0->c[0] = 0;
    }
    f = data_ov005_02165fa0->c[1];
    if (f != 0) {
        v = data_0215a02c;
        func_02081174(v != NULL ? *(void **) v : (void *) 0, (void *) f);
        data_ov005_02165fa0->c[1] = 0;
    }
    f = data_ov005_02165fa0->c[2];
    if (f != 0) {
        v = data_0215a02c;
        func_02081174(v != NULL ? *(void **) v : (void *) 0, (void *) f);
        data_ov005_02165fa0->c[2] = 0;
    }
}
