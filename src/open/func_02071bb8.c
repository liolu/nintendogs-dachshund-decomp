#include "m2c.h"

typedef struct {
    u32 count;
    u32 offset[1];
} Table;

extern u8 *data_0215087c;

static inline u8 *InfoItem(u8 *info, u32 offset) {
    if (offset == 0) {
        return NULL;
    }
    return info + offset;
}

static inline u8 *ArcInfoItem(u8 *arc, u32 offset) {
    u8 *info = M2C_FIELD(arc, u8 **, 0x88);

    if (offset == 0) {
        return NULL;
    }
    return info + offset;
}

void *func_02071bb8(s32 index) {
    u8 *arc = data_0215087c;
    u8 *info = M2C_FIELD(arc, u8 **, 0x88);
    Table *table = (Table *) InfoItem(info, M2C_FIELD(info, u32 *, 0x1C));

    if (table == NULL) {
        return NULL;
    }
    if (index < 0) {
        return NULL;
    }
    if (index >= M2C_FIELD(table, u32 *, 0)) {
        return NULL;
    }
    return ArcInfoItem(arc, M2C_FIELD(table, u32 *, 4 + index * 4));
}
