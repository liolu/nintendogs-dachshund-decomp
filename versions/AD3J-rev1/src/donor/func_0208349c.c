/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a9a9c from projets/pokemon-dash/src/donor/func_020a9a9c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
int func_0208349c(double x) {
    char *topByte = (char *) &x + 7;

    return Isd_ReadByte(topByte) & 0x80;
}
