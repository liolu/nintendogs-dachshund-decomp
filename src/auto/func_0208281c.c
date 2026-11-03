/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* Isd_DoubleUnitsDigit from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_double_units_digit.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
extern int func_02083444(double x);
u32 func_0208281c(double x) {

    u64 mantissa;
    u32 digit;
    int j;
    int integerBits;
    u64 shifted;
    char *topMantissaByte;
    int exponent;
    int bit;
    int i;

    exponent = func_02083444(x);

    mantissa        = 0;
    topMantissaByte = (char *) &x + 6;
    mantissa |= 0x10;
    mantissa |= Isd_ReadByte(topMantissaByte) & 0xf;
    for (i = 5; i >= 0; i--) {
        mantissa <<= 8;
        mantissa |= Isd_ReadByte((char *) &x + i);
    }

    integerBits = exponent - 1022;
    digit       = 0;
    for (bit = 0; bit < (integerBits <= 53 ? integerBits : 53); bit++) {
        digit <<= 1;
        shifted = mantissa;
        for (j = 0; j < 52 - bit; j++) {
            shifted >>= 1;
        }
        if (shifted & 1) {
            digit++;
        }
        if (digit >= 10) {
            digit -= 10;
        }
    }
    return digit;
}
