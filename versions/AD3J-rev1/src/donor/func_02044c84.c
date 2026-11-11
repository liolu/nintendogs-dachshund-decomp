/* compiler: 1.2/sp2p3  */
/* func_02044c84 from projets/nintendogs-chihuahua-friends/src/auto/func_02044c84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0200f86c(s32);
extern M2C_UNK func_0202761c(s32, s32);
extern M2C_UNK func_02027630(s32, s32);
extern s32 func_020286ec(s32, M2C_UNK, M2C_UNK);
extern s32 func_020351a0();
extern s32 func_02036038(s32);
extern M2C_UNK func_02036fbc(s32, M2C_UNK);
extern M2C_UNK func_02038ef8(s32);
extern M2C_UNK func_020392ac(s32);
void func_02044c84(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020351a0();
    temp_r0 = func_02036038(arg0);
    if (temp_r0 != 0) {
        func_02038ef8(arg0);
        func_02027630(temp_r0, arg0 + 0x278);
        func_0202761c(temp_r0, arg0 + 0x3D8);
        func_02036fbc(arg0, 0x300);
    }
    if (func_0200f86c(arg0) != 0) {
        return;
    }
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if (temp_r5 == 0) {
        return;
    }
    func_020392ac(arg0);
}
