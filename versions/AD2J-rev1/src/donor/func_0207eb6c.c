/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e524 from projets/nintendogs-dachshund/src/donor/func_0207e524.c (same code in another game of this workspace),
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
extern void func_0207ecb8(SVCSHA1Context *context);
void func_0207eb6c(SVCSHA1Context *context) {
    if ((int) context->used > 55) {
        context->block[context->used++] = 0x80;
        while ((int) context->used < 64) {
            context->block[context->used++] = 0;
        }
        func_0207ecb8(context);
        while ((int) context->used < 56) {
            context->block[context->used++] = 0;
        }
    } else {
        context->block[context->used++] = 0x80;
        while ((int) context->used < 56) {
            context->block[context->used++] = 0;
        }
    }
    context->block[56] = context->bitsHigh >> 24;
    context->block[57] = context->bitsHigh >> 16;
    context->block[58] = context->bitsHigh >> 8;
    context->block[59] = context->bitsHigh;
    context->block[60] = context->bitsLow >> 24;
    context->block[61] = context->bitsLow >> 16;
    context->block[62] = context->bitsLow >> 8;
    context->block[63] = context->bitsLow;
    func_0207ecb8(context);
}
