/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* func_02083868 from projets/nintendogs-shiba-friends/src/donor/func_02083868.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_02083b0c(u32 mask);
typedef struct IsdPrintTarget IsdPrintTarget;
struct IsdPrintTarget {
    u32 unk_00;
    u32 limit;
    u32 total;
    u32 stored;
    void (*write)(IsdPrintTarget *target, const char *text, u32 length);
};
extern void func_02083750(IsdPrintTarget *target, const char *text, u32 length);
extern void func_02083868(const char *format, ...);
extern void func_020814b8(IsdPrintTarget *target, const char *format, char **args);
void func_02083868(const char *format, ...) {
    IsdPrintTarget target;
    char *args;

    if (func_02083b0c(0x20000)) {
        target.unk_00 = 0;
        target.stored = 0;
        target.limit  = -1;
        target.write  = func_02083750;
        args          = (char *) (((u32) &format & ~3) + 4);
        func_020814b8(&target, format, &args);
    }
}
