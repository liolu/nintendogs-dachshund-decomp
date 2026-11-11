/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200616c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200616c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 f0;
    u32 limit;
    u32 ptr;
    u32 f0c;
    u32 f10;
    u32 len;
    u16 mask;
} GT;
extern GT data_0214afe0;
extern void func_02006240(u32 a, u32 b, u32 c, u32 d);
u32 func_020060f8(void) {
    u32 uVar4, uVar6, uVar5, len;
    u32 pb;
    u32 pw;

    len = data_0214afe0.len;
    pw  = data_0214afe0.ptr;
    pb  = pw + len;
    if (pb > data_0214afe0.limit) {
        return 0;
    }
    if (len == 1) {
        pb    = *(u8 *) pw;
        uVar6 = 1;
        pw    = data_0214afe0.mask;
        uVar5 = 1;
        uVar4 = 0;
        do {
            if (((u16) uVar6 & pw) != 0) {
                if ((uVar5 & pb) != 0) {
                    uVar4 = uVar4 | (u16) uVar6;
                }
                uVar5 = (u8) (uVar5 << 1);
                if (uVar5 == 0) {
                    break;
                }
            }
            uVar6 = uVar6 << 1;
        } while (uVar6 < 0x10000);
    } else {
        uVar4 = *(u16 *) pw;
    }
    func_02006240(1, 1, pb, pw);
    return uVar4;
}
