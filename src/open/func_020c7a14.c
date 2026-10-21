#include "stdarg.h"
#include "m2c.h"
typedef struct FSFileID {
    void *arc;
    u32 fileID;
} FSFileID;

extern s32 func_0208801c(void *file, FSFileID fileID);
void func_020c7a14(s32 arg0, s32 arg1, ...) {
    func_0208801c((void *) arg0, *(FSFileID *) &arg1);
}
