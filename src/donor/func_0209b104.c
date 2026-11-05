/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209b104 from projets/nintendogs-shiba-friends/src/donor/func_0209b104.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c70;
extern u8 *data_02153700;
extern u8 *data_02154c78;
extern void func_0209b60c(void);
extern s32 func_021212a0(void);
extern void func_020cd3d8(int a, int b, int c, int d, int e);
extern s32 func_0211f094(u8 *p, s32 a, s32 b, s32 c);
extern void func_020c99e8(s16 *p, s32 v);
extern void func_0209b40c(u8 *p);
extern void func_020cfe10(s32 a, s32 b);
extern void func_020ee334(s32 a);
extern void func_020cff48(void);
void func_0209b104(u8 *p1, s32 p2, s32 p3, s32 p4) {
    s16 s;

    switch (*(s16 *) (p1 + 32)) {
        case 0:
            *(s16 *) (p1 + 6) = *(s16 *) (p1 + 6) + 1;
            if (!func_021212a0()) {
                return;
            }
            if (*(s16 *) (p1 + 6) < 20) {
                return;
            }
            *(s16 *) (p1 + 6)  = 0;
            *(s16 *) (p1 + 32) = 1;
            func_020cd3d8(9, 0x27d8, 0, (int) func_0209b60c, 0);
            return;
        case 1:
            if (*(s32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            s = *(s16 *) (data_02154c70 + 0x9a);
            if (s == 0) {
                goto c1a;
            }
            if (s == 1) {
                goto c1b;
            }
            return;
        c1a:
            *(s16 *) (p1 + 32) = 4;
            func_020cd3d8(9, 0x27da, 0, (int) func_0209b60c, 0);
            func_020cfe10(*(s32 *) (data_02153700 + 0x18), 0x74f8);
            func_020ee334(1);
            return;
        c1b:
            *(s16 *) (p1 + 32) = 2;
            func_020cd3d8(9, 0x27d9, 0, (int) func_0209b60c, 0);
            return;
        case 2:
            if (func_0211f094(p1, *(s16 *) (p1 + 32), p3, p4) != 0) {
                *(s16 *) (p1 + 32) = 3;
            }
            return;
        case 3:
            if (*(s32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            *(s16 *) (p1 + 4)    = 0x904;
            *(s16 *) (p1 + 6)    = 0;
            *(s32 *) (p1 + 0x18) = 9;
            {
                u8 *q  = *(u8 **) (p1 + 0x1c);
                u8 *qa = q + 8;
                if (*(s16 *) (q + 8) == -1) {
                    return;
                }
                func_020c99e8((s16 *) qa, 1);
            }
            return;
        case 4:
            if (((s16 *) data_02154c78)[2] != 0) {
                *(s16 *) (p1 + 32) = 5;
                return;
            }
            if (*(s16 *) data_02154c78 == 4) {
                *(s16 *) (p1 + 32) = 2;
                func_020cd3d8(9, 0x27d9, 0, (int) func_0209b60c, 0);
                return;
            }
            if (*(s32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            if (*(s16 *) (data_02154c70 + 0x9a) < 0) {
                return;
            }
            func_020cff48();
            return;
        case 5:
            if (*(s16 *) data_02154c78 != 3) {
                return;
            }
            if (*(s16 *) (*(u8 **) (data_02153700 + 0x1c) + 0x74f0) != 2000) {
                func_0209b40c(p1);
                return;
            }
            *(s16 *) (p1 + 4) = 0x902;
            *(s16 *) (p1 + 6) = 0;
            func_020cd3d8(9, 0x27d9, 0, (int) func_0209b60c, 0);
            goto Lend;
        default:
            goto Lend;
    }
Lend:
    return;
}
