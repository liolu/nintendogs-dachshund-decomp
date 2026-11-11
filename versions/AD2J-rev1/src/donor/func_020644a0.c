/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c720 from projets/need-for-speed-underground-2/src/donor/func_0205c720.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef struct UnkStruct_020a7f60 {
    char pad0[8];
    unsigned char unk8;
    char pad9[3];
} UnkStruct_020a7f60;
extern UnkStruct_020a7f60 data_0214d4c0[];
void func_020644a0(int idx) {
    *(unsigned char *) ((long long) ((int) &data_0214d4c0[idx] + 8)) += 1;
}
