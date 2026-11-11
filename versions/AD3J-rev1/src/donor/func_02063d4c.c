/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200c770 from projets/code-lyoko/src/auto/func_0200c770.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern s32 func_02063d4c(void);
extern UnkSndCommand *data_0214b9e8;
s32 func_02063d4c(void) {
    u32 enabled = func_0208120c();
    s32 count   = 0;
    UnkSndCommand *cmd;

    for (cmd = data_0214b9e8; cmd != 0; cmd = cmd->next) {
        count++;
    }
    func_02081220(enabled);
    return count;
}
