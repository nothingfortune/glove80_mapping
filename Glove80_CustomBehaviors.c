// NOTE: Use the `#define` settings below to customize this keymap!
// For example, here are the main optional features you can enable:
#define DIFFICULTY_LEVEL  1 // 0:custom, 1:easy -> 5:hard (see below)
// TIP: Add more setting overrides here instead of editing them below.

//////////////////////////////////////////////////////////////////////////////
//
// Advanced Home Row Mods (HRM) Example based on
// Sunaku's Keymap v35 -- "Glorious Engrammer"
// - https://github.com/sunaku/glove80-keymaps
//
//////////////////////////////////////////////////////////////////////////////

//
// DIFFICULTY_LEVEL specifies your level of expertise with this keymap.
// It's meant to help newcomers gradually work their way up to mastery.
// You can disable this setting by omitting it or assigning a `0` zero.
//
// #define DIFFICULTY_LEVEL 0 // custom (see defaults below)
// #define DIFFICULTY_LEVEL 1 // novice (500ms)
// #define DIFFICULTY_LEVEL 2 // slower (400ms)
// #define DIFFICULTY_LEVEL 3 // normal (300ms)
// #define DIFFICULTY_LEVEL 4 // faster (200ms)
// #define DIFFICULTY_LEVEL 5 // expert (100ms)
//
#if defined(DIFFICULTY_LEVEL) && DIFFICULTY_LEVEL > 0
#define DIFFICULTY_THRESHOLD ((6-DIFFICULTY_LEVEL)*100)
#ifndef HOMEY_HOLDING_TIME
#define HOMEY_HOLDING_TIME DIFFICULTY_THRESHOLD
#endif
#ifndef INDEX_HOLDING_TIME
#define INDEX_HOLDING_TIME DIFFICULTY_THRESHOLD
#endif
#endif

