/* compiler: 1.2/sp2p3 */
/* func_020730c0 from projets/madagascar/src/auto/func_020730c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205e050(M2C_UNK);
extern M2C_UNK func_020634a8();
extern M2C_UNK (*data_0214b48c)();
extern s32 data_0214b494;
void func_0205e184(M2C_UNK arg0) {
    if (data_0214b494 == 0) {
        func_020634a8();
        if (data_0214b48c != ((void *) 0)) {
            data_0214b48c();
            data_0214b48c = ((void *) 0);
        }
    }
    func_0205e050(arg0);
}
