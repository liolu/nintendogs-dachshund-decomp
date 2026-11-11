/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02004274 from projets/nintendogs-chihuahua-friends/src/donor/func_02004274.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u8 *data_0214a798;
extern void func_0206a6dc(u32 a);
extern void func_0206e034(u32 a, u32 b, u32 c);
extern void func_0206a1b0(void);
extern void func_02005f5c(void);
extern void func_0206af24(u32 a);
extern void func_0206adb8(u32 a);
extern void func_0206aca4(u32 a);
extern void func_0206abec(u32 a);
extern void func_0206a9e8(u32 a);
extern void func_0206a8f4(u32 a);
extern void func_0206a7b4(u32 a);
extern void func_0206a630(u32 a);
extern void func_0206a5b4(u32 a);
extern void func_0206a528(u32 a);
extern void func_0206a49c(u32 a);
extern void func_0206a6fc(u32 a);
extern void func_02069b84(u32 a, u32 b, u32 c);
extern void func_02069b68(u32 a);
extern void func_020786bc(void);
extern void func_0206baac(u16 a, u8 b, s16 c, u32 d, u32 e);
extern void func_0206b98c(u32 a);
extern void func_02004e9c(void *p, u32 a);
extern void func_020048d8(void *p, u32 a);
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = 0,
    GX_OBJVRAMMODE_CHAR_1D_32K  = 0x00000010,
    GX_OBJVRAMMODE_CHAR_1D_64K  = 0x00100010,
    GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010,
    GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010
} GXOBJVRamModeChar;
typedef enum {
    GX_OBJVRAMMODE_BMP_2D_W128 = 0,
    GX_OBJVRAMMODE_BMP_2D_W256 = 0x00000020,
    GX_OBJVRAMMODE_BMP_1D_128K = 0x00000040,
    GX_OBJVRAMMODE_BMP_1D_256K = 0x00400040
} GXOBJVRamModeBmp;
static inline void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(vu32 *) 0x04000000) = (u32) ((*(vu32 *) 0x04000000) & ~(0x00300010) | mode);
}
static inline void GX_SetOBJVRamModeBmp(GXOBJVRamModeBmp mode) {
    (*(vu32 *) 0x04000000) = (u32) ((*(vu32 *) 0x04000000) & ~(0x00400060) | mode);
}
static inline void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(vu32 *) 0x04001000) = (u32) ((*(vu32 *) 0x04001000) & ~(0x00300010) | mode);
}
static inline void GXS_SetOBJVRamModeBmp(GXOBJVRamModeBmp mode) {
    (*(vu32 *) 0x04001000) = (u32) ((*(vu32 *) 0x04001000) & ~(0x00000060) | mode);
}
void func_02004274(u8 *param_1) {
    u32 rv;
    u32 rv2;
    vu32 z4;
    vu32 z8;
    vu32 zC;
    vu32 z10;
    vu32 z14;
    u32 uVar6;

    data_0214a798 = param_1;
    func_0206a6dc(0x1ff);
    zC = 0;
    func_0206e034(zC, 0x6800000, 0xa4000);
    func_0206a1b0();
    z4 = 0xc0;
    func_0206e034(z4, 0x7000000, 0x400);
    z8 = 0xc0;
    func_0206e034(z8, 0x7000400, 0x400);
    z10 = 0;
    func_0206e034(z10, 0x5000000, 0x400);
    z14 = 0;
    func_0206e034(z14, 0x5000400, 0x400);
    func_02005f5c();
    if (*(u16 *) (data_0214a798 + 14) != 0) {
        func_0206af24(*(u16 *) (data_0214a798 + 14));
    }
    if (*(u16 *) (data_0214a798 + 16) != 0) {
        func_0206adb8(*(u16 *) (data_0214a798 + 16));
    }
    if (*(u16 *) (data_0214a798 + 18) != 0) {
        func_0206aca4(*(u16 *) (data_0214a798 + 18));
    }
    if (*(u16 *) (data_0214a798 + 20) != 0) {
        func_0206abec(*(u16 *) (data_0214a798 + 20));
    }
    if (*(u16 *) (data_0214a798 + 22) != 0) {
        func_0206a9e8(*(u16 *) (data_0214a798 + 22));
    }
    if (*(u16 *) (data_0214a798 + 24) != 0) {
        func_0206a8f4(*(u16 *) (data_0214a798 + 24));
    }
    if (*(u16 *) (data_0214a798 + 26) != 0) {
        func_0206a7b4(*(u16 *) (data_0214a798 + 26));
    }
    if (*(u16 *) (data_0214a798 + 28) != 0) {
        func_0206a630(*(u16 *) (data_0214a798 + 28));
    }
    if (*(u16 *) (data_0214a798 + 30) != 0) {
        func_0206a5b4(*(u16 *) (data_0214a798 + 30));
    }
    if (*(u16 *) (data_0214a798 + 32) != 0) {
        func_0206a528(*(u16 *) (data_0214a798 + 32));
    }
    if (*(u16 *) (data_0214a798 + 34) != 0) {
        func_0206a49c(*(u16 *) (data_0214a798 + 34));
    }
    if (*(u16 *) (data_0214a798 + 36) != 0) {
        func_0206a6fc(*(u16 *) (data_0214a798 + 36));
    }
    if (*(u16 *) (data_0214a798 + 38) != 0) {
        func_0206a6dc(*(u16 *) (data_0214a798 + 38));
    }
    func_02069b84(*(u16 *) (param_1 + 6), *(u16 *) (param_1 + 8), *(u16 *) (param_1 + 10));
    (*(vu32 *) (0x04000000)) = ((*(vu32 *) (0x04000000)) & 0xffffe0ff) | ((u32) * (u16 *) (param_1 + 2) << 8);
    func_02069b68(*(u16 *) (param_1 + 12));
    (*(vu32 *) (0x04001000)) = ((*(vu32 *) (0x04001000)) & 0xffffe0ff) | ((u32) * (u16 *) (param_1 + 4) << 8);
    if (*(u16 *) (param_1 + 10) == 1) {
        func_020786bc();
        (*(vu16 *) (0x04000060)) = (*(vu16 *) (0x04000060)) & 0xffffcffd;
        (*(vu16 *) (0x04000060)) = ((*(vu16 *) (0x04000060)) & 0xffffcfff) | 0x10;
        uVar6                    = 0x7fff;
        (*(vu16 *) (0x04000060)) = ((*(vu16 *) (0x04000060)) & 0xffffcfff) | 4;
        (*(vu16 *) (0x04000340)) = 0;
        (*(vu16 *) (0x04000060)) = ((*(vu16 *) (0x04000060)) & 0xffffcfff) | 8;
        (*(vu16 *) (0x04000050)) = 0;
        (*(vu32 *) (0x04000540)) =
            ((u32) * (u8 *) (*(u8 **) (param_1 + 0x74) + 3) << 1) | (u32) * (u8 *) (*(u8 **) (param_1 + 0x74) + 2);
        func_0206baac(**(u16 **) (param_1 + 0x74) & uVar6, (**(u16 **) (param_1 + 0x74) & 0x8000) >> 15, uVar6, 0x3f, 0);
    }
    if ((*(u16 *) (param_1 + 2) & 1) != 0) {
        u16 *pf                  = (u16 *) (param_1 + 44);
        (*(vu16 *) (0x04000008)) = ((*(vu16 *) (0x04000008)) & 0xfffffffc) | pf[0];
        if (pf[1] != 0) {
            (*(vu16 *) (0x04000008)) = (*(vu16 *) (0x04000008)) | 0x40;
        } else {
            (*(vu16 *) (0x04000008)) = (*(vu16 *) (0x04000008)) & 0xffffffbf;
        }
        if (*(u16 *) (param_1 + 10) == 1) {
            func_0206b98c(0);
        } else {
            (*(vu32 *) (0x04000010)) = 0;
            (*(vu16 *) (0x04000008)) = (((u32) pf[2] << 14) | ((*(vu16 *) (0x04000008)) & 0x43)) | ((u32) pf[3] << 7) |
                                       ((u32) pf[4] << 8) | ((u32) pf[5] << 2) | ((u32) pf[6] << 13);
        }
    }
    if ((*(u16 *) (param_1 + 4) & 1) != 0) {
        u16 *pf = (u16 *) (param_1 + 120);
        vu16 *puVar3;
        vu16 *puVar7;
        (*(vu32 *) (0x04001010)) = 0;
        puVar3                   = (vu16 *) 0x04001008;
        *puVar3                  = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7                   = (vu16 *) 0x04001008;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32) pf[2] << 14) | (*puVar7 & 0x43)) | ((u32) pf[3] << 7) | ((u32) pf[4] << 8) | ((u32) pf[5] << 2) |
                  ((u32) pf[6] << 13);
    }
    if ((*(u16 *) (param_1 + 2) & 2) != 0) {
        u16 *pf = (u16 *) (param_1 + 60);
        vu16 *puVar3;
        vu16 *puVar7;
        (*(vu32 *) (0x04000014)) = 0;
        puVar3                   = (vu16 *) 0x0400000a;
        *puVar3                  = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7                   = (vu16 *) 0x0400000a;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32) pf[2] << 14) | (*puVar7 & 0x43)) | ((u32) pf[3] << 7) | ((u32) pf[4] << 8) | ((u32) pf[5] << 2) |
                  ((u32) pf[6] << 13);
    }
    if ((*(u16 *) (param_1 + 4) & 2) != 0) {
        u16 *pf = (u16 *) (param_1 + 136);
        vu16 *puVar3;
        vu16 *puVar7;
        (*(vu32 *) (0x04001014)) = 0;
        puVar3                   = (vu16 *) 0x0400100a;
        *puVar3                  = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7                   = (vu16 *) 0x0400100a;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32) pf[2] << 14) | (*puVar7 & 0x43)) | ((u32) pf[3] << 7) | ((u32) pf[4] << 8) | ((u32) pf[5] << 2) |
                  ((u32) pf[6] << 13);
    }
    if ((*(u16 *) (param_1 + 2) & 4) != 0) {
        func_02004e9c(param_1 + 76, 1);
    }
    if ((*(u16 *) (param_1 + 4) & 4) != 0) {
        func_02004e9c(param_1 + 152, 0);
    }
    if ((*(u16 *) (param_1 + 2) & 8) != 0) {
        func_020048d8(param_1 + 92, 1);
    }
    if ((*(u16 *) (param_1 + 4) & 8) != 0) {
        func_020048d8(param_1 + 168, 0);
    }
    if ((*(u16 *) (param_1 + 2) & 0x10) != 0) {
        GX_SetOBJVRamModeChar(*(GXOBJVRamModeChar *) (param_1 + 0x6c));
        GX_SetOBJVRamModeBmp(*(GXOBJVRamModeBmp *) (param_1 + 0x70));
    }
    if ((*(u16 *) (param_1 + 4) & 0x10) != 0) {
        GXS_SetOBJVRamModeChar(*(GXOBJVRamModeChar *) (param_1 + 0xb8));
        GXS_SetOBJVRamModeBmp(*(GXOBJVRamModeBmp *) (param_1 + 0xbc));
    }
    (*(vu16 *) (0x04000304)) = (*(vu16 *) (0x04000304)) | 0x8000;
}
