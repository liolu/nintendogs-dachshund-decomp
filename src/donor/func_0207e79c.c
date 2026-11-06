/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e79c from projets/nintendogs-chihuahua-friends/src/donor/func_0207e79c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 blockType;
    u32 blockSize;
} BlockHeader;
typedef struct {
    BlockHeader blockHeader;
    u16 numFiles;
    u16 reserved;
} FatBlockHeader;
typedef struct {
    BlockHeader blockHeader;
} FntBlockHeader;
typedef struct {
    BlockHeader blockHeader;
} ImgBlockHeader;
typedef struct {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} ArchiveHeader;
typedef struct {
    u8 fsArchive[0x50];
    void *arcBinary;
    FatBlockHeader *fatData;
    u32 fileImage;
} Archive;
extern int func_0207e8f8(void *arcBinary);
extern void func_0208af40(void *fsArchive);
extern u32 func_02061efc(const char *s);
extern int func_0208ae80(void *fsArchive, const char *name, u32 len);
extern int func_0208ad70(void *fsArchive, u32 base, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, void *r, void *w);
extern void func_0208ade8(void *fsArchive);
int func_0207e79c(Archive *archive, const char *arcName, void *arcBinary) {
    FatBlockHeader *fatBlock = 0;
    FntBlockHeader *fntBlock = 0;
    ImgBlockHeader *imgBlock = 0;
    u32 fileImage;

    if (!func_0207e8f8(arcBinary)) {
        return 0;
    }

    {
        int i;
        BlockHeader *blockHeader = (BlockHeader *) ((u32) arcBinary + ((ArchiveHeader *) arcBinary)->headerSize);

        for (i = 0; i < ((ArchiveHeader *) arcBinary)->dataBlocks; i++) {
            switch (blockHeader->blockType) {
                case 0x46415442:
                    fatBlock = (FatBlockHeader *) blockHeader;
                    break;
                case 0x464e5442:
                    fntBlock = (FntBlockHeader *) blockHeader;
                    break;
                case 0x46494d47:
                    imgBlock = (ImgBlockHeader *) blockHeader;
                    break;
            }
            blockHeader = (BlockHeader *) ((u32) blockHeader + blockHeader->blockSize);
        }
    }

    func_0208af40(archive->fsArchive);
    archive->arcBinary = arcBinary;
    archive->fatData   = fatBlock;
    fileImage          = (u32) imgBlock + sizeof(ImgBlockHeader);
    archive->fileImage = fileImage;

    if (!func_0208ae80(archive->fsArchive, arcName, func_02061efc(arcName))) {
        return 0;
    }

    if (!func_0208ad70(archive->fsArchive, fileImage, (u32) fatBlock + sizeof(FatBlockHeader) - fileImage,
                       fatBlock->blockHeader.blockSize - sizeof(FatBlockHeader),
                       (u32) fntBlock + sizeof(FntBlockHeader) - fileImage,
                       fntBlock->blockHeader.blockSize - sizeof(FntBlockHeader), 0, 0)) {
        func_0208ade8(archive->fsArchive);
        return 0;
    }
    return 1;
}
