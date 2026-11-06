/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205cb24 from projets/children-of-mana/src/auto/func_0205cb24.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 state);
extern u32 data_0215365c;
extern u16 data_02153660[9];
extern u32 func_020813f4(register u32 value);
void func_020813fc(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0208120c();

    mask = bank & data_0215365c & 0x1ff;

    while (1) {
        s32 i = 31 - func_020813f4(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_02153660[i] == lockID) {
            data_02153660[i] = 0;
            data_0215365c &= ~(1 << i);
        }
    }
    func_02081220(enabled);
}
