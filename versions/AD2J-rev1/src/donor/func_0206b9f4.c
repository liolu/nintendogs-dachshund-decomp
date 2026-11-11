/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057d80 from projets/children-of-mana/src/auto/func_02057d80.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206b9f4(void);
extern int data_0213b3c4;
extern void func_0206d980(int dmaNo, void *dest, u32 data, u32 size, void *callback, void *arg);
extern void func_0206dbdc(int dmaNo, void *dest, u32 data, u32 size);
extern void func_0206dff0(u32 data, void *dest, u32 size);
void func_0206b9f4(void) {
    int i;

    if (data_0213b3c4 != -1) {
        func_0206d980(data_0213b3c4, (void *) ((volatile u16 *) 0x04000330), 0, 16, ((void *) 0), ((void *) 0));
        func_0206dbdc(data_0213b3c4, (void *) ((volatile u8 *) 0x04000360), 0, 96);
    } else {
        volatile u32 zeroEdge = 0;
        volatile u32 zeroFog;

        func_0206dff0(zeroEdge, (void *) ((volatile u16 *) 0x04000330), 16);
        zeroFog = 0;
        func_0206dff0(zeroFog, (void *) ((volatile u8 *) 0x04000360), 96);
    }
    for (i = 0; i < 32; i++) {
        *((volatile u32 *) 0x040004d0) = 0;
    }
}
