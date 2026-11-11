/* compiler: 2.0/sp1p5  */
/* func_020c42dc from projets/lego-star-wars-ii-the-original-trilogy/src/auto/func_020c42dc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Blk;
typedef struct {
    u8 pad[0xFC];
    s32 fc;
} G;
extern G data_02150330;
extern M2C_UNK data_0215041c;
void func_02075cc4(Blk *arg0) {
    *(Blk *) &data_0215041c = *arg0;
    data_02150330.fc &= ~0xA4;
}
