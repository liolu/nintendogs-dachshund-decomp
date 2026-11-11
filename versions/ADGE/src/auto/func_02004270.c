/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02068d40(void);
void func_02068d68(void);
void func_02068d90(void);
void func_02068da4(void);
void func_02068db8(void);
void func_02068dcc(void);
void func_02068de0(void);
void func_02068df4(void);
void func_02068e08(void);
void func_02068e1c(void);
void func_02068e40(void);
void func_02068e64(void);
void func_02068e78(void);

extern void *data_0214cd98;

void func_02004270(void) {
    M2C_FIELD(data_0214cd98, s32 *, 0xC0) = 0;
    func_02068e78();
    func_02068e64();
    func_02068e40();
    func_02068e1c();
    func_02068e08();
    func_02068df4();
    func_02068de0();
    func_02068da4();
    func_02068d90();
    func_02068d68();
    func_02068d40();
    func_02068dcc();
    func_02068db8();
    data_0214cd98 = NULL;
}
