/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096434 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02096434.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
static inline void grp_a(u8 *q) {
    s32 j;
    *(u16 *) ((u8 *) (q + 5120) + 60)    = (u16) 0xffff;
    *(u16 *) ((u8 *) (q + 5120) + 62)    = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x440) = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x444) = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x448) = 0;
    j                                    = 0;
    do {
        *(u32 *) ((u8 *) (q + j * 4) + 4096 + 0x44c) = 0;
        j                                            = (s16) (j + 1);
    } while (j < 2);
}
static inline void grp_b(u8 *q) {
    s32 j;
    *(u16 *) ((u8 *) (q + 5120) + 132)   = (u16) 0xffff;
    *(u16 *) ((u8 *) (q + 5120) + 134)   = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x488) = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x48c) = 0;
    *(u32 *) ((u8 *) (q + 4096) + 0x490) = 0;
    j                                    = 0;
    do {
        *(u32 *) ((u8 *) (q + j * 4) + 4096 + 0x494) = 0;
        j                                            = (s16) (j + 1);
    } while (j < 2);
}
void func_020cbb00(u8 *param_1) {
    s32 i = 0;
    s32 j;
    u8 *p = param_1;

    do {
        grp_a(p);
        grp_b(p);
        i = (s16) (i + 1);
        p = p + 24;
    } while (i < 3);

    *(u16 *) ((u8 *) (param_1 + 5120) + 12)    = (u16) 0xffff;
    *(u16 *) ((u8 *) (param_1 + 5120) + 14)    = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x410) = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x414) = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x418) = 0;
    j                                          = 0;
    do {
        *(u32 *) ((u8 *) (param_1 + j * 4) + 4096 + 0x41c) = 0;
        j                                                  = (s16) (j + 1);
    } while (j < 2);
    *(u16 *) ((u8 *) (param_1 + 5120) + 204)   = (u16) 0xffff;
    *(u16 *) ((u8 *) (param_1 + 5120) + 206)   = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x4d0) = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x4d4) = 0;
    *(u32 *) ((u8 *) (param_1 + 4096) + 0x4d8) = 0;
    j                                          = 0;
    do {
        *(u32 *) ((u8 *) (param_1 + j * 4) + 4096 + 0x4dc) = 0;
        j                                                  = (s16) (j + 1);
    } while (j < 2);

    p = param_1;
    i = 0;
    do {
        *(u16 *) ((u8 *) (p + 5120) + 228)   = (u16) 0xffff;
        *(u16 *) ((u8 *) (p + 5120) + 230)   = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x4e8) = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x4ec) = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x4f0) = 0;
        j                                    = 0;
        do {
            *(u32 *) ((u8 *) (p + j * 4) + 4096 + 0x4f4) = 0;
            j                                            = (s16) (j + 1);
        } while (j < 2);
        *(u16 *) ((u8 *) (p + 5376) + 92)    = (u16) 0xffff;
        *(u16 *) ((u8 *) (p + 5376) + 94)    = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x560) = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x564) = 0;
        *(u32 *) ((u8 *) (p + 4096) + 0x568) = 0;
        j                                    = 0;
        do {
            *(u32 *) ((u8 *) (p + j * 4) + 4096 + 0x56c) = 0;
            j                                            = (s16) (j + 1);
        } while (j < 2);
        i = (s16) (i + 1);
        p = p + 24;
    } while (i < 5);
}
