/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02008028 from projets/code-lyoko/src/donor/func_02008028.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0206cc0c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206c4e0(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0206bd64(void *src, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206c4e0(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206cc0c(src, dest, size);
    }
}
extern u32 data_0214f498;
extern u32 data_0213cadc;
#pragma thumb off
void func_0206bd64(void *src, u32 size) {
    GXi_DmaCopy32Async(data_0213cadc, src, (void *) (data_0214f498 + 0x20000), size, ((void *) 0), ((void *) 0));
}
