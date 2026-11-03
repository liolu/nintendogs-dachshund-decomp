/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a105c from projets/pokemon-dash/src/donor/func_020a105c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct OverlayTableRow {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    void *sinit_init;
    void *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} OverlayTableRow;
typedef enum MIProcessor {
    MI_PROCESSOR_ARM9,
    MI_PROCESSOR_ARM7
} MIProcessor;
typedef struct FSOverlayInfo {
    OverlayTableRow header;
    u32 target;
    u32 romTop;
    u32 romSize;
} FSOverlayInfo;
extern int func_0208120c(void);
extern void func_02081220(int state);
typedef struct DestructorChain {
    struct DestructorChain *next;
    void (*destructor)(void *object);
    void *object;
} DestructorChain;
extern DestructorChain *data_0214b9b0;
extern int func_02083b28(MIProcessor target, void *address, u32 size);
static inline u32 OverlayImageSize(const FSOverlayInfo *info) {
    return info->header.ram_size;
}
static inline u32 OverlayTotalSize(const FSOverlayInfo *info) {
    return info->header.ram_size + info->header.bss_size;
}
void func_0208bf50(FSOverlayInfo *info) {
    for (;;) {
        DestructorChain *removed = ((void *) 0);
        DestructorChain *last    = ((void *) 0);
        u8 *textTop              = info->header.ram_address;
        u8 *textBottom           = textTop + OverlayImageSize(info);
        u8 *bssBottom            = textBottom + (OverlayTotalSize(info) - OverlayImageSize(info));
        DestructorChain *prev;
        DestructorChain *head;
        DestructorChain *entry;
        DestructorChain *next;
        int irqState = func_0208120c();

        head = data_0214b9b0;
        prev = ((void *) 0);
        for (entry = head; entry != ((void *) 0); entry = next) {
            u8 *destructor = (u8 *) entry->destructor;
            u8 *object;
            next   = entry->next;
            object = entry->object;
            if ((destructor >= textTop && destructor < textBottom) || (object >= textBottom && object < bssBottom)) {
                if (last != ((void *) 0)) {
                    last->next = entry;
                } else {
                    removed = entry;
                }
                if (head == entry) {
                    data_0214b9b0 = head = next;
                }
                entry->next = ((void *) 0);
                last        = entry;
                if (prev != ((void *) 0)) {
                    prev->next = next;
                }
            } else {
                prev = entry;
            }
        }
        func_02081220(irqState);

        if (removed == ((void *) 0)) {
            break;
        }
        do {
            next = removed->next;
            if (removed->destructor != ((void *) 0)) {
                removed->destructor(removed->object);
            }
            removed = next;
        } while (removed != ((void *) 0));
    }
    {

        u32 size      = OverlayImageSize(info);
        void *address = info->header.ram_address;
        func_02083b28(info->target == MI_PROCESSOR_ARM9 ? MI_PROCESSOR_ARM9 : MI_PROCESSOR_ARM7, address, size);
    }
}
