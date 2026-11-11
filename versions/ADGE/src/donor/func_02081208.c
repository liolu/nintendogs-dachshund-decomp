/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa0fc from https://github.com/banatic/acww-decomp src/autoload_2/func_020fa0fc.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef struct UnkStruct_020fa0fc {
    u32 x, y, z;
} UnkStruct_020fa0fc;
typedef struct Entry {
    u32 data[8];
} Entry;
typedef struct UnkStruct_020fa0fc_2 {
    u32 pad_00[6];
    u32 **unk_18;
} UnkStruct_020fa0fc_2;
typedef struct Parent {
    u32 pad_00;
    u32 unk_04;
    u32 pad_08;
    u32 unk_0C;
    u32 pad_10[3];
    Entry *unk_1C;
} Parent;
extern UnkStruct_020fa0fc_2 *func_02085b04(u32 *parent_field_c, UnkStruct_020fa0fc *local);
extern void func_02082690(UnkStruct_020fa0fc_2 *obj, Entry *entry, UnkStruct_020fa0fc *local);
extern void func_02085b48(u32 *parent_field_4, UnkStruct_020fa0fc_2 *obj);
UnkStruct_020fa0fc_2 *func_02081208(Parent *p, int idx, void (*cb)(UnkStruct_020fa0fc_2 *)) {
    UnkStruct_020fa0fc_2 *obj = 0;

    if (p->unk_0C != 0) {
        UnkStruct_020fa0fc local = {0, 0, 0};

        obj = func_02085b04(&p->unk_0C, &local);
        func_02082690(obj, &p->unk_1C[idx], &local);

        if (cb != 0) {
            cb(obj);
        }

        func_02085b48(&p->unk_04, obj);

        if (((**obj->unk_18 << 0x11) >> 0x1f) != 0) {
            obj = 0;
        }
    }

    return obj;
}
