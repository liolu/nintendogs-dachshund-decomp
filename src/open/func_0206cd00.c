typedef struct { unsigned int w[3]; } Unk12;
typedef struct { unsigned int w[4]; } Unk16;

void func_0206cd00(const void* src, void* dest) {
    typedef struct { unsigned int w[16]; } UnkStruct64;
    *(UnkStruct64 *) dest = *(const UnkStruct64 *) src;
}
