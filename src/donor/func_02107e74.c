/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02107e74 from projets/nintendogs-chihuahua-friends/src/donor/func_02107e74.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02156084;
extern u8 data_0214affc[];
extern s32 data_02148afc;
extern s32 data_02148b00;
extern s32 data_02148b08;
extern u8 *data_02153704;
extern s32 data_02148b04;
extern void func_021170f0(s32 *a, s32 *b, s32 c, s32 d, u16 e);
void func_02107e74(void) {
    u8 *puVar2;
    s32 local_14[3];
    s16 mode;

    puVar2 = data_02156084;
    mode   = *(s16 *) (puVar2 + 8);
    switch (mode) {
        case 0:
            goto C0;
        case 1:
            goto C1;
        case 2:
            break;
    }
    goto CALL;
C0:
    if ((u16) (*(u16 *) (data_0214affc + 2) & 0x20) != 0) {
        *(u16 *) puVar2 = *(u16 *) puVar2 - 0x100;
    }
    if ((u16) (*(u16 *) (data_0214affc + 2) & 0x10) != 0) {
        *(u16 *) puVar2 = *(u16 *) puVar2 + 0x100;
    }
    if ((u16) (*(u16 *) (data_0214affc + 2) & 0x80) != 0) {
        *(s32 *) (puVar2 + 4) = *(s32 *) (puVar2 + 4) - 0x400;
        if (*(s32 *) (puVar2 + 4) < data_02148afc) {
            *(s32 *) (puVar2 + 4) = data_02148afc;
        }
    }
    if ((u16) (*(u16 *) (data_0214affc + 2) & 0x40) != 0) {
        *(s32 *) (puVar2 + 4) = *(s32 *) (puVar2 + 4) + 0x400;
        if (*(s32 *) (puVar2 + 4) > data_02148b00) {
            *(s32 *) (puVar2 + 4) = data_02148b00;
        }
    }
    if (*(s32 *) (puVar2 + 4) < data_02148afc) {
        *(s32 *) (puVar2 + 4) = data_02148afc;
    }
    if (*(s32 *) (puVar2 + 4) > data_02148b00) {
        *(s32 *) (puVar2 + 4) = data_02148b00;
    }
    goto CALL;
C1:
    *(s32 *) (puVar2 + 4) = data_02148b08;
CALL:
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    func_021170f0((s32 *) (data_02156084 + 12), local_14, data_02148b04 + *(s32 *) (data_02153704 + 12), 0, *(u16 *) puVar2);
    *(s32 *) (data_02156084 + 0x10) = *(s32 *) (puVar2 + 4);
}
