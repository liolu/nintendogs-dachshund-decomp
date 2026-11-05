/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208445c from projets/nintendogs-shiba-friends/src/donor/func_0208445c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020838d4(const char *, const char *, const char *, int);
extern const char data_02129004;
extern const char data_02129110;
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
        func_020838d4(&data_02129004, (const char *) 0x55, &data_02129110, 1);
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
