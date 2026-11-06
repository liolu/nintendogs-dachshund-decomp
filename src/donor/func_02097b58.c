/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097b58 from projets/nintendogs-chihuahua-friends/src/donor/func_02097b58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_0214b024[];
extern u8 data_02150330[];
extern u8 *func_0210634c(void);
extern s32 func_02069098(s32 a, s32 b);
extern void func_0206913c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_020c45ec(u8 *p, s32 *a, u32 *b);
extern void func_020f04a4(u32 a, u32 b, s32 *c);
void func_02097b58(void) {
    u8 bVar1;
    s32 m1;
    s32 m2;
    u8 bVar2;
    u8 *iVar4;
    s32 iVar5;
    s32 uVar6;
    s32 lv;
    s32 aiStack_58[3];
    u32 auStack_4c[3];
    s32 blk[9];

    bVar1  = data_0214b024[0];
    bVar2  = data_0214b024[1];
    m1     = bVar1 - 0x7f;
    m2     = -(s32) bVar2;
    iVar4  = func_0210634c();
    blk[0] = *(s32 *) (data_02150330 + 0x4c);
    blk[1] = *(s32 *) (data_02150330 + 0x58);
    blk[2] = *(s32 *) (data_02150330 + 0x64);
    blk[3] = *(s32 *) (data_02150330 + 0x50);
    blk[4] = *(s32 *) (data_02150330 + 0x5c);
    blk[5] = *(s32 *) (data_02150330 + 0x68);
    blk[6] = *(s32 *) (data_02150330 + 0x54);
    blk[7] = *(s32 *) (data_02150330 + 0x60);
    blk[8] = *(s32 *) (data_02150330 + 0x6c);
    iVar5  = func_02069098(*(s16 *) (iVar4 + 0x6c), *(s16 *) (iVar4 + 0x6e));
    uVar6  = ((s32) ((((s64) (*(s32 *) (iVar4 + 0x74)) * (s64) (iVar5)) + 0x800) >> 12));
    lv     = ((s32) ((((s64) (uVar6) * (s64) (*(s32 *) (iVar4 + 0x70))) + 0x800) >> 12));
    func_0206913c(-0x12000, &blk[6], (s32 *) (iVar4 + 0x30), aiStack_58);
    iVar5 = (lv * m1) * 0x14;
    func_0206913c((s32) (iVar5 + (s32) ((u32) (iVar5 >> 6) >> 25)) >> 7, &blk[0], aiStack_58, aiStack_58);
    iVar5 = uVar6 * m2 * 0x14;
    func_0206913c(iVar5 / 192, &blk[3], aiStack_58, aiStack_58);
    func_020c45ec(iVar4, aiStack_58, auStack_4c);
    func_020f04a4(0x31, 0, (s32 *) auStack_4c);
}
