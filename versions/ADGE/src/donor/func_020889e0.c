/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200f968 from projets/code-lyoko/src/donor/func_0200f968.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
extern void func_0206cd2c(void *dest, u8 data, u32 size);
extern void func_0206cdc0(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_0206cd2c(dest, 0, size);
}
extern void func_0207e398(void *digest, void *bin_ptr, int bin_len, void *key_ptr, int key_len);
extern const void *data_0213ce58;
extern int data_0213ce5c;
BOOL func_020889e0(const u8 *spec_digest, void *src, int len) {
    int i;
    u8 digest[(160 / 8)];
    u8 digest_key[64];

    MI_CpuClear8(digest, sizeof(digest));
    func_0206cdc0(data_0213ce58, digest_key, (u32) data_0213ce5c);
    func_0207e398(digest, src, len, digest_key, data_0213ce5c);

    for (i = 0; i < sizeof(digest); i += sizeof(u32)) {
        if (*(const u32 *) (digest + i) != *(const u32 *) (spec_digest + i)) {
            break;
        }
    }

    return (i == sizeof(digest));
}
