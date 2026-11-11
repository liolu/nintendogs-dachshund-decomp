/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SND_ReadInstData from https://github.com/ntrtwl/NitroSDK libraries/snd/src/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct SNDBinaryFileHeader {
    char signature[4];
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
    u32 kind;
    u32 size;
} SNDBinaryBlockHeader;
typedef enum SNDInstType {
    SND_INST_INVALID = 0,
    SND_INST_PCM     = 0x01,
    SND_INST_PSG,
    SND_INST_NOISE,
    SND_INST_DIRECTPCM,
    SND_INST_NULL,
    SND_INST_DRUM_SET = 0x10,
    SND_INST_KEY_SPLIT
} SNDInstType;
typedef struct SNDWaveArcLink {
    struct SNDWaveArc *waveArc;
    struct SNDWaveArcLink *next;
} SNDWaveArcLink;
typedef struct SNDWaveArc {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
} SNDWaveArc;
typedef struct SNDBankData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[0];
} SNDBankData;
typedef struct SNDInstParam {
    u16 wave[2];
    u8 original_key;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 pan;
} SNDInstParam;
typedef struct SNDInstData {
    u8 type;
    u8 padding_;
    struct SNDInstParam param;
} SNDInstData;
typedef struct SNDKeySplit {
    u8 key[8];
    struct SNDInstData instOffset[0];
} SNDKeySplit;
typedef struct SNDDrumSet {
    u8 min;
    u8 max;
    struct SNDInstData instOffset[0];
} SNDDrumSet;
extern BOOL func_020c629c(const struct SNDBankData *bank, int prgNo, int key, struct SNDInstData *inst);
static inline u8 MI_ReadByte(const void *address) {
    return *(u8 *) address;
}
extern void func_020c52bc(void);
extern void func_020c52a8(void);
BOOL func_020c629c(const SNDBankData *bank, int prgNo, int key, SNDInstData *inst) {
    u32 instOffset;

    ((void) 0);
    ((void) 0);

    if (prgNo < 0) {
        return 0;
    }
#line 176
    func_020c52bc();

    if (prgNo >= bank->instCount) {
        func_020c52a8();
        return 0;
    }

    instOffset = bank->instOffset[prgNo];
    inst->type = (u8) (instOffset & 0xff);
    instOffset >>= 8;

    switch (inst->type) {
        case SND_INST_PCM:
        case SND_INST_PSG:
        case SND_INST_NOISE:
        case SND_INST_DIRECTPCM:
        case SND_INST_NULL: {
            const SNDInstParam *param = (const SNDInstParam *) ((u8 *) bank + instOffset);

            inst->param = *param;
            break;
        }
        case SND_INST_DRUM_SET: {
            const SNDDrumSet *drumSet = (const SNDDrumSet *) ((u8 *) bank + instOffset);
            u8 min                    = MI_ReadByte(&drumSet->min);
            u8 max                    = MI_ReadByte(&drumSet->max);

            if (key < min || key > max) {
                func_020c52a8();
                return 0;
            }

            *inst = drumSet->instOffset[key - min];
            break;
        }
        case SND_INST_KEY_SPLIT: {
            int index                   = 0;
            const SNDKeySplit *keySplit = (const SNDKeySplit *) ((u8 *) bank + instOffset);

            while (key > MI_ReadByte(&keySplit->key[index])) {
                index++;
                if (index >= 8) {
                    func_020c52a8();
                    return 0;
                }
            }

            *inst = keySplit->instOffset[index];
            break;
        }
        case SND_INST_INVALID:
        default:
            func_020c52a8();
            return 0;
    }

    func_020c52a8();
    return 1;
}
