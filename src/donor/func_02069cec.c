/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f6634 from projets/sims-2-the/src/donor/func_020f6634.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef volatile u16 vu16;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_02069cec(void);
extern int data_0213b3c4;
extern u16 data_0214e9a8;
extern void func_02069e84(void);
extern int func_0207f624(void);
extern void func_02081288(void);
extern void func_0206dbdc(u32 channel, void *destination, u32 value, u32 size);
extern void func_0206dff0(u32 value, void *destination, u32 size);
void func_02069cec(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    func_02069e84();
    if (!data_0214e9a8) {
        do {
            int lock = func_0207f624();
            if (lock == -3) {
                func_02081288();
            }
            data_0214e9a8 = lock;
        } while (!data_0214e9a8);
    }
    (*(vu16 *) 0x04000004) = 0;
    (*(vu32 *) 0x04000000) = 0;
    if (data_0213b3c4 != -1) {
        func_0206dbdc(data_0213b3c4, (void *) 0x04000008, 0, 96);
        *(vu16 *) 0x0400006c = 0;
        func_0206dbdc(data_0213b3c4, (void *) 0x04001000, 0, 112);
    } else {
        volatile u32 main_zero = 0;
        func_0206dff0(main_zero, (void *) 0x04000008, 96);
        *(vu16 *) 0x0400006c = 0;
        {
            volatile u32 sub_zero = 0;
            func_0206dff0(sub_zero, (void *) 0x04001000, 112);
        }
    }
    *(vu16 *) 0x04000020 = 256;
    *(vu16 *) 0x04000026 = 256;
    *(vu16 *) 0x04000030 = 256;
    *(vu16 *) 0x04000036 = 256;
    *(vu16 *) 0x04001020 = 256;
    *(vu16 *) 0x04001026 = 256;
    *(vu16 *) 0x04001030 = 256;
    *(vu16 *) 0x04001036 = 256;
}
