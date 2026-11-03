/* compiler: 1.2/sp2p3  */
/* func_0208df50 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0208df50.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003434();
extern M2C_UNK func_02006830();
extern M2C_UNK func_02007540();
extern M2C_UNK func_02041aac();
extern M2C_UNK func_0208f4cc();
extern M2C_UNK func_02092464();
extern M2C_UNK func_02093568();
extern M2C_UNK func_02099744();
extern M2C_UNK func_0209a5e8();
extern M2C_UNK func_020a3f64();
extern M2C_UNK func_020c1148();
extern M2C_UNK func_020c21d4();
extern M2C_UNK func_020c2bf8();
extern M2C_UNK func_020c3cd0();
extern M2C_UNK func_020c66a8();
extern M2C_UNK func_020cb050();
extern M2C_UNK func_020cb06c();
extern M2C_UNK func_020cb08c();
extern M2C_UNK func_020cb410(M2C_UNK, u16, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020cc368(M2C_UNK, u16, M2C_UNK);
extern M2C_UNK func_020cd214();
extern M2C_UNK func_020cd37c();
extern M2C_UNK func_020cfe5c();
extern M2C_UNK func_020d6d84();
extern M2C_UNK func_020da40c();
extern M2C_UNK func_020e2734();
extern s32 func_020e2e1c();
extern s32 func_020e2e38();
extern M2C_UNK func_02106240();
extern M2C_UNK func_02106b90();
extern M2C_UNK func_ov002_0216a4ac();
extern M2C_UNK func_ov003_02160278();
extern s32 func_ov003_0216a558();
extern M2C_UNK func_ov004_02160b70();
extern s32 func_ov004_02160d88();
extern M2C_UNK func_ov005_02160324();
extern M2C_UNK func_ov005_02160f78();
extern s32 data_021440d4;
extern void *data_02153700;
extern void *data_02153708;
extern s32 data_02153740;
void func_0208df50(void) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0;

    if (!((*(u16 *) ((s8 *) (data_02153708) + (0))) & 0x8000)) {
        func_020c1148();
    }
    func_020d6d84();
    func_020cd37c();
    func_02106240();
    if ((*(s32 *) ((s8 *) (data_02153700) + (0x14))) != 0) {
        func_ov005_02160f78();
        func_ov005_02160324();
    }
    if (data_021440d4 == 0x17) {
        if (func_ov004_02160d88() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_ov004_02160b70();
    }
    if (data_021440d4 == 0x16) {
        if (func_ov003_0216a558() != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_ov002_0216a4ac();
    }
    func_020da40c();
    func_02106b90();
    func_02093568();
    func_02041aac();
    func_020c2bf8();
    if (func_020e2e1c() != 0) {
        func_020e2734();
    }
    func_0208f4cc();
    if (func_020e2e38() != 0) {
        func_ov003_02160278();
    }
    if (data_02153740 != 0) {
        func_020a3f64();
    }
    func_02099744();
    func_020c66a8();
    func_020c21d4();
    temp_r0 = (*(u16 *) ((s8 *) (data_02153708) + (0)));
    switch (temp_r0) {
        default:
            break;
        case 6:
            func_020cc368(0, 0U, 0);
            func_020cb08c();
            func_020cb410(0, 0U, 0, 1);
            func_020cb06c();
            break;
        case 7:
            if ((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (data_02153700) + (4)))) + (0x18))) != 0xC) {
                func_020cc368(0, 0U, 0);
                func_020cb08c();
                func_020cb410(0, 0U, 0, 1);
                func_020cb06c();
            }
            break;
        case 1:
        case 3:
        case 4:
            if ((*(s16 *) ((s8 *) (data_02153700) + (0))) != 0) {
                func_020cc368(0, 0U, 0);
                func_020cc368(1, (*(u16 *) ((s8 *) (data_02153708) + (0xE))), 0);
                func_020cb08c();
                func_020cb410(1, (*(u16 *) ((s8 *) (data_02153708) + (0xE))), 0, 1);
                func_020cb410(0, 0U, 0, 1);
                func_020cb06c();
            }
            break;
    }
    func_020cb050();
    func_020c3cd0();
    func_020cfe5c();
    func_02092464();
    func_0209a5e8();
    func_02007540();
    func_02006830();
    func_02003434();
    data_02153700 = ((void *) 0);
    if ((*(u16 *) ((s8 *) (data_02153708) + (2))) == 0xFFFF) {
        return;
    }
    func_020cd214();
}
