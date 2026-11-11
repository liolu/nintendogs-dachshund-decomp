#include "m2c.h"
extern u8 data_02150880[];
extern void *func_02071ae4(u32 fileId);
extern s32 func_02071b0c(u32 fileId, void *dst, u32 size, u32 offset);
extern void *func_02071e10(void);
typedef void (*UnkSndHeapCallback)(void *mem, u32 size, void *data1, u32 data2);
extern void *func_020722d0(void *heap, u32 size, UnkSndHeapCallback callback, void *data1, u32 data2);
extern void func_0206cdc0(const void *src, void *dest, u32 count);
extern void func_0206cd2c(void *dest, u8 value, u32 count);
extern void func_02080210(const void *addr, u32 count);
extern void func_02071ac8(u32 fileId, void *mem);
extern void func_020726bc(void *mem, u32 size, void *data1, u32 data2);
void *func_020727f8(u32 fileId, void *heap, s32 flag) {
    void *mem;
    u32 total;
    u32 size;
    s32 read;

    mem = func_02071ae4(fileId);
    if (mem == 0) {
        if (func_02071b0c(fileId, data_02150880, 0x3c, 0) != 0x3c) {
            return 0;
        }

        size  = *(u32 *) (data_02150880 + 0x38) * 4;
        total = size * 2 + 0x3c;
        if (heap == 0) {
            return 0;
        }

        mem = func_020722d0(heap, total + 0x20, func_020726bc, flag != 0 ? func_02071e10() : 0, fileId);
        if (mem == 0) {
            return 0;
        }

        read = func_02071b0c(fileId, mem, size + 0x3c, 0);
        if (read != size + 0x3c) {
            return 0;
        }

        func_0206cdc0((u8 *) mem + 0x3c, (u8 *) mem + 0x3c + *(u32 *) ((u8 *) mem + 0x38) * 4, size);
        func_0206cd2c((u8 *) mem + 0x3c, 0, size);
        func_02080210(mem, total);

        if (flag != 0) {
            func_02071ac8(fileId, mem);
        }
    }
    return mem;
}
