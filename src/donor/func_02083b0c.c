/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aa10c from projets/pokemon-dash/src/donor/func_020aa10c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int BOOL;
typedef struct IsdSharedBlock {
    u32 unk_00[5];
    u32 flags;
    u32 unk_18;
    u8 *channel;
} IsdSharedBlock;
extern BOOL func_02083b0c(u32 mask);
BOOL func_02083b0c(u32 mask) {
    volatile IsdSharedBlock *block = ((volatile IsdSharedBlock *) 0x027fff60);

    return (mask & block->flags) != 0;
}
