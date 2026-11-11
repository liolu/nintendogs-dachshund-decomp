/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_0206a408();
extern void func_0206d5f0();
extern u32 data_0214e9ec;
extern u32 data_0214ea04;
extern u32 data_0214ea00;
extern s32 data_0214e9fc;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_02128ce8[16];
void func_0206d5f0() {
    u32 temp      = func_0206a408();
    data_0214e9fc = (s32) temp;
    data_0214e9ec = (u32) (data_02128ce8[temp].blk1 << 0xC);
    data_0214ea00 = (u32) (data_02128ce8[temp].blk2 << 0xC);
    data_0214ea04 = (u32) (data_02128ce8[temp].szBlk1 << 0xC);
}
