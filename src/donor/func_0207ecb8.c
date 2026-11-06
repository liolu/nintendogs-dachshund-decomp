/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207ecb8 from projets/nintendogs-chihuahua-friends/src/donor/func_0207ecb8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct DgtHash2Context {
    u32 state[5];
    volatile u32 length_low;
    volatile u32 length_high;
    int block_index;
    u8 block[64];
    int computed;
    int error;
} DgtHash2Context;
extern void func_0207ecb8(DgtHash2Context *context);
typedef struct DgtHash2Constants {
    u32 words[4];
} DgtHash2Constants;
extern DgtHash2Constants data_0213b65c;
extern int data_021532d0;
void func_0207ecb8(DgtHash2Context *context) {
    u32 saved24;
    u32 saved56;
    DgtHash2Constants constants = data_0213b65c;
    u32 words[80];
    u32 a, b, c, d, e;
    int i;
    u32 *block_words = (u32 *) context->block;
    if (data_021532d0) {
        saved24         = block_words[6];
        saved56         = block_words[14];
        block_words[6]  = 0;
        block_words[14] = 0;
    }
    for (i = 0; i < 16; i++) {
        ((volatile u32 *) words)[i] = (u32) context->block[4 * i] << 24;
        ((volatile u32 *) words)[i] |= (u32) context->block[4 * i + 1] << 16;
        ((volatile u32 *) words)[i] |= (u32) context->block[4 * i + 2] << 8;
        ((volatile u32 *) words)[i] |= context->block[4 * i + 3];
    }
    for (i = 16; i < 80; i++) {
        u32 value = words[i - 16] ^ (words[i - 14] ^ (words[i - 3] ^ words[i - 8]));
        words[i]  = (value << 1) | (value >> 31);
    }
    a = context->state[0];
    b = context->state[1];
    c = context->state[2];
    d = context->state[3];
    e = context->state[4];
    for (i = 0; i < 20; i++) {
        u32 value = constants.words[0] + (words[i] + (e + (((a << 5) | (a >> 27)) + ((b & c) | (~b & d)))));
        e         = d;
        d         = c;
        c         = (b << 30) | (b >> 2);
        b         = a;
        a         = value;
    }
    for (i = 20; i < 40; i++) {
        u32 value = constants.words[1] + (words[i] + (e + (((a << 5) | (a >> 27)) + (d ^ (b ^ c)))));
        e         = d;
        d         = c;
        c         = (b << 30) | (b >> 2);
        b         = a;
        a         = value;
    }
    for (i = 40; i < 60; i++) {
        u32 value = constants.words[2] + (words[i] + (e + (((a << 5) | (a >> 27)) + ((c & d) | (b & (c | d))))));
        e         = d;
        d         = c;
        c         = (b << 30) | (b >> 2);
        b         = a;
        a         = value;
    }
    for (i = 60; i < 80; i++) {
        u32 value = constants.words[3] + (words[i] + (e + (((a << 5) | (a >> 27)) + (d ^ (b ^ c)))));
        e         = d;
        d         = c;
        c         = (b << 30) | (b >> 2);
        b         = a;
        a         = value;
    }
    context->state[0] += a;
    context->state[1] += b;
    context->state[2] += c;
    context->state[3] += d;
    context->state[4] += e;
    context->block_index = 0;
    if (data_021532d0) {
        block_words[6]  = saved24;
        block_words[14] = saved56;
    }
}
