#include "m2c.h"
s32 func_0211b590(s32 *rp, s32 player, s32 type) {
    s32 ret;
    s32 next;

    ret = -100;
    switch (player) {
    case 0:
        break;
    case 1:
        switch (type) {
        case 1:
            ret = -5;
            break;
        case 2:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -5 : -10;
            break;
        case 3:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -10 : -15;
            break;
        }
        break;
    case 2:
        switch (type) {
        case 1:
            ret = -5;
            break;
        case 2:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -5 : -10;
            break;
        case 3:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -10 : -15;
            break;
        }
        break;
    case 3:
        switch (type) {
        case 1:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? 0 : -5;
            break;
        case 2:
            ret = -5;
            break;
        case 3:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -5 : -10;
            break;
        }
        break;
    case 4:
        switch (type) {
        case 1:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? 0 : -5;
            break;
        case 2:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? 0 : -5;
            break;
        case 3:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? -5 : -10;
            break;
        }
        break;
    case 5:
        switch (type) {
        case 1:
            ret = 0;
            break;
        case 2:
            next = *rp * 0x10DCD + 1;
            *rp = next;
            ret = ((u16) next & 1) ? 0 : -5;
            break;
        case 3:
            ret = -5;
            break;
        }
        break;
    }
    return ret;
}
