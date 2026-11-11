/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa3e4 from https://github.com/banatic/acww-decomp src/autoload_2/func_020fa3e4.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_0206bfdc(void);
extern void func_0206bf10(void);
extern void func_0206bf68(const void *pData, unsigned int format, unsigned int size);
struct UnkStruct_020fa3e4 {
    unsigned int unk_00;
    unsigned int type : 4;
    unsigned int : 28;
    unsigned int unk_08;
    unsigned int unk_0C;
    unsigned int unk_10;
};
struct Entry {
    struct UnkStruct_020fa3e4 *p;
    unsigned int pad_04;
    unsigned int result;
    unsigned int pad_0C;
    unsigned int pad_10;
};
struct UnkStruct_020fa3e4_2 {
    char pad_00[0x20];
    struct Entry *entries;
    char pad_24[2];
    unsigned short count;
};
int func_020814a8(struct UnkStruct_020fa3e4_2 *self, int (*callback)(unsigned int, int)) {
    int i;
    int one = 1;

    func_0206bfdc();

    for (i = 0; i < self->count; i++) {
        struct Entry *e              = &self->entries[i];
        struct UnkStruct_020fa3e4 *p = e->p;
        int value                    = 0;

        if (p->unk_10 != 0) {
            int arg = (p->type == 2) ? one : 0;
            value   = callback(p->unk_10, arg);
            func_0206bf68((char *) e->p + p->unk_0C, value, p->unk_10);
        }

        e->result = value;
    }

    func_0206bf10();
    return 1;
}
