/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211a03c from projets/nintendogs-chihuahua-friends/src/donor/func_0211a03c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    VecFx32 pos;
    VecFx32 tgt;
    VecFx32 up;
    fx32 roll;
} Pose;
typedef struct {
    Pose pose;
    s32 frames;
} Key;
typedef struct {
    s32 count;
    u8 pad[0x1c];
    Key keys[1];
} Path;
typedef struct {
    Path *path;
    s32 time;
    s32 idx;
    s32 unk0c;
    Pose out;
} Cam;
extern const fx64 data_021245c4;
extern void func_02117808(const VecFx32 *p0, const VecFx32 *p1, const VecFx32 *p2, const VecFx32 *p3, fx32 t0, fx32 t1,
                          fx32 t2, fx32 t3, fx32 t, VecFx32 *out);
extern void func_020069bc(const VecFx32 *src, VecFx32 *dst);
void func_0211a034(Cam *cam) {
    Pose *out;
    s32 idx;
    s32 time;
    s32 frames;
    Path *path;
    fx32 ratio;
    fx32 t0;
    const VecFx32 *tgt0;
    const VecFx32 *tgt1;
    const VecFx32 *tgt2;
    const VecFx32 *tgt3;
    const Key *prev;
    const Key *cur;
    const Key *next;
    const Key *next2;
    fx32 t3;
    Key *keys;

    path   = cam->path;
    idx    = cam->idx;
    keys   = path->keys;
    frames = keys[idx].frames;
    time   = cam->time;
    out    = &cam->out;
    ratio  = (time << 12) / frames;
    if (idx >= path->count - 1) {
        cam->out = keys[idx].pose;
        return;
    }
    next = &keys[idx + 1];
    cur  = &keys[idx];
    tgt1 = &cur->pose.tgt;
    tgt2 = &next->pose.tgt;
    if (idx == 0) {
        t0   = 0;
        prev = ((void *) 0);
        tgt0 = ((void *) 0);
    } else {
        prev = &keys[idx - 1];
        tgt0 = &prev->pose.tgt;
        t0   = -cur[-1].frames;
    }
    if (idx + 1 >= path->count - 1) {
        next2 = ((void *) 0);
        t3    = frames;
        tgt3  = ((void *) 0);
    } else {
        next2 = &keys[idx + 2];
        t3    = frames + (keys + idx + 1)->frames;
        tgt3  = &next2->pose.tgt;
    }
    func_02117808(&prev->pose.pos, &cur->pose.pos, &next->pose.pos, &next2->pose.pos, t0, 0, frames, t3, time, &out->pos);
    func_02117808(tgt0, tgt1, tgt2, tgt3, t0, 0, frames, t3, time, &out->tgt);
    out->up.x = cur->pose.up.x + ((fx32) (((fx64) (ratio) * (next->pose.up.x - cur->pose.up.x) + 0x800) >> 12));
    out->up.y = cur->pose.up.y + ((fx32) (((fx64) (ratio) * (next->pose.up.y - cur->pose.up.y) + 0x800) >> 12));
    out->up.z = cur->pose.up.z + ((fx32) (((fx64) (ratio) * (next->pose.up.z - cur->pose.up.z) + 0x800) >> 12));
    if ((fx64) out->up.x * out->up.x + (fx64) out->up.y * out->up.y + (fx64) out->up.z * out->up.z >= data_021245c4) {
        func_020069bc(&out->up, &out->up);
    }
    out->roll = cur->pose.roll + ((fx32) (((fx64) (ratio) * (next->pose.roll - cur->pose.roll) + 0x800) >> 12));
}
