#include "m2c.h"

typedef struct {
    u32 flag;                /* 0x00 */
    void *resMdl;            /* 0x04 */
    void *anmMat;            /* 0x08 */
    void *funcBlendMat;      /* 0x0c */
    void *anmJnt;            /* 0x10 */
    void *funcBlendJnt;      /* 0x14 */
    void *anmVis;            /* 0x18 */
    void *funcBlendVis;      /* 0x1c */
    void *cbFunc;            /* 0x20 */
    u8 cbCmd;                /* 0x24 */
    u8 cbTiming;             /* 0x25 */
    u16 unk_26;              /* 0x26 */
    void *cbInitFunc;        /* 0x28 */
    void *unk_2c;            /* 0x2c */
    void *ptrUserSbc;        /* 0x30 */
    void *recJntAnm;         /* 0x34 */
    void *recMatAnm;         /* 0x38 */
    u32 hintMatAnmExist[2];  /* 0x3c */
    u32 hintJntAnmExist[2];  /* 0x44 */
    u32 hintVisAnmExist[2];  /* 0x4c */
} UnkRenderObj;

typedef struct {
    u8 unk_00[0x188];
} UnkRS;

extern UnkRS *data_021510bc;
extern void func_0206cbf8(u32 value, void *dest, u32 size);
extern void func_020773bc(u32 *bits, void *anm);
extern void func_02077434(UnkRS *rs, UnkRenderObj *obj);

void func_020772c0(UnkRenderObj *obj) {
    UnkRS local;
    UnkRS *rs;

    if ((obj->flag & 0x10) == 0x10) {
        {
            volatile u32 zero = 0;
            func_0206cbf8(zero, obj->hintMatAnmExist, 8);
        }
        {
            volatile u32 zero = 0;
            func_0206cbf8(zero, obj->hintJntAnmExist, 8);
        }
        {
            volatile u32 zero = 0;
            func_0206cbf8(zero, obj->hintVisAnmExist, 8);
        }
        if (obj->anmMat != NULL) {
            func_020773bc(obj->hintMatAnmExist, obj->anmMat);
        }
        if (obj->anmJnt != NULL) {
            func_020773bc(obj->hintJntAnmExist, obj->anmJnt);
        }
        if (obj->anmVis != NULL) {
            func_020773bc(obj->hintVisAnmExist, obj->anmVis);
        }
        obj->flag &= ~0x10;
    }
    rs = data_021510bc;
    if (rs != NULL) {
        func_02077434(rs, obj);
    } else {
        data_021510bc = &local;
        func_02077434(&local, obj);
        data_021510bc = NULL;
    }
}
