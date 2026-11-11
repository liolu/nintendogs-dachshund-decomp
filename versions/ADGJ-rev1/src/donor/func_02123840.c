/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02123840 from projets/nintendogs-chihuahua-friends/src/donor/func_02123840.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern void func_021077e0(u8 *p);
extern void func_0212395c(u8 *p);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
void func_02123840(u8 *param_1) {
    u32 v0[3];
    u32 v1[3];
    u32 v2[3];
    u32 t2;
    u32 t1;
    u32 t0;
    u32 u2;
    u32 u1;
    u32 u0;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 1:
            t2    = *(u32 *) (param_1 + 0xd0);
            t1    = *(u32 *) (param_1 + 0xcc);
            t0    = *(u32 *) (param_1 + 0xc8);
            v0[0] = t0;
            v0[1] = t1;
            v0[2] = t2;
            u2    = *(u32 *) (param_1 + 0xdc);
            u1    = *(u32 *) (param_1 + 0xd8);
            u0    = *(u32 *) (param_1 + 0xd4);
            v1[0] = u0;
            v1[1] = u1;
            v1[2] = u2;
            func_02069504(v0, v1, v2);
            func_020069bc(v0, v0);
            func_020069bc(v2, v2);
            func_02069504(v2, v0, v1);
            *(u32 *) (param_1 + 0xc8) = v0[0];
            *(u32 *) (param_1 + 0xcc) = v0[1];
            *(u32 *) (param_1 + 0xd0) = v0[2];
            *(u32 *) (param_1 + 0xd4) = v1[0];
            *(u32 *) (param_1 + 0xd8) = v1[1];
            *(u32 *) (param_1 + 0xdc) = v1[2];
            *(u32 *) (param_1 + 0xe0) = v2[0];
            *(u32 *) (param_1 + 0xe4) = v2[1];
            *(u32 *) (param_1 + 0xe8) = v2[2];
            return;
        case 2:
            func_0212395c(param_1);
            return;
        case 3:
            *(u32 *) (param_1 + 0xa8) = 0;
    }
}
