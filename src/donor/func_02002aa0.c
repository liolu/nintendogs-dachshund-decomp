/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020119c8 from projets/code-lyoko/src/donor/func_020119c8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
extern u32 func_02002aa0(u32 number, PMCallback callback, void *arg);
extern void func_02002694(u32 data);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
inline u32 PMi_MakeData1(u32 bit, u32 seq, u32 command, u32 data) {
    return (bit) | ((seq) << 16) | ((command) << 8) | ((data) & 0xff);
}
inline u32 PMi_MakeData2(u32 bit, u32 seq, u32 data) {
    return (bit) | ((seq) << 16) | ((data) & 0xffff);
}
extern BOOL func_02002df0(void);
extern PMiWork data_0214cd14;
extern BOOL func_02002df0(void);
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
u32 func_02002aa0(u32 number, PMCallback callback, void *arg) {
    u32 pxi_send_data;

    if (!func_02002df0()) {
        return 1;
    }

    do {
        data_0214cd14.callback    = (callback);
        data_0214cd14.callbackArg = (arg);
    } while (0);

    pxi_send_data = PMi_MakeData1(0x02000000, 0, 0x0063, number >> 16);
    func_02002694(pxi_send_data);

    pxi_send_data = PMi_MakeData2(0x01000000, 1, number);
    func_02002694(pxi_send_data);

    return 0;
}
extern void func_02002694(u32 data);
