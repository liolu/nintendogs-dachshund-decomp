/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_020c593c(u32 flags);
extern BOOL func_020c5698(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_02080c28(void);
extern OSIntrMode func_02080c3c(OSIntrMode state);
extern void func_02080c98(u32 cycles);
extern void func_0208022c(register const void *startAddr, register u32 nBytes);
extern s32 func_0206d1c0(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02157260[256];
extern struct SNDCommand *data_02156fbc[8 + 1];
extern struct SNDCommand *data_02156fa0;
extern struct SNDCommand *data_02156fa4;
extern s32 data_02156fb0;
extern s32 data_02156fb4;
extern u32 data_02156fb8;
extern void func_020c5374(void);
const struct SNDCommand *func_020c593c(u32 flags);
BOOL func_020c5698(u32 flags) {
    OSIntrMode oldirq = func_02080c28();

    if (data_02156fa0 == ((void *) 0)) {
        (void) func_02080c3c(oldirq);
        return 1;
    }

    if (data_02156fb4 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_02080c3c(oldirq);
            return 0;
        }

        do {
            (void) func_020c593c(0x1);
        } while (data_02156fb4 >= 8);
    }

    func_0208022c(data_02157260, sizeof(data_02157260));

    s32 result = func_0206d1c0(7, (u32) data_02156fa0, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_02080c3c(oldirq);
            return 0;
        }

        result = func_0206d1c0(7, (u32) data_02156fa0, 0);
        while (result < 0) {
            (void) func_02080c3c(oldirq);
            func_02080c98(100);
            oldirq = func_02080c28();
            result = func_0206d1c0(7, (u32) data_02156fa0, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020c5374();
    }

    data_02156fbc[data_02156fb0] = data_02156fa0;

    if (++data_02156fb0 > 8) {
        data_02156fb0 = 0;
    }

    data_02156fa0 = ((void *) 0);
    data_02156fa4 = ((void *) 0);
    data_02156fb4++;
    data_02156fb8++;

    (void) func_02080c3c(oldirq);
    return 1;
}
void func_020c5374(void);
