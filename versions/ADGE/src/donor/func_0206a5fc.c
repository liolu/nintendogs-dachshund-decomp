/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* G3X_InitTable from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/gx/g3x_init_table.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206a5fc(void);
extern int data_0213cadc;
extern void func_0206c588(int dmaNo, void *dest, u32 data, u32 size, void *callback, void *arg);
extern void func_0206c7e4(int dmaNo, void *dest, u32 data, u32 size);
extern void func_0206cbf8(u32 data, void *dest, u32 size);
extern void func_02106a5fc(void);
void func_0206a5fc(void) {
    int i;

    if (data_0213cadc != -1) {
        func_0206c588(data_0213cadc, (void *) ((volatile u16 *) 0x04000330), 0, 16, ((void *) 0), ((void *) 0));
        func_0206c7e4(data_0213cadc, (void *) ((volatile u8 *) 0x04000360), 0, 96);
    } else {
        volatile u32 zeroEdge = 0;
        volatile u32 zeroFog;

        func_0206cbf8(zeroEdge, (void *) ((volatile u16 *) 0x04000330), 16);
        zeroFog = 0;
        func_0206cbf8(zeroFog, (void *) ((volatile u8 *) 0x04000360), 96);
    }
    for (i = 0; i < 32; i++) {
        *((volatile u32 *) 0x040004d0) = 0;
    }
}
