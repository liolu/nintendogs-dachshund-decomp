/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02118f98 from projets/nintendogs-chihuahua-friends/src/donor/func_02118f98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[3];
} V3;
extern s32 func_021127bc();
extern s32 func_02106144(s32 a);
extern void func_02108098(u32 *a);
extern u32 func_020619e4(void);
extern void func_02108124(s32 v);
void func_02118f90(u8 *p) {
    u32 ld[18];
    u32 uVar3;
    s32 iv;
    u32 a;
    s32 t;

    *(u32 *) (p + 0x2c) = 1;
    *(u32 *) (p + 0x28) = 0;
    *(u32 *) (p + 0x30) = 2;
    *(u32 *) (p + 0x34) = 0;
    *(u32 *) (p + 0x38) = 0;
    *(s16 *) (p + 60)   = -1;
    *(s16 *) (p + 62)   = -1;
    *(s16 *) (p + 64)   = -1;
    *(u32 *) (p + 0x44) = 0;
    *(u32 *) (p + 0x48) = 0;
    *(u32 *) (p + 0x4c) = 1;
    *(u16 *) (p + 80)   = 0;
    *(V3 *) (p + 84)    = *(V3 *) (p + 12);
    if (func_021127bc() != 0) {
        *(u32 *) (p + 0x70) = 1;
    } else {
        *(u32 *) (p + 0x70) = 0;
    }
    *(s16 *) (p + 118) = -1;
    switch (func_02106144(-1)) {
        case 0:
            ld[0]               = 0;
            ld[1]               = 0;
            ld[2]               = 0x1000;
            *(u32 *) (p + 0x2c) = 1;
            func_02108098(ld);
            func_02108124((u16) (((s32) func_020619e4() % 8) * 0x1fff));
            return;
        case 1:
            ld[3]               = 0;
            ld[4]               = 0;
            ld[5]               = 0x1000;
            *(u32 *) (p + 0x2c) = 4;
            func_02108098(ld + 3);
            return;
        case 2:
            ld[6]               = 0x1000;
            ld[7]               = 0;
            ld[8]               = 0x1000;
            *(u32 *) (p + 0x2c) = 5;
            func_02108098(ld + 6);
            return;
        case 3:
            ld[9]               = 0;
            ld[11]              = 0x1000;
            ld[10]              = 0;
            *(u32 *) (p + 0x2c) = 6;
            func_02108098(ld + 9);
            return;
        case 4:
            ld[12]              = 0;
            ld[14]              = 0x1000;
            ld[13]              = 0;
            *(u32 *) (p + 0x2c) = 7;
            func_02108098(ld + 12);
            return;
        case 5:
        case 6:
            break;
        case 7:
            ld[15]              = 0;
            ld[17]              = 0x1000;
            ld[16]              = 0;
            *(u32 *) (p + 0x2c) = 8;
            func_02108098(ld + 15);
            break;
    }
}
