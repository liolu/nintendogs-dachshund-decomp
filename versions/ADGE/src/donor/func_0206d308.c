/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200d704 from projets/code-lyoko/src/donor/func_0200d704.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_02080c28(void);
extern u32 func_02080c3c(u32 state);
extern void func_0207ed20(u32 mask);
extern void func_0207ef2c(u32 mask, void *handler);
extern u32 func_0207ed9c(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_0206d308(void);
extern void func_0206d09c(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_0214f4c8;
extern PxiCallback data_0214f4cc[32];
void func_0206d308(void) {
    u32 enabled = func_02080c28();
    s32 i;

    if (!data_0214f4c8) {
        data_0214f4c8                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_0214f4cc[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        func_0207ed20(0x40000);
        func_0207ef2c(0x40000, func_0206d09c);
        func_0207ed9c(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    func_02080c3c(enabled);
}
extern void func_0206d09c(void);