behaviors;
{

//////////////////////////////////////////////////////////////////////////
//
// Miryoku layers and home row mods (ported from my QMK endgame)
// - https://sunaku.github.io/home-row-mods.html#porting-to-zmk
// - https://github.com/urob/zmk-config#timeless-homerow-mods
//
//////////////////////////////////////////////////////////////////////////

//
// HOMEY_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
// for the pinky, ring, and middle fingers (which are assigned to Super,
// Alt, and Ctrl respectively in the Miryoku system) on home row keys.
//
#ifndef HOMEY_HOLDING_TYPE
#define HOMEY_HOLDING_TYPE "tap-preferred"
#endif

//
// HOMEY_HOLDING_TIME defines how long you need to hold (milliseconds)
// home row mod keys in order to send their modifiers to the computer
// (i.e. "register" them) for mod-click mouse usage (e.g. Ctrl-Click).
//
#ifndef HOMEY_HOLDING_TIME
#define HOMEY_HOLDING_TIME 270 // TAPPING_TERM + ALLOW_CROSSOVER_AFTER
#endif

//
// HOMEY_STREAK_DECAY defines how long you need to wait (milliseconds)
// after typing before you can use home row mods again.  It prevents
// unintended activation of home row mods when you're actively typing.
//
#ifndef HOMEY_STREAK_DECAY
#define HOMEY_STREAK_DECAY 250
#endif

//
// HOMEY_REPEAT_DECAY defines how much time you have left (milliseconds)
// after tapping a key to hold it again in order to make it auto-repeat.
//
#ifndef HOMEY_REPEAT_DECAY
#define HOMEY_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
#endif

//
// INDEX_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
// for index fingers (which Miryoku assigns to Shift) on home row keys.
//
#ifndef INDEX_HOLDING_TYPE
#define INDEX_HOLDING_TYPE "tap-preferred"
#endif

//
// INDEX_HOLDING_TIME defines how long you need to hold (milliseconds)
// index finger keys in order to send their modifiers to the computer
// (i.e. "register" them) for mod-click mouse usage (e.g. Shift-Click).
//
#ifndef INDEX_HOLDING_TIME
#define INDEX_HOLDING_TIME 170
#endif

//
// INDEX_STREAK_DECAY defines how long you need to wait (milliseconds)
// after typing before you can use home row mods again.  It prevents
// unintended activation of home row mods when you're actively typing.
//
#ifndef INDEX_STREAK_DECAY
#define INDEX_STREAK_DECAY 150
#endif

//
// INDEX_REPEAT_DECAY defines how much time you have left (milliseconds)
// after tapping a key to hold it again in order to make it auto-repeat.
//
#ifndef INDEX_REPEAT_DECAY
#define INDEX_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
#endif

//
// Glove80 key positions index for positional hold-tap
// - https://discord.com/channels/877392805654306816/937645688244826154/1066713913351221248
// - https://media.discordapp.net/attachments/937645688244826154/1066713913133121556/image.png
//
// |------------------------|------------------------|
// | LEFT_HAND_KEYS         |        RIGHT_HAND_KEYS |
// |                        |                        |
// |  0  1  2  3  4         |          5  6  7  8  9 |
// | 10 11 12 13 14 15      |      16 17 18 19 20 21 |
// | 22 23 24 25 26 27      |      28 29 30 31 32 33 |
// | 34 35 36 37 38 39      |      40 41 42 43 44 45 |
// | 46 47 48 49 50 51      |      58 59 60 61 62 63 |
// | 64 65 66 67 68         |         75 76 77 78 79 |
// |                69 52   |   57 74                |
// |                 70 53  |  56 73                 |
// |                  71 54 | 55 72                  |
// |------------------------|------------------------|
//
#define LEFT_HAND_KEYS \
  0 1 2 3 4 10 11 12 13 14 15 22 23 24 25 26 27 34 35 36 37 38 39 46 47 48 49 50 51 64 65 66 67 68
#define RIGHT_HAND_KEYS \
  5 6 7 8 9 16 17 18 19 20 21 28 29 30 31 32 33 40 41 42 43 44 45 58 59 60 61 62 63 75 76 77 78 79
#define THUMB_KEYS \
  69 52 57 74 70 53 56 73 71 54 55 72

  //
  // Home row mods with per-finger configuration settings
  //

#ifndef PINKY_HOLDING_TYPE
#define PINKY_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef PINKY_HOLDING_TIME
#define PINKY_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef PINKY_STREAK_DECAY
#define PINKY_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef PINKY_REPEAT_DECAY
#define PINKY_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef RING1_HOLDING_TYPE
#define RING1_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef RING1_HOLDING_TIME
#define RING1_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef RING1_STREAK_DECAY
#define RING1_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef RING1_REPEAT_DECAY
#define RING1_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef RING2_HOLDING_TYPE
#define RING2_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef RING2_HOLDING_TIME
#define RING2_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef RING2_STREAK_DECAY
#define RING2_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef RING2_REPEAT_DECAY
#define RING2_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef MIDDY_HOLDING_TYPE
#define MIDDY_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef MIDDY_HOLDING_TIME
#define MIDDY_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef MIDDY_STREAK_DECAY
#define MIDDY_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef MIDDY_REPEAT_DECAY
#define MIDDY_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef INDEX_HOLDING_TYPE
#define INDEX_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef INDEX_HOLDING_TIME
#define INDEX_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef INDEX_STREAK_DECAY
#define INDEX_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef INDEX_REPEAT_DECAY
#define INDEX_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef LEFT_PINKY_HOLDING_TYPE
#define LEFT_PINKY_HOLDING_TYPE PINKY_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_HOLDING_TIME
#define LEFT_PINKY_HOLDING_TIME PINKY_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_STREAK_DECAY
#define LEFT_PINKY_STREAK_DECAY PINKY_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_REPEAT_DECAY
#define LEFT_PINKY_REPEAT_DECAY PINKY_REPEAT_DECAY
#endif

left_pinky:
  homey_left_pinky
  {
    compatible = "zmk,behavior-hold-tap";
    flavor = LEFT_PINKY_HOLDING_TYPE;
    hold - trigger - key - positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
    hold - trigger - on - release; // wait for other home row mods
    tapping - term - ms = <LEFT_PINKY_HOLDING_TIME>;
    quick - tap - ms = <LEFT_PINKY_REPEAT_DECAY>;
    require - prior - idle - ms = <LEFT_PINKY_STREAK_DECAY>;
#binding - cells = < 2>;
    bindings = <&kp>, <&kp>;
  };

    #ifndef RIGHT_PINKY_HOLDING_TYPE
    #define RIGHT_PINKY_HOLDING_TYPE PINKY_HOLDING_TYPE
    #endif
    #ifndef RIGHT_PINKY_HOLDING_TIME
    #define RIGHT_PINKY_HOLDING_TIME PINKY_HOLDING_TIME
    #endif
    #ifndef RIGHT_PINKY_STREAK_DECAY
    #define RIGHT_PINKY_STREAK_DECAY PINKY_STREAK_DECAY
    #endif
    #ifndef RIGHT_PINKY_REPEAT_DECAY
    #define RIGHT_PINKY_REPEAT_DECAY PINKY_REPEAT_DECAY
    #endif

    right_pinky: homey_right_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef LEFT_RING1_HOLDING_TYPE
    #define LEFT_RING1_HOLDING_TYPE RING1_HOLDING_TYPE
    #endif
    #ifndef LEFT_RING1_HOLDING_TIME
    #define LEFT_RING1_HOLDING_TIME RING1_HOLDING_TIME
    #endif
    #ifndef LEFT_RING1_STREAK_DECAY
    #define LEFT_RING1_STREAK_DECAY RING1_STREAK_DECAY
    #endif
    #ifndef LEFT_RING1_REPEAT_DECAY
    #define LEFT_RING1_REPEAT_DECAY RING1_REPEAT_DECAY
    #endif

    left_ring1: homey_left_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef RIGHT_RING1_HOLDING_TYPE
    #define RIGHT_RING1_HOLDING_TYPE RING1_HOLDING_TYPE
    #endif
    #ifndef RIGHT_RING1_HOLDING_TIME
    #define RIGHT_RING1_HOLDING_TIME RING1_HOLDING_TIME
    #endif
    #ifndef RIGHT_RING1_STREAK_DECAY
    #define RIGHT_RING1_STREAK_DECAY RING1_STREAK_DECAY
    #endif
    #ifndef RIGHT_RING1_REPEAT_DECAY
    #define RIGHT_RING1_REPEAT_DECAY RING1_REPEAT_DECAY
    #endif

    right_ring1: homey_right_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef LEFT_RING2_HOLDING_TYPE
    #define LEFT_RING2_HOLDING_TYPE RING2_HOLDING_TYPE
    #endif
    #ifndef LEFT_RING2_HOLDING_TIME
    #define LEFT_RING2_HOLDING_TIME RING2_HOLDING_TIME
    #endif
    #ifndef LEFT_RING2_STREAK_DECAY
    #define LEFT_RING2_STREAK_DECAY RING2_STREAK_DECAY
    #endif
    #ifndef LEFT_RING2_REPEAT_DECAY
    #define LEFT_RING2_REPEAT_DECAY RING2_REPEAT_DECAY
    #endif

    left_ring2: homey_left_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef RIGHT_RING2_HOLDING_TYPE
    #define RIGHT_RING2_HOLDING_TYPE RING2_HOLDING_TYPE
    #endif
    #ifndef RIGHT_RING2_HOLDING_TIME
    #define RIGHT_RING2_HOLDING_TIME RING2_HOLDING_TIME
    #endif
    #ifndef RIGHT_RING2_STREAK_DECAY
    #define RIGHT_RING2_STREAK_DECAY RING2_STREAK_DECAY
    #endif
    #ifndef RIGHT_RING2_REPEAT_DECAY
    #define RIGHT_RING2_REPEAT_DECAY RING2_REPEAT_DECAY
    #endif

    right_ring2: homey_right_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef LEFT_MIDDY_HOLDING_TYPE
    #define LEFT_MIDDY_HOLDING_TYPE MIDDY_HOLDING_TYPE
    #endif
    #ifndef LEFT_MIDDY_HOLDING_TIME
    #define LEFT_MIDDY_HOLDING_TIME MIDDY_HOLDING_TIME
    #endif
    #ifndef LEFT_MIDDY_STREAK_DECAY
    #define LEFT_MIDDY_STREAK_DECAY MIDDY_STREAK_DECAY
    #endif
    #ifndef LEFT_MIDDY_REPEAT_DECAY
    #define LEFT_MIDDY_REPEAT_DECAY MIDDY_REPEAT_DECAY
    #endif

    left_middy: homey_left_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef RIGHT_MIDDY_HOLDING_TYPE
    #define RIGHT_MIDDY_HOLDING_TYPE MIDDY_HOLDING_TYPE
    #endif
    #ifndef RIGHT_MIDDY_HOLDING_TIME
    #define RIGHT_MIDDY_HOLDING_TIME MIDDY_HOLDING_TIME
    #endif
    #ifndef RIGHT_MIDDY_STREAK_DECAY
    #define RIGHT_MIDDY_STREAK_DECAY MIDDY_STREAK_DECAY
    #endif
    #ifndef RIGHT_MIDDY_REPEAT_DECAY
    #define RIGHT_MIDDY_REPEAT_DECAY MIDDY_REPEAT_DECAY
    #endif
    right_middy: homey_right_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };

    #ifndef LEFT_INDEX_HOLDING_TYPE
    #define LEFT_INDEX_HOLDING_TYPE INDEX_HOLDING_TYPE
    #endif
    #ifndef LEFT_INDEX_HOLDING_TIME
    #define LEFT_INDEX_HOLDING_TIME INDEX_HOLDING_TIME
    #endif
    #ifndef LEFT_INDEX_STREAK_DECAY
    #define LEFT_INDEX_STREAK_DECAY INDEX_STREAK_DECAY
    #endif
    #ifndef LEFT_INDEX_REPEAT_DECAY
    #define LEFT_INDEX_REPEAT_DECAY INDEX_REPEAT_DECAY
    #endif

    left_index: homey_left_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    #ifndef RIGHT_INDEX_HOLDING_TYPE
    #define RIGHT_INDEX_HOLDING_TYPE INDEX_HOLDING_TYPE
    #endif
    #ifndef RIGHT_INDEX_HOLDING_TIME
    #define RIGHT_INDEX_HOLDING_TIME INDEX_HOLDING_TIME
    #endif
    #ifndef RIGHT_INDEX_STREAK_DECAY
    #define RIGHT_INDEX_STREAK_DECAY INDEX_STREAK_DECAY
    #endif
    #ifndef RIGHT_INDEX_REPEAT_DECAY
    #define RIGHT_INDEX_REPEAT_DECAY INDEX_REPEAT_DECAY
    #endif
    right_index: homey_right_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    };

