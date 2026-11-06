/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b534c from projets/nintendogs-chihuahua-friends/src/donor/func_020b534c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0213d4d0;
extern void func_020b53f4(void);
typedef struct {
    u32 w[8];
} Ent;
u16 func_020b534c(s32 param_1, u32 *param_2, u16 param_3) {
    u8 *puVar5;
    u16 count;
    s16 key;

    puVar5 = (u8 *) &data_0213d4d0;
    count  = 0;
    func_020b53f4();
    goto check;
body:
    if (key != param_1) {
        goto next;
    }
    if (*(u16 *) (puVar5 + 12) == 0) {
        goto next;
    }
    *(Ent *) param_2 = *(Ent *) puVar5;
    param_2 += 8;
    param_3 -= 1;
    count += 1;
next:
    puVar5 = puVar5 + 32;
check:
    key = *(s16 *) (puVar5 + 4);
    if (-1 == key) {
        goto done;
    }
    if (param_3 - 1 > 0) {
        goto body;
    }
done:
    *(s16 *) (param_2 + 1) = -1;
    return count;
}
