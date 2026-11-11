/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_0213b3c4;
typedef void (*MIDmaCallback)(void *);
extern void func_0206dea8(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_0206dcac(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_01ffe67c(void);
extern void func_01ffe58c(const void *src, u32 szByte);
extern void func_01ffe490(u32 op, const u32 *args, u32 num);
extern volatile int data_027c00a4;
void func_01ffe67c(void);
void func_01ffe658(void *arg);
extern BOOL data_02153298;
void func_01ffe58c(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_0213b3c4) == ((u32) ~0)) {
        func_01ffe490(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_01ffe67c();
        data_027c00a4 = 1;

        if (data_02153298) {
            func_0206dcac((data_0213b3c4), src, szByte, &func_01ffe658, (void *) &data_027c00a4);
        } else {
            func_0206dea8((data_0213b3c4), src, szByte, &func_01ffe658, (void *) &data_027c00a4);
        }
    }
}
void func_01ffe490(u32 op, const u32 *args, u32 num);
