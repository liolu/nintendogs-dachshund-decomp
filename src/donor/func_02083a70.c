/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02083a70 from projets/nintendogs-chihuahua-friends/src/donor/func_02083a70.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_02083a70(u32 *saved);
extern BOOL func_020845b0(void);
extern BOOL lbl_020845c0(BOOL enable);
extern BOOL func_02084564(void);
extern BOOL lbl_02084574(BOOL enable);
extern int func_0207f72c(u16 lockId);
extern u16 func_0207f68c(void *lock);
BOOL func_02083a70(u32 *saved) {
    BOOL savedB     = func_020845b0();
    BOOL savedA     = func_02084564();
    BOOL locked     = 0;
    BOOL lockedByUs = 0;

    if (func_0207f72c(0x70) == 0) {
        lockedByUs = 1;
        locked     = lockedByUs;
    } else if (func_0207f68c(((void *) 0x027fffe8)) & 0x40) {
        locked = 1;
    }
    if (locked) {
        u32 result = 0;

        if (savedB) {
            result |= 1;
        }
        if (savedA) {
            result |= 2;
        }
        if (lockedByUs) {
            result |= 0x20;
        }
        *saved = result;
    } else {
        lbl_02084574(savedA);
        lbl_020845c0(savedB);
        *saved = 0;
    }
    return locked;
}
