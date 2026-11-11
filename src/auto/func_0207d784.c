/* compiler: 1.2/sp2p3 */
typedef struct S {
    char *head;
    int p4;
    unsigned short cnt;
    unsigned short off;
} S;
extern void func_0207d850(S *, char *);
void func_0207d784(S *s, char *n) {
    unsigned short *pc;
    unsigned short o;
    if (s->head == 0) {
        func_0207d850(s, n);
        return;
    }
    o                             = s->off;
    pc                            = &s->cnt;
    *(int *) (n + o)              = 0;
    *(char **) (n + o + 4)        = s->head;
    *(char **) (s->head + s->off) = n;
    s->head                       = n;
    *pc                           = *pc + 1;
}
