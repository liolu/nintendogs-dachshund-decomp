/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02074110 from projets/nintendogs-chihuahua-friends/src/donor/func_02074110.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
struct Entry {
    unsigned char kind;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    int w;
};
struct List {
    unsigned int count;
    struct Entry entries[1];
};
extern "C" {
extern int func_02072f3c(unsigned int id);
extern int func_02073e54(unsigned int id, int flags, int c);
extern int func_02073fd0(unsigned int id, int flags, int arg2);
extern int func_02074040(void *a, void *b);
extern int func_020740c0(void *a, void *b);
extern int func_02074110(unsigned int id, int arg);
}
extern "C" int func_02074110(unsigned int id, int arg) {
    struct List *l;
    unsigned int i;
    struct Entry *e;

    l = (struct List *) func_02072f3c(id);
    if (!l) {
        return 0;
    }

    i = 0;
    if (i < l->count) {
        e = l->entries;
        do {
            switch (e->kind) {
                case 0:
                    if (func_02073fd0(e->w, e->b1, arg) == 0) {
                        return 0;
                    }
                    break;
                case 3:
                    if (func_020740c0((void *) e->w, (void *) arg) == 0) {
                        return 0;
                    }
                    break;
                case 1:
                    if (((int (*)(unsigned int id, int flags, int arg2)) func_02073e54)(e->w, e->b1, arg) == 0) {
                        return 0;
                    }
                    break;
                case 2:
                    if (func_02074040((void *) e->w, (void *) arg) == 0) {
                        return 0;
                    }
                    break;
            }
            i++;
            e++;
        } while (i < l->count);
    }

    return 1;
}
extern "C" int func_020740c0(void *a, void *b);
extern "C" int func_02074040(void *a, void *b);
extern "C" int func_02073fd0(unsigned int id, int flags, int arg2);
extern "C" int func_02073e54(unsigned int id, int flags, int c);
extern "C" int func_02072f3c(unsigned int id);
