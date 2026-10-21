#define M2C_SELF_func_020cbc38
#include "m2c.h"

typedef struct SeqObj {
    /* 0x00 */ u8 *inf1;
    /* 0x04 */ u8 *inf1Data;
    /* 0x08 */ u8 *dat1Data;
    /* 0x0c */ u8 *mid1;
    /* 0x10 */ u8 *mid1Data;
    /* 0x14 */ u8 *flw1;
    /* 0x18 */ u8 *flw1Data;
    /* 0x1c */ u8 *flw1End;
    /* 0x20 */ u8 *unk20;
    /* 0x24 */ u8 *fli1;
    /* 0x28 */ u8 *fli1Data;
} SeqObj;

void func_020cbc38(void *obj, void *file) {
    SeqObj *p = (SeqObj *)obj;
    u32 i = 0;
    u8 *block = (u8 *)file;

    p->inf1 = NULL;
    p->inf1Data = NULL;
    p->dat1Data = NULL;
    p->mid1 = NULL;
    p->mid1Data = NULL;
    p->flw1 = NULL;
    p->flw1Data = NULL;
    p->flw1End = NULL;
    p->unk20 = NULL;
    p->fli1 = NULL;
    p->fli1Data = NULL;

    block += 0x20;
    while (i < *(u32 *) ((u8 *) file + 0xC)) {
        switch (*(u32 *) block) {
        case 0x31464E49: /* "INF1" */
            p->inf1 = block;
            p->inf1Data = block + 0x10;
            break;
        case 0x31544144: /* "DAT1" */
            p->dat1Data = block + 8;
            break;
        case 0x3144494D: /* "MID1" */
            p->mid1 = block;
            p->mid1Data = block + 0x10;
            break;
        case 0x31574C46: /* "FLW1" */
            p->flw1 = block;
            p->flw1Data = block + 0x10;
            p->flw1End = p->flw1Data + *(u16 *) ((u8 *) p->flw1 + 8) * 8;
            break;
        case 0x31494C46: /* "FLI1" */
            p->fli1 = block;
            p->fli1Data = block + 0x10;
            break;
        }
        block += *(u32 *) (block + 4);
        i++;
    }
}
