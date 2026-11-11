/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b1c70 from projets/nintendogs-chihuahua-friends/src/donor/func_020b1c70.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0213c674;
extern u32 data_0213c684;
extern u32 data_0213c698;
extern u32 data_0213c6ac;
extern u32 data_0213c6c0;
extern u32 data_0213c6d0;
extern u32 data_0213c6e4;
extern u32 data_0213c6f8;
extern u32 data_0213c70c;
extern u32 data_0213c71c;
extern u32 data_0213c730;
extern u32 data_0213c744;
extern u32 data_0213c758;
extern u32 data_0213c768;
extern u32 data_0213c778;
extern u32 data_0213c788;
extern void func_020a3b60(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020b1c70(u32 param_1, u32 *param_2) {
    s32 iVar1;
    param_2[1] = param_1;
    iVar1      = (s32) param_2[1];
    if (iVar1 < 1) {
        return;
    }
    if (4 < iVar1) {
        return;
    }
    switch (iVar1) {
        case 0:
            break;
        case 1:
            func_020a3b60(0, (u32) &data_0213c674, (u32) &data_0213c684, (u32) &data_0213c698, (u32) &data_0213c6ac);
            return;
        case 2:
            func_020a3b60(0, (u32) &data_0213c6c0, (u32) &data_0213c6d0, (u32) &data_0213c6e4, (u32) &data_0213c6f8);
            return;
        case 3:
            func_020a3b60(0, (u32) &data_0213c70c, (u32) &data_0213c71c, (u32) &data_0213c730, (u32) &data_0213c744);
            return;
        case 4:
            func_020a3b60(0, (u32) &data_0213c758, (u32) &data_0213c768, (u32) &data_0213c778, (u32) &data_0213c788);
    }
    return;
}
