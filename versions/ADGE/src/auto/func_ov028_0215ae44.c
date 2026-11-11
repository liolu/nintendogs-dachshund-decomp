/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206f6c4(void);
void func_ov028_0215bc84(void);
extern s32 data_ov028_0215bfb4;

void func_ov028_0215ae44(void) {
    if (data_ov028_0215bfb4 == 0) {
        return;
    }
    func_0206f6c4();
    func_ov028_0215bc84();
    data_ov028_0215bfb4 = 0;
}
