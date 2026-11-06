/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a2b1c from projets/nintendogs-chihuahua-friends/src/donor/func_020a2b1c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153720;
extern s32 func_01ffda04(s32 a);
extern s32 func_02028144(s32 a);
extern void func_020c99e4(s16 *a, s32 b);
void func_020a2b1c(void) {
    s32 iVar1;
    s16 local_10[4];

    iVar1       = func_01ffda04(*(s16 *) (data_02153720 + 0x11c));
    iVar1       = func_02028144(iVar1);
    local_10[0] = 0;
    local_10[1] = 100;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 101;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 102;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 103;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 104;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 105;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 106;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 56;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 53;
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 0;
    func_020c99e4(local_10, 1);
    switch (*(u8 *) (iVar1 + 3)) {
        case 1:
            local_10[0] = 1;
            local_10[1] = 5;
            break;
        default:
            local_10[0] = 1;
            local_10[1] = 4;
            break;
    }
    func_020c99e4(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 69;
    func_020c99e4(local_10, 1);
}
