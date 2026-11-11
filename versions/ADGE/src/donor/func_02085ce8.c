/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201ea58 from https://github.com/RonyxDumb/mkds src/arm9/0201ea58_func_0201ea58.c (license: none), reused by
 * tools/donor_match.py */
#pragma ipa file
unsigned int func_02085ce8(unsigned int r0, unsigned int r1, unsigned int r2, unsigned int r3) {
    unsigned int cmp_a, cmp_b;
L_201ea58:
    cmp_a = r1;
    cmp_b = 0x0u;
L_201ea5c:
    r2 = (r0 + 0x8u);
L_201ea60:
    r0 = (unsigned int) (*(unsigned short *) ((unsigned char *) r0 + 6));
L_201ea64:
    if (((int) cmp_a < (int) cmp_b)) {
        goto L_201ea70;
    }
L_201ea68:
    cmp_a = r1;
    cmp_b = r0;
L_201ea6c:
    if (((int) cmp_a < (int) cmp_b)) {
        goto L_201ea78;
    }
L_201ea70:
    r0 = 0x0u;
L_201ea74:
    return r0;
L_201ea78:
    r0 = 0xcu;
L_201ea7c:
    r0 = (r1 * r0 + r2);
L_201ea80:
    return r0;
}
