/* compiler: 2.0/sp1p5  */
/* func_0207f160 from projets/nintendogs-chihuahua-friends/src/auto/func_0207f160.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_0207f160(void *arg0) {
    if (arg0 == ((void *) 0)) {
        return 1;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x18))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0x67452301;
    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0xEFCDAB89;
    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0x98BADCFE;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 0x10325476;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0xC3D2E1F0;
    (*(s32 *) ((s8 *) (arg0) + (0x60))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x64))) = 0;
    return 0;
}
