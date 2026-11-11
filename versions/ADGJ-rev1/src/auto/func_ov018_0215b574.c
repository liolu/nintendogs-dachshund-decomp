/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_ov018_0215ceb8[])(void *);

void func_ov018_0215b574(void *arg0) {
    data_ov018_0215ceb8[*(s16 *) ((u8 *) arg0 + 0x1E)](arg0);
}
