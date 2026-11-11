/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003980(void);
void func_020a43f8(void);
void func_020b7ee0(void);
M2C_UNK func_020b7efc(void);

void func_020ff268(void) {
    if (func_020b7efc() == 0) {
        return;
    }
    if (func_02003980() == 0) {
        return;
    }
    func_020a43f8();
    func_020b7ee0();
}
