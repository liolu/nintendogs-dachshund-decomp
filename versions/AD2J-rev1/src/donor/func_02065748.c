/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020611a8 from projets/children-of-mana/src/auto/func_020611a8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
u16 func_02065748(void) {
    u8 mac[6];
    u16 sum;
    s32 i;

    func_020813d8(mac);
    for (i = 0, sum = 0; i < 6; i++) {
        sum += mac[i];
    }
    sum += *(vu32 *) 0x027ffc3c;
    sum *= 13;
    return (u16) (30 + (sum % 10));
}
