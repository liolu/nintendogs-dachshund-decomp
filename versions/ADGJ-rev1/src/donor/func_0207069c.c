/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fb60 from projets/children-of-mana/src/donor/func_0205fb60.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206e1b8(const void *source, void *destination, u32 size);
extern void func_0206e124(void *destination, int value, u32 size);
int func_0207069c(void *buffer, u16 value, u8 flag, u32 firstValue, u32 secondValue, const void *payload, u32 payloadSize) {
    u8 header[4];
    u8 *cursor;

    *(u16 *) (header + 2) = value;
    header[0]             = 5;
    func_0206e1b8(header, buffer, 1);

    cursor = (u8 *) buffer + 1;
    func_0206e1b8(header + 2, cursor, 2);
    cursor = (u8 *) ((u32) cursor + 2);
    func_0206e1b8(&flag, cursor, 1);
    cursor = (u8 *) ((u32) cursor + 1);
    func_0206e1b8(&firstValue, cursor, 4);
    cursor = (u8 *) ((u32) cursor + 4);
    func_0206e1b8(&secondValue, cursor, 4);
    cursor = (u8 *) ((u32) cursor + 4);
    if (payload == 0) {
        func_0206e124(cursor, 0, payloadSize);
    } else {
        func_0206e1b8(payload, cursor, payloadSize);
    }

    return (int) (cursor + payloadSize - (u8 *) buffer);
}
