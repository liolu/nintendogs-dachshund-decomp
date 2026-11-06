/* compiler: 1.2/sp2p3  */
/* func_020d569c from projets/nintendogs-dachshund/src/auto/func_020d569c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void func_0211eba4(void);
extern void *data_02154c78;
void func_020cfe10(s32 arg0, s32 arg1) {
    func_0211eba4();
    (*(s16 *) ((s8 *) (data_02154c78) + (0)))    = 1;
    (*(s16 *) ((s8 *) (data_02154c78) + (6)))    = 1;
    (*(s32 *) ((s8 *) (data_02154c78) + (0xC)))  = arg0;
    (*(s32 *) ((s8 *) (data_02154c78) + (0x10))) = arg1;
    (*(s16 *) ((s8 *) (data_02154c78) + (2)))    = 1;
}
