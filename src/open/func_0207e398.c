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
extern int func_0207ea5c(SVCSHA1Context *context, u8 *out);
extern int func_0207eb18(SVCSHA1Context *context);

void func_0207e398(u8 *arg0, const u8 *arg1, int arg2, const u8 *arg3, int arg4) {
    u8 pad1[0x40];
    u8 pad2[0x40];
    u8 key[0x14];
    SVCSHA1Context ctx;
    const u8 *p;
    u8 *keyp;
    int len;
    int i;

    keyp = key;
    if (arg0 == 0 || arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0) {
        return;
    }
    p = arg3;
    len = arg4;
    if (arg4 > 0x40) {
        func_0207eb18(&ctx);
        func_0207e970(&ctx, arg3, arg4);
        func_0207ea5c(&ctx, keyp);
        p = keyp;
        len = 0x14;
    }
    for (i = 0; i < len; i++) {
        pad1[i] = *p ^ 0x36;
        pad2[i] = *p ^ 0x5C;
        p++;
    }
    for (; i < 0x40; i++) {
        pad1[i] = 0x36;
        pad2[i] = 0x5C;
    }
    func_0207eb18(&ctx);
    func_0207e970(&ctx, pad1, 0x40);
    func_0207e970(&ctx, arg1, arg2);
    func_0207ea5c(&ctx, keyp);
    func_0207eb18(&ctx);
    func_0207e970(&ctx, pad2, 0x40);
    func_0207e970(&ctx, keyp, 0x14);
    func_0207ea5c(&ctx, arg0);
}
