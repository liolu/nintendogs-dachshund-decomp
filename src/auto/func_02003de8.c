/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02003e5c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02003e5c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct {
    u8 pad0[0x28];
    u32 cnt;
    u8 pad1[0xc4 - 0x2c];
    u32 lo_c4;
    u32 hi_c8;
    u32 lo_cc;
    u32 hi_d0;
    u32 pad_d4;
    u32 out_d8;
    u32 out_dc;
} Obj;
extern u64 func_02080f5c(void);
extern u64 func_0205d9b0(u64 a, u64 b);
extern Obj *data_0214a798;
void func_02003de8(void) {
    u64 t;
    u64 d;
    Obj *o;

    t                  = func_02080f5c();
    data_0214a798->cnt = data_0214a798->cnt + 1;
    o                  = data_0214a798;
    d                  = t - *(u64 *) &o->lo_cc;
    o->out_d8          = (u32) func_0205d9b0(d * 64000, 0x82ea);
    o                  = data_0214a798;
    d                  = t - *(u64 *) &o->lo_c4;
    o->out_dc          = (u32) func_0205d9b0(d * 64000, 0x82ea);
}
