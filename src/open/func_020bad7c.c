#include "m2c.h"

typedef struct {
    u8 pad[0x28];
    s32 max;
} Elem;

typedef struct {
    s32 count;
    u8 pad[0x1C];
} List;

typedef struct {
    List *list;
    s32 sub;
    s32 idx;
} Unk_020bad7c;
s32 func_020bad7c(Unk_020bad7c *arg0) {
    List *list = arg0->list;
    s32 count = list->count;
    Elem *elems = (Elem *) (list + 1);

    if (arg0->idx < count - 1) {
        if (arg0->sub < elems[arg0->idx].max - 1) {
            arg0->sub++;
        } else {
            arg0->sub = 0;
            arg0->idx++;
        }
        return 1;
    }
    arg0->idx = count - 1;
    arg0->sub = 0;
    return 0;
}
