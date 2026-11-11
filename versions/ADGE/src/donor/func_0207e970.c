/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sha1_FeedBytes from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/svc/sha1_feed_bytes.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
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
extern int func_0207e970(SVCSHA1Context *context, const u8 *data, u32 length);
extern void func_0207e670(SVCSHA1Context *context);
int func_0207e970(SVCSHA1Context *context, const u8 *data, u32 length) {
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
            func_0207e670(context);
        }
        data++;
    }
    return 0;
}
