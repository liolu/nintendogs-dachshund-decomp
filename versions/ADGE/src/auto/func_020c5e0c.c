/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207b44c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern void func_020c52bc(void);
extern void func_020c52a8(void);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
const void *func_020c5e0c(const UnkSndWaveArc *waveArc, s32 index) {
    const void *wave;

    func_020c52bc();
    wave = (const void *) waveArc->waveOffset[index];
    if (wave != 0) {
        if ((u32) wave < 0x02000000) {
            wave = (const void *) ((u32) waveArc + (u32) wave);
        }
    } else {
        wave = 0;
    }
    func_020c52a8();
    return wave;
}
