extern void ARM9_CTOR_START(void);
void func_02063898(void) {
    void (**p)(void) = (void (**)(void)) &ARM9_CTOR_START;

    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}
