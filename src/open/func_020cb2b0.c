#include "m2c.h"

typedef struct {
    u16 count;
    u32 stack[2];
} Parser;

typedef struct {
    u16 code;
    u16 hi : 8;
    u16 advance : 8;
    u16 param;
    u16 extra;
} CharData;

static inline u16 to_upper(u16 c) {
    if ((c >= 0x61) && (c <= 0x7A)) {
        return (u16) (c - 0x20);
    }
    if ((c >= 0xE0) && (c <= 0xFD) && (c != 0xF7)) {
        return (u16) (c - 0x20);
    }
    return c;
}

s32 func_020cb2b0(s32 arg0, u16 *arg1, s32 *arg2, s32 arg3, u16 *(*arg4)(u32, u32), s32 arg5) {
    Parser parser;
    s32 total;
    s32 cont;
    s32 upper;
    s32 advance;
    u16 *top;
    u16 code;
    u32 i;

    total = 0;
    cont = 1;
    upper = 0;
    parser.count = 0;
    for (i = 0; i < 2; i++) {
        parser.stack[i] = 0;
    }
    parser.stack[parser.count] = (u32) arg1;

    do {
        advance = 2;
        top = (u16 *) parser.stack[parser.count];
        code = *top;
        switch (code) {
        case 0x0D:
            break;
        case 0x0A:
            cont = 0;
            break;
        case 0x00:
            if (parser.count != 0) {
                parser.stack[parser.count] = 0;
                parser.count--;
            } else {
                cont = 0;
            }
            advance = 0;
            break;
        case 0x1A: {
            u32 p1 = top[1];
            u32 p2 = top[2];
            u32 p3 = top[3];
            u16 hi = (u16) (p1 >> 8);
            u32 tag = ((u32) hi << 16) | p2;
            u32 c = p3 & 0xFF;

            advance = p1 & 0xFF;
            switch (tag) {
            case 0:
                if (parser.count != 0) {
                    parser.stack[parser.count] = 0;
                    parser.count--;
                    advance = 0;
                } else {
                    cont = 0;
                }
                break;
            case 9:
                upper = 1;
                break;
            default:
                if (hi == 3) {
                    u16 *ret = arg4(tag, c);
                    if (ret != 0) {
                        parser.stack[parser.count] = advance + (u32) top;
                        parser.count++;
                        parser.stack[parser.count] = (u32) ret;
                        advance = 0;
                    }
                }
                break;
            }
            break;
        }
        default:
            if (upper != 0) {
                code = to_upper(code);
                upper = 0;
            }
            if (arg5 != 0) {
                total += arg5 + arg3;
            } else {
                total += arg3 + func_02085fe4(arg0, code);
            }
            break;
        }
        if (advance != 0) {
            parser.stack[parser.count] = advance + (u32) parser.stack[parser.count];
        }
    } while (cont);

    if (arg2 != NULL) {
        if (total > arg3) {
            total -= arg3;
        }
        *arg2 = total;
    }
    if (*(u16 *) parser.stack[parser.count] != 0) {
        return (s32) parser.stack[parser.count];
    }
    return 0;
}