//////////////////////////////////////////////////////////////////////////
//
// Mouse keys (control mouse via keyboard) -- requires PR23 beta firmware:
// select "community.pr23.mouse-keys" from the drop-down menu located at
// Glove80 Layout Editor > Settings > Advanced Settings > Firmware Version
//
// - https://github.com/moergo-sc/zmk/pull/23
// - https://gist.github.com/krissen/dd27082e7ab0575619c7a31f4d2ec7ae
// - https://github.com/zmkfirmware/zmk/compare/main...urob:zmk:mouse-3.2
//
//////////////////////////////////////////////////////////////////////////

//
// MOUSE_MOTION_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_MOTION_DELAY
#define MOUSE_MOTION_DELAY 0
#endif

//
// MOUSE_MOTION_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_MOTION_ACCELERATION_EXPONENT
#define MOUSE_MOTION_ACCELERATION_EXPONENT 1
#endif

//
// MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED
#define MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_MOTION_MAXIMUM_SPEED defines how quickly the mouse pointer can move.
//
#ifndef MOUSE_MOTION_MAXIMUM_SPEED
#define MOUSE_MOTION_MAXIMUM_SPEED 600
#endif

//
// MOUSE_SCROLL_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_SCROLL_DELAY
#define MOUSE_SCROLL_DELAY 0
#endif

