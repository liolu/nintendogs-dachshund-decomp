/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z36BoneMatrixScaleCalculationProc_Type2P20BoneMatrixRenderDataPN15NSBXXBoneMatrix7ScalingEPhi from
 * https://github.com/DQIX/dqix-decomp src/NitroSDK/NSBXX/RenderCommandProcs.cpp (license: Unlicense), reused by
 * tools/donor_match.py */
typedef signed long long int64_t;
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
typedef union Vector4fix {
    fix32_t entries[4];
    Vector3fix xyz;
    struct {
        fix32_t x;
        fix32_t y;
        fix32_t z;
        fix32_t w;
    };
};
typedef union Matrix4x4 {
    fix32_t entries[16];
    Vector4fix rows[4];
} Matrix4x4;
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
struct NSBXXBoneMatrix {
    uint16_t flags_;

    fix16_t m_11;

    struct Translation {
        fix32_t x;
        fix32_t y;
        fix32_t z;
    };
    struct PivotMatrixData {
        fix16_t a;
        fix16_t b;
    };

    struct RotationMatrixData {
        fix16_t entries[8];
    };

    struct Scaling {
        fix32_t x;
        fix32_t y;
        fix32_t z;

        fix32_t x_v2;
        fix32_t y_v2;
        fix32_t z_v2;
    };
};
struct ModelBoundingBox {

    int16_t xMin_;
    int16_t yMin_;
    int16_t zMin_;
    int16_t xSize_;
    int16_t ySize_;
    int16_t zSize_;
};
struct NSBXXMaterial {
    uint16_t unk_0;
    uint16_t size_;
    uint32_t paramDIF_AMB_;
    uint32_t paramSPE_EMI_;
    uint32_t paramPOLYGON_ATTR_;
    uint32_t maskPOLYGON_ATTR_;
    uint32_t paramTEXIMAGE_PARAMS_;

    uint32_t unk_18;
    uint16_t texturePaletteVRAMOffset_;
    uint16_t flags_;
    uint16_t width_;
    uint16_t height_;
    fix32_t xScale_;
    fix32_t yScale_;
    struct ExtensionData_Bit1 {
        fix32_t scaleX_;
        fix32_t scaleY_;
    };

    struct ExtensionData_Bit2 {
        fix16_t sine_;
        fix16_t cosine_;
    };

    struct ExtensionData_Bit3 {
        uint32_t translateX_;
        uint32_t translateY_;
    };

    struct ExtensionData_Bit13 {
        Matrix4x4 matrix_;
    };
};
struct NSBXXModelMaterialData {

    uint16_t texturePairingsOffset_;

    uint16_t palettePairingsOffset_;

    NSBXXNameList materialOffsetList_;

    inline struct NSBXXMaterial *GetMaterialByIndex(unsigned int n) const {
        if (this != 0) {
            uint32_t *materialOffset = (uint32_t *) materialOffsetList_.GetEntryByIndex_notVolatile<uint32_t>(n);
            if (materialOffset != 0) {
                return (NSBXXMaterial *) ((intptr_t) this + *materialOffset);
            }
        }
        return 0;
    }
};
struct NSBXXMesh {
    uint16_t unk_0;
    uint16_t size_;
    uint32_t unk_4;
    uint32_t gpuCommandsOffset_;
    uint32_t gpuCommandsLength_;

    inline const uint32_t *GetGPUCommands() const {
        return (uint32_t *) ((intptr_t) this + gpuCommandsOffset_);
    }
};
struct NSBXXInternalModel {
    uint32_t filesize_;
    uint32_t renderCommandsOffset_;
    uint32_t materialsOffset_;
    uint32_t meshesOffset_;
    uint32_t inverseBindsOffset_;
    uint8_t unk_14;

    uint8_t boneScalingMode_;
    uint8_t materialCallbackType_;
    uint8_t numBoneMatrices_;
    uint8_t numMaterials_;
    uint8_t numMeshes_;
    uint8_t unk_1a[2];
    fix32_t upScale_;
    fix32_t downScale_;
    uint16_t numVertices_;
    uint16_t numPolygons_;
    uint16_t numTriangles_;
    uint16_t numQuads_;
    ModelBoundingBox bounds_;
    int32_t maybeScale_;
    char unk_3c[4];
    NSBXXNameList boneList_;

    inline NSBXXModelMaterialData *GetMaterialData() const {
        if (this != 0 && materialsOffset_ != 0) {
            return (NSBXXModelMaterialData *) ((intptr_t) this + materialsOffset_);
        } else {
            return 0;
        }
    }

