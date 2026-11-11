/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundOutput_Update from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_output_update.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
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
extern Unk_022a8a10 data_0215078c;
extern BOOL func_020737cc(SoundFader *fader);
extern void func_020737e4(SoundFader *fader);
extern int func_020737fc(SoundFader *fader);
extern void func_020c4e84(int arg0, int volume, int arg2);
extern void func_02071464(void);
void func_020718b8(void) {
    Unk_022a8a10 *state = &data_0215078c;
    SoundFader *fader;
    int volume;

    if (state->running == 0) {
        return;
    }
    if (state->unk_04 != 0) {
        return;
    }
    fader = &state->fader;
    func_020737e4(fader);
    if (state->closeWhenFaded != 0 && func_020737cc(fader)) {
        func_02071464();
        return;
    }
    volume = func_020737fc(fader) >> 8;
    if (volume != state->appliedVolume) {
        func_020c4e84(state->unk_20, volume, 0);
        state->appliedVolume = volume;
    }
}
