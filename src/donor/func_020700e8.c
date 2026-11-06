/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f5ac from projets/children-of-mana/src/auto/func_0205f5ac.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
#pragma cplusplus off
unsigned int func_020700e8(unsigned char *p, int bit) {
    unsigned int word = ((unsigned int **) p)[5][bit >> 5];
    return (word & (1u << (bit & 31))) != 0;
}
