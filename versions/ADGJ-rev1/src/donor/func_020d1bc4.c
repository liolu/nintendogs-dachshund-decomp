/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1bc4 from projets/nintendogs-chihuahua-friends/src/donor/func_020d1bc4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} T3;
extern u8 data_02153720[];
extern u8 data_02156080[];
extern s32 func_02044644(s32 a);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_02109ab4(s32 a, s32 *b, s32 c, s32 d, s32 e, s32 *f);
extern void func_020d1f84(u8 *p);
extern void func_0210fd98(u8 *p);
extern s32 func_02069430(s32 *a);
extern void func_020ec220(s32 *a, s32 b, s32 c);
extern void func_020444fc(void);
void func_020d1bc4(u8 *param_1) {
    s32 iVar3;
    s32 Rsrc[3];
    s32 B[3];
    s32 A[3];
    s32 C[3];
    s32 Bsrc[3];
    iVar3 = func_02044644(*(s16 *) (param_1 + 0x9c));
    if (iVar3 == 0) {
        return;
    }
    *(T3 *) (param_1 + 0xbc) = *(T3 *) (*(u8 **) data_02153720 + 0x9c);
    func_02044644(*(s16 *) (param_1 + 0x9c));
    *(T3 *) Bsrc = *(T3 *) (*(u8 **) (*(u8 **) data_02153720 + 0x1c) + 0x30);
    func_02069634((s32 *) (param_1 + 0xbc), Bsrc, A);
    A[1] = 0;
    func_020069bc(A, A);
    B[0] = 0;
    B[2] = 0;
    B[1] = (s32) 0xfffff000;
    func_02069504(A, B, C);
    *(s32 *) (param_1 + 0xc8) = C[0];
    *(s32 *) (param_1 + 0xcc) = C[1];
    *(s32 *) (param_1 + 0xd0) = C[2];
    *(s32 *) (param_1 + 0xd4) = A[0];
    *(s32 *) (param_1 + 0xd8) = A[1];
    *(s32 *) (param_1 + 0xdc) = A[2];
    *(s32 *) (param_1 + 0xe0) = B[0];
    *(s32 *) (param_1 + 0xe4) = B[1];
    *(s32 *) (param_1 + 0xe8) = B[2];
    if ((*(u16 *) (*(u8 **) data_02153720 + 0x84) & 1) == 0) {
        goto NORMAL;
    }
    if (*(s32 *) (*(u8 **) data_02156080 + 0x24) == 0) {
        goto RET2;
    }
NORMAL:
    *(T3 *) Rsrc = *(T3 *) (*(u8 **) (*(u8 **) data_02153720 + 0x1c) + 0x48);
    func_02109ab4(iVar3, (s32 *) (param_1 + 0xbc), 0x40, 0x40, 0x80, (s32 *) (param_1 + 0xb0));
    *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + ((s32) (((s64) (Rsrc[0]) * (0x1ec) + 0x800) >> 12));
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + ((s32) (((s64) (Rsrc[2]) * (0x1ec) + 0x800) >> 12));
    if (*(s32 *) (param_1 + 0xb4) > 0x802) {
        *(s32 *) (param_1 + 0xb4) = 0x802;
    }
    if (*(s32 *) (param_1 + 0xb4) < -2050) {
        *(s32 *) (param_1 + 0xb4) = -2050;
    }
    func_0210fd98(param_1);
    iVar3 = func_02069430((s32 *) (param_1 + 0xb0));
    func_020ec220((s32 *) (param_1 + 400), 4, iVar3);
    func_020444fc();
    return;
RET2:
    func_020d1f84(param_1);
    return;
}