//
// MOUSE_SCROLL_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_SCROLL_ACCELERATION_EXPONENT
#define MOUSE_SCROLL_ACCELERATION_EXPONENT 0
#endif

//
// MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED
#define MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_SCROLL_MAXIMUM_SPEED defines how quickly the mouse wheel can scroll.
//
#ifndef MOUSE_SCROLL_MAXIMUM_SPEED
#define MOUSE_SCROLL_MAXIMUM_SPEED 10
#endif

/*HACK*/
};

#if __has_include(<zmk/events/mouse_tick.h>)
    // ==== MOUSE-KEY <section begins> ====
    #define ZMK_MOUSE_DEFAULT_MOVE_VAL MOUSE_MOTION_MAXIMUM_SPEED
    #define ZMK_MOUSE_DEFAULT_SCRL_VAL MOUSE_SCROLL_MAXIMUM_SPEED
    #include <dt-bindings/zmk/mouse.h>
    &mmv {
      delay-ms = <MOUSE_MOTION_DELAY>;
      acceleration-exponent = <MOUSE_MOTION_ACCELERATION_EXPONENT>;
      time-to-max-speed-ms = <MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED>;
    };
    &msc {
      delay-ms = <MOUSE_SCROLL_DELAY>;
      acceleration-exponent = <MOUSE_SCROLL_ACCELERATION_EXPONENT>;
      time-to-max-speed-ms = <MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED>;
    };
    // ==== MOUSE-KEY <section ends> =====
