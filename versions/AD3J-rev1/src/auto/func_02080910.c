/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;
extern s32 data_02153590;
extern u32 func_020802e0(void);
u32 func_02080910(s32 id) {
    switch (id) {
        case 0:
            return 0x21963A0;
        case 2:
            if (data_02153590 == 0 || (func_020802e0() & 3) == 1) {
                return 0;
            }
            return 0x02400000;
        case 3:
            return 0x1FFF7C0;
        case 4:
            return 0x27C0C80;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
            return 0;
    }
}
