/* compiler: 1.2/sp2p3  */
/* func_020bbf5c from projets/eyeshield-21/src/auto/func_020bbf5c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern s32 data_0213b3c4;
extern u32 data_0214e9f8;
extern void func_0206d8d8(s32, u32, u32, u32, void *, s32);
extern void func_0206e004(u32, u32, u32);
void func_0206d1d0(u32 arg0, u32 arg1) {
    u32 v = data_0214e9f8;
    s32 h = data_0213b3c4;
    if (h != -1) {
        func_0206d8d8(h, arg0, v, arg1, 0, 0);
        return;
    }
    func_0206e004(arg0, v, arg1);
}
