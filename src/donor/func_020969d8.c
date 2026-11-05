/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020969d8 from projets/nintendogs-shiba-friends/src/donor/func_020969d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02093478(void);
extern void func_020cd3d8(int a, int b, int c, int d, int e);
extern s32 func_02106e90(int a);
extern s32 func_0209758c(int a);
extern s32 func_0209763c(int a, int b);
extern s32 func_02096d38(int a, int b);
extern void func_020c9500(int a);
extern void func_0209565c(int a, int b);
extern void func_02097610(int a);
extern void func_02097448(void);
extern void func_02095590(int a, int b);
void func_020969d8(int param_1, u32 param_2) {
    s32 iVar3;
    int flag;

    switch ((s32) param_2) {
        case -1:
            return;
        case 60:
        case 61:
            if (func_02093478() != 0) {
                do {
                    *(s16 *) ((param_1) + 0x7c)  = ((s16) param_2);
                    *(s16 *) ((param_1) + 0x2e)  = 2;
                    *(s16 *) ((param_1) + 0x30)  = 0;
                    *(s16 *) ((param_1) + 0x100) = (8);
                } while (0);
                return;
            }
            do {
                *(s16 *) ((param_1) + 0x2a) = 1;
                func_020cd3d8(0, 0x44e, 0, 0, 0);
            } while (0);
            return;
        case 62:
        case 63:
            if (func_02093478() != 0) {
                do {
                    *(s16 *) ((param_1) + 0x7c)  = ((s16) param_2);
                    *(s16 *) ((param_1) + 0x2e)  = 2;
                    *(s16 *) ((param_1) + 0x30)  = 0;
                    *(s16 *) ((param_1) + 0x100) = (9);
                } while (0);
                return;
            }
            do {
                *(s16 *) ((param_1) + 0x2a) = 1;
                func_020cd3d8(0, 0x44e, 0, 0, 0);
            } while (0);
            return;
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
            do {
                *(s16 *) ((param_1) + 0x7c)  = ((s16) param_2);
                *(s16 *) ((param_1) + 0x2e)  = 2;
                *(s16 *) ((param_1) + 0x30)  = 0;
                *(s16 *) ((param_1) + 0x100) = (0x14);
            } while (0);
            return;
    }

    if (*(s16 *) (param_1 + 0x7c) != -1) {
        iVar3 = func_02106e90(*(s16 *) (param_1 + 0x7c));
        switch (iVar3) {
            case 2:
            case 7:
            case 15:
                func_0209763c(*(s16 *) (param_1 + 0x7c), 1);
                break;
            case 0:
            case 1:
                func_0209758c(param_1);
                break;
        }
    }
    iVar3 = func_02106e90(param_2);
    switch (iVar3) {
        case 5:
            func_020c9500(param_2);
            break;
        case 2:
        case 7:
        case 15:
            func_0209763c(param_2, -1);
            break;
        case 0:
        case 1:
            iVar3 = func_02096d38(param_1, param_2);
            func_0209763c(param_2, (s16) (-iVar3));
            break;
    }
    func_0209565c(param_1, 6);
    func_02097610(param_1);
    *(s16 *) (param_1 + 0x7c) = (s16) param_2;
    *(s16 *) (param_1 + 0x7e) = -1;
    func_02097448();
    switch (*(s16 *) (param_1 + 0x7c)) {
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
            flag = 0;
            break;
        default:
            flag = 1;
            break;
    }
    if (flag) {
        func_02095590(param_1, 1);
        return;
    }
    func_02095590(param_1, 2);
}
