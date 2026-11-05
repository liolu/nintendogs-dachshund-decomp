/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z18GetMatrixFromIndexP9Matrix3x3iii from https://github.com/DQIX/dqix-decomp src/NitroSDK/NSBXX/JAC.cpp (license:
 * Unlicense), reused by tools/donor_match.py */
typedef unsigned int uint32_t;
typedef signed int int32_t;
typedef unsigned short uint16_t;
typedef signed short int16_t;
typedef unsigned char uint8_t;
typedef signed int intptr_t;
typedef int32_t fix32_t;
typedef int16_t fix16_t;
typedef struct Vector3i {
    int32_t x;
    int32_t y;
    int32_t z;
} Vector3i;
typedef Vector3i Vector3fix;
typedef union Matrix3x3 {
    Vector3fix rows[3];
    fix32_t entries[9];
} Matrix3x3;
struct NSBXXNameList {
    uint8_t unknown_0_;
    uint8_t numEntries_;
    uint16_t totalSize_;

    uint16_t subheaderSize_;
    uint16_t offsetToDataStart_;

    struct SearchTreeEntry {
        uint8_t bitIndex_;
        uint8_t children_[2];
        uint8_t resourceIndex_;
    } treeRoot_8_;
    template <class T> inline T *GetEntryByIndex(unsigned int n) const volatile {
        if (this != 0 && n < numEntries_) {
            intptr_t dataStart = (intptr_t) this + offsetToDataStart_;
            uint16_t stride    = *(uint16_t *) dataStart;
            return (T *) (dataStart + 4 + stride * n);
        }
        return 0;
    }

    template <class T> inline T *GetEntryByIndex_notVolatile(unsigned int n) const {
        if (this != 0 && n < numEntries_) {
            const char *dataStart = (const char *) this + offsetToDataStart_;
            uint16_t stride       = *(uint16_t *) dataStart;
            return (T *) (dataStart + 4 + stride * n);
        }
        return 0;
    }

    template <class T> inline T *GetEntryFromu32Offset(unsigned int n) const {
        uint32_t *pOffset = GetEntryByIndex_notVolatile<uint32_t>(n);
        if (pOffset != 0) {
            return (T *) ((intptr_t) this + *pOffset);
        }
        return 0;
    }

    template <class T> inline T *GetEntryFromu32Offset_v2(unsigned int n) const {
        if (this != 0) {
            uint32_t *pOffset = GetEntryByIndex_notVolatile<uint32_t>(n);
            if (pOffset != 0) {
                return (T *) ((const char *) this + *pOffset);
            }
        }
        return 0;
    }

    inline const char *GetNameByIndex(unsigned int n) const {
        const uint16_t *dataStart;
        if (this != 0 && n < numEntries_) {
            dataStart = (const uint16_t *) ((const char *) this + offsetToDataStart_);
            return (const char *) ((const char *) dataStart + dataStart[1] + 16 * n);
        } else {
            return 0;
        }
    }

    inline const char *GetNameByIndexAndOffset(unsigned int n, unsigned int offsetInBuffer) const {
        if (this != 0 && n < numEntries_) {
            intptr_t dataStart = (intptr_t) this + offsetToDataStart_;
            intptr_t nameStart = dataStart + *(uint16_t *) (dataStart + 2);
            return (const char *) (nameStart + offsetInBuffer);
        }
        return 0;
    }

    inline void *GetDataStart() const {
        return (void *) ((intptr_t) this + offsetToDataStart_);
    }
    inline void *GetEntryv3Helper(unsigned int index, void *dataStart) const {
        return (void *) ((intptr_t) dataStart + 4 + *(uint16_t *) dataStart * index);
    }

    inline void *GetEntryv3(unsigned int index) const {
        return GetEntryv3Helper(index, GetDataStart());
    }

    inline void *GetEntryv3Safe(unsigned int index) const {
        return (this != 0 && index < numEntries_) ? GetEntryv3(index) : 0;
    }

    inline void *GetEntryFromPtrOffset(void *pOffset) const {
        return (void *) ((intptr_t) this + *(uint32_t *) pOffset);
    }

    inline void *GetEntryFromOffsetList_v3(unsigned int index) const {
        uint32_t *pOffset;
        return (this != 0 && (pOffset = (uint32_t *) GetEntryv3Safe(index))) ? GetEntryFromPtrOffset(pOffset) : 0;
    }
};
struct NSBXXAnimationSignature {

    uint8_t signatureInitial_;
    uint8_t signatureNull_;
    uint16_t signatureEnd_;
};
struct NSBXXAnimationJAC {
    NSBXXAnimationSignature signature_;
    uint16_t numFrames_;
    uint16_t numTracks_;
    uint32_t unk_8;
    uint32_t pivotDataOffset_;
    uint32_t basisMatricesOffset_;

    uint16_t trackOffsets_[1];

