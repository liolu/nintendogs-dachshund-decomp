/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dGetMdlSet from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGetMdlSet.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct UnkBinFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} UnkBinFileHeader;
void *func_02078be4(const UnkBinFileHeader *file) {
    return (u8 *) file + *(const u32 *) ((u8 *) file + file->headerSize);
}
