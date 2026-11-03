/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aaa54 from projets/pokemon-dash/src/donor/func_020aaa54.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_020838d4(const char *, const char *, const char *, int);
extern const char data_02128ffc;
extern const char data_02129108;
struct Elem {
    int a, b, c, d;
};
struct Arr {
    unsigned int count;
    int pad[3];
    struct Elem elems[1];
};
void func_0208445c(struct Arr *s, unsigned int index) {
    unsigned int n;
    if (index >= s->count) {
        func_020838d4(&data_02128ffc, (const char *) 0x55, &data_02129108, 1);
    }
    s->count--;
    n = s->count;
    goto test;
loop:
    s->elems[index] = s->elems[index + 1];
    index++;
test:
    if (index < n) {
        goto loop;
    }
}