    struct Track {
        uint32_t flagsAndTargetBoneMatrix_;

        struct ChannelNonConst {

            uint32_t metadata_;
            uint32_t samplesOffset_;
        };
    };

    struct ScaleSample16 {
        fix16_t primary_;
        fix16_t secondary_;
    };

    struct ScaleSample32 {
        fix32_t primary_;
        fix32_t secondary_;
    };

    struct PivotMatrix {

        int16_t flags;
        fix16_t a;
        fix16_t b;
    };

    struct BasisMatrix {
        int16_t data[5];
    };

    inline PivotMatrix *GetPivotMatrices() const {
        return (PivotMatrix *) ((intptr_t) this + this->pivotDataOffset_);
    }

    inline BasisMatrix *GetBasisMatrices() const {
        return (BasisMatrix *) ((intptr_t) this + this->basisMatricesOffset_);
    }
};
struct NSBXXAnimationMAM {
    NSBXXAnimationSignature signature_;
    uint16_t unk_4;
    uint16_t unk_6;
    NSBXXNameList tracks_;
    struct Track {
        uint32_t diffuse_;
        uint32_t ambient_;
        uint32_t reflection_;
        uint32_t emission_;
        uint32_t alpha_;
    };
};
struct NSBXXAnimationMAT {
    NSBXXAnimationSignature signature_;
    uint16_t unk_4;
    uint16_t unk_6;
    NSBXXNameList tracks_;

    struct Track {
        uint32_t unk_0;
        uint32_t unk_4;
        uint32_t unk_8;
        uint32_t unk_c;
        uint32_t unk_10;
        uint32_t unk_14;
        uint32_t unk_18;
        uint32_t unk_1c;
        uint32_t unk_20;
        uint32_t unk_24;
    };
};
struct NSBXXAnimationMPT {
    NSBXXAnimationSignature signature_;
    uint16_t numFrames_;
    uint8_t numTextureNames_;
    uint8_t numPaletteNames_;
    uint16_t textureNamesOffset_;
    uint16_t paletteNamesOffset_;

    NSBXXNameList tracks_;

    struct Track {
        uint16_t numKeyframes_;
        uint16_t unk_2;
        int16_t maybeSpeed_4_;
        uint16_t keyframeArrayOffset_;

        struct Keyframe {
            uint16_t frameTime_;
            uint8_t textureIdx_;
            uint8_t paletteIdx_;
        };
    };
};
extern struct {
    uint8_t a, b, c, d;
} const data_020e9260[], data_02128ec4[];
extern bool GetMatrixFromIndex(Matrix3x3 *out, intptr_t pivotList, intptr_t basisList, int index);
bool GetMatrixFromIndex(Matrix3x3 *out, intptr_t pivotList, intptr_t basisList, int index) {
    if (index & 0x8000) {
        out->entries[0] = out->entries[1] = out->entries[2] = out->entries[3] = out->entries[4] = out->entries[5] =
            out->entries[6] = out->entries[7] = out->entries[8] = 0;
        NSBXXAnimationJAC::PivotMatrix *pivot = (NSBXXAnimationJAC::PivotMatrix *) (pivotList + (((index & 0x7fff) * 3) << 1));
        fix32_t entryA                        = pivot->a;
        fix32_t entryB                        = pivot->b;

        int form           = pivot->flags & 0xf;
        out->entries[form] = (pivot->flags & 0x10) ? -1 << 12 : 1 << 12;

        out->entries[data_02128ec4[form].a] = entryA;
        out->entries[data_02128ec4[form].b] = entryB;

        fix32_t entryC                      = (pivot->flags & 0x20) ? -entryB : entryB;
        out->entries[data_02128ec4[form].c] = entryC;

        fix32_t entryD                      = (pivot->flags & 0x40) ? -entryA : entryA;
        out->entries[data_02128ec4[form].d] = entryD;

        return false;
    } else {
        NSBXXAnimationJAC::BasisMatrix *basis = (NSBXXAnimationJAC::BasisMatrix *) (basisList + (((index & 0x7fff) * 5) << 1));
        short accumulation                    = 0;

        int d4          = basis->data[4];
        out->entries[4] = d4 >> 3;
        accumulation    = (accumulation << 3) | (d4 & 7);

        int d0          = basis->data[0];
        out->entries[0] = d0 >> 3;
        accumulation    = (accumulation << 3) | (d0 & 7);

        int d1          = basis->data[1];
        out->entries[1] = d1 >> 3;
        accumulation    = (accumulation << 3) | (d1 & 7);

        int d2          = basis->data[2];
        out->entries[2] = d2 >> 3;
        accumulation    = (accumulation << 3) | (d2 & 7);

        int d3          = basis->data[3];
        out->entries[3] = d3 >> 3;
        accumulation    = (accumulation << 3) | (d3 & 7);

        out->entries[5] = (accumulation << 19) >> 19;

        return true;
    }
}
