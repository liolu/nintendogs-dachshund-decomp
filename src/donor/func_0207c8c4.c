#include "m2c.h"
/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_GfdResetFrmPlttVramState from https://github.com/RonyxDumb/mkds src/arm9/020162d4_AnotherPaletteHandler.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void func_0207c8c4(void);
typedef struct NNSGfdFramPlttVramManager {
    u32 loAddr;
    u32 hiAddr;
    u32 szTotal;
} NNSGfdFrmPlttVramManager;
extern NNSGfdFrmPlttVramManager data_02153dd0;
void func_0207c8c4(void) {
    data_02153dd0.loAddr = 0x00000;
    data_02153dd0.hiAddr = data_02153dd0.szTotal;
}
