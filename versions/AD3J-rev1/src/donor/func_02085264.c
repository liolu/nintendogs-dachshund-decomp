/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02081aec from projets/nintendogs-dachshund/src/donor/func_02081aec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern int (*data_0213b5c0)(int, int, int);
int func_02085264(int a, int b, int c) {
    return (data_0213b5c0(a, b, 0) & 0xffff) << 3;
}
