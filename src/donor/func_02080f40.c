/* compiler: 2.0/sp1p5  */
/* OSi_SetTimerReserved from projets/blue-dragon-awakened-shadow/src/auto/OSi_SetTimerReserved.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern u16 data_02153620;
void func_02080f40(s32 arg0) {
    data_02153620 |= 1 << arg0;
}
