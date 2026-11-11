/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_SetBankForARM7 from https://github.com/ntrtwl/NitroSDK libraries/gx/src/gx_vramcnt.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef volatile u8 vu8;
typedef vu8 REGType8v;
typedef enum {
    GX_VRAM_A   = 0x0001,
    GX_VRAM_B   = 0x0002,
    GX_VRAM_C   = 0x0004,
    GX_VRAM_D   = 0x0008,
    GX_VRAM_E   = 0x0010,
    GX_VRAM_F   = 0x0020,
    GX_VRAM_G   = 0x0040,
    GX_VRAM_H   = 0x0080,
    GX_VRAM_I   = 0x0100,
    GX_VRAM_ALL = 0x01ff
} GXVRam;
typedef enum {
    GX_VRAM_ARM7_NONE   = 0x0000,
    GX_VRAM_ARM7_128_C  = GX_VRAM_C,
    GX_VRAM_ARM7_128_D  = GX_VRAM_D,
    GX_VRAM_ARM7_256_CD = GX_VRAM_C | GX_VRAM_D
} GXVRamARM7;
extern void func_02069304(GXVRamARM7 arm7);
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clrImg;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 sub_bg;
    u16 sub_obj;
    u16 sub_bgExtPltt;
    u16 sub_objExtPltt;
} GX_VRAMCnt_;
typedef struct {
    GX_VRAMCnt_ vramCnt;
} GX_State;
extern GX_State data_0214f450;
static inline void GX_StateCheck_VRAMCnt(void) {}
typedef enum {
    GX_VRAMCNT_C_DISABLE          = 0,
    GX_VRAMCNT_C_LCDC_0x06840000  = (0 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_C_BG_0x06000000    = (1 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_C_BG_0x06020000    = (1 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_C_BG_0x06040000    = (1 << 0) | (2 << 3) | (1 << 7),
    GX_VRAMCNT_C_BG_0x06060000    = (1 << 0) | (3 << 3) | (1 << 7),
    GX_VRAMCNT_C_ARM7_0x06000000  = (2 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_C_ARM7_0x06020000  = (2 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_C_TEX_0            = (3 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_C_TEX_1            = (3 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_C_TEX_2            = (3 << 0) | (2 << 3) | (1 << 7),
    GX_VRAMCNT_C_TEX_3            = (3 << 0) | (3 << 3) | (1 << 7),
    GX_VRAMCNT_C_SUBBG_0x06200000 = (4 << 0) | (1 << 7)
} GX_VRAMCNT_C;
typedef enum {
    GX_VRAMCNT_D_DISABLE           = 0,
    GX_VRAMCNT_D_LCDC_0x06860000   = (0 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_D_BG_0x06000000     = (1 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_D_BG_0x06020000     = (1 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_D_BG_0x06040000     = (1 << 0) | (2 << 3) | (1 << 7),
    GX_VRAMCNT_D_BG_0x06060000     = (1 << 0) | (3 << 3) | (1 << 7),
    GX_VRAMCNT_D_ARM7_0x06000000   = (2 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_D_ARM7_0x06020000   = (2 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_D_TEX_0             = (3 << 0) | (0 << 3) | (1 << 7),
    GX_VRAMCNT_D_TEX_1             = (3 << 0) | (1 << 3) | (1 << 7),
    GX_VRAMCNT_D_TEX_2             = (3 << 0) | (2 << 3) | (1 << 7),
    GX_VRAMCNT_D_TEX_3             = (3 << 0) | (3 << 3) | (1 << 7),
    GX_VRAMCNT_D_SUBOBJ_0x06600000 = (4 << 0) | (1 << 7)
} GX_VRAMCNT_D;
void func_02069de4(int lcdc);
static inline void GX_VRAMCNT_SetARM7_(GXVRamARM7 arm7) {
    switch (arm7) {
        case GX_VRAM_ARM7_256_CD:
            (*(REGType8v *) (0x04000000 + 0x243)) = (u8) GX_VRAMCNT_D_ARM7_0x06020000;
            (*(REGType8v *) (0x04000000 + 0x242)) = (u8) GX_VRAMCNT_C_ARM7_0x06000000;
            break;
        case GX_VRAM_ARM7_128_C:
            (*(REGType8v *) (0x04000000 + 0x242)) = (u8) GX_VRAMCNT_C_ARM7_0x06000000;
            break;
        case GX_VRAM_ARM7_128_D:
            (*(REGType8v *) (0x04000000 + 0x243)) = (u8) GX_VRAMCNT_D_ARM7_0x06000000;
        case GX_VRAM_ARM7_NONE:
            break;
        default:
            ((void) 0);
            break;
    }
}
static inline void GxSetBankForARM7(GXVRamARM7 arm7) {
    ((void) 0);

    data_0214f450.vramCnt.lcdc = (u16) (~arm7 & (data_0214f450.vramCnt.lcdc | data_0214f450.vramCnt.arm7));
    data_0214f450.vramCnt.arm7 = arm7;

    GX_StateCheck_VRAMCnt();

    GX_VRAMCNT_SetARM7_(arm7);
    func_02069de4(data_0214f450.vramCnt.lcdc);
}
void func_02069304(GXVRamARM7 arm7) {

    GxSetBankForARM7(arm7);
}
