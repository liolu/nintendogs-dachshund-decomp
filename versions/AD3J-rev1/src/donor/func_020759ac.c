/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee810 from projets/sims-2-the/src/donor/func_020ee810.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef void (*ModeCallback)(void);
typedef struct Mode {
    u32 unknown_00;
    void *resource;
    u32 unknown_08;
    ModeCallback callback_0c;
    u32 unknown_10;
    ModeCallback callback_14;
    u32 unknown_18;
    ModeCallback callback_1c;
    u8 unknown_20[0x34];
} Mode;
extern void func_0206dff0(u32 value, void *destination, u32 size);
extern ModeCallback data_0213b3f4;
extern ModeCallback data_0213b3f8;
extern ModeCallback data_0213b3fc;
void func_020759ac(Mode *mode, void *resource) {
    volatile u32 clearValue = 0;

    func_0206dff0(clearValue, mode, 0x54);
    mode->callback_0c = data_0213b3fc;
    mode->callback_14 = data_0213b3f8;
    mode->callback_1c = data_0213b3f4;
    mode->resource    = resource;
}
