/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aaad0 from projets/pokemon-dash/src/donor/func_020aaad0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_020838d4(const char *, const char *, const char *, int);
extern const char data_02128ffc;
extern const char data_02129130;
struct Elem {
    int a, b, c, d;
};
struct Arr {
    unsigned int count;
    int pad[3];
    struct Elem elems[1];
};
void func_020844d8(struct Arr *s, unsigned int index) {
    unsigned int n;
    int i;
    if (index > s->count) {
        func_020838d4(&data_02128ffc, (const char *) 0x42, &data_02129130, 1);
    }
    n = s->count;
    if (n - index != 0) {
        i = (int) n - 1;
        goto test;
    loop:
        s->elems[i + 1] = s->elems[i];
        i--;
    test:
        if (i >= (int) index) {
            goto loop;
        }
    }
    s->count++;
}
