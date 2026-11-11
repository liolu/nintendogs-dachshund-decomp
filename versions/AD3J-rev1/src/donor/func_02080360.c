/* compiler: 1.2/sp2p3  */
/* func_020fa9bc from projets/sims-2-the/src/auto/func_020fa9bc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern void *func_0208120c(void);
extern void func_0207fcb8(void *);
extern void func_0207fc44(void *);
extern void func_02081220(void *);
s32 func_02080360(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r4;
    u8 *b;
    s32 cnt;
    s32 cap;

    b       = (u8 *) arg0;
    temp_r4 = func_0208120c();
    cnt     = *(s32 *) (b + 8);
    cap     = *(s32 *) (b + 0x10);
    if (cnt <= cap) {
        for (;;) {
            if (!(arg2 & 1)) {
                func_02081220(temp_r4);
                return 0;
            }
            func_0207fcb8(arg0);
            if (*(s32 *) (b + 8) > *(s32 *) (b + 0x10)) {
                break;
            }
        }
        cnt = *(s32 *) (b + 8);
    }
    *(s32 *) (b + 0xC)                                     = (*(s32 *) (b + 0xC) + cnt - 1) % cnt;
    *(s32 *) (*(u8 **) (b + 4) + (*(s32 *) (b + 0xC) * 4)) = arg1;
    *(s32 *) (b + 0x10)                                    = *(s32 *) (b + 0x10) + 1;
    func_0207fc44(b + 2);
    func_02081220(temp_r4);
    return 1;
}
