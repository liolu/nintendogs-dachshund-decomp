/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02123d04 from projets/nintendogs-shiba-friends/src/donor/func_02123d04.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[6];
} A6;
extern s32 data_0214a570;
extern s32 data_0214a56c;
extern u8 data_0214a574[];
extern void func_02123ec4(u8 *p);
extern void func_02124020(u8 *p);
extern void func_0211272c(u8 *p);
extern void func_021122b0(u8 *p, u32 v);
extern void func_021121c4(u8 *p);
extern void func_02112344(u8 *p, u32 f, u32 *arr);
extern void func_01ff832c(s32 k, u32 *a, u8 *b, u8 *c);
extern void func_02123e50(void);
void func_02123d0c(u8 *p) {
    u32 arr[6];
    u32 g1[3];
    u32 g2[3];

    switch (*(s16 *) (p + 0x90)) {
        case 0:
            break;
        case 2: {
            u32 t2;
            u32 t1;
            u32 t0;
            u32 u2;
            u32 u1;
            u32 u0;
            s32 k1;
            func_0211272c(p);
            t2    = *(u32 *) (p + 0xdc);
            k1    = data_0214a570;
            t1    = *(u32 *) (p + 0xd8);
            t0    = *(u32 *) (p + 0xd4);
            g1[0] = t0;
            g1[1] = t1;
            g1[2] = t2;
            u2    = *(u32 *) (p + 0xe8);
            u1    = *(u32 *) (p + 0xe4);
            u0    = *(u32 *) (p + 0xe0);
            g2[0] = u0;
            g2[1] = u1;
            g2[2] = u2;
            func_01ff832c(-k1, g1, p + 0xbc, p + 0xbc);
            func_01ff832c(-data_0214a56c, g2, p + 0xbc, p + 0xbc);
        }
            return;
        case 3:
            func_02124020(p);
            return;
        case 1:
            func_02123ec4(p);
            return;
        case 4:
            *(A6 *) arr = *(A6 *) data_0214a574;
            func_02112344(p, (u32) func_02123e50, arr);
            return;
        case 5:
            func_021122b0(p, 0x1000);
            return;
        case 8:
            func_021121c4(p);
            break;
    }
}
