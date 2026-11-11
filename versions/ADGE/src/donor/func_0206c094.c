/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02008358 from projets/code-lyoko/src/donor/func_02008358.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_0206cc0c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206c768(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_0206c4e0(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0206c094(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_0206c768(dmaNo, src, dest, size);
    } else {
        func_0206cc0c(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206c4e0(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206cc0c(src, dest, size);
    }
}
extern u32 data_0214f4a0;
extern u32 data_0214f48c;
extern u32 data_0214f4a4;
extern u32 data_0213cadc;
#pragma thumb off
void func_0206c094(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_0214f4a0) {
        temp = (void *) (data_0214f48c + offset);
    } else {
        if ((offset + size) < data_0214f4a4) {
            temp = (void *) (data_0214f48c + offset);
        } else if (offset >= data_0214f4a4) {
            temp = (void *) (data_0214f4a0 + offset - data_0214f4a4);
        } else {
            void *temp2 = (void *) data_0214f4a0;
            u32 temp1   = data_0214f4a4 - offset;
            temp        = (void *) (data_0214f48c + offset);
            GXi_DmaCopy32(data_0213cadc, src, temp, temp1);
            GXi_DmaCopy32Async(data_0213cadc, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_0213cadc, src, temp, size, ((void *) 0), ((void *) 0));
}
