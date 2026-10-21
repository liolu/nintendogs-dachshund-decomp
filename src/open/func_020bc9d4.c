#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 count;
    Vec *positions;
    Vec *velocities;
} AgentList;

extern const s64 data_02124d28;
s32 func_01ffdb08(s16, s32);
s32 func_020b1f88(s32, const Vec *, s32, Vec *);
void func_02068270(const Vec *, const Vec *, Vec *);

s32 func_020bc9d4(AgentList *arg0, s16 arg1, s32 arg2) {
    Vec vel;
    s32 found = 0;
    s32 handle;
    s32 i;
    s64 d;

    handle = ((s32 (*)(s16)) func_01ffdb08)(arg1);
    if (handle == 0) {
        return 0;
    }
    for (i = 0; i < arg0->count; i++) {
        vel.x = 0;
        vel.y = 0;
        vel.z = 0;
        if (func_020b1f88(handle, &arg0->positions[i], arg2, &vel) != 0) {
            d = (s64) vel.x * vel.x + (s64) vel.y * vel.y + (s64) vel.z * vel.z;
            if (d >= data_02124d28) {
                func_02068270(&arg0->positions[i], &vel, &arg0->positions[i]);
                arg0->velocities[i].x += vel.x >> 3;
                arg0->velocities[i].z += vel.z >> 3;
            }
            found = 1;
        }
    }
    return found;
}
