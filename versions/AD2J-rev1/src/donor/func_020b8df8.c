/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112a8c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02112a8c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
void func_020b8df8(u8 *param_1) {
    s32 aiStack_220[129];
    s32 i;
    u16 cnt;
    s32 zA;
    s32 zB;
    s32 j;
    s32 n;
    u8 *q;
    s32 val;
    s32 flag;
    s32 one;

    q   = *(u8 **) (param_1 + 8);
    n   = *(u16 *) (q + 6);
    q   = q + 8;
    cnt = 0;
    i   = 0;
    if (n <= 0) {
        return;
    }
    zA  = 0;
    zB  = 0;
    one = 1;
    do {
        flag = one;
        j    = zB;
        val  = *(s32 *) (q + 4);
        if ((s32) cnt > 0) {
            do {
                if (val == aiStack_220[j]) {
                    flag = zA;
                    break;
                }
                j = j + 1;
            } while (j < (s32) cnt);
        }
        if (flag != 0) {
            aiStack_220[cnt] = val;
            cnt              = (u16) (cnt + 1);
        }
        i = i + 1;
        q = q + 8;
    } while (i < n);
}
