/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_ov019_0215f420[])(void *);

void func_ov019_0215ba68(void *arg0) {
    data_ov019_0215f420[*(s16 *) ((u8 *) arg0 + 0x1E)](arg0);
}
