/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02008028 from projets/code-lyoko/src/donor/func_02008028.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0206e004(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206d8d8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0206d15c(void *src, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206d8d8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206e004(src, dest, size);
    }
}
extern u32 data_0214e9f8;
extern u32 data_0213b3c4;
#pragma thumb off
void func_0206d15c(void *src, u32 size) {
    GXi_DmaCopy32Async(data_0213b3c4, src, (void *) (data_0214e9f8 + 0x20000), size, ((void *) 0), ((void *) 0));
}
