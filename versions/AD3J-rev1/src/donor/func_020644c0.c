/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200ceb4 from projets/code-lyoko/src/auto/func_0200ceb4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_020644c0(void);
extern UnkSndAlarm data_0214d4c0[8];
void func_020644c0(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_0214d4c0[i].func = 0;
        data_0214d4c0[i].arg  = 0;
        data_0214d4c0[i].id   = 0;
    }
}
