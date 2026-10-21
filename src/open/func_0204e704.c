typedef signed char s8;
typedef signed short s16;
typedef unsigned char u8;
typedef int s32;

typedef struct {
    u8 pad[0x88];
    s8 x88;
    u8 pad2[2];
    s8 x8b;
} Obj;

s32 func_0204469c(void);
s32 func_0202fa5c(u8 *);
s32 func_02035fcc(u8 *, s16);
void func_0203e5e8(u8 *, s32);
void func_0202706c(u8 *, s32);

s32 func_0204e704(u8 *arg0, u8 *arg1) {
    if ((func_0204469c() & 0x100) == 0) {
        return func_0202fa5c(arg0);
    }
    if ((u8) (s8) (((Obj *) arg0)->x8b - 4) <= 1 ||
        (u8) (s8) (((Obj *) arg1)->x8b - 4) <= 1) {
        return 0;
    }
    func_02035fcc(arg0, (s16) (s32) ((Obj *) arg1)->x88);
    func_0203e5e8(arg0, 0x26F);
    func_02035fcc(arg1, (s16) (s32) ((Obj *) arg0)->x88);
    func_0202706c(arg1, 0x18);
    return 1;
}
