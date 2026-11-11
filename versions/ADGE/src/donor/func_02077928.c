/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_0213cadc;
typedef void (*MIDmaCallback)(void *);
extern void func_0206cab0(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_0206c8b4(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_02077a28(void);
extern void func_02077928(const void *src, u32 szByte);
extern void func_0207782c(u32 op, const u32 *args, u32 num);
extern volatile int data_02153dc4;
void func_02077a28(void);
void func_02077a04(void *arg);
extern BOOL data_02153dc8;
void func_02077928(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_0213cadc) == ((u32) ~0)) {
        func_0207782c(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_02077a28();
        data_02153dc4 = 1;

        if (data_02153dc8) {
            func_0206c8b4((data_0213cadc), src, szByte, &func_02077a04, (void *) &data_02153dc4);
        } else {
            func_0206cab0((data_0213cadc), src, szByte, &func_02077a04, (void *) &data_02153dc4);
        }
    }
}
void func_0207782c(u32 op, const u32 *args, u32 num);
