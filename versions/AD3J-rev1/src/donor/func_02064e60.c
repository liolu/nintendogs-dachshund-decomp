/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02013e98 from projets/code-lyoko/src/donor/func_02013e98.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
extern void func_02064e60(void);
void func_02064e60(void) {
    u16 *flag = &(*(u16 *) 0x027fff96);

    if (*flag & 1) {
        *flag &= ~1;
    }
}
