#pragma once


#define TAPPING_TERM 200
#define HOLD_ON_OTHER_KEY_PRESS

/* #define MK_3_SPEED */
#define MK_MOMENTARY_ACCEL
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_WHEEL_INTERVAL    40
#define MOUSEKEY_WHEEL_MAX_SPEED   16

#define CUSTOM_STARTUP \
    QD_NOTE(_A6),  \
    QD_NOTE(_C7),  \
    QD_NOTE(_A7),  \
    QD_NOTE(_F7),  \
    QD_NOTE(_G7),  \
    HD_NOTE(_C8),

#ifdef AUDIO_ENABLE
    #define AUDIO_INIT_DELAY
    #define STARTUP_SONG SONG(CUSTOM_STARTUP)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)
// #define AUDIO_ENABLE_TONE_MULTIPLEXING
// #define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10

#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 440.f

#define RGBLIGHT_HUE_STEP 6

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

