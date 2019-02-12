# The Phreed Prionic Layout


Make example for this keyboard (after setting up your build environment):

    make planck/rev3:phreed

To flash the keyboard

    make preonic/rev3:phreed:dfu-util

See [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) then the
[make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.


##  _QWERT
|  KC_1 |     KC_2 |     KC_3 |     KC_4 |     KC_5 |     KC_ESC |    KC_BSLS |   KC_6 |     KC_7 |     KC_8 |     KC_9 |     KC_0 |  
|  KC_Q |     KC_W |     KC_E |     KC_R |     KC_T |     KC_TAB |    KC_MINS |   KC_Y |     KC_U |     KC_I |     KC_O |     KC_P |  
|  KC_A |     KC_S |     KC_D |     KC_F |     KC_G |     KC_GRV |    KC_QUOT |   KC_H |     KC_J |     KC_K |     KC_L |     KC_SCLN | 
|  KC_Z |     KC_X |     KC_C |     KC_V |     KC_B |     ALT_LBRC |  ALT_RBRC |  KC_N |     KC_M |     KC_COMM |  KC_DOT |   KC_SLSH | 
|  MO_MTH |   MO_SCL |   KC_BSPC |  KC_ENT |   KC_LSPO |  CTL_MINS |  CTL_PLUS |  KC_RSPC |  KC_SPC |   KC_DEL |   MO_FUN |   MO_NAV |

## _MTH]
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_PSLS |  KC_PAST |  KC_PMNS | 
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_RABK |  KC_P7 |    KC_P8 |    KC_P9 |    KC_PPLS |
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_EQL |   KC_P4 |    KC_P5 |    KC_P6 |    KC_CIRC |
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_LABK |  KC_P1 |    KC_P2 |    KC_P3 |    KC_PEQL |
|  _______ |  KC_NLCK |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_P0 |    KC_PDOT |  KC_PENT |


## _SCL
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  OSM(MOD_LCTL) |  OSM(MOD_RCTL) |  XXXXXXX |  DEBUG |     RESET |
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  OSM(MOD_LSFT) |  OSM(MOD_RSFT) |  XXXXXXX |  XXXXXXX |   XXXXXXX |
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  OSM(MOD_LALT) |  OSM(MOD_RALT) |  XXXXXXX |  KC_POWER |  KC_PWR | 
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  OSM(MOD_LGUI) |  OSM(MOD_RGUI) |  KC_MUTE |  KC_WAKE |   KC_SLEP |
|  XXXXXXX |  _______ |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  OSM(MOD_HYPR) |  OSM(MOD_MEH) |   KC_APP |   DASH |      LOCK |


## _FUN
|  KC_F1 |    KC_F2 |    KC_F3 |    KC_F4 |    KC_F5 |    KC_F6 |    XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_F7 |    KC_F8 |    KC_F9 |    KC_F10 |   KC_F11 |   KC_F12 |   XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_F13 |   KC_F14 |   KC_F15 |   KC_F16 |   KC_F17 |   KC_F18 |   XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_F19 |   KC_F20 |   KC_F21 |   KC_F22 |   KC_F23 |   KC_F24 |   XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_LCTL |  KC_LALT |  KC_LSFT |  _______ |  XXXXXXX |


## _NAV

|  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_HOME |  KC_UP |    KC_PGUP |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_LEFT |  XXXXXXX |  KC_RIGHT | XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  KC_END |   KC_DOWN |  KC_PGDN |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |
|  XXXXXXX |  KC_INS |   KC_DEL |   XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  XXXXXXX |  KC_LCTL |  KC_LALT |  KC_LSFT |  _______ |

