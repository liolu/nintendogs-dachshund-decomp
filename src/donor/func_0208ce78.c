/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a4d98 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a4d98.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
extern int data_02153700;
extern u64 func_02080f5c(void);
extern u16 *func_020ccb00(u16 *a, u32 *b, int c);
extern u16 *func_02044670(int a);
extern void func_020443d4(int a, int b);
extern void func_020c2554(u16 *a, u32 b, u16 c);
void func_0208ce78(int param_1) {
    u16 *puVar2;
    int iVar3;
    s16 iVar4;
    u16 *puVar5;
    u32 local_20;

    local_20 = (u32) func_02080f5c();
    iVar3    = data_02153700;
    iVar4    = 0;
    if (*(s16 *) (iVar3 + 0x20) <= 0) {
        return;
    }
    do {
        puVar5 = *(u16 **) (iVar3 + iVar4 * 4 + 0x24);
        puVar2 = func_02044670(iVar4);
        func_020ccb00(puVar5, &local_20, param_1);
        func_020443d4((s16) iVar4, (int) puVar5);
        if (puVar2 != ((void *) 0)) {
            func_020c2554(puVar2, (u32) *puVar5, *(u8 *) ((u8 *) puVar5 + 2));
        }
        iVar3 = data_02153700;
        iVar4 = iVar4 + 1;
    } while (iVar4 < *(s16 *) (iVar3 + 0x20));
}
