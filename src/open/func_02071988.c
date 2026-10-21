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

extern Unk_022a8a10 data_0215078c;
extern void func_02071464(void);
extern void func_02073838(SoundFader *fader, s32 a, s32 b);

void func_02071988(s32 arg0) {
    Unk_022a8a10 *state = &data_0215078c;

    if (state->running == 0) {
        return;
    }
    if (state->unk_04 != 0) {
        return;
    }
    if (arg0 == 0) {
        func_02071464();
        return;
    }
    func_02073838(&state->fader, 0, arg0);
    state->closeWhenFaded = 1;
}
