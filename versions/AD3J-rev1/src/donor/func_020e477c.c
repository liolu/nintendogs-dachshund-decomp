/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f6c28 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f6c28.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef struct {
    s32 x, y;
} Pos;
typedef struct {
    u8 pad0[0x14];
    Pos p14;
    Pos pos[4];
    s32 f3c;
    s32 f40;
    s32 f44;
} Work;
extern void func_020b8b0c(s32 a, s32 id, s32 c);
extern void func_020b8dbc(s32 a, s32 id, s16 x, s16 y);
extern void *func_01ffda04(s16 i);
extern BOOL func_020280c8(void *p);
extern u8 data_0212fe18[4];
extern u8 data_0212fe30[4][6];
extern u8 data_0212fe24[11];
extern u8 data_0212fe14[3];
extern u8 data_0212fe1c[3][2];
extern u8 data_0212fe0c[1];
extern u8 data_0212fe08[1];
extern u8 data_0212fe10[2];
void func_020e477c(Work *w) {
    s32 i, k, j;
    void *res;

    for (i = 0; i < 4; i++) {
        for (k = 0; k < data_0212fe18[i]; k++) {
            func_020b8b0c(2, data_0212fe30[i][k], 1);
            func_020b8dbc(2, data_0212fe30[i][k], w->pos[i].x >> 12, w->pos[i].y >> 12);
        }
    }
    for (i = 0; i < 11; i++) {
        func_020b8b0c(2, data_0212fe24[i], 1);
        func_020b8dbc(2, data_0212fe24[i], 0, w->f3c >> 12);
    }
    j = 0;
    for (i = 0; i < 3; i++) {
        u8 a, b;
        func_020b8b0c(2, data_0212fe14[i], 0);
        a = data_0212fe1c[i][0];
        func_020b8b0c(2, a, 0);
        b = data_0212fe1c[i][1];
        func_020b8b0c(2, b, 0);
        func_020b8dbc(2, a, 0, w->f3c >> 12);
        func_020b8dbc(2, b, 0, w->f3c >> 12);
    }
    for (i = 0; i < 3; i++) {
        res = func_01ffda04(i);
        if (res != ((void *) 0)) {
            func_020b8b0c(2, data_0212fe14[j], 1);
            func_020b8dbc(2, data_0212fe14[j], 0, w->f3c >> 12);
            if (func_020280c8(res) == 0) {
                func_020b8b0c(2, data_0212fe1c[j][0], 1);
                func_020b8b0c(2, data_0212fe1c[j][1], 0);
            } else {
                func_020b8b0c(2, data_0212fe1c[j][0], 0);
                func_020b8b0c(2, data_0212fe1c[j][1], 1);
            }
            j++;
        }
    }
    for (i = 0; i < 1; i++) {
        func_020b8b0c(2, data_0212fe0c[i], 1);
        func_020b8dbc(2, data_0212fe0c[i], w->p14.x >> 12, w->p14.y >> 12);
    }
    for (i = 0; i < 1; i++) {
        func_020b8b0c(2, data_0212fe08[i], 1);
        func_020b8dbc(2, data_0212fe08[i], w->f40 >> 12, 0);
    }
    for (i = 0; i < 2; i++) {
        func_020b8b0c(2, data_0212fe10[i], 1);
        func_020b8dbc(2, data_0212fe10[i], w->f44 >> 12, 0);
    }
}
