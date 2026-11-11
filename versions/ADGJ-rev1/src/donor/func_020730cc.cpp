/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* func_02056448 from projets/need-for-speed-underground-2/src/donor/func_02056448.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern "C" {
extern char *data_0214fd54;
extern int func_020730cc(unsigned int id);
}
extern "C" int func_020730cc(unsigned int id) {
    char *root = data_0214fd54;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0xc);
    char *tbl  = (off == 0) ? 0 : sub + off;
    if (tbl == 0) {
        return 0;
    }
    if ((int) id < 0) {
        return 0;
    }
    if (id >= *(unsigned *) tbl) {
        return 0;
    }
    int v      = ((int *) (tbl + id * 4))[1];
    char *base = *(char **) (root + 0x84);
    return (v == 0) ? 0 : (int) (base + v);
}
