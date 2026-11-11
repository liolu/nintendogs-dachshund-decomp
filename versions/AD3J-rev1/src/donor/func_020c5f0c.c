/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cb514 from projets/nintendogs-dachshund/src/donor/func_020cb514.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
enum {
    DWC_AC_AP_TYPE_USER1,
    DWC_AC_AP_TYPE_USER2,
    DWC_AC_AP_TYPE_USER3,
    DWC_AC_AP_TYPE_USB,
    DWC_AC_AP_TYPE_SHOP,
    DWC_AC_AP_TYPE_FREESPOT,
    DWC_AC_AP_TYPE_WAYPORT,
    DWC_AC_AP_TYPE_NINTENDOWFC,
    DWC_AC_AP_TYPE_NINTENDOSPOT,
    DWC_AC_AP_TYPE_UNKNOWN = 99,
    DWC_AC_AP_TYPE_FALSE   = 0xff
};
extern void func_020c5f0c(const void *ssid, const void *wep, int wepMode);
extern void func_020c5f4c(const void *ssid, const void *wep, int wepMode, const char *apSpotInfo, int overrideType);
void func_020c5f0c(const void *ssid, const void *wep, int wepMode) {
    func_020c5f4c(ssid, wep, wepMode, 0, DWC_AC_AP_TYPE_USER1);
}
extern void func_020c5f4c(const void *ssid, const void *wep, int wepMode, const char *apSpotInfo, int overrideType);
