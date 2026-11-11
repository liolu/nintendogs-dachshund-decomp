/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020595ac from projets/children-of-mana/src/auto/func_020595ac.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_0206e004(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206db60(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_0206d8d8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0206d48c(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_0206db60(dmaNo, src, dest, size);
    } else {
        func_0206e004(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206d8d8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206e004(src, dest, size);
    }
}
extern u32 data_0214ea00;
extern u32 data_0214e9ec;
extern u32 data_0214ea04;
extern u32 data_0213b3c4;
#pragma thumb off
void func_0206d48c(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_0214ea00) {
        temp = (void *) (data_0214e9ec + offset);
    } else {
        if ((offset + size) < data_0214ea04) {
            temp = (void *) (data_0214e9ec + offset);
        } else if (offset >= data_0214ea04) {
            temp = (void *) (data_0214ea00 + offset - data_0214ea04);
        } else {
            void *temp2 = (void *) data_0214ea00;
            u32 temp1   = data_0214ea04 - offset;
            temp        = (void *) (data_0214e9ec + offset);
            GXi_DmaCopy32(data_0213b3c4, src, temp, temp1);
            GXi_DmaCopy32Async(data_0213b3c4, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_0213b3c4, src, temp, size, ((void *) 0), ((void *) 0));
}
