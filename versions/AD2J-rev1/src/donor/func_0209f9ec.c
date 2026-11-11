/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209f9ec from projets/nintendogs-shiba-friends/src/donor/func_0209f9ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153708[];
extern u8 data_0215370c[];
extern u8 data_02154c3c[];
extern u8 data_0212d914[];
extern u8 *func_01ffda04(s32 a);
extern s32 func_02028144(u8 *p);
extern u8 *func_020c89bc(s32 a);
extern s32 func_020c6534(u32 a, u32 b, s32 c);
s32 func_0209f9ec(s32 param_1, s32 param_2) {
    s32 iVar2;
    s32 found;
    s32 iVar4;
    u8 *base;
    u16 *puVar3;
    u16 flags;
    s16 *psVar1;

    iVar2  = 0;
    iVar4  = 0;
    base   = *(u8 **) data_02153708;
    puVar3 = (u16 *) (base + 0x20);
    found  = -1;
    do {
        flags = *puVar3;
        if ((flags & 1) != 0) {
            if ((flags & 2) != 0) {
                found = iVar4;
                break;
            }
        }
        iVar4  = (s16) (iVar4 + 1);
        puVar3 = puVar3 + 10;
    } while (iVar4 < 3);
    if (param_1 == 0x30000) {
        goto blk30000;
    }
    if (param_1 != 0x30002) {
        goto done;
    }
    iVar4 = 0;
    if (param_2 == 0) {
        goto arg0;
    }
    if (param_2 != 1) {
        goto call;
    }
    goto arg1;
arg0:
    iVar4 = (s32) func_01ffda04((s32) * (s16 *) (base + 0xe));
    goto call;
arg1:
    iVar4 = (s32) func_01ffda04(found);
call:
    iVar2 = func_02028144((u8 *) iVar4);
    iVar2 = iVar2 + 0x78;
    goto done;
blk30000:
    if (param_2 == 1) {
        iVar4  = *(s32 *) (*(u8 **) data_02154c3c + 0x38);
        psVar1 = (s16 *) func_020c89bc((s32) * (s16 *) (*(u8 **) data_0215370c + 4));
        iVar2  = func_020c6534(iVar4, *(u32 *) (*psVar1 * 12 + data_0212d914 + 8), 1);
    }
done:
    return iVar2;
}
