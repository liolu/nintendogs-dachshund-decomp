/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bb968 from projets/nintendogs-chihuahua-friends/src/donor/func_020bb968.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef int BOOL;
typedef struct {
    u8 pad[0x2f4];
    s32 active;
    s32 x;
    s32 y;
    s32 f300;
    s32 f304;
} Obj;
static inline void G2x_SetBGyOffset_(vu32 *ptr, int hOffset, int vOffset) {
    *ptr = (u32) (((hOffset << 0) & 0x000001ff) | ((vOffset << 16) & 0x01ff0000));
}
static inline void G2S_SetBG3Offset(int hOffset, int vOffset) {
    G2x_SetBGyOffset_(&(*(vu32 *) 0x0400101c), hOffset, vOffset);
}
static inline void G2S_SetWnd0InsidePlane(int wnd, BOOL effect) {
    u32 tmp;
    tmp = (u32) (((*(vu16 *) 0x04001048) & ~0x003f) | (wnd << 0));
    if (effect) {
        tmp |= (0x20 << 0);
    }
    (*(vu16 *) 0x04001048) = (u16) tmp;
}
static inline void G2S_SetWndOutsidePlane(int wnd, BOOL effect) {
    u32 tmp;
    tmp = (u32) (((*(vu16 *) 0x0400104a) & ~0x003f) | (wnd << 0));
    if (effect) {
        tmp |= (0x20 << 0);
    }
    (*(vu16 *) 0x0400104a) = (u16) tmp;
}
static inline void G2S_SetWnd0Position(int x1, int y1, int x2, int y2) {
    (*(vu16 *) 0x04001040) = (u16) (((x1 << 8) & 0xff00) | ((x2 << 0) & 0x00ff));
    (*(vu16 *) 0x04001044) = (u16) (((y1 << 8) & 0xff00) | ((y2 << 0) & 0x00ff));
}
static inline void GXS_SetVisibleWnd(int window) {
    (*(vu32 *) 0x04001000) = (u32) (((*(vu32 *) 0x04001000) & ~(0x00002000 | 0x00004000 | 0x00008000)) | (window << 13));
}
void func_020bb968(Obj *p) {
    if (p->active != 0) {
        s32 x = 255 - p->x;
        s32 y = -p->y;
        if (y >= 191) {
            y = 191;
        }
        if (x < 0) {
            x = 0;
        }
        G2S_SetBG3Offset(p->x, p->y);
        G2S_SetWnd0InsidePlane(8, 0);
        G2S_SetWndOutsidePlane(0x17, 0);
        G2S_SetWnd0Position(0, y, x, 191);
        GXS_SetVisibleWnd(1);
    } else if (p->f300 != 0) {
        p->f300 = 0;
        p->f304 = 0;
        G2S_SetBG3Offset(0, 0);
        G2S_SetWnd0Position(0, 0, 255, 191);
        GXS_SetVisibleWnd(0);
    } else if (p->f304 != 0) {
        p->f304 = 0;
        GXS_SetVisibleWnd(0);
    }
}
