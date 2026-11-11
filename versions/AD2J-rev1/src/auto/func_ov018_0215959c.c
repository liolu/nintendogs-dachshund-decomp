/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_ov018_0215cfbc[])(void *);

void func_ov018_0215959c(void *arg0) {
    data_ov018_0215cfbc[*(s16 *) ((u8 *) arg0 + 0x1E)](arg0);
}
