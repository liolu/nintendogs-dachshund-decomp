typedef unsigned char u8;
typedef unsigned int u32;

void *func_0207d038(void *arg0, void *arg1);

void *func_0207d33c(void *arg0, u32 key) {
    u8 *node;
    void *found;

    node = (u8 *) func_0207d038(arg0, 0);
    while (node != 0) {
        if (*(u32 *) (node + 0x18) <= key && key < *(u32 *) (node + 0x1C)) {
            found = func_0207d33c(node + 0xC, key);
            return found != 0 ? found : node;
        }
        node = (u8 *) func_0207d038(arg0, node);
    }
    return 0;
}
