/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0208be84(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0212d488;
extern s32 data_021440d4;

void func_020cd214(void) {
    if (data_021440d4 == -1) {
        return;
    }
    func_0208be84(0, *((M2C_UNK *) ((s8 *) &data_0212d488 + (data_021440d4 * 8))));
    data_021440d4 = -1;
}
