#include "m2c.h"
void * func_02085b04(void *arg0) {
    void *node;
    void *result;

    result = NULL;
    node = M2C_FIELD(arg0, void **, 0);
    if (node != NULL) {
        result = node;
        M2C_FIELD(arg0, void **, 0) = M2C_FIELD(node, void **, 0);
        if (M2C_FIELD(arg0, void **, 0) != NULL) {
            M2C_FIELD(M2C_FIELD(node, void **, 0), void **, 4) = NULL;
        }
        M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4) - 1;
    }
    return result;
}
