/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02069010();
extern void func_0206c1f8();
extern u32 data_0214f48c;
extern u32 data_0214f4a4;
extern u32 data_0214f4a0;
extern s32 data_0214f49c;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_02129078[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_0206c1f8() {
    u32 temp      = func_02069010();
    data_0214f49c = (s32) temp;
    data_0214f48c = (u32) (data_02129078[temp].blk1 << 0xC);
    data_0214f4a0 = (u32) (data_02129078[temp].blk2 << 0xC);
    data_0214f4a4 = (u32) (data_02129078[temp].szBlk1 << 0xC);
}
