#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>

// #define S_SECT KC_GRV  // §
#define S_PLUS MINUS  // +
#define S_ACUT EQUAL  // ´ (dead)
#define S_ARNG LBKT   // Å
#define S_DIAE RBKT   // ¨ (dead)
#define S_ODIA SEMI   // Ö
#define S_ADIA SQT    // Ä
#define S_QUOT NUHS   // '
#define S_LT NUBS     // <
#define S_MINUS SLASH // -

// #define S_DEG LS(SE_SECT)  // °
#define S_EXCL LS(N1) // !
#define S_DQT LS(N2)  // "
#define S_HASH LS(N3) // #
// #define S_EURO LS(N4)    // €
#define S_PERCENT LS(N5)   // %
#define S_AMPS LS(N6)      // &
#define S_SLASH LS(N7)     // /
#define S_LPAR LS(N8)      // (
#define S_RPAR LS(N9)      // )
#define S_EQUAL LS(N0)     // =
#define S_QMARK LS(S_PLUS) // ?
#define S_GRAVE LS(S_ACUT) // `
#define S_CARET LS(S_DIAE) // ^ (dead)
// #define S_ASTR LS(SE_QUOT) // *
#define S_GT LS(S_LT)    // >
#define S_SEMI LS(COMMA) // ;
#define S_COLON LS(DOT)  // :
// #define S_UNDS LS(SE_MINS) // _
// #define S_PILC LA(SE_SECT) // ¶
// #define S_COPY LA(N1)    // ©
#define S_AT LA(N2) // @
// #define S_PND  LA(N3)    // £
#define S_DLLR LA(N4) // $
// #define S_INFN LA(N5)    // ∞
#define S_PIPE LA(N7) // |
#define S_LBKT LA(N8) // [
#define S_RBKT LA(N9) // ]
// #define S_AEQL LA(N0)    // ≈
// #define S_PLMN LA(SE_PLUS) // ±
// #define S_BULT LA(SE_Q)    // •
// #define S_OMEG LA(SE_W)    // Ω
// #define S_EACU LA(SE_E)    // É
// #define S_REGD LA(SE_R)    // ®
// #define S_DAGG LA(SE_T)    // †
// #define S_MICR LA(SE_Y)    // µ
// #define S_UDIA LA(SE_U)    // Ü
// #define S_DLSI LA(SE_I)    // ı
// #define S_OE   LA(SE_O)    // Œ
// #define S_PI   LA(SE_P)    // π
// #define S_DOTA LA(SE_ARNG) // ˙
#define S_TILDE LA(S_DIAE) // ~ (dead)
// #define S_APPL LA(SE_A)    //  (Apple logo)
// #define S_SS   LA(SE_S)    // ß
// #define S_PDIF LA(SE_D)    // ∂
// #define S_FHK  LA(SE_F)    // ƒ
// #define S_CEDL LA(SE_G)    // ¸
// #define S_OGON LA(SE_H)    // ˛
// #define S_SQRT LA(SE_J)    // √
// #define S_FORD LA(SE_K)    // ª
// #define S_FI   LA(SE_L)    // ﬁ
// #define S_OSTR LA(SE_ODIA) // Ø
// #define S_AE   LA(SE_ADIA) // Æ
// #define S_TM   LA(SE_QUOT) // ™
// #define S_LTEQ LA(SE_LABK) // ≤
// #define S_DIV  LA(SE_Z)    // ÷
// #define S_CCED LA(SE_C)    // Ç
// #define S_LSAQ LA(SE_V)    // ‹
// #define S_RSAQ LA(SE_B)    // ›
// #define S_LSQU LA(SE_N)    // ‘
// #define S_RSQU LA(SE_M)    // ’
// #define S_SLQU LA(SE_COMM) // ‚
// #define S_ELLP LA(SE_DOT)  // …
// #define S_NDSH LA(SE_MINS) // –
//
// #define S_IEXL LS(LA(N1))    // ¡
// #define S_YEN  LS(LA(N3))    // ¥
// #define S_CENT LS(LA(N4))    // ¢
// #define S_PERM LS(LA(N5))    // ‰
#define S_BACKSLASH LS(LA(N7)) // (backslash)
#define S_LBRC LS(LA(N8))      // {
#define S_RBRC LS(LA(N9))      // }
// #define S_NEQL LS(LA(N0))    // ≠
// #define S_IQUE LS(LA(SE_PLUS)) // ¿
// #define S_DACU LS(LA(SE_W))    // ˝
// #define S_DDAG LS(LA(SE_T))    // ‡
// #define S_STIL LS(LA(SE_Y))    // ˜
// #define S_DCIR LS(LA(SE_I))    // ˆ
// #define S_NARP LS(LA(SE_P))    // ∏
// #define S_RNGA LS(LA(SE_ARNG)) // ˚
// #define S_LOZN LS(LA(SE_A))    // ◊
// #define S_NARS LS(LA(SE_S))    // ∑
// #define S_INCR LS(LA(SE_D))    // ∆
// #define S_INTG LS(LA(SE_F))    // ∫
// #define S_MACR LS(LA(SE_G))    // ¯
// #define S_BREV LS(LA(SE_H))    // ˘
// #define S_NOT  LS(LA(SE_J))    // ¬
// #define S_MORD LS(LA(SE_K))    // º
// #define S_FL   LS(LA(SE_L))    // ﬂ
//// Row 4
// #define S_GTEQ LS(LA(SE_LABK)) // ≥
// #define S_CARN LS(LA(SE_X))    // ˇ
// #define S_LDAQ LS(LA(SE_V))    // «
// #define S_RDAQ LS(LA(SE_B))    // »
// #define S_LDQU LS(LA(SE_N))    // “
// #define S_RDQU LS(LA(SE_M))    // ”
// #define S_DLQU LS(LA(SE_COMM)) // „
// #define S_MDDT LS(LA(SE_DOT))  // ·
// #define S_MDSH LS(LA(SE_MINS)) // —
