/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b346c from projets/nintendogs-chihuahua-friends/src/donor/func_020b346c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021538ac;
extern u32 data_021538a8;
extern u32 data_021538b0;
extern u16 data_0213c928;
extern u16 data_0215389c;
extern u16 data_021538a0;
extern u32 data_0213c830;
extern u16 data_02153898;
extern u16 data_021538a4;
extern void func_020ab43c(void);
extern void func_020b3794(u8 *p);
void func_020b346c(u8 *param_1, u32 param_2) {
    s32 iVar8;
    u16 sVar1;
    u16 sVar2;
    u32 *puVar10;

    func_020ab43c();
    data_021538ac = param_2;
    data_021538a8 = (u32) param_1;
    iVar8         = *(u16 *) (param_1 + 0x30) - 1;
    data_021538b0 = iVar8;
    if (iVar8 < 0) {
        return;
    }
    data_0215389c = ((u16 *) &data_0213c928)[iVar8];
    sVar1         = data_0215389c;
    data_021538a0 = 0;
    data_0213c830 = 1;
    do {
        puVar10       = (u32 *) data_021538ac;
        data_02153898 = *(u16 *) (*puVar10);
        sVar2         = data_02153898;
        data_021538a4 = *(u16 *) (puVar10[1]);
        if (sVar2 == 0) {
            data_0213c830 = 0;
        } else if (sVar2 == sVar1) {
            data_021538a0 = data_021538a4;
            data_0213c830 = 0;
        } else if (data_021538a4 == sVar1) {
            data_021538a0 = sVar2;
            data_0213c830 = 0;
        }
        data_021538ac = data_021538ac + 8;
    } while (data_0213c830 != 0);
    if (data_021538a0 != 0) {
        ((u16 *) &data_0213c928)[iVar8] = data_021538a0;
        func_020b3794(param_1);
        return;
    }
}
