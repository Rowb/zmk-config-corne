
#define GREEN 0x00ff00
#define RED 0xff0000
#define BLUE 0x0000ff
#define TEAL 0x008080
#define ORANGE 0xffa500
#define YELLOW 0xffff00
#define GOLD 0xffd700
#define PURPLE 0x800080
#define PINK 0xffc0cb
#define WHITE 0xffffff
#define ______ 0x000000

/ {
    underglow-layer {
        compatible  = "zmk,underglow-layer";

        lower {
            bindings = <
                ______   RED   RED   RED   RED   RED                         RED   RED RED RED RED    RED
                BLUE BLUE BLUE    BLUE BLUE BLUE                              BLUE BLUE BLUE BLUE BLUE BLUE
                ______ PURPLE    PURPLE    PURPLE    PURPLE PURPLE                          PURPLE PURPLE PURPLE PURPLE    PURPLE   ______
                                                          YELLOW  ______ ______  ______ ______ YELLOW
                >;
            layer-id = <LWR>;
        };
        raise {
            bindings = <
                WHITE   RED   BLUE   BLUE   BLUE   RED                                            ______   GOLD ORANGE ORANGE ORANGE    RED
                RED RED BLUE    BLUE BLUE RED                                            ______ YELLOW BLUE BLUE BLUE ______
                  ______ BLUE    BLUE    BLUE    BLUE PURPLE                                            ______ YELLOW YELLOW YELLOW    RED   BLUE
                                                          ______  ______ GREEN  GREEN ______ ______
                >;
            layer-id = <RSE>;
        };
        adjust {
            bindings = <
                PURPLE  TEAL  ______  ______  ______  ______              ______  ______  ______  ______  ______  ______
                RED BLUE  BLUE  BLUE  BLUE  BLUE                           BLUE BLUE BLUE BLUE BLUE RED
                  GREEN ______     ______     ______    ______ ______                                            ______ ______ ______ ______    ______   ______
                                                          ______  ______ ______  ______ ______ ______
                >;
            layer-id = <ADJ>;
        };
    };
};