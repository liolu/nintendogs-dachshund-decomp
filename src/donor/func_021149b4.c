/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02114790 from projets/nintendogs-chihuahua-friends/src/donor/func_02114790.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148f70[];
extern s32 data_02148f74[];
extern s32 data_02148f78[];
extern s32 data_02148f64[];
extern s32 data_02148f68[];
extern s32 data_02148f6c[];
extern s32 func_01ffda04(s32 a);
extern s32 func_02027430(s32 a);
extern void func_021129a4(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
typedef struct {
    s32 w[3];
} T3;
void func_021149b4(s32 *param_1, s32 *param_2, s32 param_3) {
    s32 iVar3;
    s32 iVar4;

    iVar3 = func_01ffda04(param_3);
    iVar4 = func_02027430(iVar3);
    if (iVar4 == 0) {
        {
            s32 gb;
            s32 ga;
            s32 gc;
            ga = data_02148f70[0];
            gb = data_02148f74[0];
            gc = data_02148f78[0];
            {
                s32 iVar3b;
                s32 iVar4b;
                s32 iVar3c;
                s16 sVar2b;
                iVar3b          = func_01ffda04(param_3);
                *(T3 *) param_1 = *(T3 *) param_2;
                param_1[1]      = (gc);
                func_021129a4(iVar3b, param_1 + 3);
                iVar4b     = func_020280f8(iVar3b);
                param_1[4] = ((s32) (((s64) ((gb)) * (iVar4b) + 0x800) >> 12));
                param_1[6] = 0;
                param_1[7] = 0x1000;
                param_1[8] = 0;
                iVar3b     = func_020280f8(iVar3b);
                iVar4b     = func_020690b4(param_1 + 3, param_1);
                iVar3c     = func_02069098(((s32) (((s64) ((ga)) * (iVar3b) + 0x800) >> 12)), iVar4b);
                sVar2b     = func_02069a4c(iVar3c);
                param_1[9] = (s32) (((s64) sVar2b * 0x1680000 + 0x80000) >> 20);
            };
        }
        return;
    }
    iVar3 = func_02027430(iVar3);
    if (iVar3 == 1) {
        {
            s32 gb;
            s32 ga;
            s32 gc;
            ga = data_02148f64[0];
            gb = data_02148f68[0];
            gc = data_02148f6c[0];
            {
                s32 iVar3b;
                s32 iVar4b;
                s32 iVar3c;
                s16 sVar2b;
                iVar3b          = func_01ffda04(param_3);
                *(T3 *) param_1 = *(T3 *) param_2;
                param_1[1]      = (gc);
                func_021129a4(iVar3b, param_1 + 3);
                iVar4b     = func_020280f8(iVar3b);
                param_1[4] = ((s32) (((s64) ((gb)) * (iVar4b) + 0x800) >> 12));
                param_1[6] = 0;
                param_1[7] = 0x1000;
                param_1[8] = 0;
                iVar3b     = func_020280f8(iVar3b);
                iVar4b     = func_020690b4(param_1 + 3, param_1);
                iVar3c     = func_02069098(((s32) (((s64) ((ga)) * (iVar3b) + 0x800) >> 12)), iVar4b);
                sVar2b     = func_02069a4c(iVar3c);
                param_1[9] = (s32) (((s64) sVar2b * 0x1680000 + 0x80000) >> 20);
            };
        }
    }
}
