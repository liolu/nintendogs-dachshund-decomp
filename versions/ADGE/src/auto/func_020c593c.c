/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02080c28(void);
extern u32 func_02080c3c(u32 state);
extern void func_02080c98(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020c593c(u32 flags);
extern u32 func_020c5ce8(void);
extern u32 data_02156f9c;
extern UnkSndCommand *data_02156fa8;
extern UnkSndCommand *data_02156f98;
extern s32 data_02156fac;
extern s32 data_02156fb4;
extern UnkSndCommand *data_02156fbc[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020c593c(u32 flags) {
    u32 enabled = func_02080c28();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_02156f9c == func_020c5ce8()) {
            func_02080c3c(enabled);
            func_02080c98(100);
            enabled = func_02080c28();
        }
    } else if (data_02156f9c == func_020c5ce8()) {
        func_02080c3c(enabled);
        return 0;
    }

    head = data_02156fbc[data_02156fac];
    data_02156fac++;
    if (data_02156fac > 8) {
        data_02156fac = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02156fa8 != 0) {
        data_02156fa8->next = head;
    } else {
        data_02156f98 = head;
    }
    data_02156fa8 = tail;
    data_02156fb4--;
    data_02156f9c++;

    func_02080c3c(enabled);
    return head;
}
