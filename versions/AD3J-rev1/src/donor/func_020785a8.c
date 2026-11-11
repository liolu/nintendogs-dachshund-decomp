/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077d30 from projets/nintendogs-dachshund/src/donor/func_02077d30.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern int func_02078674(const u8 *c);
extern const u8 *func_02078614(const u8 *c, u8 cmd);
extern int func_020785a8(u8 *idList, const u8 *sbc, u32 nodeID);
extern int func_02078674(const u8 *c);
extern const u8 *func_02078614(const u8 *c, u8 cmd);
int func_020785a8(u8 *idList, const u8 *sbc, u32 nodeID) {
    const u8 *tmp = sbc;
    int num       = 0;

    ((void) 0);
    ((void) 0);

    while ((tmp = func_02078614(tmp, 0x06)) != 0) {
        if (*(tmp + 2) == nodeID && *(tmp + 2) != *(tmp + 1)) {
            *(idList + num++) = *(tmp + 1);
        }

        {
            int cmdLen = func_02078674(tmp);
            ((void) 0);
            tmp += cmdLen;
        }
    }

    return num;
}