    inline NSBXXNameList *GetMeshListUnsafe() const {
        return (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
    }

    inline NSBXXNameList *GetMeshListSafe() const {
        return (this != 0 && meshesOffset_ != 0) ? GetMeshListUnsafe() : 0;
    }

    inline NSBXXNameList *GetMeshList() const {
        if (this != 0 && meshesOffset_ != 0) {
            return (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
        }
        return 0;
    }

    inline NSBXXMesh *GetMesh(unsigned int n) const {
        NSBXXNameList *meshList;
        if (this != 0 && meshesOffset_ != 0) {
            meshList = (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
        } else {
            meshList = 0;
        }

        if (meshList != 0) {
            return meshList->GetEntryFromu32Offset<NSBXXMesh>(n);
        }
        return 0;
    }
};
struct NSBXXTex {
    uint32_t signature;
    uint32_t maybeTotalSize_4_;

    uint32_t block1VRAMLoadOffset_;
    uint16_t block1NumEightBytes_;
    uint16_t textureListOffset_;
    uint16_t maybeBlock1Flags_10_;
    char padding_12[2];
    uint32_t block1Offset_;

    uint32_t block2Or3VRAMLoadOffset_;
    uint16_t block2NumEightBytes_;
    uint16_t unk_1e;
    uint16_t maybeBlock23Flags_20_;
    char padding_22[2];
    uint32_t block2Offset_;
    uint32_t block3Offset_;

    uint32_t block4VRAMLoadOffset_;
    uint16_t block4NumEightBytes_;
    uint16_t maybeBlock4Flags_32_;
    uint16_t paletteListOffset_;
    uint16_t unk_36;
    uint32_t block4Offset_;

    NSBXXNameList textureList_;

    inline NSBXXNameList *GetPaletteList() const {
        if (this != 0 && paletteListOffset_ != 0) {
            return (NSBXXNameList *) ((intptr_t) this + paletteListOffset_);
        } else {
            return 0;
        }
    }
};
struct RenderCommandHandler;
typedef void (*RenderCommandHook)(RenderCommandHandler *);
struct BoneMatrixRenderData {
    union Scale {
        struct {
            fix32_t x;
            fix32_t y;
            fix32_t z;
        };
        fix32_t array[3];
    };

    unsigned int flags_;
    Scale scale_v0_;
    Scale scale_v1_;
    Scale scale_v2_;
    Matrix3x3 rotationMatrix_;
    Vector3fix translate_;
};
struct MaterialRenderData {

    unsigned int flags_;
    unsigned int paramDIF_AMB_;
    unsigned int paramSPE_EMI_;
    unsigned int paramPOLYGON_ATTR_;
    unsigned int paramTEXIMAGE_PARAMS_;
    unsigned int texturePaletteBase_;
    fix32_t extensionScaleX_;
    fix32_t extensionScaleY_;
    fix16_t rotationSine_;
    fix16_t rotationCosine_;
    fix32_t translateX_;
    fix32_t translateY_;
    unsigned short materialWidth_;
    unsigned short materialHeight_;
    fix32_t materialxScale_;
    fix32_t materialyScale_;
};
struct AnimationData;
struct ModelRenderContext {

    unsigned int flags_;
    NSBXXInternalModel *internalModel_;
    AnimationData *materialAnimations_;

    bool (*pfnProcessMaterialAnimations_)(MaterialRenderData *, AnimationData *, unsigned int);
    AnimationData *jointAnimations_;

    bool (*pfnProcessJointAnimations_)(BoneMatrixRenderData *, AnimationData *, unsigned int);
    AnimationData *visibilityAnimations_;

    bool (*pfnProcessVisibilityAnimations_)(int *, AnimationData *, unsigned int);
    void (*renderCommandHook_)(RenderCommandHandler *);
    unsigned char renderCommandHookCommandID_;
    unsigned char renderCommandHookStage_;
    char padding_26[2];
    void (*preRenderCallback_)(RenderCommandHandler *);
    char unk_2c[4];
    uint8_t *renderCommandList_;
    BoneMatrixRenderData *boneMatrixRenderDataArray_;
    MaterialRenderData *materialRenderDataArray_;

    unsigned int animatedMaterials_[2];
    unsigned int animatedBoneMatrices_[2];
    unsigned int animatedVisibilityConditions_[2];
};
struct RenderCommandHandler {
    uint8_t *instructionPointer_;
    ModelRenderContext *modelContext_;
    unsigned int flags_;
    RenderCommandHook hooks_[32];
    unsigned char hookStages_[32];
    unsigned char command2Arg1_;
    unsigned char boundMaterial_;
    unsigned char currentBoneMatrix_;
    char padding_af;
    MaterialRenderData *pMaterialRenderData_;
    BoneMatrixRenderData *pBoneMatrixRenderData_;
    int *pCommand2Word_;
    unsigned int materialBitfield_[2];

    unsigned int boneMatrixBitfield_[2];
    unsigned int invBindBitfield_[2];
    NSBXXNameList *boneList_;
    NSBXXModelMaterialData *modelMaterials_;
    NSBXXNameList *meshList_;
    fix32_t upScale_;
    fix32_t downScale_;

    void (*boneMatrixRenderDataScalePopulateProc_)(BoneMatrixRenderData *, NSBXXBoneMatrix::Scaling *boneMatrixScaleData,
                                                   uint8_t *ip, int boneMatrixFlags);
    void (*boneMatrixRenderDataSubmitProc_)(BoneMatrixRenderData *);
    void (*textureMatrixCreateProc_)(MaterialRenderData *);
    MaterialRenderData scratchMaterialRenderData_;
    BoneMatrixRenderData scratchBoneMatrixRenderData_;
    int scratchCommand2Word_;
};
struct ModelRenderContext;
struct AnimationData;
struct NSBXXInternalModel;
struct AnimationData {
    typedef void (*Callback)(void *, AnimationData *, int);

    fix32_t time_;

    fix32_t weight_;
    void *pRawData_;

    void (*callback_)(void *renderData, AnimationData *animData, int arg);
    AnimationData *pNext_;
    NSBXXTex *pTex0_;
    unsigned char unk_18;
    unsigned char numEntries_;
    unsigned short entries_[64];
};
extern struct RenderCommandHandler *data_02150594;
struct Struct_0210b078 {
    Vector3fix vec0_;
    BoneMatrixRenderData::Scale vec1_;
};
struct Struct_0210b678 {
    Matrix4x4 mat4x4;
    Matrix3x3 mat3x3;
};
extern struct {
    Struct_0210b078 vectorData[64];
    Struct_0210b678 matrixData[64];
} data_02151398;
extern "C" {
extern void func_0206e004(const void *src, void *dst, unsigned int numBytes);
}
void BoneMatrixScaleCalculationProc_Type2(BoneMatrixRenderData *renderData, NSBXXBoneMatrix::Scaling *scaling, uint8_t *ip,
                                          int boneMatrixFlags) {
    unsigned int thisBoneIdx   = ip[1];
    unsigned int parentBoneIdx = ip[2];
    if (boneMatrixFlags & 4) {
        renderData->flags_ |= 1;
        if (data_02150594->boneMatrixBitfield_[parentBoneIdx >> 5] & (1 << (parentBoneIdx & 0x1f))) {
            data_02150594->boneMatrixBitfield_[thisBoneIdx >> 5] |= (1 << (thisBoneIdx & 0x1f));
            renderData->flags_ |= 0x18;
        } else {
            Struct_0210b078 *parent = &data_02151398.vectorData[parentBoneIdx];
            func_0206e004(parent, &data_02151398.vectorData[thisBoneIdx], sizeof(Struct_0210b078));

            func_0206e004(parent, &renderData->scale_v1_, 2 * 3 * sizeof(fix32_t));
        }
    } else {
        renderData->scale_v0_.x = scaling->x;
        renderData->scale_v0_.y = scaling->y;
        renderData->scale_v0_.z = scaling->z;
        if (data_02150594->boneMatrixBitfield_[parentBoneIdx >> 5] & (1 << (parentBoneIdx & 0x1f))) {
            func_0206e004(scaling, &data_02151398.vectorData[thisBoneIdx], 2 * 3 * sizeof(fix32_t));
            data_02150594->boneMatrixBitfield_[thisBoneIdx >> 5] &= ~(1 << (thisBoneIdx & 0x1f));
            renderData->flags_ |= 0x18;
        } else {
            data_02150594->boneMatrixBitfield_[thisBoneIdx >> 5] &= ~(1 << (thisBoneIdx & 0x1f));
            data_02151398.vectorData[thisBoneIdx].vec0_.x =
                ((int64_t) scaling->x * (int64_t) data_02151398.vectorData[parentBoneIdx].vec0_.x) >> 12;
            data_02151398.vectorData[thisBoneIdx].vec0_.y =
                ((int64_t) scaling->y * (int64_t) data_02151398.vectorData[parentBoneIdx].vec0_.y) >> 12;
            data_02151398.vectorData[thisBoneIdx].vec0_.z =
                ((int64_t) scaling->z * (int64_t) data_02151398.vectorData[parentBoneIdx].vec0_.z) >> 12;
            data_02151398.vectorData[thisBoneIdx].vec1_.x =
                ((int64_t) scaling->x_v2 * (int64_t) data_02151398.vectorData[parentBoneIdx].vec1_.x) >> 12;
            data_02151398.vectorData[thisBoneIdx].vec1_.y =
                ((int64_t) scaling->y_v2 * (int64_t) data_02151398.vectorData[parentBoneIdx].vec1_.y) >> 12;
            data_02151398.vectorData[thisBoneIdx].vec1_.z =
                ((int64_t) scaling->z_v2 * (int64_t) data_02151398.vectorData[parentBoneIdx].vec1_.z) >> 12;
            func_0206e004(&data_02151398.vectorData[parentBoneIdx], &renderData->scale_v1_, 2 * 3 * sizeof(fix32_t));
        }
    }
}
