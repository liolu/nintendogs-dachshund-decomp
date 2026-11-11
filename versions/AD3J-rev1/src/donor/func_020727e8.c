/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071464 from projets/nintendogs-dachshund/src/donor/func_02071464.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern Unk_022a8a10 data_0214fc64;
extern OSMessageQueue data_0214fc50;
extern void func_0206387c(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_02063de0(void);
extern void func_02063eb0(int arg0);
extern void func_02063f40(int arg0);
extern int func_02080414(void *arg0, int arg1, int arg2);
extern void func_0207173c(int arg0);
extern void func_0207177c(u32 channelMask);
extern void func_020716d8(int alarm);
extern void func_0206361c(int arg0, int arg1, int arg2, int arg3);
void func_020727e8(void) {
    Unk_022a8a10 *state = &data_0214fc64;
    int hasAlarm;

    if (state->running == 0) {
        return;
    }
    hasAlarm = state->alarm >= 0;
    func_0206387c(state->unk_20, state->unk_24, hasAlarm ? 1 << state->alarm : 0, 0);
    if (hasAlarm) {
        int saved = func_02063de0();
        func_02063f40(1);
        func_02063eb0(saved);
        while (func_02080414(&data_0214fc50, 0, 0) != 0) {
        }
    }
    if (state->unk_24 != 0) {
        func_0207173c(state->unk_24);
    }
    if (state->unk_1c != 0) {
        func_0207177c(state->unk_1c);
    }
    if (hasAlarm) {
        func_020716d8(state->alarm);
    }
    if (state->unk_04 == 1) {
        func_0206361c(0, 0, 0, 0);
    }
    state->running = 0;
}
