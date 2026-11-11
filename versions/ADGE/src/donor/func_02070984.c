/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundSeqPlayer_UpdateAll from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/sound_seq_player_update_all.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef struct ListLink {
    void *prev;
    void *next;
} ListLink;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
extern void *func_0207d038(LinkList *list, void *object);
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
typedef struct SoundPlayerSlot {
    LinkList players;
    LinkList heaps;
    u32 maxPlayers;
    u32 trackChannelMask;
    u8 volume;
    u8 pad_21[3];
} SoundPlayerSlot;
typedef struct SoundSeqPlayer {
    struct SoundHandle *handle;
    SoundPlayerSlot *ownerSlot;
    struct SoundPlayerHeap *heap;
    ListLink slotLink;
    ListLink activeLink;
    SoundFader volumeFader;
    u8 state;
    u8 started;
    u8 unk_2e;
    u8 pad_2f;
    u32 startTick;
    u16 sourceKind;
    u8 pad_36[2];
    u16 sourceNo;
    u16 sourceIndex;
    u8 hwChannel;
    u8 priority;
    s16 hwVolume;
    u8 seqVolume;
    u8 volume;
    u8 pad_42[2];
} SoundSeqPlayer;
typedef struct SoundPlayerHeap {
    ListLink link;
    struct SoundHeap *heap;
    SoundSeqPlayer *player;
    u32 slotNo;
} SoundPlayerHeap;
typedef struct SoundHandle {
    SoundSeqPlayer *player;
} SoundHandle;
extern LinkList data_0214fe18;
extern s16 data_0212c60c[];
extern u32 func_020c5d64(void);
extern BOOL func_020c54e4(u32 tick);
extern void func_020704f0(SoundSeqPlayer *player);
extern void func_020c51ec(int hwChannel, int volume);
extern BOOL func_020737cc(SoundFader *fader);
extern void func_020737e4(SoundFader *fader);
extern int func_020737fc(SoundFader *fader);
extern void func_020705fc(SoundSeqPlayer *player);
void func_02070984(void) {
    u32 activeChannels     = func_020c5d64();
    SoundSeqPlayer *player = func_0207d038(&data_0214fe18, ((void *) 0));
    SoundSeqPlayer *next;
    int zero = 0;
    int playerVolume;
    int seqVolume;
    int slotVolume;
    int volume;
    int fadeIndex;

    if (player == ((void *) 0)) {
        return;
    }
    do {
        next = func_0207d038(&data_0214fe18, player);
        if (!player->started && func_020c54e4(player->startTick)) {
            player->started = 1;
        }
        if (player->started && !(activeChannels & (1 << player->hwChannel))) {
            func_020704f0(player);
        } else {
            func_020737e4(&player->volumeFader);
            playerVolume = data_0212c60c[player->volume];
            seqVolume    = data_0212c60c[player->seqVolume];
            slotVolume   = data_0212c60c[player->ownerSlot->volume];
            fadeIndex    = func_020737fc(&player->volumeFader) >> 8;
            volume       = data_0212c60c[fadeIndex] + (slotVolume + (seqVolume + playerVolume));
            if (volume < (-723)) {
                volume = (-723);
            } else if (volume > 0) {
                volume = zero;
            }
            if (volume != player->hwVolume) {
                func_020c51ec(player->hwChannel, volume);
                player->hwVolume = volume;
            }
            if (player->state == 2 && func_020737cc(&player->volumeFader)) {
                func_020705fc(player);
            }
        }
        player = next;
    } while (player != ((void *) 0));
}
