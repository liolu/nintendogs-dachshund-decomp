/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* Isd_DoubleDivideByTen from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_double_divide_by_ten.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
extern int func_0208349c(double x);
extern int func_02083444(double x);
static inline void Isd_StoreByte(char *address, int value) {
    if ((u32) address & 1) {
        *(u16 *) (address - 1) = (*(u16 *) (address - 1) & 0xff) | ((value & 0xff) << 8);
    } else {
        *(u16 *) address = (*(u16 *) address & 0xff00) | (value & 0xff);
    }
}
double func_02082944(double x, int keepFraction) {
    u64 mantissa;
    int k;

    int count;
    int padBits;
    int fractionBits;
    int shiftBits;
    u64 fifth;
    int integerBits;
    char *writePtr;
    u32 remainder;
    int exponent;
    int sign;
    int j;
    char *readPtr;
    u64 shifted;
    u32 integerOnly;
    char *bytePtr;
    int byte;
    int i;
    u64 fraction;
    double result;

    sign     = func_0208349c(x);
    exponent = func_02083444(x);
    mantissa = 0;
    bytePtr  = (char *) &x + 6;
    mantissa |= 0x10;
    mantissa |= Isd_ReadByte(bytePtr) & 0xf;
    for (k = 5; k >= 0; k--) {
        mantissa <<= 8;
        mantissa |= Isd_ReadByte((char *) &x + k);
    }

    integerBits = exponent - 1021;
    if (exponent >= 3) {
        exponent -= 3;
    } else {
        exponent = 0;
    }
    mantissa |= 0x0010000000000000ULL;
    fifth       = 0;
    remainder   = 0;
    i           = 0;
    integerOnly = keepFraction == 0 ? 1 : 0;

    for (; i < ((integerBits <= 53 && integerOnly) ? integerBits : 53); i++) {
        fifth <<= 1;
        remainder <<= 1;
        shifted = mantissa;
        j       = 0;
        count   = 52 - i;
        for (; j < count; j++) {
            shifted >>= 1;
        }
        if (shifted & 1) {
            remainder++;
        }
        if (remainder >= 5) {
            fifth += 1;
            remainder -= 5;
        }
    }
    if (remainder != 0) {
        fifth += 1;
    }
    padBits = 53 - i;
    for (j = 0; j < padBits; j++) {
        fifth <<= 1;
    }

    if (integerBits >= 3) {
        integerBits -= 3;
    } else {
        integerBits = 0;
    }
    mantissa -= fifth;

    if (!keepFraction) {
        fractionBits = 53 - integerBits;
        for (j = 0; j < fractionBits; j++) {
            mantissa >>= 1;
        }
        for (j = 0; j < fractionBits; j++) {
            mantissa <<= 1;
        }
    }
    while (!((mantissa >> 52) & 1) && mantissa != 0) {
        exponent--;
        mantissa <<= 1;
    }

    fraction = mantissa & 0x000fffffffffffffULL;
    if (fraction == 0 && exponent < 0x3ff && !keepFraction) {
        sign     = 0;
        exponent = 0;
    }

    result   = 0;
    readPtr  = (char *) &result + 7;
    byte     = Isd_ReadByte(readPtr) | (sign << 7);
    writePtr = (char *) &result + 7;
    Isd_StoreByte(writePtr, byte);
    readPtr  = (char *) &result + 7;
    byte     = Isd_ReadByte(readPtr) | (exponent >> 4);
    writePtr = (char *) &result + 7;
    Isd_StoreByte(writePtr, byte);
    readPtr  = (char *) &result + 6;
    byte     = Isd_ReadByte(readPtr) | ((exponent & 0xf) << 4);
    writePtr = (char *) &result + 6;
    Isd_StoreByte(writePtr, byte);

    for (i = 6; i >= 0; i--) {
        fifth     = fraction;
        shiftBits = i * 8;
        for (j = 0; j < shiftBits; j++) {
            fifth >>= 1;
        }
        bytePtr = (char *) &result + i;
        byte    = (u8) fifth | Isd_ReadByte(bytePtr);
        Isd_StoreByte(bytePtr, byte);
    }
    return result;
}
