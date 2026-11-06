/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021131dc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_021131dc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0213f304[];
extern void func_0207d0e0(u32 a, u32 b, u32 c, u32 d);
void func_020b9550(u32 p0, u32 p1, u32 p2, u32 p3) {
    func_0207d0e0(data_0213f304[p0], p2, p1, p3);
}
