/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_01ff9048 from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
extern void func_0206e01c(const void *srcp, volatile void *destp, u32 size);
extern void func_0206e080(const void *srcp, void *destp, u32 size);
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_0206e01c(src, dest, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_0206e080(src, dest, size);
}
typedef struct NNSG3dGeBuffer_ {
    u32 idx;
    u32 data[192];
} NNSG3dGeBuffer;
extern void func_01ffe664(void);
extern void func_01ffe67c(void);
extern void func_01ffe490(u32 op, const u32 *args, u32 num);
extern volatile int data_027c00a4;
extern NNSG3dGeBuffer *data_027c00a0;
static inline void sendNB(const void *src, void *dst, u32 szByte) {
    MI_CpuSend32(src, dst, szByte);
}
void func_01ffe67c(void);
void func_01ffe664(void);
void func_01ffe490(u32 op, const u32 *args, u32 num) {
    if (data_027c00a0) {
        if (data_027c00a4) {
            if (data_027c00a0->idx + 1 + num <= 192) {
                data_027c00a0->data[data_027c00a0->idx++] = op;
                if (num > 0) {
                    MI_CpuCopyFast(args, &data_027c00a0->data[data_027c00a0->idx], num << 2);
                    data_027c00a0->idx += num;
                }

                return;
            }
        }

        if (data_027c00a0->idx != 0) {
            func_01ffe67c();
        } else {
            if (data_027c00a4) {
                func_01ffe664();
            }
        }
    } else {
        if (data_027c00a4) {
            func_01ffe664();
        }
    }

    (*(REGType32v *) (0x04000000 + 0x400)) = op;
    sendNB(args, (void *) &(*(REGType32v *) (0x04000000 + 0x400)), num << 2);
}
