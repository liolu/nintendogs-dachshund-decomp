#include "m2c.h"
typedef struct { u8 pad[0x68]; u32 unk68; u32 unk6c; } Unk_02080d64;
typedef union { s64 v; struct { u32 lo; u32 hi; } f; } Ret64_02080d64;

s64 func_02080d64(void) {
    Unk_02080d64 *p = (Unk_02080d64 *) 0x27ffc80;
    return *(s64 *) &p->unk68;
}
