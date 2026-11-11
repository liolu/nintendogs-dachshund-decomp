/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* func_020a9c0c from projets/pokemon-dash/src/donor/func_020a9c0c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct IsdSharedBlock {
    u32 unk_00[5];
    u32 flags;
    u32 unk_18;
    u8 *channel;
} IsdSharedBlock;
typedef struct IsdRing {
    u16 head;
    u16 unk_02;
    u16 tail;
} IsdRing;
static inline void Isd_WriteByte(u8 *bytes, u32 index, int value) {
    u32 offset = index & ~1;
    u16 half   = *(u16 *) (bytes + offset);

    if (index & 1) {
        half = (half & 0x00ff) | ((u16) value << 8);
    } else {
        half = (half & 0xff00) | (u16) value;
    }
    *(u16 *) (bytes + offset) = half;
}
void func_0208360c(IsdRing *ring, int byte) {
    u16 next;
    u16 head;
    u8 *bytes;
    volatile IsdSharedBlock *shared = ((volatile IsdSharedBlock *) 0x027fff60);

    (void) (ring->tail && ring->tail);

    head  = ring->head;
    next  = (head + 1) & 0x3fff;
    bytes = shared->channel + 0x8000;
    if (next != ring->tail) {
        Isd_WriteByte(bytes, head, byte);
        ring->head = next;
    }
}
