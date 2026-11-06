/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c984c from projets/nintendogs-chihuahua-friends/src/donor/func_020c984c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 *func_020c984c(s32 *param_1) {
    s32 *ret;
    s32 cnt;
    s32 flag;
    s32 *ptr;
    ret = 0;
    cnt = 0;
    ptr = (s32 *) (*(u8 **) (data_02154c48 + 0x1434) + 4);
    do {
        s32 r3 = ptr[0];
        flag   = 1;
        if (r3 == 0) {
            if (ptr[1] == 0) {
                flag = 0;
            }
        }
        if (flag != 0) {
            if (r3 == param_1[0]) {
                if (ptr[1] == param_1[1]) {
                    ret = ptr;
                    goto out;
                }
            }
        }
        cnt = (s16) (cnt + 1);
        ptr = ptr + 41;
    } while (cnt < 50);
out:
    return ret;
}
