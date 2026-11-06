/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063760 from projets/children-of-mana/src/auto/func_02063760.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
