/* compiler: 2.0/sp1p5  */
/* func_02045094 from projets/battle-of-giants-dinosaurs/src/auto/func_02045094.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 data_0214eab0;
// clang-format off
asm void func_0206e80c(void) {
    ldr ip, =data_0214eab0
L_0200f768:
    ldr r0, [ip, #0x0]
    cmp r0, #0x1
    beq L_0200f768
    bx lr
}
// clang-format on
