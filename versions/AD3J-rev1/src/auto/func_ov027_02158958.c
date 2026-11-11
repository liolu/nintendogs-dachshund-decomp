/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02070abc(void);
void func_ov027_02159234(void *);
void func_ov027_02159248(void *);
void func_ov027_021594e4(void);
extern void *data_ov027_02159b34;
extern u8 func_ov027_02158478;
extern u8 func_ov027_021586a4;

void func_ov027_02158958(void) {
    func_02070abc();
    *(s32 *) ((u8 *) data_ov027_02159b34 + 0x108) = 0;
    *(s32 *) ((u8 *) data_ov027_02159b34 + 0x10C) = 0;
    func_ov027_02159234(&func_ov027_02158478);
    func_ov027_02159248(&func_ov027_021586a4);
    func_ov027_021594e4();
}
