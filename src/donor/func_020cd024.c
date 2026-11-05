/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* POKETRADE_PROC_RecvMonChunk1 from https://github.com/Project-Holon/aletheia src/game/ov119/pokemontrade_proc.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct G3dUtilUnit {
    u16 resIdx;
    u16 resCount;
    u16 objIdx;
    u16 objCount;
} G3dUtilUnit;
typedef struct G3dUtil {
    void **res;
    u8 *resStat;
    u16 resCount;
    void **obj;
    u8 *objStat;
    u16 objCount;
    G3dUtilUnit unit[0x40];
    u16 heapID;
} G3dUtil;
typedef struct _NHTTPRapSession {
    char *postBuf_p;
    int postLen;
    char *source_p;
    struct _NHTTPConnection *connection_p;
    char recvBuf[0x400];
    char url[0x190];
    u8 pad_5a0[4];
    u32 gameCode;
} NHTTPRapSession;
typedef struct BezierCurve {
    VecFx32 out;
    VecFx32 p[4];
    int idx;
    int count;
} BezierCurve;
struct TradeRequest {
    unsigned char pad_0[8];
    int state;
    unsigned int evolveResult;
    unsigned int evolveOut;
    void *gameData;
    void *context;
    void *party;
    unsigned char pad_20[4];
    char *httpParam;
    unsigned short box;
    unsigned short slot;
    unsigned short count;
    unsigned short setupParam;
    void *gameDataSource;
    void *monA;
    void *monB;
    struct MyStatus *trainerValue;
    struct MyStatus *playerStatus;
};
typedef struct TaskMenuItem {
    struct Strbuf *str;
    u16 msgColor;
    u32 type;
} TaskMenuItem;
struct MyStatus {
    u16 name[8];
    u32 id;
    u32 profile_id;
    u8 nation;
    u8 area;
    u8 language;
    u8 rom_code;
    u8 trainer_view;
    u8 sex;
};
struct PlayTimeStamp {
    u32 year : 7;
    u32 month : 4;
    u32 day : 5;
    u32 hour : 5;
    u32 minute : 6;
};
typedef struct {
    int plttHandle;
    int charHandle;
    int animHandle;
    int screen;
} ActorGfxSet;
typedef struct PokemontradeProcRecord {
    u16 value;
    u8 a;
    u8 b;
} PokemontradeProcRecord;
typedef struct McssSlideVec {
    int x;
    int y;
    int z;
} McssSlideVec;
typedef struct McssSlide {
    void *mcss;
    int frameCount;
    int frame;
    int reserved0C;
    int reserved10;
    unsigned short wobblePhase;
    unsigned short wobbleEnabled;
    int reserved18;
    McssSlideVec start;
    McssSlideVec target;
    McssSlideVec *offsetTable;
} McssSlide;
typedef struct TradeSummaryIcons {
    ActorGfxSet gfx;
    int loaded;
    struct ClactActor *actor[8];
} TradeSummaryIcons;
typedef struct {
    int x, y, z;
} PokemontradeDemoVec;
typedef struct ParticleManager {
    void *system[9];
    void *buffer[9];
    PokemontradeDemoVec position;
    PokemontradeDemoVec scale;
    PokemontradeDemoVec slotScale[4];
    void *icaStream[4];
    void *emitter[2];
    int streamFrame[2];
    void *actor;
    void *archiveMember;
    unsigned char pad_B8[2];
    u16 heap;
} ParticleManager;
typedef struct TradeSaveBackup {
    void *saveControlBackup;
    void *trainerRecordBackup;
    void *savedSaveControl;
    void *savedZukan;
    void *savedBlock1F;
    void *partyBackup;
    void *boxBackup;
    struct PlayTimeStamp playTimeStamp;
    int boxSaveDirty;
} TradeSaveBackup;
typedef struct TradeIconSlot {
    ActorGfxSet gfx;
    struct ClactActor *actor;
} TradeIconSlot;
typedef struct TradeWork {
    NHTTPRapSession *httpRap;
    unsigned char pad_4[4];
    struct TradeRequest *request;
    struct ParticleManager *particleManager;
    unsigned char boxMarking[24][30];
    unsigned char partyMarking[6];
    unsigned char texSource[0x2D0];
    unsigned char texHeader[6];
    union {
        struct BmpWin *statusWin[2];
        struct {
            struct BmpWin *statusWin0;
            struct BmpWin *statusWin1;
        };
    };
    struct BmpWin *levelWin[2];
    struct BmpWin *itemWin[2];
    struct BmpWin *nameRowWin;
    struct BmpWin *valueRowWin;
    union {
        void *monBuf[2];
        struct {
            void *monABuf;
            void *monBBuf;
        };
    };
    int sideValue[2];
    void (*stepFunc)(struct TradeWork *);
    void *timeIcon;
    unsigned short heapId;
    unsigned char pad_5F6[22];
    TradeSaveBackup backup;
    int partyBoxId;
    int slotCount;
    int columnWrap;
    int gridOriginX;
    unsigned char pad_640[4];
    unsigned int fontBgHandle;
    void *taskMenuWindow;
    void *taskMenu;
    TaskMenuItem taskMenuItems[8];
    void *taskMenuRes;
    struct BmpWin *subWin;
    struct BmpWin *boxNameWin[25];
    struct BmpWin *messageWin;
    struct MsgBank *messageBank;
    struct WordSet *wordSet;
    struct GfFont *font;
    struct TextPrinter *printStream;
    struct Strbuf *infoTextOut;
    struct Strbuf *infoTextIn;
    struct Strbuf *messageText;
    struct Strbuf *messageTemplate;
    struct PrintQueue *printQueue;
    void *tcbl;
    unsigned char pad_748[4];
    void *keyCursor;
    struct BmpWin *subScreenWin[26];
    unsigned char pad_7B8[72];
    int filterIndex;
    unsigned char pad_804[12];
    struct G3dCamera *camera;
    unsigned char pad_814[4];
    signed char *fade;
    unsigned char pad_81C[4];
    G3dUtil *g3dUtil;
    unsigned short g3dUnitHandle;
    unsigned char pad_826[2];
    struct GameData *boxManager;
    void *gameData;
    struct MyStatus *trainerRecord;
    struct MyStatus *playerStatus;
    void *partyData;
    void *subCamera;
    void *mcssSystem;
    void *mcssPokemon[4];
    unsigned int mcssAnimStopped;
    unsigned int peerSceneStarted;
    McssSlide *slide[4];
    int subBgHandle;
    unsigned int mainBgHandle;
    unsigned int boxBgHandle;
    unsigned char pad_878[4];
    union {
        int resourceHandle[18];
        struct {
            int iconPalette;
            int actorPalette;
            int paletteB;
            int iconPaletteEx;
            unsigned int paletteSpare;
            int iconPaletteComp;
            int actorChar;
            int charA;
            int charB;
            int charC;
            int charD;
            unsigned int cellAnimB;
            int cellAnimC;
            int actorCellAnim;
            int cellAnimD;
            int cellAnimE;
            unsigned int cellAnimSpare;
            int cellAnimF;
        };
    };
    TradeIconSlot statusIcon[3];
    TradeIconSlot typeIcon[4];
    TradeIconSlot markingIcon[3];
    TradeSummaryIcons summary;
    void *touchbar;
    struct Unit *clactSystem;
    void *nodeA;
    int iconChar[12][5];
    unsigned char pad_ABC[4];
    struct ClactActor *boxIconActors[12][5];
    struct ClactActor *boxIconAlt[12][5];
    unsigned short boxIconId[12][5];
    unsigned char boxIconB2[12][5];
    unsigned char boxIconB3[12][5];
    unsigned char boxIconSlot[12][5];
    struct {
        short x;
        short y;
    } boxIconPos[12][5];
    unsigned char boxIconShown[12][5];
    struct NetSaveTask *netSave;
    union {
        struct ClactActor *uiActor[10];
        struct {
            struct ClactActor *actorEFC;
            struct ClactActor *actorF00;
            struct ClactActor *cursorActor;
            struct ClactActor *actorF08;
            struct ClactActor *actorF0C;
            struct ClactActor *iconActorA;
            struct ClactActor *iconActorB;
            struct ClactActor *actorF18;
            struct ClactActor *actorF1C;
            struct ClactActor *iconActorC;
        };
    };
    struct ClactActor *iconActorD;
    unsigned char pad_F28[4];
    int waitCounter;
    unsigned char pad_F30[4];
    int prevTouch;
    unsigned char pad_F38[28];
    int iconPosX;
    int iconPosY;
    int dragMoved;
    struct ClactActor *dragActor;
    short targetX;
    short targetY;
    short offsetX;
    short offsetY;
    short originX;
    short originY;
    int dragHold;
    int cursorSlot;
    int cursorColumn;
    int highlightSlot;
    int highlightBox;
    int selectedSlot;
    int selectedBox;
    unsigned char pad_F8C[8];
    int peerSelectedSlot;
    int peerSelectedBox;
    int pendingSideMon;
    int offerCount;

    int offerSlot[2][3];
    int offerBox[2][3];
    struct ClactActor *pickedIconActor;
    void *offerMon[2][3];
    int offerReceivedValue[2][3];
    struct ClactActor *offerIconActor[2][3];
    int offerIconCharRes[2][3];
    struct BmpWin *offerListWin[4];
    int peerMsgIndex[2];
    int ownMsgIndex[2];
    unsigned char pad_1058[8];
    int netFlag;
    union {
        void *tradeBuf[3];
        struct {
            unsigned char pad_1064[8];
            void *sendBuf;
        };
    };
    unsigned char pad_1070[4];
    int redrawFlag;
    short dragX;
    short dragVelocity;
    short scrollX;
    short scrollY;
    short cursorRow;
    unsigned char pad_1082[2];
    int redrawNeeded;
    int dragging;
    int scrollSub;
    int drawColumn;
    int repeatCounter;
    unsigned short summaryFlag;
    unsigned short markerFlag;
    unsigned int animIndex;
    int cursorIndex;
    void *subObjPaletteCopy;
    void *subBgPaletteCopy;
    union {
        struct ClactActor *markerActor[8];
        struct {
            struct ClactActor *markerButtonActor[4];
            struct ClactActor *markerIconActor[4];
        };
    };
    struct ClactActor *windowActor[8];
    int paletteE;
    int cellAnimG;
    struct Bmp *windowBmp[8];
    int windowChar[8];
    unsigned short palettePageA[16];
    unsigned short palettePageB[16];
    union {
        void *tilemap[4];
        struct {
            void *tilemapE;
            void *tilemapF;
            void *tilemap19;
            void *tilemap1A;
        };
    };
    void *vramBuf;
    unsigned char pad_1188[4];
    int tradeState;
    BezierCurve bezierCurve;
    u32 printCtrl[2];
    short flightTimer;
    short fadeLevel;
    union {
        unsigned char choice[2];
        struct {
            unsigned char peerChoiceA;
            unsigned char peerChoiceB;
        };
    };
    unsigned char slotTimer[2];
    unsigned char holdTimer[2];
    union {
        unsigned char peerState[2];
        struct {
            unsigned char peerStateA;
            unsigned char peerStateByte;
        };
    };
    union {
        unsigned char labelState[2];
        struct {
            unsigned char labelStateA;
            unsigned char labelStateB;
        };
    };
    unsigned char labelsReady;
    unsigned char markerHandled;
    unsigned char summaryActive;
    union {
        unsigned char compareResult[4];
        struct {
            unsigned char enemySameMon;
            unsigned char ownSameMon;
            unsigned char enemySpecialMon;
            unsigned char ownSpecialMon;
        };
    };
    unsigned char cancelTimer;
    unsigned char storedBoxIndex;
    unsigned char sideMonSent;
    unsigned char peerBoxValue;
    unsigned char cursorAnimDone;
    unsigned char nationalDexEnabled;
    unsigned char wipeStarted;
    unsigned char sceneState;
    unsigned char wipeDone;
    unsigned char netExitCount;
    union {
        unsigned char byte;
        struct {
            unsigned char sendBusy : 4;
            unsigned char replyPending : 4;
        } bits;
    } stateFlags;
    PokemontradeProcRecord records[24 * 30 + 6];
} TradeWork;
typedef struct ParticleManager ParticleManager;
struct BmpWin {
    u16 magic : 15;
    u16 is8bpp : 1;
    u8 bgLayer;
    u8 posX;
    u8 posY;
    u8 width;
    u8 height;
    u8 dispWidth;
    u8 dispHeight;
    u8 palette;
    u16 charOffset;
    struct Bmp *bmp;
};
typedef struct Strbuf {
    u16 capacity;
    u16 length;
    u32 magic;
    u16 chars[1];
} Strbuf;
struct WordTag {
    u8 reserved00[3];
    u8 grammarCase : 7;
    u8 isSingular : 1;
    u8 addsMarker;
};
struct WordSlot {
    struct WordTag tag;
    struct Strbuf *text;
};
struct WordSet {
    u32 slotCount;
    u32 heapId;
    struct WordSlot *slots;
    struct Strbuf *scratch;
};
struct FontInfo {
    u8 fontType;
    u8 lineHeight;
    u16 nullGlyphIndex;
    u8 defaultLeft;
    u8 defaultGlyphWidth;
    u8 defaultCharWidth;
    u8 encoding;
    u32 glyphBlockOffset;
    u32 widthBlockOffset;
    u32 mapBlockOffset;
};
struct GlyphInfo {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baseline;
    u8 maxCharWidth;
    u8 bitsPerPixel;
    u8 flags;
};
struct GlyphWidthTable {
    u8 defaultWidths[3];
    u8 pad3;
    u32 classOffset;
    u32 hashOffset;
    u32 chainOffset;
};
typedef void (*GlyphReadFunc)(const struct GfFont *font, u32 glyphIndex, void *dst, u8 *metrics);
typedef void (*GlyphDecodeFunc)(const u8 *src, u32 lastGroupBits, u16 *dst);
typedef u32 (*CharWidthFunc)(struct GfFont *font, u32 glyphIndex);
struct GfFont {
    u32 format;
    GlyphReadFunc readGlyph;
    GlyphDecodeFunc decodeGlyph;
    u8 *glyphData;
    u8 pad10[0x40];
    struct ArcFile *arc;
    u32 fileId;
    struct FontInfo info;
    CharWidthFunc getCharWidth;
    u16 missingGlyphIndex;
    u8 isFixedWidth;
    u8 pad73;
    struct GlyphInfo glyph;
    u16 lastGroupBits;
    u8 tilesWide;
    u8 tilesHigh;
    u32 arcBase;
    struct GlyphWidthTable *widthTable;
    u8 *charMap;
    u32 glyphDataOffset;
    void *scratch;
};
typedef struct _NHTTPSslCon NHTTPSslCon;
typedef struct _NHTTPReq NHTTPReq;
typedef struct _NHTTPRes NHTTPRes;
typedef struct _NHTTPConnection NHTTPConnection;
typedef struct _NHTTPi_HDRBUFLIST NHTTPi_HDRBUFLIST;
typedef char *(*NHTTPBufFullFn)(char **, unsigned long *, unsigned long, void *(*) (unsigned long, int), void (*)(void *),
                                void *);
