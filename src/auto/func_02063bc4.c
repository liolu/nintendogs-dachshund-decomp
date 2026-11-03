/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02063bc4(void);
extern UnkSndCommand *data_0214b9f8;
extern UnkSndCommand *data_0214b9e8;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02063bc4(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_0208120c();

    cmd = data_0214b9e8;
    if (cmd == 0) {
        func_02081220(enabled);
        return 0;
    }
    data_0214b9e8 = cmd->next;
    if (data_0214b9e8 == 0) {
        data_0214b9f8 = 0;
    }
    func_02081220(enabled);
    return cmd;
}
