#include "engine.h"
#include "m2c.h"
/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065a94 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02065a94.c (license: MIT), reused
 * by tools/donor_match.py */
struct Node65 {
    int key;
    char pad[0x24];
    struct Node65 *next;
};
extern struct Node65 *func_02070064(void);
s32 func_02070018(s32 arg0) {
    s32 *node = (s32 *) func_02070064();
    while (node != 0) {
        if (node[0] == arg0) {
            return (s32) node;
        }
        node = (s32 *) node[0x28 / 4];
    }
    return 0;
}
