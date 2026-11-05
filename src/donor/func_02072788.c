/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02055a08 from projets/need-for-speed-underground-2/src/donor/func_02055a08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
extern void func_0206387c(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_02063de0(void);
extern void func_02063eb0(int arg0);
extern void func_02063f40(int arg0);
void func_02072788(void) {
    Unk_022a8a10 *state = &data_0214fc64;
    int saved;

    if (state->running == 0) {
        return;
    }
    func_0206387c(state->unk_20, state->unk_24, state->alarm >= 0 ? 1 << state->alarm : 0, 0);
    saved = func_02063de0();
    func_02063f40(1);
    func_02063eb0(saved);
}
