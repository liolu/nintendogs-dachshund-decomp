/* compiler: 1.2/sp2p3  */
/* func_020458ac from projets/nintendogs-dachshund/src/auto/func_020458ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_0202f960(M2C_UNK);
extern s32 func_02035294(void *, s32);
extern s32 func_020360a0(s32);
extern void func_0203e2b8(s32, s32);
extern s32 func_02044358(void);
extern s32 *data_0214b484;
void func_0204558c(s32 arg0) {
    s32 temp_r1;
    s32 temp_r5;
    u16 temp_r0;

    if (func_02035294((void *) arg0, 0x32) == 0) {
        return;
    }
    temp_r5 = func_020360a0(arg0);
    if (!(func_02044358() & 0x20)) {
        func_0202f960(arg0);
        return;
    }
    if (temp_r5 == 0) {
        return;
    }
    temp_r1        = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = temp_r1;
    temp_r0        = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
    switch (temp_r0) {
        case 0:
            func_0203e2b8(arg0, 0x2CD);
            return;
        case 1:
            func_0203e2b8(arg0, 0x2CE);
            return;
    }
}
