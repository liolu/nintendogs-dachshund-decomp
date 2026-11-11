/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206c970 from projets/children-of-mana/src/auto/func_0206c970.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u32 vu32;
extern u32 data_02151998[];
extern u32 data_021519d8[];
extern void func_0206e034(u32 a, u32 *b, u32 c);
extern void func_01ffe67c(void);
extern void func_0206b8a4(u32 a);
extern void func_0206b888(u32 a);
extern u32 func_0206bb3c(u32 a);
extern u32 func_0206baf4(u32 a);
extern void func_0206b8c0(u32 *a);
typedef struct {
    u8 *c;
    u32 *rs1;
    u8 pad[0xcc - 8];
    u32 isEvpCached[8];
} RS;
static inline u32 BitVecCheck(const u32 *vec, u32 idx) {
    return vec[idx >> 5] & (1 << (idx & 31));
}
static inline void BitVecSet(u32 *vec, u32 idx) {
    vec[idx >> 5] |= 1 << (idx & 31);
}
void func_02076be0(u32 *P) {
    s64 K;
    u32 flag;
    u8 *r8;
    u32 i;
    u32 *r6w;
    u32 *r5w;
    u32 piv;
    u32 count;
    u32 t100;
    vu32 zero;
    u32 acc[21];
    u8 *A;
    u32 *Bp;
    u32 C;
    u32 a;

    Bp    = (u32 *) P[1];
    C     = Bp[1];
    A     = (u8 *) P[0];
    piv   = C + ((u32 *) C)[4];
    count = A[2];
    r8    = A + 3;
    K     = 0;
    zero  = 0;

    func_0206e034(zero, acc, 84);
    func_01ffe67c();
    *(vu32 *) 0x04000440 = 0;
    *(vu32 *) 0x0400044c = 1;
    *(vu32 *) 0x04000454 = 0;
    *(vu32 *) 0x04000440 = 2;

    for (i = 0; i < count; i++) {
        a    = r8[1];
        t100 = a * 100;
        flag = BitVecCheck(((RS *) P)->isEvpCached, a);
        r6w  = (u32 *) ((u8 *) data_02151998 + t100);
        if (flag == 0) {
            BitVecSet(((RS *) P)->isEvpCached, a);
            *(vu32 *) 0x04000450 = r8[0];
            *(vu32 *) 0x04000440 = 1;
            func_0206b8a4(piv + a * 84);
        }
        if (i != 0) {
            acc[12] += (((K) * (s64) (s32) (r5w[0])) >> 12);
            acc[13] += (((K) * (s64) (s32) (r5w[1])) >> 12);
            acc[14] += (((K) * (s64) (s32) (r5w[2])) >> 12);
            acc[15] += (((K) * (s64) (s32) (r5w[3])) >> 12);
            acc[16] += (((K) * (s64) (s32) (r5w[4])) >> 12);
            acc[17] += (((K) * (s64) (s32) (r5w[5])) >> 12);
            acc[18] += (((K) * (s64) (s32) (r5w[6])) >> 12);
            acc[19] += (((K) * (s64) (s32) (r5w[7])) >> 12);
            acc[20] += (((K) * (s64) (s32) (r5w[8])) >> 12);
        }
        if (flag == 0) {
            while (func_0206bb3c((u32) r6w) != 0) {
            }
            *(vu32 *) 0x04000440 = 2;
            func_0206b888(piv + a * 84 + 48);
        }
        r5w = (u32 *) ((u8 *) data_021519d8 + t100);
        K   = (s32) ((u32) * (vu8 *) (r8 + 2) << 4);
        acc[0] += (((s64) (s32) (K) * (s32) (r6w[0])) >> 12);
        acc[1] += (((s64) (s32) (K) * (s32) (r6w[1])) >> 12);
        acc[2] += (((s64) (s32) (K) * (s32) (r6w[2])) >> 12);
        acc[3] += (((s64) (s32) (K) * (s32) (r6w[4])) >> 12);
        acc[4] += (((s64) (s32) (K) * (s32) (r6w[5])) >> 12);
        acc[5] += (((s64) (s32) (K) * (s32) (r6w[6])) >> 12);
        acc[6] += (((s64) (s32) (K) * (s32) (r6w[8])) >> 12);
        acc[7] += (((s64) (s32) (K) * (s32) (r6w[9])) >> 12);
        acc[8] += (((s64) (s32) (K) * (s32) (r6w[10])) >> 12);
        acc[9] += (((s64) (s32) (K) * (s32) (r6w[12])) >> 12);
        acc[10] += (((s64) (s32) (K) * (s32) (r6w[13])) >> 12);
        acc[11] += (((s64) (s32) (K) * (s32) (r6w[14])) >> 12);
        r8 = r8 + 3;
        if (flag == 0) {
            while (func_0206baf4((u32) r5w) != 0) {
            }
        }
    }

    acc[12] += (((K) * (s64) (s32) (r5w[0])) >> 12);
    acc[13] += (((K) * (s64) (s32) (r5w[1])) >> 12);
    acc[14] += (((K) * (s64) (s32) (r5w[2])) >> 12);
    acc[15] += (((K) * (s64) (s32) (r5w[3])) >> 12);
    acc[16] += (((K) * (s64) (s32) (r5w[4])) >> 12);
    acc[17] += (((K) * (s64) (s32) (r5w[5])) >> 12);
    acc[18] += (((K) * (s64) (s32) (r5w[6])) >> 12);
    acc[19] += (((K) * (s64) (s32) (r5w[7])) >> 12);
    acc[20] += (((K) * (s64) (s32) (r5w[8])) >> 12);
    func_0206b8c0(&acc[12]);
    *(vu32 *) 0x04000440 = 1;
    func_0206b8c0(acc);
    *(vu32 *) 0x04000440 = 0;
    *(vu32 *) 0x04000450 = 1;
    *(vu32 *) 0x04000440 = 2;
    *(vu32 *) 0x0400044c = ((u8 *) P[0])[1];
    P[0]                 = (u32) (u8 *) P[0] + 3 * (((u8 *) P[0])[2] + 1);
}
