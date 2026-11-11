/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02080c28(void);
extern u32 func_02080c3c(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020c531c(void);
extern UnkSndCommand *data_02156fa8;
extern UnkSndCommand *data_02156f98;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020c531c(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_02080c28();

    cmd = data_02156f98;
    if (cmd == 0) {
        func_02080c3c(enabled);
        return 0;
    }
    data_02156f98 = cmd->next;
    if (data_02156f98 == 0) {
        data_02156fa8 = 0;
    }
    func_02080c3c(enabled);
    return cmd;
}
