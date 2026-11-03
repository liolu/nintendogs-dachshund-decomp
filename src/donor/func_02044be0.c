/* compiler: 1.2/sp2p3  */
/* func_02044b3c from projets/nintendogs-chihuahua-friends/src/auto/func_02044b3c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0200f86c(void *);
extern M2C_UNK func_0202761c(s32, void *);
extern M2C_UNK func_02027630(s32, void *);
extern s32 func_020286ec(void *, M2C_UNK, M2C_UNK);
extern s32 func_02036038(void *);
extern M2C_UNK func_02036fbc(void *, M2C_UNK);
extern M2C_UNK func_02038ef8(void *);
extern M2C_UNK func_020392ac(void *);
void func_02044be0(void *arg0) {
    s32 temp_r0;
    s32 var_r5;

    if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) > 0x64U) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
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
    if (var_r5 == 0) {
        return;
    }
    func_020392ac(arg0);
}
