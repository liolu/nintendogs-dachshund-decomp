/* compiler: 2.0/sp1p5 -thumb */
// clang-format off
asm void IsDebugger(void) {
    swi 0xf
    bx lr
}
// clang-format on
