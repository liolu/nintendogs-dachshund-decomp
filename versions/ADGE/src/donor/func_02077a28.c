/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_01ff9234 from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
extern void func_0206cc24(const void *srcp, volatile void *destp, u32 size);
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_0206cc24(src, dest, size);
}
typedef struct NNSG3dGeBuffer_ {
    u32 idx;
    u32 data[192];
} NNSG3dGeBuffer;
extern void func_02077a10(void);
extern void func_02077a28(void);
extern volatile int data_02153dc4;
extern NNSG3dGeBuffer *data_02153dc0;
static inline void sendNB(const void *src, void *dst, u32 szByte) {
    MI_CpuSend32(src, dst, szByte);
}
void func_02077a28(void) {
    if (data_02153dc4) {
        func_02077a10();
    }

    if (data_02153dc0 && data_02153dc0->idx > 0) {
        sendNB(&data_02153dc0->data[0], (void *) &(*(REGType32v *) (0x04000000 + 0x400)), data_02153dc0->idx << 2);
        data_02153dc0->idx = 0;
    }
}
void func_02077a10(void);
