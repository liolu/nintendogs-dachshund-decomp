/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020754b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02080c28(void);
extern u32 func_02080c3c(u32 irq_flag);
extern void *func_02071e20(void *arc);
extern void *func_02071ae4(u32 fileId);
extern void func_02071ac8(u32 fileId, void *mem);
extern void func_0207278c(void *mem, void *arc, u32 fileId);
void func_0207278c(void *mem, void *arc, u32 fileId) {
    void *prev;
    int irq;

    if (arc == 0) {
        return;
    }

    irq  = func_02080c28();
    prev = func_02071e20(arc);
    if (mem == func_02071ae4(fileId)) {
        func_02071ac8(fileId, 0);
    }
    func_02071e20(prev);
    func_02080c3c(irq);
}
