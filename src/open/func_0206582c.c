#include "m2c.h"

extern M2C_UNK data_0214ec20;
extern M2C_UNK data_02153e78;

void func_02065278(void);
u32 func_02080c28(void);
M2C_UNK func_0207f670(M2C_UNK);
void func_02080c3c(u32);
void func_0206563c(int type);
s32 func_02066388(void *, s32 *, s32);
void func_02065c50(M2C_UNK);

int func_0206582c(int type) {
    char *g;
    unsigned int irq;

    g = (char *) &data_0214ec20;
    func_02065278();
    irq = func_02080c28();
    if (*(u32 *) (g + 0x34) & 4) {
        do {
            func_0207f670((M2C_UNK) (g + 0xd4));
        } while (*(u32 *) (g + 0x34) & 4);
    }
    *(u32 *) (g + 0x34) |= 4;
    func_02080c3c(irq);
    func_0206563c(type);
    *(int *) (g + 0x28) = 0;
    *(int *) (g + 0x2c) = 0;
    *(int *) ((char *) &data_0214ec20 + 0xd0) = M2C_FIELD(&data_02153e78, s32 *, 8);
    func_02066388(g, (s32 *) 2, 1);
    *(int *) ((char *) (*(int **) g) + 0xc)  = 0;
    *(int *) ((char *) (*(int **) g) + 0x10) = (int) (g + 0xe0);
    *(int *) ((char *) (*(int **) g) + 0x14) = 1;
    func_02066388(g, (s32 *) 6, 1);
    func_02065c50((M2C_UNK) g);
    return (*(int **) g)[0] == 0;
}
