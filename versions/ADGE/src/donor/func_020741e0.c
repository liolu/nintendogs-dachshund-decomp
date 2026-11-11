/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206a62c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_binres.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkResDict {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
} UnkResDict;
typedef struct UnkResTexInfo {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
} UnkResTexInfo;
typedef struct UnkResTex4x4Info {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
} UnkResTex4x4Info;
typedef struct UnkResPlttInfo {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
} UnkResPlttInfo;
typedef struct UnkResTex {
    u32 unk_00;
    u32 unk_04;
    UnkResTexInfo unk_08;
    UnkResTex4x4Info unk_18;
    UnkResPlttInfo unk_2c;
    UnkResDict unk_3c;
} UnkResTex;
extern void func_0206c1f8(void);
extern void func_0206c094(const void *src, u32 dest, u32 size);
extern void func_0206c024(void);
void func_020741e0(UnkResTex *tex, BOOL execBeginEnd) {
    u32 size;
    u32 size4;

    if (execBeginEnd) {
        func_0206c1f8();
    }

    size = tex->unk_08.unk_04 << 3;
    if (size != 0) {
        func_0206c094((u8 *) tex + tex->unk_08.unk_0c, (((tex->unk_08.unk_00) & 0xffff) << 3), size);
        tex->unk_08.unk_08 |= 1;
    }

    size4 = tex->unk_18.unk_04 << 3;
    if (size4 != 0) {
        u8 *data = (u8 *) tex + tex->unk_18.unk_0c;
        u8 *idx  = (u8 *) tex + tex->unk_18.unk_10;
        u32 addr = (((tex->unk_18.unk_00) & 0xffff) << 3);

        func_0206c094(data, addr, size4);
        func_0206c094(idx, 0x20000 + ((addr & 0x1ffff) >> 1) + ((addr & 0x40000) >> 2), size4 >> 1);
        tex->unk_18.unk_08 |= 1;
    }

    if (execBeginEnd) {
        func_0206c024();
    }
}
