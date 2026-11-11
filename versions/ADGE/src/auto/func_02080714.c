void func_02080714(void) {
    __asm__ volatile("mcr p15, 0, r0, c6, c1, 0" ::: "r0");
}
