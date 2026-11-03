/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a355c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a355c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02155000;
extern u32 data_0214716c;
extern u32 data_02147190;
extern void func_0208ba94(s32 *a);
extern void func_0205e950(u8 *buf, s32 n, u32 fmt, u32 x);
extern s32 func_0208b744(s32 *a, u8 *b);
extern void func_0208b5e8(s32 *a, u32 p1, s32 x);
extern void func_0208b6fc(s32 *a, s32 z);
typedef struct {
    s32 arr[10];
    u8 pad[28];
    u8 buf[132];
} Frame;
void func_020f2268(u32 param_1, s32 param_2) {
    Frame f;
    u32 *puVar1;
    s32 iVar2;

    puVar1 = (u32 *) &data_02155000;
    func_0208ba94(f.arr);
    func_0205e950(f.buf, 0x80, (u32) &data_02147190, ((u32 *) &data_0214716c)[param_2]);
    iVar2 = func_0208b744(f.arr, f.buf);
    if (iVar2 != 0) {
        iVar2 = f.arr[9] - f.arr[8];
        func_0208b5e8(f.arr, param_1, iVar2);
        *puVar1                 = param_1;
        *(u16 *) (puVar1 + 1)   = (u16) param_2;
        puVar1[0xd]             = 1;
        *(u16 *) (puVar1 + 0xf) = 0;
        puVar1[0x10]            = 0;
        func_0208b6fc(f.arr, 0);
    }
}
