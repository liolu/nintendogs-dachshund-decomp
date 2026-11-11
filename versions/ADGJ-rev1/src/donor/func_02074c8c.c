/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02074c8c from projets/nintendogs-chihuahua-friends/src/donor/func_02074c8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct CellBank {
    u16 metatile_count;
    u16 padding_02;
    u32 metatile_entries;
    u32 padding_08;
    u32 nested_bank;
} CellBank;
typedef struct CellBankEntry {
    u32 padding_00;
    u32 object;
} CellBankEntry;
extern CellBankEntry *func_02074d1c(CellBank *bank, u16 index);
extern void *func_02074d48(CellBank *bank);
void func_02074c8c(CellBank *bank) {
    CellBankEntry *object_table;
    u16 i;
    CellBank *nested_bank;

    bank->metatile_entries += (u32) bank;
    object_table = func_02074d48(bank);

    for (i = 0; i < bank->metatile_count; i++) {
        CellBankEntry *entry;

        entry = func_02074d1c(bank, i);
        entry->object += (u32) object_table;
    }

    if (bank->nested_bank == 0) {
        return;
    }

    bank->nested_bank += (u32) bank;
    nested_bank = (CellBank *) bank->nested_bank;
    nested_bank->metatile_entries += (u32) nested_bank;
    bank->nested_bank = (u32) nested_bank;
}
