/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207c8c4 from projets/nintendogs-dachshund/src/donor/func_0207c8c4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long u32;
extern void func_0207cf0c(void);
typedef struct NNSGfdFramPlttVramManager {
    u32 loAddr;
    u32 hiAddr;
    u32 szTotal;
} NNSGfdFrmPlttVramManager;
extern NNSGfdFrmPlttVramManager data_021532a0;
void func_0207cf0c(void) {
    data_021532a0.loAddr = 0x00000;
    data_021532a0.hiAddr = data_021532a0.szTotal;
}
