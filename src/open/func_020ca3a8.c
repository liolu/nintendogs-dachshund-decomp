typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
void *func_020038a8(void *, u32);
void func_0200657c(void *);
void *func_0207836c(const void *);
void *func_0207d038(void *, void *);
void func_0207d1a0(void *, void *);
extern void ***data_02159e28;
extern u8 data_02142c00[];
void *func_020ca3a8(void *arg0, void *arg1) {
    u8 *entry;
    void **list;
    u8 *node;

    list  = *data_02159e28;
    entry = 0;
    node  = (u8 *) *list;
    while (node != 0) {
        if (*(void **) (node + 8) == arg1) {
            entry = node;
            break;
        }
        node = (u8 *) func_0207d038(list, node);
    }
    if (entry == 0) {
        entry                    = (u8 *) func_020038a8(arg0, 0x18);
        *(u32 *) (entry + 0)     = (u32) data_02142c00;
        *(u16 *) (entry + 4)     = 0;
        *(u16 *) (entry + 6)     = 0;
        *(u32 *) (entry + 8)     = 0;
        *(u32 *) (entry + 0xC)   = 0;
        func_0200657c(entry + 0x10);
        *(void **) (entry + 8) = arg1;
        *(u32 *) (entry + 0xC) = 0;
        if (arg1 != 0) {
            u8 *file               = (u8 *) func_0207836c(arg1);
            *(u32 *) (entry + 0xC) = (u32) file + *(u32 *) (file + *(u16 *) (file + 0xE) + 0xC);
        }
        func_0207d1a0(list, entry);
    }
    return entry;
}
