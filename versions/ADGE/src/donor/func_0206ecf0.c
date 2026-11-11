/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006380 from https://github.com/RonyxDumb/mkds src/arm9/02006380_func_02006380.c (license: none), reused by
 * tools/donor_match.py */
unsigned int func_0206ecf0(unsigned char *p, int bit) {
    unsigned int word = ((unsigned int **) p)[5][bit >> 5];
    return (word & (1u << (bit & 31))) != 0;
}
