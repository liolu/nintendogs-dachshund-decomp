void func_02083de4(int a, int b) {
    a = 0x1000 << a;
    b = 0x1000 << b;
    a = a << 8;
    b = b << 8;
    a = a >> 16;
    b = b >> 16;

    *(volatile int *) 0x4000500 = 1;
    *(volatile int *) 0x4000488 = 0;
    *(volatile int *) 0x4000490 = 0x103c0;
    *(volatile int *) 0x4000488 = (unsigned short) a;
    *(volatile int *) 0x4000490 = 0x10040;
    *(volatile int *) 0x4000488 = (unsigned short) a | ((unsigned short) b << 0x10);
    *(volatile int *) 0x4000490 = 0xf0040;
    *(volatile int *) 0x4000488 = (unsigned short) b << 0x10;
    *(volatile int *) 0x4000490 = 0xf03c0;
    *(volatile int *) 0x4000504 = 0;
}
