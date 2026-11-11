/* compiler: 1.2/sp2p3  */
/* func_0204b5fc from projets/nintendogs-chihuahua-friends/src/auto/func_0204b5fc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0202761c();
extern M2C_UNK func_02027630();
extern M2C_UNK func_0202f8a4();
extern M2C_UNK func_02035e20();
extern s32 func_020360a0();
extern M2C_UNK func_02036fbc();
extern M2C_UNK func_02038edc();
extern s32 func_0204b7a8();
extern M2C_UNK func_02069634();
void func_0204b5fc(void *arg0) {
    u8 sp0[12];
    s32 temp_r0;

    temp_r0 = func_020360a0();
    if (temp_r0 != 0) {
        func_02027630(temp_r0, sp0);
        func_02069634(arg0 + 0x2A0, sp0, arg0 + 0x26C);
        func_0202761c(temp_r0, arg0 + 0x3D8);
        func_02038edc(arg0);
        func_02036fbc(arg0, 0x302);
    }
    if (func_0204b7a8(arg0, temp_r0, 1) != 0) {
        return;
    }
    if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) <= 0x78U) {
        return;
    }
    func_02035e20(arg0);
    func_0202f8a4(arg0);
}
