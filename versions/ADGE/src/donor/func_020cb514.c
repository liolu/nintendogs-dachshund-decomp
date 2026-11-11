/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DWC_DebugConnectInetAsync from https://github.com/ntrtwl/NitroDWC libraries/base/src/dwc_connectinet.c (license: none),
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
extern void func_020cb514(const void *ssid, const void *wep, int wepMode);
extern void func_020cb554(const void *ssid, const void *wep, int wepMode, const char *apSpotInfo, int overrideType);
void func_020cb514(const void *ssid, const void *wep, int wepMode) {
    func_020cb554(ssid, wep, wepMode, 0, DWC_AC_AP_TYPE_USER1);
}
void func_020cb554(const void *ssid, const void *wep, int wepMode, const char *apSpotInfo, int overrideType);
