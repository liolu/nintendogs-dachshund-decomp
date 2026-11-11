/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z24SetTimerOverflowCallbackiPFviEi from https://github.com/DQIX/dqix-decomp src/NitroSDK/InterruptHandler.cpp (license:
 * Unlicense), reused by tools/donor_match.py */
typedef void (*DMACompletionCallback)(int userdata);
extern void SetTimerOverflowCallback(int timer, DMACompletionCallback callback, int userdata);
extern unsigned int EnableSpecificInterrupts(unsigned int flagMask);
struct DMAOrTimerResponse {
    DMACompletionCallback callback;
    unsigned int stayEnabledAfter;
    int userdata;
};
extern DMAOrTimerResponse data_021532d4[8];
inline DMACompletionCallback &CallbackByIndex(int n, int base = 0) {
    return *(DMACompletionCallback *) ((unsigned int) &data_021532d4[base].callback + n * sizeof(DMAOrTimerResponse));
}
inline unsigned int &ShouldStayEnabledByIndex(int n, int base = 0) {
    return *(unsigned int *) ((unsigned int) &data_021532d4[base].stayEnabledAfter + n * sizeof(DMAOrTimerResponse));
}
inline int &CallbackUserdataByIndex(int n, int base = 0) {
    return *(int *) ((unsigned int) &data_021532d4[base].userdata + n * sizeof(DMAOrTimerResponse));
}
void SetTimerOverflowCallback(int timer, DMACompletionCallback callback, int userdata) {
    CallbackByIndex(timer, 4)         = callback;
    CallbackUserdataByIndex(timer, 4) = userdata;
    EnableSpecificInterrupts(1 << (timer + 3));
    ShouldStayEnabledByIndex(timer, 4) = true;
}
