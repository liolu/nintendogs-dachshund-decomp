/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02002bcc from projets/nintendogs-dachshund/src/donor/func_02002bcc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02002d18(int a);
typedef struct {
    short *ptr;
    int pad;
} PtrEntry;
extern PtrEntry data_0214a73c[];
typedef struct {
    unsigned short flag;
    short pad;
    int pad2;
} FlagEntry;
extern FlagEntry data_0214a738[];
extern int data_0214a700;
extern int data_0214a704;
typedef struct {
    char pad[0xc];
    int *fc;
} StructH;
extern StructH data_0214a714;
void func_02002b68(int a0, unsigned int msg, int flag) {
    unsigned short cmd;
    unsigned short val;

    if (flag != 0) {
        func_02002d18(2);
        return;
    }

    cmd = (msg & 0x7f00) >> 8;
    val = (msg & 0xff) << 16 >> 16;

    if (cmd >= 0x70 && cmd <= 0x73) {
        int idx           = cmd - 0x70;
        unsigned short pv = val & 0xff;
        short *p          = data_0214a73c[idx].ptr;
        if (p != 0) {
            *p = pv;
        }
        data_0214a738[idx].flag = 1;
        val                     = 0;
    } else if (cmd == 0x60) {
        data_0214a700 = 1;
    } else if (cmd == 0x62) {
        data_0214a704 = 1;
    } else if (cmd == 0x67) {
        int *q = data_0214a714.fc;
        if (q != 0) {
            *q = val;
        }
        val = 0;
    }

    func_02002d18(val);
}
