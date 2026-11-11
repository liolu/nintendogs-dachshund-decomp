/* compiler: 1.2/sp2p3 */
/* func_020a74e0 from projets/pokemon-dash/src/donor/func_020a74e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 func_0208120c(void);
extern u16 func_0207f68c(void *);
extern s32 func_0207f72c(void *);
extern void func_02081220(s32);
extern void WaitByLoop(s32);
void func_02000bd4(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = func_0208120c();
        arg1[0] = func_0207f68c((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_0207f72c(arg0) == 0) {
            return;
        }
        func_02081220(arg1[1]);
        WaitByLoop(1);
    }
}
