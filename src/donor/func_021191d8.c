/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021191e0 from projets/nintendogs-chihuahua-friends/src/donor/func_021191e0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_021490a4;
extern u8 *data_021560c0;
extern u8 data_021490ac[];
extern s32 data_021490a8;
extern s32 data_021560bc;
extern u8 data_021560c4[];
extern s32 func_0211a8d8(u32 *a, u8 *b, s32 c);
extern s32 func_0211a774(u32 *a, s32 b, u8 *c, s32 d);
extern void func_0211a830(u32 *a, s32 b, u8 *c, s32 d);
extern s32 func_0211a6d0(u32 *a, s32 b);
extern void func_0211a938(u32 *a, s32 b, u8 *c);
extern void func_0211a974(u32 *a, s32 b, u32 *c);
extern void func_02119934(u8 *a, u8 *b);
extern s32 func_0211a568(u8 *a);
extern s32 func_0211a540(u8 *a);
extern s32 func_0211a600(u8 *a);
extern s32 func_0211a59c(u8 *a);
extern s32 func_0211a668(u8 *a);
extern void func_0211a670(u8 *a, s32 b);
extern void func_0211a6a0(u8 *a);
extern void func_0211a678(u8 *a);
extern void func_02119ce4(u8 *a);
extern void func_02119cb0(u8 *a, u8 *b);
extern void func_02119be8(u8 *a, s32 b);
extern void func_021195a4(u8 *a, s32 b);
typedef struct {
    u32 a[10];
    s32 x;
} Blk;
void func_021191d8(s32 param_1, s32 param_2) {
    Blk s1;
    Blk s2;
    Blk s3;
    s32 iVar3;
    s32 bVar4;
    u8 *Pl;
    u32 *Q;
    s32 vv;

    bVar4 = 0;
    switch (data_021490a4) {
        case -1:
        case 6:
            break;
        case 0:
            iVar3 = func_0211a8d8(*(u32 **) (data_021560c0 + 0x38), data_021490ac, 128);
            if (iVar3 != 0) {
                *(s32 *) (data_021560c0 + 8) = **(s32 **) data_021560c0 - 1;
            }
            break;
        case 1:
            Pl = data_021560c0;
            Q  = *(u32 **) (Pl + 0x38);
            vv = *(s32 *) (Pl + 8);
            if ((s32) *Q > 0) {
                iVar3 = func_0211a774(Q, vv, data_021490ac, 128);
                if (iVar3 != 0) {
                    func_0211a568(data_021560c0);
                }
            }
            break;
        case 2:
            Pl = data_021560c0;
            Q  = *(u32 **) (Pl + 0x38);
            vv = *(s32 *) (Pl + 8);
            if ((s32) *Q > 0) {
                func_0211a830(Q, vv, data_021490ac, 128);
            }
            break;
        case 3:
            Pl    = data_021560c0;
            iVar3 = func_0211a6d0(*(u32 **) (Pl + 0x38), *(s32 *) (Pl + 8));
            if (iVar3 != 0) {
                func_0211a540(data_021560c0);
                bVar4 = 1;
            }
            break;
        case 4:
            Pl = data_021560c0;
            Q  = *(u32 **) (Pl + 0x38);
            vv = *(s32 *) (Pl + 8);
            if ((s32) *Q > 0) {
                func_0211a938(Q, vv, data_021490ac);
            }
            break;
        case 5:
            if (data_021490a8 == 1) {
                data_021490a8 = 0;
            } else {
                data_021490a8 = 1;
            }
            break;
        case 7:
            if (data_021560bc == 1) {
                data_021560bc = 0;
                Pl            = data_021560c0;
                func_0211a974(*(u32 **) (Pl + 0x38), *(s32 *) (Pl + 8), s1.a);
                *(s32 *) (data_021490ac + 0x28) = s1.x;
                func_02119934(data_021490ac, data_021560c4);
            } else {
                data_021560bc = 1;
            }
            break;
        case 8:
            func_0211a6a0(data_021560c0);
            bVar4 = 1;
            break;
        case 9:
            func_0211a678(data_021560c0);
            bVar4 = 1;
            break;
        case 10:
            iVar3 = func_0211a568(data_021560c0);
            bVar4 = iVar3 != 0;
            break;
        case 11:
            iVar3 = func_0211a540(data_021560c0);
            bVar4 = iVar3 != 0;
            break;
        case 12:
            iVar3 = func_0211a600(data_021560c0);
            bVar4 = iVar3 != 0;
            break;
        case 13:
            iVar3 = func_0211a59c(data_021560c0);
            bVar4 = iVar3 != 0;
            break;
        case 14:
            iVar3 = func_0211a668(data_021560c0);
            if (iVar3 == 0) {
                func_0211a670(data_021560c0, 3);
            } else {
                func_0211a670(data_021560c0, 0);
            }
            bVar4 = 1;
            break;
    }
    data_021490a4 = -1;
    if (bVar4 != 0) {
        func_02119ce4(data_021560c0);
        func_02119cb0(data_021560c0, data_021490ac);
        func_02119be8(data_021490ac, param_2);
        func_0211a974(*(u32 **) (data_021560c0 + 0x38), *(s32 *) (data_021560c0 + 8), s2.a);
        *(s32 *) (data_021490ac + 0x28) = s2.x;
        func_02119934(data_021490ac, data_021560c4);
    }
    if (data_021560bc != 0) {
        iVar3 = func_0211a600(data_021560c0);
        if (iVar3 != 0) {
            func_02119ce4(data_021560c0);
            func_02119cb0(data_021560c0, data_021490ac);
            func_02119be8(data_021490ac, param_2);
            return;
        }
        data_021560bc = 0;
        func_0211a974(*(u32 **) (data_021560c0 + 0x38), *(s32 *) (data_021560c0 + 8), s3.a);
        *(s32 *) (data_021490ac + 0x28) = s3.x;
        func_02119934(data_021490ac, data_021560c4);
        return;
    }
    func_021195a4(data_021560c0, param_2);
}
