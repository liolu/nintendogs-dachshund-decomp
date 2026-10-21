#include "m2c.h"

typedef struct {
    s32 x, y, z;
} UnkVec32;

typedef struct {
    s16 x, y, z;
} UnkVec16;

typedef struct {
    u32 emissionType : 4;
    u32 : 28;
} UnkHeader;

typedef struct {
    UnkHeader *header;
} UnkResource;

typedef struct {
    char pad0[0x18];
    UnkResource *resource; /* 0x18 */
    char pad1c[4];
    UnkVec32 mid;          /* 0x20 */
    char pad2c[0x10];
    UnkVec16 dir;          /* 0x3c */
    char pad42[6];
    s32 dist;              /* 0x48 */
} UnkOwner;

extern s32 func_02067cbc();
extern void func_02067ef8();

void func_02081b5c(UnkOwner *owner, const UnkVec32 *a, const UnkVec32 *b) {
    UnkVec32 diff;

    if (owner->resource->header->emissionType - 6 > 1) {
        return;
    }
    owner->mid.x = (b->x + a->x) / 2;
    owner->mid.y = (b->y + a->y) / 2;
    owner->mid.z = (b->z + a->z) / 2;
    owner->dist = func_02067cbc(a, b) / 2;
    diff.x = b->x - a->x;
    diff.y = b->y - a->y;
    diff.z = b->z - a->z;
    func_02067ef8(&diff, &diff);
    owner->dir.x = diff.x;
    owner->dir.y = diff.y;
    owner->dir.z = diff.z;
}
