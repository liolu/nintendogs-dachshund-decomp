/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundOutput_Close from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_output_close.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
typedef void *OSMessage;
typedef struct OSMessageQueue {
    u16 queueSend;
    u16 queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
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
extern OSMessageQueue data_02150778;
extern void func_020c4fd4(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_020c5538(void);
extern void func_020c5608(int arg0);
extern void func_020c5698(int arg0);
extern int func_0207fdcc(void *arg0, int arg1, int arg2);
extern void func_02070364(int arg0);
extern void func_020703a4(u32 channelMask);
extern void func_02070300(int alarm);
extern void func_020c4d74(int arg0, int arg1, int arg2, int arg3);
void func_02071464(void) {
    Unk_022a8a10 *state = &data_0215078c;
    int hasAlarm;

    if (state->running == 0) {
        return;
    }
    hasAlarm = state->alarm >= 0;
    func_020c4fd4(state->unk_20, state->unk_24, hasAlarm ? 1 << state->alarm : 0, 0);
    if (hasAlarm) {
        int saved = func_020c5538();
        func_020c5698(1);
        func_020c5608(saved);
        while (func_0207fdcc(&data_02150778, 0, 0) != 0) {
        }
    }
    if (state->unk_24 != 0) {
        func_02070364(state->unk_24);
    }
    if (state->unk_1c != 0) {
        func_020703a4(state->unk_1c);
    }
    if (hasAlarm) {
        func_02070300(state->alarm);
    }
    if (state->unk_04 == 1) {
        func_020c4d74(0, 0, 0, 0);
    }
    state->running = 0;
}
