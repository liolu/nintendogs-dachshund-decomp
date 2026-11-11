/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e98c from projets/nintendogs-chihuahua-friends/src/donor/func_0210e98c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148dc4[];
extern u8 data_02153720[];
typedef struct {
    s32 v[3];
} Vec3;
extern void func_02044644(s32 a);
extern void func_02069668(Vec3 *a, Vec3 *b, Vec3 *c);
extern void func_02069634(Vec3 *a, Vec3 *b, Vec3 *c);
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
void func_0210e98c(u8 *param_1) {
    Vec3 *piVar13;
    Vec3 *puVar12;
    Vec3 *piVar10;
    Vec3 *puVar11;
    Vec3 *piVar9;
    s32 iVar16;
    s32 iVar6;
    Vec3 aCopy[11];

    piVar13 = *(Vec3 **) (param_1 + 0x214);
    func_02044644(*(s16 *) (param_1 + 0x9c));
    puVar12 = piVar13 + 11;
    puVar12 = puVar12 + 1;
    piVar10 = piVar13 + 1;
    iVar16  = 1;
    puVar11 = puVar12;
    piVar9  = piVar10;
    do {
        piVar10[11].v[0] = ((s32) ((((s64) (puVar12->v[0])) * (s64) (0x1000) + 0x800) >> 12));
        piVar10[11].v[1] = ((s32) ((((s64) (puVar12->v[1])) * (s64) (0x1000) + 0x800) >> 12));
        piVar10[11].v[2] = ((s32) ((((s64) (puVar12->v[2])) * (s64) (0x1000) + 0x800) >> 12));
        piVar10[11].v[1] = piVar10[11].v[1] - 66;
        func_02069668(piVar9, puVar11, piVar10);
        if (piVar10->v[1] < 0) {
            piVar10->v[1] = 0;
            if (piVar10[11].v[1] < 0) {
                piVar10[11].v[1] = 0;
            }
            piVar10[11].v[0] = ((s32) ((((s64) (piVar10[11].v[0])) * (s64) (3686) + 0x800) >> 12));
            piVar10[11].v[2] = ((s32) ((((s64) (piVar10[11].v[2])) * (s64) (3686) + 0x800) >> 12));
        }
        iVar16  = (iVar16 + 1) * 0x10000 >> 0x10;
        puVar12 = puVar12 + 1;
        piVar10 = piVar10 + 1;
        puVar11 = puVar11 + 1;
        piVar9  = piVar9 + 1;
    } while (iVar16 < 10);

    {
        Vec3 *t6 = piVar13;
        Vec3 *t5 = aCopy;
        iVar16   = 0;
        do {
            iVar16 = (iVar16 + 1) * 0x10000 >> 0x10;
            *t5    = *t6;
            t6++;
            t5++;
        } while (iVar16 < 11);
    }

    {
        Vec3 *q9;
        Vec3 *q10;
        s32 i3;
        s32 L3[3];
        i3  = 1;
        q10 = piVar13 + 1;
        do {
            q9 = piVar13 + (i3 - 1);
            func_02069634(q10, q9, (Vec3 *) L3);
            {
                s32 x1 = *(volatile s32 *) &L3[1];
                s32 x2 = *(volatile s32 *) &L3[2];
                s32 x0 = *(volatile s32 *) &L3[0];
                s32 sa = ((s32) ((((s64) (x2)) * (s64) (x2) + 0x800) >> 12));
                s32 sb = ((s32) ((((s64) (x0)) * (s64) (x0) + 0x800) >> 12));
                s32 sc = ((s32) ((((s64) (x1)) * (s64) (x1) + 0x800) >> 12));
                iVar6  = sa + (sb + sc);
            }
            if (iVar6 > 0x585e) {
                iVar6 = func_02069098(0x259a, func_0206902c(iVar6));
                L3[0] = ((s32) ((((s64) (L3[0])) * (s64) (iVar6) + 0x800) >> 12));
                L3[1] = ((s32) ((((s64) (L3[1])) * (s64) (iVar6) + 0x800) >> 12));
                L3[2] = ((s32) ((((s64) (L3[2])) * (s64) (iVar6) + 0x800) >> 12));
                func_02069668(q9, (Vec3 *) L3, q10);
            } else if (iVar6 < 0x4792) {
                iVar6 = func_02069098(0x21d7, func_0206902c(iVar6));
                L3[0] = ((s32) ((((s64) (L3[0])) * (s64) (iVar6) + 0x800) >> 12));
                L3[1] = ((s32) ((((s64) (L3[1])) * (s64) (iVar6) + 0x800) >> 12));
                L3[2] = ((s32) ((((s64) (L3[2])) * (s64) (iVar6) + 0x800) >> 12));
                func_02069668(q9, (Vec3 *) L3, q10);
            }
            i3  = (i3 + 1) * 0x10000 >> 0x10;
            q10 = q10 + 1;
        } while (i3 < 10);
    }

    {
        Vec3 *q9;
        Vec3 *q10;
        s32 i4;
        s32 L4[3];
        q10 = piVar13 + 9;
        i4  = 9;
        do {
            q9 = piVar13 + (i4 + 1);
            func_02069634(q10, q9, (Vec3 *) L4);
            {
                s32 x1 = *(volatile s32 *) &L4[1];
                s32 x2 = *(volatile s32 *) &L4[2];
                s32 x0 = *(volatile s32 *) &L4[0];
                s32 sa = ((s32) ((((s64) (x2)) * (s64) (x2) + 0x800) >> 12));
                s32 sb = ((s32) ((((s64) (x0)) * (s64) (x0) + 0x800) >> 12));
                s32 sc = ((s32) ((((s64) (x1)) * (s64) (x1) + 0x800) >> 12));
                iVar6  = sa + (sb + sc);
            }
            if (iVar6 > 0x585e) {
                iVar6 = func_02069098(0x259a, func_0206902c(iVar6));
                L4[0] = ((s32) ((((s64) (L4[0])) * (s64) (iVar6) + 0x800) >> 12));
                L4[1] = ((s32) ((((s64) (L4[1])) * (s64) (iVar6) + 0x800) >> 12));
                L4[2] = ((s32) ((((s64) (L4[2])) * (s64) (iVar6) + 0x800) >> 12));
                func_02069668(q9, (Vec3 *) L4, q10);
            } else if (iVar6 < 0x4792) {
                iVar6 = func_02069098(0x21d7, func_0206902c(iVar6));
                L4[0] = ((s32) ((((s64) (L4[0])) * (s64) (iVar6) + 0x800) >> 12));
                L4[1] = ((s32) ((((s64) (L4[1])) * (s64) (iVar6) + 0x800) >> 12));
                L4[2] = ((s32) ((((s64) (L4[2])) * (s64) (iVar6) + 0x800) >> 12));
                func_02069668(q9, (Vec3 *) L4, q10);
            }
            i4  = (s16) (i4 - 1);
            q10 = q10 - 1;
        } while (i4 >= 1);
    }

    {
        Vec3 *p6;
        Vec3 *p5;
        Vec3 *q10;
        Vec3 *q9;
        s32 i5;
        s32 k;
        s32 r2;
        s32 w;
        s32 V;
        s32 L5[3];
        q10 = piVar13 + 11;
        q10 = q10 + 1;
        q9  = q10;
        p5  = piVar13 + 1;
        p6  = aCopy + 1;
        i5  = 1;
        do {
            V  = *(s32 *) ((u8 *) *(s32 **) data_02153720 + 0x98);
            r2 = *(s32 *) ((u8 *) *(s32 **) data_02153720 + 0x94);
            V  = V <= 0 ? -V : V;
            w  = (r2 <= 0 ? -r2 : r2) + 2;
            w += V;
            if (w > 16) {
                w = 16;
            }
            if (*(s16 *) (param_1 + 0x90) == 2) {
                k = data_02148dc4[i5];
                k = ((s32) ((((s64) (k)) * (s64) (w << 6) + 0x800) >> 12));
            } else {
                k = data_02148dc4[i5];
                k = ((s32) ((((s64) (k)) * (s64) (w << 8) + 0x800) >> 12));
            }
            func_02069634(p5, p6, (Vec3 *) L5);
            L5[0] = ((s32) ((((s64) (L5[0])) * (s64) (k) + 0x800) >> 12));
            L5[1] = ((s32) ((((s64) (L5[1])) * (s64) (k) + 0x800) >> 12));
            L5[2] = ((s32) ((((s64) (L5[2])) * (s64) (k) + 0x800) >> 12));
            func_02069668(q9, (Vec3 *) L5, q10);
            p6  = p6 + 1;
            p5  = p5 + 1;
            q10 = q10 + 1;
            q9  = q9 + 1;
            i5  = (i5 + 1) * 0x10000 >> 0x10;
        } while (i5 < 10);
    }
}