#else
    #define mkp none
    #define mmv none
    #define msc none
    #define LCLK
    #define MCLK
    #define RCLK
    #define MB1
    #define MB2
    #define MB3
    #define MB4
    #define MB5
    #define MB6
    #define MB7
    #define MB8
    #define MOVE_UP
    #define MOVE_DOWN
    #define MOVE_LEFT
    #define MOVE_RIGHT
    #define SCRL_UP
    #define SCRL_DOWN
    #define SCRL_LEFT
    #define SCRL_RIGHT
#endif
/*HACK*//{

conditional_layers {
  compatible = "zmk,conditional-layers";
  mac {
    if-layers = <LAYER_Mac_>;
    then-layer = <LAYER_Mac>;
  };
  raise {
    if-layers = <LAYER_Raise_>;
    then-layer = <LAYER_Raise>;
  };
  raise_mac {
    if-layers = <LAYER_Raise_ LAYER_Mac_>;
    then-layer = <LAYER_Raise_Mac>;
  };
  combined {
    if-layers = <LAYER_Lower LAYER_Raise>;
    then-layer = <LAYER_Combined>;
  };
  combined_one_btn {
    if-layers = <LAYER_Combined_>;
    then-layer = <LAYER_Combined>;
  };
};

behaviors {


    // Layer Behaviors

    // Hold for modifier, tap to toggle layer

    mtog: mod_toggle {
    compatible = "zmk,behavior-hold-tap";
    #binding-cells = <2>;
    flavor = "hold-preferred";
    tapping-term-ms = <TAPPING_TERM>;
    quick-tap-ms = <KEY_REPEATING_TERM>;
    bindings = <&kp>, <&tog>;
    };

    //Tap for key press, hold to toggle layer

    ttog: tap_toggle {
    compatible = "zmk,behavior-hold-tap";
    #binding-cells = <2>;
    flavor = "hold-preferred";
    tapping-term-ms = <TAPPING_TERM>;
    quick-tap-ms = <KEY_REPEATING_TERM>;
    bindings = <&tog>, <&kp>;
    };

    // Shifted version of a key on a long press - this has been updated below with os specific shortcuts so that
   
    #define AS(keycode) as LS(keycode) keycode

    as: auto_shift { 
    compatible = "zmk,behavior-hold-tap";
    binding-cells = <2>;
    flavor = "tap-preferred";
    tapping_term_ms = <AUTO_SHIFT_TERM>;
    quick_tap_ms = <KEY_REPEATING_TERM>;
    bindings = <&kp>, <&kp>;
    };

    /////////////////////////////
    // Keypress & Layer Toggle //
    /////////////////////////////

    // Hold-tap behavior to toggle a layer on hold

    #define LAYER_TAP(layer, keycode) layer_tap layer keycode

    lt: layer_tap_behavior {
    compatible = "zmk,behavior-hold-tap";
    #binding-cells = <2>;
    flavor = "tap-preferred";                 // Preferred behavior on tap
    tapping_term_ms = <TAPPING_TERM>;         // Time threshold for deciding tap vs hold
    quick_tap_ms =  <KEY_REPEATING_TERM>;     // Time threshold for quick tap
    bindings = <&kp>, <&mo>;                  // Tap sends key, hold toggles layer
    };

    // Example usage: Toggles a layer on hold and sends 'A' on tap
    // &lt 1 &kp A; // Adjust the layer number and keycode as needed

    //////////////////////
    //   OSX specific   //
    //////////////////////
    
    ////////////////////////////////////////////
    //   Modified OSX Autoshift with Command  //
    ////////////////////////////////////////////
    
    // Define a custom multi-action behavior for tap(only keypress), short hold(shifted keypress), and long hold(LGUI Plus &kp)
   
    mth: multi_tap_hold_behavior {
    compatible = "zmk,behavior-tap-hold";
    #binding-cells = <2>;
    flavor = "tap-preferred";                          // Tap action preferred over hold
    tapping-term-ms = <TAPPING_TERM>;                  // Threshold for deciding tap vs short hold
    quick-tap-ms = <KEY_REPEATING_TERM>;               // Threshold for quick tap
    hold-tapping-term-ms = <500>;                      // Threshold for deciding short vs long hold
    bindings = <&kp>, <LS(&kp)>                        // Tap, short hold behaviors
    };

    //written to be nested within mth action so that tap does &kp, short hold does LS(&kp) and then double press does LGUI(&KP)
    //these actions cannot be combined in a single action, so they have to be nested

    odtmth: osx_double_tap_hold_behavior {
    compatible = "zmk,behavior-multi-tap";       // For handling double-tap detection
    #binding-cells = <2>;
    tapping-term-ms = <TAPPING_TERM>;            // Threshold for multi-tap detection
    quick-tap-ms = <KEY_REPEATING_TERM>;         // Time between taps for double-tap
    taps-required = <2>;                         // Set for double-tap action
    bindings = <&mth>, <&kp LGUI>;               // Double-tap sends LGUI-modified key
    };

    // Example Usage //
    // &odtmth KEYCODE;  // Replace KEYCODE with the specific key you are configuring


    ////////////////////////////////////////////
    // Modified OSX Gdoc headers with Command //
    ////////////////////////////////////////////

    // Define a custom behavior to send Alt + Control + keypress on tap
    // this is for use with google docs on windows

    #define ALT_CTRL_TAP(keycode) &alt_ctrl_tap_behavior keycode

    act: alt_ctrl_tap_behavior {
    compatible = "zmk,behavior-hold-tap";   // Corrected to use hold-tap behavior for modifier combos
    #binding-cells = <1>;
    label = "Alt Ctrl Tap";
    bindings = <&kp LALT &kp LCTRL>, <&kp>; // Corrected bindings format to ensure modifiers are used properly
    };

    // Example usage: Sends Alt + Control + A on tap
    // act(KC_A);

    ////////////////////          ////////////////////          ////////////////////

    //////////////////////
    // OSX Specific End // 
    //////////////////////

    ////////////////////          ////////////////////          ////////////////////
    ////////////////////          ////////////////////          ////////////////////




    ///////////////////////////
    // Window Specific Begin //
    ///////////////////////////


    ////////////////////////////////////////////
    // Modified Window Autoshift with Command //
    ////////////////////////////////////////////

    // written to be nested within mth action so that tap does &kp, short hold does LS(&kp) and then double press does RCTRL(&KP)
    // this action is updated to be specific to window ctrl action
    // these actions cannot be combined in a single action, so they have to be nested
    
    wdtmth: windows_double_tap_hold_behavior {
    compatible = "zmk,behavior-multi-tap";       // For handling double-tap detection
    #binding-cells = <2>;
    tapping-term-ms = <TAPPING_TERM>;            // Threshold for multi-tap detection
    quick-tap-ms = <KEY_REPEATING_TERM>;         // Time between taps for double-tap
    taps-required = <2>;                         // Set for double-tap action
    bindings = <&mth>, <&kp RCTRL>;               // Double-tap sends RCTRL-modified key
    };

    // Example usage: On tap sends 'A', on short hold sends 'Shift + A', on long hold sends 'RCTRL + A'  
    // &wdtmth &kp A;

    ////////////////////          ////////////////////          ////////////////////
    
    //////////////////////////////
    //    Window Specific End   //
    //////////////////;///////////

    /////////////////////////////
    /////////////////////////////
    //      Global Begin       //
    /////////////////////////////
    /////////////////////////////
      
    // Dynamic Macros 

    /////////////////////////////
    //    2 &kp Combo Macro    //
    /////////////////////////////

    // combines two &kp commands into a single stroke, useful, especially for hotkeys
    
    cht: behavior_hold_tap {
    compatible = "zmk,behavior-hold-tap";     // Identifies this as a hold-tap behavior
    #binding-cells = <2>;                     // Specifies that this behavior expects two parameters
    flavor = "tap-preferred";                 // Determines which action is prioritized (tap-preferred vs. hold-preferred)
    tapping-term-ms = <200>;                  // Time threshold to distinguish between tap and hold
    quick-tap-ms = <150>;                     // Optional quick tap threshold for rapid taps
    global-quick-tap = <true>;                // Corrected: Enables quick tap globally; use boolean value
    hold-trigger-key-positions = <0>;         // Defines positions triggering the hold action, adjust as needed
    bindings = <&kp A>, <&kp LCTRL>;          // First parameter for tap, second for hold
    };

    // Example usage: on tap it send two different keystrokes 
    // &cht LALT TAB



    ////////////////////          ////////////////////          ////////////////////

    ///////////////////////////
    //  Shift and Capslock   //
    ///////////////////////////

    // Tap for shift, double tap for caps lock
    sct: shift_caps_behavior {
    compatible = "zmk,behavior-tap-dance";
    #binding-cells = <1>;
    bindings = <&kp LSFT>, <&kp CAPS>;      // Single tap sends Shift, double-tap sends Caps Lock
    tapping-term-ms = <300>;                // Time threshold to register a double-tap
    };

    // Example usage: Assign the double-tap behavior to a specific key
    // example custom behavior on key &shift_caps_tap;

    ////////////////////          ////////////////////          ////////////////////

    ///////////////////////////
    ///////////////////////////
    //       Global End      //
    ///////////////////////////
    ///////////////////////////

macros {
  // Caps lock with a brief paused hold, for MacOS
  caps_lock: caps_lock {
    compatible = "zmk,behavior-macro";
    #binding-cells = <0>;
    tap-ms = <100>;
    wait-ms = <0>;
    bindings
    = <&macro_tap &kp CAPSLOCK>
    ;
  };

  // Function arrow: =>
  func_arrow: function_arrow {
    compatible = "zmk,behavior-macro";
    label = "FUNCTION_ARROW";
    #binding-cells = <0>;
    tap-ms = <0>;
    wait-ms = <0>;
    bindings
    = <&macro_tap &kp EQUAL &kp GREATER_THAN>
  };