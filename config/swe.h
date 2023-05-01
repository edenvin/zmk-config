#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>

#define S_ARNG LBKT // å
#define S_ADIA SQT  // ä
#define S_ODIA SEMI // ö

#define S_QUOT NUHS
#define S_DQT LS(N2)

#define S_MINUS SLASH
#define S_EQUAL LS(N0)
#define S_PLUS MINUS
#define S_ASTRK LS(S_QUOT)
#define S_SLASH LS(N7)
#define S_BACKSLASH LA(LS(N7))

#define S_LBRC LA(LS(N8))
#define S_RBRC LA(LS(N9))
#define S_LBKT LA(N8)
#define S_RBKT LA(N9)
#define S_LPAR LS(N8)
#define S_RPAR LS(N9)
#define S_LT NUBS
#define S_GT LS(S_LT)

#define S_DLLR LA(N4)
#define S_AMPS LS(N6)
#define S_PIPE LA(N7)
#define S_HASH LS(N3)
#define S_CARET LS(RBKT)
#define S_TILDE LA(RBKT)
#define S_GRAVE LS(EQUAL)
#define S_COLON LS(DOT)
#define S_SEMI LS(COMMA)
#define S_AT LA(N2)
#define S_PERCENT LS(N5)
#define S_EXCL LS(N1)
#define S_QMARK LS(S_PLUS)
