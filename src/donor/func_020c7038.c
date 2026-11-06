/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7038 from projets/nintendogs-chihuahua-friends/src/donor/func_020c7038.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern s16 data_0212d2dc[];
typedef struct MsgCtx {
    u16 state;
    u16 mode;
    s16 x04;
    u16 x06;
    u16 flags;
    u16 x0a;
    s16 x0c;
    u16 x0e;
    u16 x10;
    u16 x12;
    u16 x14;
    u16 x16;
    u16 x18;
    s16 x1a;
    u16 x1c;
    u16 x1e;
    u8 pad20[8];
    u32 (*callback)(u32 key, u32 arg);
    u8 pad2c[8];
    u16 sp;
    u16 pad36;
    u8 *stack[3];
    u16 x44;
    u16 x46;
    s16 x48;
    u16 pad4a;
    u32 x4c;
    u32 x50;
    u32 x54;
    s16 count;
    u16 arr[1];
} MsgCtx;
void func_020c7038(MsgCtx *ctx) {
    u16 *rec;
    u32 len;
    u32 key;
    u32 w0, w8, w7;
    u32 raw;
    u32 b6;
    BOOL flag = 1;

    rec = (u16 *) ctx->stack[ctx->sp];
    key = ((u32) (u16) (rec[1] >> 8) << 16) | rec[2];
    len = rec[1] & 0xff;
    raw = rec[3];
    b6  = raw & 0xff;
    w0  = ((u32) raw << 16) | rec[4];
    w8  = ((u32) rec[5] << 16) | rec[6];
    w7  = ((u32) rec[7] << 16) | rec[8];

    switch (key) {
        case 0:
            ctx->state = 3;
            ctx->mode  = 1;
            ctx->x1a   = 0;
            break;
        case 1:
            if (ctx->x1a != 1) {
                s32 i;
                ctx->mode = 2;
                for (i = 0; i < ctx->count; i++) {
                    ctx->arr[i] = 0;
                }
                ctx->count = 0;
            } else {
                ctx->state = 7;
                ctx->x0a   = ctx->x0c;
            }
            break;
        case 2:
            if ((ctx->flags & 2) == 0) {
                ctx->state = 4;
                ctx->x0a   = raw;
            }
            break;
        case 8:
            ctx->state = 4;
            ctx->x0a   = raw;
            break;
        case 3:
            if (b6 != 0 && b6 < 11) {
                ctx->x04 = data_0212d2dc[b6];
            }
            break;
        case 4:
            ctx->x0c = raw;
            break;
        case 7:
            switch (raw) {
                case 0:
                    ctx->mode = 6;
                    break;
                case 1:
                    ctx->mode = 7;
                    break;
                case 2:
                    ctx->mode = 8;
                    break;
            }
            break;
        case 9:
            ctx->x10 = 1;
            break;
        case 0x60000:
            ctx->mode = 9;
            ctx->x1c  = raw;
            break;
        case 0x10000:
            ctx->mode = 4;
            ctx->x12  = 1;
            break;
        case 0x10001:
            ctx->mode = 4;
            ctx->x12  = 2;
            break;
        case 0x10002:
            ctx->mode = 4;
            ctx->x12  = 3;
            break;
        case 0x10003:
            ctx->mode = 4;
            ctx->x12  = 4;
            break;
        case 0x40000:
            ctx->flags |= 1;
            break;
        case 0x60001:
            ctx->mode = 10;
            ctx->x1c  = raw;
            break;
        case 0x70000:
            ctx->state = 5;
            ctx->mode  = 5;
            ctx->x46   = 2;
            ctx->x48   = -1;
            ctx->x4c   = w0;
            ctx->x50   = w8;
            ctx->x54   = -1;
            break;
        case 0x70001:
            ctx->state = 5;
            ctx->mode  = 5;
            ctx->x48   = -1;
            ctx->x46   = 3;
            ctx->x4c   = w0;
            ctx->x50   = w8;
            ctx->x54   = w7;
            break;
        case 0x70002:
            ctx->state = 5;
            ctx->mode  = 5;
            ctx->x46   = 1;
            ctx->x48   = -1;
            ctx->x4c   = w0;
            ctx->x50   = -1;
            ctx->x54   = -1;
            break;
        case 0xff0000:
            ctx->x14 = b6 + 1;
            break;
        case 0x30000:
        case 0x30002:
        case 0x30003:
        case 0x30004:
        case 0x30005:
        case 0x30006:
        case 0x30008:
        case 0x30009:
        case 0x3000b:
        case 0x3000d:
        case 0x3000e:
        case 0x3000f:
        case 0x30010:
        case 0x30011:
        case 0x30012:
        case 0x30013:
        case 0x30014:
        case 0x30015: {
            u8 *ret             = (u8 *) ctx->callback(key, b6);
            flag                = 0;
            ctx->stack[ctx->sp] = (u8 *) (len + (u32) ctx->stack[ctx->sp]);
            ctx->sp++;
            ctx->stack[ctx->sp] = ret;
            break;
        }
    }

    if (flag == 0) {
        return;
    }
    ctx->stack[ctx->sp] = (u8 *) (len + (u32) ctx->stack[ctx->sp]);
    if (key != 0 && key != 1) {
        return;
    }
    {
        u8 *s = ctx->stack[ctx->sp];
        if (*(u16 *) s == 10) {
            ctx->stack[ctx->sp] = s + 2;
        }
    }
}
