typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {
    u8 pad[0xc];
    u32 flags;
} Blk;
void *func_02073a6c(void *, u32);
void func_020739d8(void *);
void *func_02006b68(void *arg0) {
    Blk *p;
    u32 flags;

    p     = (Blk *) ((u8 *) func_02073a6c(arg0, 0x504C5454) + 8);
    flags = p->flags & 0x0f000000;
    if (flags == 0) {
        func_020739d8(p);
    }
    return p;
}
