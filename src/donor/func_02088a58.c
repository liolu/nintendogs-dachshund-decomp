/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020852e0 from projets/nintendogs-dachshund/src/donor/func_020852e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
#pragma cplusplus off
void func_02088a58(int obj, int src, int a) {
    int t;
    int q;
    t                       = *(short *) (*(int *) (src + 0x14) + 4);
    q                       = (t - 0x1000) * (a - 0xff) / 255;
    *(short *) (obj + 0x34) = (short) (t + q);
}
