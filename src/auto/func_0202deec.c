/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202deec from projets/nintendogs-shiba-friends/src/donor/func_0202deec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
u32 func_0202deec(u32 mode, u32 p2) {
    switch (mode) {
        case 0:
            goto L0;
        case 1:
            goto L1;
        case 2:
            goto L2;
        case 3:
            goto L3;
        case 4:
            goto L4;
        case 5:
            goto L5;
        case 6:
            goto L6;
        case 7:
            goto L7;
        case 8:
            goto L8;
        default:
            goto D;
    }
L0:
    if (p2 > 0x3000 && p2 <= 0x5000) {
        return 3;
    }
    if (p2 > 0x5000 && p2 <= 0xb000) {
        return 2;
    }
    if (p2 > 0xb000 && p2 <= 0xd000) {
        return 4;
    }
    return 1;
L1:
    if (p2 > 0x3000 && p2 <= 0x5000) {
        return 3;
    }
    if (p2 > 0x5000 && p2 <= 0xb000) {
        return 2;
    }
    if (p2 > 0xb000 && p2 <= 0xd000) {
        return 4;
    }
    return 1;
L2:
    return 0;
L3:
    if (p2 > 0x4000 && p2 <= 0x7000) {
        return 3;
    }
    if (p2 > 0x7000 && p2 <= 0x9000) {
        return 2;
    }
    if (p2 > 0x9000 && p2 <= 0xc000) {
        return 4;
    }
    return 1;
L4:
    if (p2 > 0x3000 && p2 <= 0x7000) {
        return 3;
    }
    if (p2 > 0x7000 && p2 <= 0x9000) {
        return 0;
    }
    if (p2 > 0x9000 && p2 <= 0xd000) {
        return 4;
    }
    return 1;
L5:
    if (p2 != 0 && p2 <= 0x3000) {
        return 3;
    }
    if (p2 > 0x3000 && p2 <= 0x9000) {
        return 0;
    }
    if (p2 > 0x9000 && p2 <= 0xe000) {
        return 4;
    }
    return 1;
L6:
    if (p2 != 0 && p2 <= 0x2000) {
        return 1;
    }
    if (p2 > 0x2000 && p2 <= 0x7000) {
        return 3;
    }
    if (p2 > 0x7000 && p2 <= 0xd000) {
        return 0;
    }
    return 4;
L7:
    return 0;
L8:
    return 0;
D:
    return 0;
}
