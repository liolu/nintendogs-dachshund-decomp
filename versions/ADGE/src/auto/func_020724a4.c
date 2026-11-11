/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020756c0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
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
typedef struct UnkSndInstPos {
    u32 prgNo;
    u32 index;
} UnkSndInstPos;
typedef struct UnkSndInstData {
    u8 type;
    u8 unk_01;
    u16 waveNo;
    u16 waveArcNo;
    u8 unk_06[6];
} UnkSndInstData;
extern UnkSndInstPos func_020c606c(void);
extern BOOL func_020c5e94(void *bank, UnkSndInstData *inst, UnkSndInstPos *pos);
extern BOOL func_02072574(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
extern BOOL func_020724a4(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap);
BOOL func_02072574(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
BOOL func_020724a4(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap) {
    UnkSndInstPos pos = func_020c606c();
    UnkSndInstData inst;

    if (bank == 0) {
        return 0;
    }

    while (func_020c5e94(bank, &inst, &pos)) {
        if (inst.type == 1 && index == inst.waveArcNo) {
            if (!func_02072574(waveArc, inst.waveNo, fileId, heap)) {
                return 0;
            }
        }
    }
    return 1;
}
