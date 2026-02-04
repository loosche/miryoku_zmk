// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Changes
// Left Thumb 0		Esc -> Del
// Left Thumb 1		Spc -> Tab
// Left Thumb 2		Tab -> Esc
// Right Thumb 1	Backspace -> Space
// Right Thumb 2	Del -> Backspace
// Right Mid 4		SQT -> SEMI
// Layer Changes
// Left Thumb 2		MOUSE -> FUN
// Right Thumb 2	FUN -> nothing
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),  \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, TAB),  U_LT(U_FUN, ESC),  U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),&kp BSPC,          U_NP,              U_NP

// Changes
// Left Mid 0		COLON -> DQT
// Symbols across the top
#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp AMPS,          &kp STAR,          &kp LPAR,          &kp RPAR,            \
&kp DQT,           U_NA,              U_NA,              U_NA,              &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         U_NA,              U_NA,              U_NA,              &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Changes
// Left Mid 0		SEMI -> SQT
// Numbers across the top
#define MIRYOKU_LAYER_NUM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            \
&kp SQT,           U_NA,              U_NA,              U_NA,              &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         U_NA,              U_NA,              U_NA,              &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Changes
// Changed the Home Row to match VI
// H: CAPS -> LEFT
// J: LEFT -> DOWN
// K: DOWN - > UP
// L: UP -> RIGHT
// ;: RIGHT -> CAPS
#define MIRYOKU_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT ,         &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