typedef void (*NHTTPFreeBufFn)(char *, void (*)(void *), void *);
typedef struct _NHTTPi_DATALIST {
    struct _NHTTPi_DATALIST *prev;
    struct _NHTTPi_DATALIST *next;
    char *name;
    char *data;
    unsigned long len;
    u32 isBinary;
} NHTTPi_DATALIST;
struct _NHTTPi_HDRBUFLIST {
    struct _NHTTPi_HDRBUFLIST *next_p;
    char block[512];
};
struct _NHTTPSslCon {
    u8 pad_0[0x800];
    char *hostname_p;
    u8 pad_804[0xc];
    void *authCallback;
    void *rootCA_p;
    int rootCALen;
    u8 pad_81c[0x14];
};
struct _NHTTPReq {
    int doCancel;
    int isStarted;
    int isSSL;
    int isProxy;
    int isRawData;
    int hostLen;
    int hostDescLen;
    int method;
    int port;
    char *URL_p;
    char *hostname_p;
    NHTTPRes *res_p;
    NHTTPi_DATALIST *hdrlist_p;
    NHTTPi_DATALIST *datalist_p;
    char multipartBound[0x14];
    char basicAuth[0x5c];
    int basicAuthLen;
    NHTTPSslCon *sslCon_p;
    int sslHandshakeState;
    int sslRecvLen;
    int sslSendLen;
    int sslLastError;
    void *rootCA_p;
    int rootCALen;
    int rootCAIndex;
    void *clientCert_p;
    int verifyOption;
    int postEncoding;
    int isIgnoreAuth;
    int rootCAChainLen;
    u8 pad_e0[4];
    char proxyAddr[256];
    int proxyPort;
    char proxyAuth[0x5c];
    int proxyAuthLen;
    int postDataState;
    char *rawPostData_p;
    unsigned long rawPostDataLen;
};
struct _NHTTPRes {
    volatile int headerLen;
    unsigned long bodyLen;
    int totalBodyLen;
    volatile u32 contentLength;
    int isSuccess;
    int isHeaderParse;
    int httpStatus;
    unsigned long recvBufLen;
    char *allHeader_p;
    char *foundHeader_p;
    char *recvBuf_p;
    NHTTPBufFullFn bufFull;
    NHTTPFreeBufFn freeBuf;
    NHTTPi_HDRBUFLIST *hdrBufBlock_p;
    char hdrBufFirst[1024];
    void *param_p;
};
struct _NHTTPConnection {
    int status;
    int nhttpError;
    int sslError;
    int running;
    NHTTPReq *req_p;
    NHTTPRes *res_p;
    int reqId;
    int (*connectionCallback)(NHTTPConnection *, int, void *);
    NHTTPConnection *next_p;
    char *postDataBuf;
    unsigned long postDataLen;
    unsigned long virtualContentLength;
    void *reqCallback;
    u8 pad_34[0xc];
    unsigned short tmpBuf[0x4000];
    unsigned long tmpBufOffset;
    unsigned long tmpBufRest;
    int ref;
};
extern void func_02066d0c(int a, int b, int c, TradeWork *p, void *e, int f);
extern void func_020cd024(int a, int b, int c, TradeWork *d, void *e);
void func_02066d0c(int a, int b, int c, TradeWork *p, void *e, int f);
void func_020cd024(int a, int b, int c, TradeWork *d, void *e) {
    func_02066d0c(a, b, c, d, e, 1);
}
