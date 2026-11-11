/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e970 from projets/nintendogs-dachshund/src/donor/func_0207e970.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct SVCSHA1Context {
    u32 state[5];
    u32 bitsLow;
    u32 bitsHigh;
    u32 used;
    u8 block[64];
    u32 finished;
    u32 error;
} SVCSHA1Context;
extern int func_0207efb8(SVCSHA1Context *context, const u8 *data, u32 length);
extern void func_0207ecb8(SVCSHA1Context *context);
int func_0207efb8(SVCSHA1Context *context, const u8 *data, u32 length) {
    if (length == 0) {
        return 0;
    }
    if (context == ((void *) 0) || data == ((void *) 0)) {
        return 1;
    }
    if (context->finished != 0) {
        context->error = 3;
        return 3;
    }
    if (context->error != 0) {
        return context->error;
    }
    while (length-- != 0 && context->error == 0) {
        context->block[context->used++] = *data;
        context->bitsLow += 8;
        if (context->bitsLow == 0) {
            context->bitsHigh++;
            if (context->bitsHigh == 0) {
                context->error = 1;
            }
        }
        if (context->used == 64) {
            func_0207ecb8(context);
        }
        data++;
    }
    return 0;
}
