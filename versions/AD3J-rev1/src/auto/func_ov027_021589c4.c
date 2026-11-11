/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02070abc(void);
void func_ov027_02159804(void);

extern s32 data_ov027_02159b34;

void func_ov027_021589c4(void) {
    if (data_ov027_02159b34 == 0) {
        return;
    }
    func_02070abc();
    func_ov027_02159804();
    data_ov027_02159b34 = 0;
}
