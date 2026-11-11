/* compiler: 1.2/sp2p3  */
/* func_020b95e0 from projets/nintendogs-dachshund/src/auto/func_020b95e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0211b164(void *);
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_02118e6c(void *arg0) {
    void *temp_r0;
    void *temp_r3;

    if ((*(s32 *) ((s8 *) (arg0) + (0x6C))) == 1) {
        return;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = 2;
    (*(s16 *) ((s8 *) (arg0) + (0x3C))) = -1;
    (*(s32 *) ((s8 *) (arg0) + (0x44))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x50))) = 0x3C;
    temp_r0                             = arg0 + 0xC;
    temp_r3                             = arg0 + 0x54;
    *(M2C_S12 *) ((s8 *) arg0 + 84)     = *(M2C_S12 *) ((s8 *) arg0 + 12);

    func_0211b164(arg0);
}
