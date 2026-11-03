/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071364 from projets/nintendogs-dachshund/src/donor/func_02071364.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
typedef struct Unk_022a8a10 {
    int running;
    int unk_04;
    u8 pad_08[4];
    void *bufferL;
    void *bufferR;
    u32 bufferSize;
    int unk_18;
    int unk_1c;
    int unk_20;
    int unk_24;
    int alarm;
    u8 pad_2c[0xc];
    SoundFader fader;
    int closeWhenFaded;
    int appliedVolume;
} Unk_022a8a10;
extern Unk_022a8a10 data_0214fc64;
extern void func_02080858(const void *start, u32 size);
extern void func_0206dff0(u32 value, void *dst, u32 size);
extern void func_020638ec(int arg0, int arg1, u32 alarmMask, int arg3);
void func_020726e8(void) {
    Unk_022a8a10 *state = &data_0214fc64;
    volatile u32 zeroL;
    volatile u32 zeroR;

    if (state->running == 0) {
        return;
    }
    state->unk_18 = 0;
    zeroL         = 0;
    func_0206dff0(zeroL, state->bufferL, state->bufferSize);
    zeroR = 0;
    func_0206dff0(zeroR, state->bufferR, state->bufferSize);
    func_02080858(state->bufferL, state->bufferSize);
    func_02080858(state->bufferR, state->bufferSize);
    func_020638ec(state->unk_20, state->unk_24, state->alarm >= 0 ? 1 << state->alarm : 0, 0);
}
