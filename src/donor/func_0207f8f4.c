/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205abcc from projets/children-of-mana/src/auto/func_0205abcc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef struct Unk_0210d21c Unk_0210d21c;
struct Unk_0210d21c {
    u32 unk_0;
    u16 unk_4;
    u16 unk_6;
};
extern u32 data_02153334;
extern void func_0207f67c(void);
extern void func_0207f7ec(int tag, void *block, int arg);
extern void func_0207f88c(int tag, void *block, int arg);
extern void func_0206dff0(u32 value, void *dest, u32 size);
void func_0207f8f4(void) {
    Unk_0210d21c *block;
    vu32 zero;

    if (data_02153334 != 0) {
        return;
    }
    data_02153334                        = 1;
    ((Unk_0210d21c *) 0x027ffff0)->unk_0 = 0;
    func_0207f88c(0x7e, ((Unk_0210d21c *) 0x027ffff0), 0);
    block = ((Unk_0210d21c *) 0x027ffff0);
    while (block->unk_6 != 0) {
        func_0207f67c();
    }
    *(vu32 *) 0x027fffb0 = -1;
    *(vu32 *) 0x027fffb4 = -0x10000;
    zero                 = 0;
    func_0206dff0(zero, (void *) 0x027fffc0, 0x28);
    (*(vu16 *) 0x04000204) |= 0x800;
    (*(vu16 *) 0x04000204) |= 0x80;
    func_0207f7ec(0x7e, ((Unk_0210d21c *) 0x027ffff0), 0);
    func_0207f88c(0x7f, ((Unk_0210d21c *) 0x027ffff0), 0);
}
