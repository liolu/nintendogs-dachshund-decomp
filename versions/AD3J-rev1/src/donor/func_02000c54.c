/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_RestoreAccessCycle from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_RestoreAccessCycle.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef struct UnkCtrdgCycles {
    s32 unk_00;
    s32 unk_04;
} UnkCtrdgCycles;
extern void func_02000c54(const UnkCtrdgCycles *cycles);
void func_02000c54(const UnkCtrdgCycles *cycles) {
    (*(vu16 *) 0x04000204) = (u16) ((cycles->unk_00 << 2) | ((*(vu16 *) 0x04000204) & ~0xC));
    (*(vu16 *) 0x04000204) = (u16) ((cycles->unk_04 << 4) | ((*(vu16 *) 0x04000204) & ~0x10));
}
