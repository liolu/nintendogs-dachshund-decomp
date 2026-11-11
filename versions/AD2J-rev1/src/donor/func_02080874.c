/* compiler: 2.0/sp1p5  */
/* func_0203f708 from projets/battle-of-giants-dinosaurs/src/auto/func_0203f708.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void func_02080874(void) {
    __asm__ volatile("mov r0, #0\n"
                     "mcr p15, 0, r0, c7, c10, 4\n"
                     :
                     :
                     : "r0", "memory");
}
