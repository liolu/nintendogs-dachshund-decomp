/* compiler: 1.2/sp2p3  */
/* func_021137b8 from projets/nintendogs-dachshund/src/auto/func_021137b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206a5b4(M2C_UNK);
extern M2C_UNK func_0210634c(void);
extern void func_020921a8(M2C_UNK);
extern void *data_02153714;
void func_02092048(void) {
    s16 temp_r0_2;
    s16 temp_r1;
    void *temp_r0;

    if ((*(s16 *) ((s8 *) (data_02153714) + (8))) != 0) {
        func_020921a8((s32) data_02153714);
        temp_r1 = (*(s16 *) ((s8 *) (data_02153714) + (8)));
        if ((s32) temp_r1 <= 0) {
            return;
        }
        (*(s16 *) ((s8 *) (data_02153714) + (8))) = (s16) (temp_r1 - 1);
        if ((*(s16 *) ((s8 *) (data_02153714) + (8))) != 0) {
            return;
        }
        temp_r0                                = (void *) func_0210634c();
        (*(u16 *) ((s8 *) (temp_r0) + (0x26))) = (u16) ((*(u16 *) ((s8 *) (temp_r0) + (0x26))) ^ 1);
        return;
    }
    if ((*(u16 *) ((s8 *) (data_02153714) + (0xA))) == 0) {
        return;
    }
    func_0206a5b4(8);
    temp_r0_2 = (*(s16 *) ((s8 *) (data_02153714) + (0xC)));
    switch (temp_r0_2) {
        case 1:
            *(M2C_UNK *) 0x04000000 = (s32) ((*(M2C_UNK *) 0x04000000 & ~0x1F00) | 0x1300);
            *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0xC00);
            break;
        case 2:
            *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x300;
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1800;
            break;
    }
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & ~3) | 2;
    *(u16 *) 0x0400100C &= ~0x40;
    *(u16 *) 0x0400100C                         = (*(u16 *) 0x0400100C & 0x43) | 0xF00;
    (*(u16 *) ((s8 *) (data_02153714) + (0xA))) = 0U;
}
