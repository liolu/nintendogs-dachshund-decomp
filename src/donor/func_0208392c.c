/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208392c from projets/nintendogs-shiba-friends/src/donor/func_0208392c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_02083b0c(u32 mask);
typedef struct IsdBusState {
    u16 exmemcnt;
    u16 sharedWord;
    u16 active;
} IsdBusState;
extern void func_0208392c(IsdBusState *saved);
typedef volatile u16 vu16;
void func_0208392c(IsdBusState *saved) {
    vu16 dummy;

    if (func_02083b0c(1) && saved->active != 0) {
        (*(vu16 *) 0x027fff72) = saved->sharedWord;
        (*(vu16 *) 0x09fe2ffe) = saved->sharedWord;
        dummy                  = (*(vu16 *) 0x09fe20f0);
        dummy                  = (*(vu16 *) 0x09fe20f0);
        dummy                  = (*(vu16 *) 0x09fe20f0);
    }
    (*(vu16 *) 0x04000204) = saved->exmemcnt;
}
