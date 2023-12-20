#include <dt-bindings/zmk/mouse.h>

#define MOUSE_SCROLL_MAX 30
#define U_MOUSE_MOVE_MAX 1000

#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT

#define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)

#undef SCROLL_UP
#undef SCROLL_DOWN

#define SCROLL_UP SCROLL_VERT(MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_VERT(-MOUSE_SCROLL_MAX)

&mmv {
    time-to-max-speed-ms = <150>;
    acceleration-exponent = <2>;
};

&mwh {
    time-to-max-speed-ms = <150>;
    acceleration-exponent = <2>;
};
